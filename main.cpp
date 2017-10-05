//d3d11 w2s finder by n7
#include "variables.h"
#include <vector>
#include <d3d11.h>
#include <D3D11Shader.h>
#include <D3Dcompiler.h>//generateshader
#pragma comment(lib, "D3dcompiler.lib")
#pragma comment(lib, "d3d11.lib")

#pragma comment(lib, "winmm.lib") //timeGetTime
#include "MinHook/include/MinHook.h" //detour x86&x64
#include "FW1FontWrapper/FW1FontWrapper.h" //font

#include "bones.h"

typedef HRESULT(__stdcall *D3D11PresentHook) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef void(__stdcall *D3D11DrawIndexedHook) (ID3D11DeviceContext* pContext, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation);
typedef void(__stdcall *D3D11PSSetShaderResourcesHook) (ID3D11DeviceContext* pContext, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const *ppShaderResourceViews);
typedef void(__stdcall *D3D11CreateQueryHook) (ID3D11Device* pDevice, const D3D11_QUERY_DESC *pQueryDesc, ID3D11Query **ppQuery);

typedef void(__stdcall *D3D11DrawIndexedInstancedHook) (ID3D11DeviceContext* pContext, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation);
typedef void(__stdcall *D3D11DrawHook) (ID3D11DeviceContext* pContext, UINT VertexCount, UINT StartVertexLocation);
typedef void(__stdcall *D3D11DrawInstancedHook) (ID3D11DeviceContext* pContext, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation);
typedef void(__stdcall *D3D11DrawInstancedIndirectHook) (ID3D11DeviceContext* pContext, ID3D11Buffer *pBufferForArgs, UINT AlignedByteOffsetForArgs);
typedef void(__stdcall *D3D11DrawIndexedInstancedIndirectHook) (ID3D11DeviceContext* pContext, ID3D11Buffer *pBufferForArgs, UINT AlignedByteOffsetForArgs);
typedef void(__stdcall *D3D11VSSetConstantBuffersHook) (ID3D11DeviceContext* pContext, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const *ppConstantBuffers);
typedef void(__stdcall *D3D11PSSetSamplersHook) (ID3D11DeviceContext* pContext, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const *ppSamplers);


D3D11PresentHook phookD3D11Present = NULL;
D3D11DrawIndexedHook phookD3D11DrawIndexed = NULL;
D3D11PSSetShaderResourcesHook phookD3D11PSSetShaderResources = NULL;
D3D11CreateQueryHook phookD3D11CreateQuery = NULL;

D3D11DrawIndexedInstancedHook phookD3D11DrawIndexedInstanced = NULL;
D3D11DrawHook phookD3D11Draw = NULL;
D3D11DrawInstancedHook phookD3D11DrawInstanced = NULL;
D3D11DrawInstancedIndirectHook phookD3D11DrawInstancedIndirect = NULL;
D3D11DrawIndexedInstancedIndirectHook phookD3D11DrawIndexedInstancedIndirect = NULL;
D3D11VSSetConstantBuffersHook phookD3D11VSSetConstantBuffers = NULL;
D3D11PSSetSamplersHook phookD3D11PSSetSamplers = NULL;


ID3D11Device *pDevice = NULL;
ID3D11DeviceContext *pContext = NULL;

DWORD_PTR* pSwapChainVtable = NULL;
DWORD_PTR* pContextVTable = NULL;
DWORD_PTR* pDeviceVTable = NULL;

IFW1Factory *pFW1Factory = NULL;
IFW1FontWrapper *pFontWrapper = NULL;


#include "main.h" //helper funcs
#include "util.h"

//==========================================================================================================================

void LeftClick(bool down)
{
    INPUT Input = { 0 };
    ::ZeroMemory(&Input, sizeof(INPUT));
    Input.type = INPUT_MOUSE;

    if (down)
    {
        Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
    }
    else
    {
        Input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
    }

    ::SendInput(1, &Input, sizeof(INPUT));
}

bool AutofireEnabled = true;
float HeadshotMinDistance = 1200.0f;

DWORD WINAPI UpdateThread(LPVOID)
{
    try
    {
        Variables::BaseAddress = (DWORD_PTR)GetModuleHandle(NULL);
        GetModuleInformation(GetCurrentProcess(), (HMODULE)Variables::BaseAddress, &Variables::info, sizeof(Variables::info));
        auto btAddrUWorld = Utils::Pattern::FindPattern((PBYTE)Variables::BaseAddress, Variables::info.SizeOfImage, (PBYTE)"\x48\x8B\x1D\x00\x00\x00\x00\x00\x00\x00\x10\x4C\x8D\x4D\x00\x4C", "xxx???????xxxx?x", 0);
        auto btOffUWorld = *reinterpret_cast<uint32_t*>(btAddrUWorld + 3);
        Variables::m_UWorld = reinterpret_cast<SDK::UWorld**>(btAddrUWorld + 7 + btOffUWorld);

        auto btAddrGObj = Utils::Pattern::FindPattern((PBYTE)Variables::BaseAddress, Variables::info.SizeOfImage, (PBYTE)"\x48\x8D\x0D\x00\x00\x00\x00\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x48\x8B\xD6", "xxx????x????x????x????xxx", 0);
        auto btOffGObj = *reinterpret_cast<uint32_t*>(btAddrGObj + 3);
        SDK::UObject::GObjects = reinterpret_cast<SDK::FUObjectArray*>(btAddrGObj + 7 + btOffGObj);

        auto btAddrGName = Utils::Pattern::FindPattern((PBYTE)Variables::BaseAddress, Variables::info.SizeOfImage, (PBYTE)"\x48\x8B\x05\x00\x00\x00\x00\x48\x85\xC0\x75\x50\xB9\x00\x00\x00\x00\x48\x89\x5C\x24", "xxx????xxxxxx????xxxx", 0);
        auto btOffGName = *reinterpret_cast<uint32_t*>(btAddrGName + 3);
        SDK::FName::GNames = *reinterpret_cast<SDK::TNameEntryArray**>(btAddrGName + 7 + btOffGName);

        Utils::Engine::w2sAddress = (DWORD_PTR)Utils::Pattern::FindPattern((PBYTE)Variables::BaseAddress, Variables::info.SizeOfImage, (PBYTE)"\x48\x89\x5C\x24\x00\x48\x89\x74\x24\x00\x57\x48\x81\xEC\x00\x00\x00\x00\x41\x0F\xB6\xF9", "xxxx?xxxx?xxxx????xxxx", 0);
        Utils::Engine::boneAddress = (DWORD_PTR)Utils::Pattern::FindPattern((PBYTE)Variables::BaseAddress, Variables::info.SizeOfImage, (PBYTE)"\x40\x53\x55\x57\x41\x56\x48\x81\xEC\x00\x00\x00\x00\x45\x33\xF6", "xxxxxxxxx????xxx", 0);

        bool firing = false;
        SDK::AActor* targetPlayer = nullptr;

        while (true)
        {
            if ((*Variables::m_UWorld) != nullptr)
            {
                Variables::m_persistentLevel = (*Variables::m_UWorld)->PersistentLevel;
                Variables::m_owningGameInstance = (*Variables::m_UWorld)->OwningGameInstance;
                Variables::LocalPlayers = Variables::m_owningGameInstance->LocalPlayers;
                Variables::m_LocalPlayer = Variables::LocalPlayers[0];
                Variables::m_Actors = &Variables::m_persistentLevel->AActors;

                SDK::APlayerController* m_PlayerController = Variables::m_LocalPlayer->PlayerController;
                if (m_PlayerController == nullptr || m_PlayerController->AcknowledgedPawn == nullptr)
                {
                    continue;
                }
                auto maxRange = std::numeric_limits<float>::max();

                if (m_PlayerController->AcknowledgedPawn->IsA(SDK::AFortPawn::StaticClass()))
                {
                    SDK::AFortPawn* m_LocalPawn = static_cast<SDK::AFortPawn*>(m_PlayerController->AcknowledgedPawn);
                    auto weapon = m_LocalPawn->CurrentWeapon;
                    if (weapon != nullptr && weapon->IsA(SDK::AFortWeaponRanged::StaticClass()))
                    {
                        auto rangedWeapon = static_cast<SDK::AFortWeaponRanged*>(weapon);
                        maxRange = rangedWeapon->GetRange();
                    }
                }

                if (GetAsyncKeyState(VK_XBUTTON2) & 0x8000)
                {
                    targetPlayer = Utils::GetClosestVisiblePlayer(maxRange);
                }
                else
                {
                    targetPlayer = nullptr;
                }

                if (GetAsyncKeyState(VK_XBUTTON1) & 0x8000)
                {
                    AutofireEnabled = !AutofireEnabled;
                }

                if (targetPlayer != nullptr)
                {
                    SDK::FVector playerLoc;
                    Utils::Engine::GetBoneLocation(static_cast<SDK::ACharacter*>(targetPlayer)->Mesh, &playerLoc, eBone::BONE_CHEST);

                    auto myPos = m_PlayerController->RootComponent->Location;
                    auto dist = Utils::GetDistance(myPos, playerLoc);

                    if (dist <= HeadshotMinDistance)
                    {
                        Utils::Engine::GetBoneLocation(static_cast<SDK::ACharacter*>(targetPlayer)->Mesh, &playerLoc, eBone::BONE_HEAD);
                    }

                    Utils::LookAt(m_PlayerController, playerLoc);

                    SDK::FVector zero{ 0.0f, 0.0f, 0.0f };

                    auto lineOfSight = m_PlayerController->LineOfSightTo(targetPlayer, zero, false);

                    if (AutofireEnabled)
                    {
                        if (!firing && lineOfSight)
                        {
                            firing = true;
                            LeftClick(true);
                        }
                        else if (firing && !lineOfSight)
                        {
                            firing = false;
                            LeftClick(false);
                        }
                    }
                }
                else if (firing)
                {
                    firing = false;
                    LeftClick(false);
                }
            }

            Variables::isInitialized = true;
            Sleep(1);
        }
    }
    catch (...)
    {
        printf("----------------!!!AN ERROR HAS OCCURRED!!!----------------\n");
    }

    return NULL;
}

HRESULT __stdcall hookD3D11Present(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
    if (firstTime)
    {

        //get device
        if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void **)&pDevice)))
        {
            pSwapChain->GetDevice(__uuidof(pDevice), (void**)&pDevice);
            pDevice->GetImmediateContext(&pContext);
        }

        //create depthstencilstate
        D3D11_DEPTH_STENCIL_DESC  stencilDesc;
        stencilDesc.DepthFunc = D3D11_COMPARISON_LESS;
        stencilDesc.StencilEnable = true;
        stencilDesc.StencilReadMask = 0xFF;
        stencilDesc.StencilWriteMask = 0xFF;
        stencilDesc.FrontFace.StencilFailOp = D3D11_STENCIL_OP_KEEP;
        stencilDesc.FrontFace.StencilDepthFailOp = D3D11_STENCIL_OP_INCR;
        stencilDesc.FrontFace.StencilPassOp = D3D11_STENCIL_OP_KEEP;
        stencilDesc.FrontFace.StencilFunc = D3D11_COMPARISON_ALWAYS;
        stencilDesc.BackFace.StencilFailOp = D3D11_STENCIL_OP_KEEP;
        stencilDesc.BackFace.StencilDepthFailOp = D3D11_STENCIL_OP_DECR;
        stencilDesc.BackFace.StencilPassOp = D3D11_STENCIL_OP_KEEP;
        stencilDesc.BackFace.StencilFunc = D3D11_COMPARISON_ALWAYS;

        stencilDesc.DepthEnable = true;
        stencilDesc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ALL;
        pDevice->CreateDepthStencilState(&stencilDesc, &myDepthStencilStates[static_cast<int>(eDepthState::ENABLED)]);

        stencilDesc.DepthEnable = false;
        stencilDesc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ALL;
        pDevice->CreateDepthStencilState(&stencilDesc, &myDepthStencilStates[static_cast<int>(eDepthState::DISABLED)]);

        stencilDesc.DepthEnable = false;
        stencilDesc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ZERO;
        stencilDesc.StencilEnable = false;
        stencilDesc.StencilReadMask = UINT8(0xFF);
        stencilDesc.StencilWriteMask = 0x0;
        pDevice->CreateDepthStencilState(&stencilDesc, &myDepthStencilStates[static_cast<int>(eDepthState::NO_READ_NO_WRITE)]);

        stencilDesc.DepthEnable = true;
        stencilDesc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ALL; //
        stencilDesc.DepthFunc = D3D11_COMPARISON_GREATER_EQUAL;
        stencilDesc.StencilEnable = false;
        stencilDesc.StencilReadMask = UINT8(0xFF);
        stencilDesc.StencilWriteMask = 0x0;

        stencilDesc.FrontFace.StencilFailOp = D3D11_STENCIL_OP_ZERO;
        stencilDesc.FrontFace.StencilDepthFailOp = D3D11_STENCIL_OP_ZERO;
        stencilDesc.FrontFace.StencilPassOp = D3D11_STENCIL_OP_KEEP;
        stencilDesc.FrontFace.StencilFunc = D3D11_COMPARISON_EQUAL;

        stencilDesc.BackFace.StencilFailOp = D3D11_STENCIL_OP_ZERO;
        stencilDesc.BackFace.StencilDepthFailOp = D3D11_STENCIL_OP_ZERO;
        stencilDesc.BackFace.StencilPassOp = D3D11_STENCIL_OP_ZERO;
        stencilDesc.BackFace.StencilFunc = D3D11_COMPARISON_NEVER;
        pDevice->CreateDepthStencilState(&stencilDesc, &myDepthStencilStates[static_cast<int>(eDepthState::READ_NO_WRITE)]);

        //wireframe
        D3D11_RASTERIZER_DESC rwDesc;
        pContext->RSGetState(&rwState); // retrieve the current state
        rwState->GetDesc(&rwDesc);    // get the desc of the state
        rwDesc.FillMode = D3D11_FILL_WIREFRAME;
        rwDesc.CullMode = D3D11_CULL_NONE;
        // create a whole new rasterizer state
        pDevice->CreateRasterizerState(&rwDesc, &rwState);

        //solid
        D3D11_RASTERIZER_DESC rsDesc;
        pContext->RSGetState(&rsState); // retrieve the current state
        rsState->GetDesc(&rsDesc);    // get the desc of the state
        rsDesc.FillMode = D3D11_FILL_SOLID;
        rsDesc.CullMode = D3D11_CULL_BACK;
        // create a whole new rasterizer state
        pDevice->CreateRasterizerState(&rsDesc, &rsState);

        //create font
        HRESULT hResult = FW1CreateFactory(FW1_VERSION, &pFW1Factory);
        hResult = pFW1Factory->CreateFontWrapper(pDevice, L"Tahoma", &pFontWrapper);
        pFW1Factory->Release();

        //use the back buffer address to create the render target
        if (SUCCEEDED(pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&RenderTargetTexture)))
        {
            //warning: this will crash on res change, nothing seems to fix it (no crash when switching window/fullscreen)
            pDevice->CreateRenderTargetView(RenderTargetTexture, NULL, &RenderTargetView);
            RenderTargetTexture->Release();
        }

        firstTime = false;
    }

    //viewport
    pContext->RSGetViewports(&vps, &viewport);
    ScreenCenterX = viewport.Width / 2.0f;
    ScreenCenterY = viewport.Height / 2.0f;

    //shaders
    if (!psRed)
        GenerateShader(pDevice, &psRed, 0.85f, 0.0f, 0.0f);

    if (!psGreen)
        GenerateShader(pDevice, &psGreen, 0.0f, 0.85f, 0.0f);

    //call before you draw
    pContext->OMSetRenderTargets(1, &RenderTargetView, NULL);

    //draw
    if (pFontWrapper)
    {
        auto msg = AutofireEnabled ? L"AUTOFIRE IS ON" : L"AUTOFIRE IS OFF";
        pFontWrapper->DrawString(pContext, msg, 14, 16.0f, 16.0f, 0xff0000ff, FW1_RESTORESTATE);
    }

    return phookD3D11Present(pSwapChain, SyncInterval, Flags);
}

//==========================================================================================================================

void __stdcall hookD3D11DrawIndexed(ID3D11DeviceContext* pContext, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation)
{
    //if (GetAsyncKeyState(VK_F9) & 1)
    //Log("DrawIndexed called");

    //get stride & vdesc.ByteWidth
    pContext->IAGetVertexBuffers(0, 1, &veBuffer, &Stride, &veBufferOffset);
    if (veBuffer)
        veBuffer->GetDesc(&vedesc);
    if (veBuffer != NULL)
    {
        veBuffer->Release(); veBuffer = NULL;
    }

    //get indesc.ByteWidth
    pContext->IAGetIndexBuffer(&inBuffer, &inFormat, &inOffset);
    if (inBuffer)
        inBuffer->GetDesc(&indesc);
    if (inBuffer != NULL)
    {
        inBuffer->Release(); inBuffer = NULL;
    }

    //get pscdesc.ByteWidth
    pContext->PSGetConstantBuffers(pscStartSlot, 1, &pcsBuffer);
    if (pcsBuffer)
        pcsBuffer->GetDesc(&pscdesc);
    if (pcsBuffer != NULL)
    {
        pcsBuffer->Release(); pcsBuffer = NULL;
    }

    //wallhack/chams
    //if (sOptions[0].Function||sOptions[1].Function) //if wallhack/chams option is selected in menu
    if (Stride == 24 || Stride == countnum)
        //if (Stride == ? && indesc.ByteWidth ? && indesc.ByteWidth ? && Descr.Format .. ) //later here you do better model rec, values are different in every game
    {
        SetDepthStencilState(DISABLED);
        pContext->PSSetShader(psRed, NULL, NULL);
        phookD3D11DrawIndexed(pContext, IndexCount, StartIndexLocation, BaseVertexLocation);
        pContext->PSSetShader(psGreen, NULL, NULL);
        SetDepthStencilState(READ_NO_WRITE);
    }

    if (GetAsyncKeyState(VK_OEM_4) & 1) //-
        countnum--;
    if (GetAsyncKeyState(VK_OEM_6) & 1) //+
        countnum++;

    return phookD3D11DrawIndexed(pContext, IndexCount, StartIndexLocation, BaseVertexLocation);
}

//==========================================================================================================================

void __stdcall hookD3D11PSSetShaderResources(ID3D11DeviceContext* pContext, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const *ppShaderResourceViews)
{
    pssrStartSlot = StartSlot;

    for (UINT j = 0; j < NumViews; j++)
    {
        //resources loop
        ID3D11ShaderResourceView* pShaderResView = ppShaderResourceViews[j];
        if (pShaderResView)
        {
            pShaderResView->GetDesc(&Descr);

            ID3D11Resource *Resource;
            pShaderResView->GetResource(&Resource);
            ID3D11Texture2D *Texture = (ID3D11Texture2D *)Resource;
            Texture->GetDesc(&texdesc);
        }
    }

    /*
    //alternative wallhack example for f'up games, only use this if no draw function works for wallhack
    if (pssrStartSlot == 1) //if black screen, find correct pssrStartSlot
    SetDepthStencilState(READ_NO_WRITE);
    if (pscdesc.ByteWidth == 224 && Descr.Format == 71) //models in Tom Clancys Rainbow Six Siege old version
    {
    SetDepthStencilState(DISABLED);
    //pContext->PSSetShader(psRed, NULL, NULL);
    }
    else if (pssrStartSlot == 1) //if black screen, find correct pssrStartSlot
    SetDepthStencilState(READ_NO_WRITE);
    */

    return phookD3D11PSSetShaderResources(pContext, StartSlot, NumViews, ppShaderResourceViews);
}

//==========================================================================================================================

void __stdcall hookD3D11CreateQuery(ID3D11Device* pDevice, const D3D11_QUERY_DESC *pQueryDesc, ID3D11Query **ppQuery)
{
    /*
    //this is required in some games for better wallhack
    //disables Occlusion which prevents rendering player models through certain objects (used by wallhack to see models through walls at all distances, REDUCES FPS)
    if (pQueryDesc->Query == D3D11_QUERY_OCCLUSION)
    {
    D3D11_QUERY_DESC oqueryDesc = CD3D11_QUERY_DESC();
    (&oqueryDesc)->MiscFlags = pQueryDesc->MiscFlags;
    (&oqueryDesc)->Query = D3D11_QUERY_TIMESTAMP;

    return phookD3D11CreateQuery(pDevice, &oqueryDesc, ppQuery);
    }
    */
    return phookD3D11CreateQuery(pDevice, pQueryDesc, ppQuery);
}

//==========================================================================================================================

void __stdcall hookD3D11DrawIndexedInstanced(ID3D11DeviceContext* pContext, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation)
{
    if (GetAsyncKeyState(VK_F9) & 1)
        Log("DrawIndexedInstanced called");

    return phookD3D11DrawIndexedInstanced(pContext, IndexCountPerInstance, InstanceCount, StartIndexLocation, BaseVertexLocation, StartInstanceLocation);
}

//==========================================================================================================================

void __stdcall hookD3D11Draw(ID3D11DeviceContext* pContext, UINT VertexCount, UINT StartVertexLocation)
{
    if (GetAsyncKeyState(VK_F9) & 1)
        Log("Draw called");

    return phookD3D11Draw(pContext, VertexCount, StartVertexLocation);
}

//==========================================================================================================================

void __stdcall hookD3D11DrawInstanced(ID3D11DeviceContext* pContext, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation)
{
    if (GetAsyncKeyState(VK_F9) & 1)
        Log("DrawInstanced called");

    return phookD3D11DrawInstanced(pContext, VertexCountPerInstance, InstanceCount, StartVertexLocation, StartInstanceLocation);
}

//==========================================================================================================================

void __stdcall hookD3D11DrawInstancedIndirect(ID3D11DeviceContext* pContext, ID3D11Buffer *pBufferForArgs, UINT AlignedByteOffsetForArgs)
{
    if (GetAsyncKeyState(VK_F9) & 1)
        Log("DrawInstancedIndirect called");

    return phookD3D11DrawInstancedIndirect(pContext, pBufferForArgs, AlignedByteOffsetForArgs);
}

//==========================================================================================================================

void __stdcall hookD3D11DrawIndexedInstancedIndirect(ID3D11DeviceContext* pContext, ID3D11Buffer *pBufferForArgs, UINT AlignedByteOffsetForArgs)
{
    if (GetAsyncKeyState(VK_F9) & 1)
        Log("DrawIndexedInstancedIndirect called");

    return phookD3D11DrawIndexedInstancedIndirect(pContext, pBufferForArgs, AlignedByteOffsetForArgs);
}

//==========================================================================================================================

void __stdcall hookD3D11VSSetConstantBuffers(ID3D11DeviceContext* pContext, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const *ppConstantBuffers)
{
    if (ppConstantBuffers != NULL)
        vsStartSlot = StartSlot;

    return phookD3D11VSSetConstantBuffers(pContext, StartSlot, NumBuffers, ppConstantBuffers);
}

//==========================================================================================================================

void __stdcall hookD3D11PSSetSamplers(ID3D11DeviceContext* pContext, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const *ppSamplers)
{
    if (ppSamplers != NULL)
        psStartSlot = StartSlot;

    return phookD3D11PSSetSamplers(pContext, StartSlot, NumSamplers, ppSamplers);
}

//=========================================================================================================================

const int MultisampleCount = 1; // Set to 1 to disable multisampling
LRESULT CALLBACK DXGIMsgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}
DWORD __stdcall InitializeHook(LPVOID)
{

    HMODULE hDXGIDLL = 0;
    do
    {
        hDXGIDLL = GetModuleHandle("dxgi.dll");
        Sleep(100);
    } while (!hDXGIDLL);
    Sleep(100);

    CreateThread(NULL, 0, UpdateThread, NULL, 0, NULL);

    IDXGISwapChain* pSwapChain;

    WNDCLASSEXA wc = { sizeof(WNDCLASSEX), CS_CLASSDC, DXGIMsgProc, 0L, 0L, GetModuleHandleA(NULL), NULL, NULL, NULL, NULL, "DX", NULL };
    RegisterClassExA(&wc);
    HWND hWnd = CreateWindowA("DX", NULL, WS_OVERLAPPEDWINDOW, 100, 100, 300, 300, NULL, NULL, wc.hInstance, NULL);

    D3D_FEATURE_LEVEL requestedLevels[] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_1 };
    D3D_FEATURE_LEVEL obtainedLevel;
    ID3D11Device* d3dDevice = nullptr;
    ID3D11DeviceContext* d3dContext = nullptr;

    DXGI_SWAP_CHAIN_DESC scd;
    ZeroMemory(&scd, sizeof(scd));
    scd.BufferCount = 1;
    scd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    scd.BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;
    scd.BufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
    scd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

    scd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    scd.OutputWindow = hWnd;
    scd.SampleDesc.Count = MultisampleCount;
    scd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
    scd.Windowed = ((GetWindowLongPtr(hWnd, GWL_STYLE) & WS_POPUP) != 0) ? false : true;

    // LibOVR 0.4.3 requires that the width and height for the backbuffer is set even if
    // you use windowed mode, despite being optional according to the D3D11 documentation.
    scd.BufferDesc.Width = 1;
    scd.BufferDesc.Height = 1;
    scd.BufferDesc.RefreshRate.Numerator = 0;
    scd.BufferDesc.RefreshRate.Denominator = 1;

    UINT createFlags = 0;
#ifdef _DEBUG
    // This flag gives you some quite wonderful debug text. Not wonderful for performance, though!
    createFlags |= D3D11_CREATE_DEVICE_DEBUG;
#endif

    IDXGISwapChain* d3dSwapChain = 0;

    if (FAILED(D3D11CreateDeviceAndSwapChain(
        nullptr,
        D3D_DRIVER_TYPE_HARDWARE,
        nullptr,
        createFlags,
        requestedLevels,
        sizeof(requestedLevels) / sizeof(D3D_FEATURE_LEVEL),
        D3D11_SDK_VERSION,
        &scd,
        &pSwapChain,
        &pDevice,
        &obtainedLevel,
        &pContext)))
    {
        MessageBox(hWnd, "Failed to create directX device and swapchain!", "Error", MB_ICONERROR);
        return NULL;
    }


    pSwapChainVtable = (DWORD_PTR*)pSwapChain;
    pSwapChainVtable = (DWORD_PTR*)pSwapChainVtable[0];

    pContextVTable = (DWORD_PTR*)pContext;
    pContextVTable = (DWORD_PTR*)pContextVTable[0];

    pDeviceVTable = (DWORD_PTR*)pDevice;
    pDeviceVTable = (DWORD_PTR*)pDeviceVTable[0];

    if (MH_Initialize() != MH_OK)
    {
        return 1;
    }
    if (MH_CreateHook((DWORD_PTR*)pSwapChainVtable[8], hookD3D11Present, reinterpret_cast<void**>(&phookD3D11Present)) != MH_OK)
    {
        return 1;
    }
    if (MH_EnableHook((DWORD_PTR*)pSwapChainVtable[8]) != MH_OK)
    {
        return 1;
    }
    if (MH_CreateHook((DWORD_PTR*)pContextVTable[12], hookD3D11DrawIndexed, reinterpret_cast<void**>(&phookD3D11DrawIndexed)) != MH_OK)
    {
        return 1;
    }
    if (MH_EnableHook((DWORD_PTR*)pContextVTable[12]) != MH_OK)
    {
        return 1;
    }

    DWORD dwOld;
    VirtualProtect(phookD3D11Present, 2, PAGE_EXECUTE_READWRITE, &dwOld);

    while (true)
    {
        Sleep(10);
    }

    pDevice->Release();
    pContext->Release();
    pSwapChain->Release();

    return NULL;
}

//==========================================================================================================================

BOOL __stdcall DllMain(HINSTANCE hModule, DWORD dwReason, LPVOID lpReserved)
{
    switch (dwReason)
    {
    case DLL_PROCESS_ATTACH: // A process is loading the DLL.
        DisableThreadLibraryCalls(hModule);
        GetModuleFileName(hModule, dlldir, 512);
        for (size_t i = strlen(dlldir); i > 0; i--)
        {
            if (dlldir[i] == '\\')
            {
                dlldir[i + 1] = 0; break;
            }
        }
        CreateThread(NULL, 0, InitializeHook, NULL, 0, NULL);
        break;

    case DLL_PROCESS_DETACH: // A process unloads the DLL.
        if (MH_Uninitialize() != MH_OK)
        {
            return 1;
        }
        if (MH_DisableHook((DWORD_PTR*)pSwapChainVtable[8]) != MH_OK)
        {
            return 1;
        }
        if (MH_DisableHook((DWORD_PTR*)pContextVTable[12]) != MH_OK)
        {
            return 1;
        }
        if (MH_DisableHook((DWORD_PTR*)pContextVTable[13]) != MH_OK)
        {
            return 1;
        }
        if (MH_DisableHook((DWORD_PTR*)pContextVTable[8]) != MH_OK)
        {
            return 1;
        }
        if (MH_DisableHook((DWORD_PTR*)pContextVTable[7]) != MH_OK)
        {
            return 1;
        }
        if (MH_DisableHook((DWORD_PTR*)pContextVTable[10]) != MH_OK)
        {
            return 1;
        }
        break;
    }
    return TRUE;
}
