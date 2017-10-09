//d3d11 w2s finder by n7
#include <vector>
#include <sstream>
#include <chrono>
#include <memory>
#include <string>
#include <iomanip>

#include <d3d11.h>
#include <D3D11Shader.h>
#include <D3Dcompiler.h>//generateshader
#pragma comment(lib, "D3dcompiler.lib")
#pragma comment(lib, "d3d11.lib")

#pragma comment(lib, "winmm.lib") //timeGetTime
#include "MinHook/include/MinHook.h" //detour x86&x64

#include "global.h"
#include "bones.h"
#include "hooks.h"
#include "renderer.h"

#include "main.h" //helper funcs
#include "util.h"
#include <map>

//==========================================================================================================================
//-------------------------------------------------Variables---------------------------------------------------------------
bool EnableAimbot = true;
bool EnableDevMode = false;
Mode ModeEnemyESP = Simple;
Mode ModeItemESP = Advanced;
bool EnableBoxes = true;
bool EnableChams = true;
bool ShowMenue = false;
float HeadshotMinDistance = 3000.0f;
float fieldOfView = 3.0f;
float MaxAimbotDistance = 10000.0f;
//----------------------------------------------Hotkeys------------------------------------------------------------------------
#define MENU_TOGGLE_KEY VK_INSERT
#define CHAMS_KEY VK_F7
#define PLAYER_ESP_KEY VK_F9
#define ITEM_ESP_KEY VK_F8
#define DEVMODE_KEY VK_NUMPAD5
//---------------------------------------------------------Colors-----------------------------------------------------------
//ENEMY ESP
#define ENEMY_TEXT_COLOR Color{ 0.9f, 0.9f, 0.15f, 0.95f }
#define ENEMY_AMMO_COLOR Color{0.95f, 0.0f, 0.0f, 0.95f}
#define ENEMY_RANGE_COLOR Color{ 0.0f, 0.0f, 1.0f, 1.0f }
#define ENEMY_DEFAULT_COLOR Color{0.4f, 0.4f, 0.4f, 1.0f}
#define ENEMY_HEALTH_COLOR Color{1.0f, 0.0f, 0.0f, 1.0f}
#define ENEMY_SHIELD_COLOR Color{ 0.2f, 0.7f, 0.975f, 1.0f }
//ITEM ESP
#define ITEM_COLOR_TIER_WHITE Color{ 0.8f, 0.8f, 0.8f, 0.95f }
#define ITEM_COLOR_TIER_GREEN Color{ 0.0f, 0.95f, 0.0f, 0.95f }
#define ITEM_COLOR_TIER_BLUE Color{ 0.2f, 0.4f, 1.0f, 0.95f }
#define ITEM_COLOR_TIER_PURPLE Color{ 0.7f, 0.25f, 0.85f, 0.95f }
#define ITEM_COLOR_TIER_ORANGE Color{ 0.85f, 0.65f, 0.0f, 0.95f }
#define ITEM_COLOR_TIER_GOLD Color{ 0.95f, 0.85f, 0.45f, 0.95f }
#define ITEM_COLOR_TIER_UNKNOWN Color{ 1.0f, 0.0f, 1.0f, 0.95f }
#define ITEM_COLOR_MEDS Color{ 0.9f, 0.55f, 0.55f, 0.95f }
#define ITEM_COLOR_SHIELDPOTION Color{ 0.35f, 0.55f, 0.85f, 0.95f }
#define ITEM_COLOR_CHEST Color{0.95f, 0.95f, 0.0f, 0.95f}
#define ITEM_COLOR_SUPPLYDROP Color{ 0.9f, 0.1f, 0.1f, 0.9f }
//--------------------------------------------------------FontSettings------------------------------------------------------
#define FONT_SIZE 11.0f
#define FONT_OFFSET 16.0f
#define FONT_TYPE L"Verdana"
//--------------------------------------------------Menu--------------------------------------------------------------------
#define MENU_OPTIONS_COUNT 7
#define MENU_NORMAL_COLOR Color{0.7f, 0.7f, 0.7f, 0.95f}
#define MENU_HIGHLIGHT_COLOR Color{1.0f, 1.0f, 1.0f, 0.95f}
#define MENU_FONT_SIZE 18.0f
Option CurrentMenuOption = Chams;
AimButton aimButton = Mouse5;
Vec2 MenuPosition(500, 400);
float MenuOffset = 20.0f;



//==========================================================================================================================

float LastAimDistance = 0.0f;

bool firing = false;
SDK::AActor* targetPlayer = nullptr;

std::chrono::high_resolution_clock timer;
auto delay = timer.now();
auto nextShotDeadline = timer.now();


void Aimbot()
{

	SDK::APlayerController* playerController = Global::m_LocalPlayer->PlayerController;
	if (playerController == nullptr || playerController->AcknowledgedPawn == nullptr)
	{
		return;
	}


	if (GetAsyncKeyState(GetAimButton(aimButton)) & 0x8000)
	{
		if (targetPlayer == nullptr)
		{
			targetPlayer = Util::GetClosestVisiblePlayer(MaxAimbotDistance, true);
			//if (!Util::IsInFOV(Global::m_LocalPlayer->PlayerController, targetPlayer->RootComponent->Location,
			//                        fieldOfView * 1920 / 90))
				//targetPlayer = nullptr;
			nextShotDeadline = timer.now() + std::chrono::milliseconds(125);
		}
	}
	else
	{
		targetPlayer = nullptr;
	}

	

	if (targetPlayer != nullptr)
	{
		auto pawn = static_cast<SDK::AFortPawn*>(targetPlayer);

		SDK::FVector playerLoc;
		Util::Engine::GetBoneLocation(static_cast<SDK::ACharacter*>(targetPlayer)->Mesh, &playerLoc, eBone::BONE_CHEST);

		auto dist = Util::GetDistance(playerController->AcknowledgedPawn->RootComponent->Location, playerLoc);
		LastAimDistance = dist;

		if (dist <= HeadshotMinDistance)
		{
			Util::Engine::GetBoneLocation(static_cast<SDK::ACharacter*>(targetPlayer)->Mesh, &playerLoc, eBone::BONE_HEAD);
		}

		Util::LookAt(playerController, playerLoc);

		SDK::FVector zero{0.0f, 0.0f, 0.0f};
		auto lineOfSight = playerController->LineOfSightTo(targetPlayer, zero, false);
	
	}
}

DWORD WINAPI UpdateThread(LPVOID)
{
	try
	{
		Global::BaseAddress = (DWORD_PTR)GetModuleHandle(nullptr);
		GetModuleInformation(GetCurrentProcess(), (HMODULE)Global::BaseAddress, &Global::info, sizeof(Global::info));
		auto btAddrUWorld = Util::FindPattern((PBYTE)Global::BaseAddress, Global::info.SizeOfImage,
		                                      (PBYTE)"\x48\x8B\x1D\x00\x00\x00\x00\x00\x00\x00\x10\x4C\x8D\x4D\x00\x4C",
		                                      "xxx???????xxxx?x", 0);
		auto btOffUWorld = *reinterpret_cast<uint32_t*>(btAddrUWorld + 3);
		Global::m_UWorld = reinterpret_cast<SDK::UWorld**>(btAddrUWorld + 7 + btOffUWorld);

		auto btAddrGObj = Util::FindPattern((PBYTE)Global::BaseAddress, Global::info.SizeOfImage,
		                                    (PBYTE)
		                                    "\x48\x8D\x0D\x00\x00\x00\x00\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x48\x8B\xD6",
		                                    "xxx????x????x????x????xxx", 0);
		auto btOffGObj = *reinterpret_cast<uint32_t*>(btAddrGObj + 3);
		SDK::UObject::GObjects = reinterpret_cast<SDK::FUObjectArray*>(btAddrGObj + 7 + btOffGObj);

		auto btAddrGName = Util::FindPattern((PBYTE)Global::BaseAddress, Global::info.SizeOfImage,
		                                     (PBYTE)
		                                     "\x48\x8B\x05\x00\x00\x00\x00\x48\x85\xC0\x75\x50\xB9\x00\x00\x00\x00\x48\x89\x5C\x24",
		                                     "xxx????xxxxxx????xxxx", 0);
		auto btOffGName = *reinterpret_cast<uint32_t*>(btAddrGName + 3);
		SDK::FName::GNames = *reinterpret_cast<SDK::TNameEntryArray**>(btAddrGName + 7 + btOffGName);

		Util::Engine::w2sAddress = (DWORD_PTR)Util::FindPattern((PBYTE)Global::BaseAddress, Global::info.SizeOfImage,
		                                                        (PBYTE)
		                                                        "\x48\x89\x5C\x24\x00\x48\x89\x74\x24\x00\x57\x48\x81\xEC\x00\x00\x00\x00\x41\x0F\xB6\xF9",
		                                                        "xxxx?xxxx?xxxx????xxxx", 0);
		Util::Engine::boneAddress = (DWORD_PTR)Util::FindPattern((PBYTE)Global::BaseAddress, Global::info.SizeOfImage,
		                                                         (PBYTE)
		                                                         "\x40\x53\x55\x57\x41\x56\x48\x81\xEC\x00\x00\x00\x00\x45\x33\xF6",
		                                                         "xxxxxxxxx????xxx", 0);

		// nospread
		auto btAddrGetWeaponStatsRow = (DWORD_PTR)Util::FindPattern((PBYTE)Global::BaseAddress, Global::info.SizeOfImage,
		                                                            (PBYTE)
		                                                            "\x48\x83\xEC\x58\x48\x8B\x01\x48\x85\xC0\x0F\x85\x00\x00\x00\x00\x48\x83\xC1\x08\x48\x89\x44\x24\x00",
		                                                            "xxxxxxxxxxxx????xxxxxxxx?", 0);
		pGetWeaponStatsRow = (_GetWeaponStatsRow)(/*Global::BaseAddress + 0x2709B0*/ btAddrGetWeaponStatsRow);

		while (true)
		{

			InitializeGlobals();
			HandelInput();
			if (ShowMenue)
				UpdateMenu();
			if(EnableAimbot)
				Aimbot();

			Sleep(1);
		}
	}
	catch (...)
	{
	}

	return NULL;
}

std::unique_ptr<Renderer> renderer;

void DrawESP()
{
	if (Global::m_persistentLevel != nullptr && Global::m_LocalPlayer != nullptr &&(ModeEnemyESP != Off || ModeItemESP != Off))
	{
		auto actors = Global::m_persistentLevel->AActors;
		for (int i = 0; i < actors.Num(); i++)
		{
			auto actor = Global::m_persistentLevel->AActors[i];
			if (actor == nullptr || actor->RootComponent == nullptr)
			{
				continue;
			}
			//Enemys
			if (actor->IsA(SDK::AFortPawn::StaticClass()) && ModeEnemyESP != Off)
			{
				auto pawn = static_cast<SDK::AFortPawn*>(actor);
				if (pawn->GetName().find("PlayerPawn_Athena_C") == std::string::npos)
				{
					continue;
				}

				if (Util::IsTeammate(actor) || Util::IsLocalPlayer(actor))
				{
					continue;
				}

				if (pawn->PlayerState == nullptr || !pawn->PlayerState->IsA(SDK::AFortPlayerStateAthena::StaticClass()))
				{
					continue;
				}

				auto state = static_cast<SDK::AFortPlayerStateAthena*>(pawn->PlayerState);
				if (!state->PlayerName.IsValid() || pawn->RootComponent == nullptr)
				{
					continue;
				}

				SDK::FVector playerLoc;
				Util::Engine::GetBoneLocation(pawn->Mesh, &playerLoc, 66);

				SDK::FVector2D screenPos;
				if (!Util::Engine::WorldToScreen(Global::m_LocalPlayer->PlayerController, playerLoc, &screenPos))
				{
					continue;
				}
				//EnemyESP Variables
				wstring total;
				wstring extend = L"|";
				float extendSize = renderer->getTextExtent(extend, FONT_SIZE, FONT_TYPE).x;
				Vec2 totalSize;
				int health = 0;
				int shield = 0;
				float distance = 0.0f;
				float x_offset = 0.0f;

				wstring playerName = state->PlayerName.c_str();
				wstring weaponName;
				wstring weaponAmmo;
				float extended_x_offset = 0.0f;
				Color weaponColor;

				auto curWeapon = pawn->CurrentWeapon;
				if (curWeapon == nullptr || curWeapon->WeaponData == nullptr)
				{
					goto draw_exit;
				}
				auto itemDef = static_cast<SDK::UFortWorldItemDefinition*>(curWeapon->WeaponData);

				// Get Weapon: Name, Tier, Ammo
				if (itemDef->ItemType == SDK::EFortItemType::WeaponRanged
					|| itemDef->ItemType == SDK::EFortItemType::WeaponMelee
					|| itemDef->ItemType == SDK::EFortItemType::WeaponHarvest)
				{

					weaponName = itemDef->DisplayName.Get();
					weaponAmmo = std::to_wstring(curWeapon->AmmoCount);
					weaponColor = GetItemColor(itemDef->Tier.GetValue());
				}

				switch (ModeEnemyESP)
				{
				case Advanced:

					// Draw Player Name
					renderer->drawText(
						Vec2(screenPos.X - totalSize.x / 2 + extended_x_offset, screenPos.Y - FONT_OFFSET - FONT_SIZE - 1), playerName,
						ENEMY_TEXT_COLOR, 0, FONT_SIZE, FONT_TYPE);
					auto size = renderer->getTextExtent(playerName, FONT_SIZE, FONT_TYPE);
					extended_x_offset += size.x;
					renderer->drawText(
						Vec2(screenPos.X - totalSize.x / 2 + extended_x_offset, screenPos.Y - FONT_OFFSET - FONT_SIZE - 1), extend,
						ENEMY_DEFAULT_COLOR, 0, FONT_SIZE, FONT_TYPE);
					extended_x_offset += extendSize;

					// Get Weapon: Name, Tier, Ammo
					if (itemDef->ItemType == SDK::EFortItemType::WeaponRanged
						|| itemDef->ItemType == SDK::EFortItemType::WeaponMelee
						|| itemDef->ItemType == SDK::EFortItemType::WeaponHarvest)
					{
						// Draw Weapon Name
						renderer->drawText(
							Vec2(screenPos.X - totalSize.x / 2 + extended_x_offset, screenPos.Y - FONT_OFFSET - FONT_SIZE - 1), weaponName,
							weaponColor, 0, FONT_SIZE, FONT_TYPE);
						auto size = renderer->getTextExtent(weaponName, FONT_SIZE, FONT_TYPE);
						extended_x_offset += size.x;
						renderer->drawText(
							Vec2(screenPos.X - totalSize.x / 2 + extended_x_offset, screenPos.Y - FONT_OFFSET - FONT_SIZE - 1), extend,
							ENEMY_DEFAULT_COLOR, 0, FONT_SIZE, FONT_TYPE);
						extended_x_offset += extendSize;

						// Draw Weapon Ammo
						renderer->drawText(
							Vec2(screenPos.X - totalSize.x / 2 + extended_x_offset, screenPos.Y - FONT_OFFSET - FONT_SIZE - 1), weaponAmmo,
							weaponColor, 0, FONT_SIZE, FONT_TYPE);
					}

					// Draw Label
				draw_exit:

				case Simple:

					// Get Health
					if (state->CurrentHealth >= 1.0f)
					{
						health = static_cast<int>(state->CurrentHealth);
						total += std::to_wstring(health) + extend;
					}
					// Get Shield
					if (state->CurrentShield >= 1.0f)
					{
						shield = static_cast<int>(state->CurrentShield);
						total += std::to_wstring(shield) + extend;
					}
					// Get Distance
					distance = Util::GetDistance(Global::m_LocalPlayer->PlayerController->AcknowledgedPawn->RootComponent->Location,
						playerLoc);
					wstring distanceText = Util::DistanceToString(distance);
					total += distanceText;
					totalSize = renderer->getTextExtent(total, FONT_SIZE, FONT_TYPE);

					// Draw Health
					if (health > 0)
					{
						renderer->drawText(Vec2(screenPos.X - totalSize.x / 2 + x_offset, screenPos.Y - FONT_OFFSET),
							std::to_wstring(health), ENEMY_HEALTH_COLOR, 0, FONT_SIZE, FONT_TYPE);
						auto size = renderer->getTextExtent(std::to_wstring(health), FONT_SIZE, FONT_TYPE);
						x_offset += size.x;
						renderer->drawText(Vec2(screenPos.X - totalSize.x / 2 + x_offset, screenPos.Y - FONT_OFFSET), extend,
							ENEMY_DEFAULT_COLOR, 0, FONT_SIZE, FONT_TYPE);
						x_offset += extendSize;
					}
					// Draw Shield
					if (shield > 0)
					{
						renderer->drawText(Vec2(screenPos.X - totalSize.x / 2 + x_offset, screenPos.Y - FONT_OFFSET),
							std::to_wstring(shield), ENEMY_SHIELD_COLOR, 0, FONT_SIZE, FONT_TYPE);
						auto size = renderer->getTextExtent(std::to_wstring(shield), FONT_SIZE, FONT_TYPE);
						x_offset += size.x;
						renderer->drawText(Vec2(screenPos.X - totalSize.x / 2 + x_offset, screenPos.Y - FONT_OFFSET), extend,
							ENEMY_DEFAULT_COLOR, 0, FONT_SIZE, FONT_TYPE);
						x_offset += extendSize;
					}
					// Draw Distacne
					renderer->drawText(Vec2(screenPos.X - totalSize.x / 2 + x_offset, screenPos.Y - FONT_OFFSET), distanceText,
						ENEMY_RANGE_COLOR, 0, FONT_SIZE, FONT_TYPE);
				}

				if (EnableBoxes)
					DrawPlayerBox(pawn);

			}
			//Pickups
			else if (actor->IsA(SDK::AB_Pickups_C::StaticClass()) && ModeItemESP != Off)
			{
				SDK::FVector2D screenPos;
				if (Util::Engine::WorldToScreen(Global::m_LocalPlayer->PlayerController, actor->RootComponent->Location,
					&screenPos))
				{
					SDK::FVector2D screenPos;
					if (!Util::Engine::WorldToScreen(Global::m_LocalPlayer->PlayerController, actor->RootComponent->Location,
						&screenPos))
					{
						continue;
					}

					auto pickup = static_cast<SDK::AB_Pickups_C*>(actor);
					if (!pickup->ItemDefinition)
					{
						continue;
					}

					auto itemDef = pickup->ItemDefinition;
					if (itemDef->ItemType == SDK::EFortItemType::Ammo)
					{
						continue;
					}

					if (!itemDef->DisplayName.Get())
					{
						continue;
					}
					auto tier = itemDef->Tier.GetValue();
					Color color = GetItemColor(tier);
					bool important = (tier == SDK::EFortItemTier::IV || tier == SDK::EFortItemTier::V);
						

					std::wstring name = itemDef->DisplayName.Get();
					if (name == L"Bandage" || name == L"Med Kit")
					{
						color = ITEM_COLOR_MEDS;
						important = true;
					}
					else if (name == L"Shield Potion")
					{
						color = ITEM_COLOR_SHIELDPOTION;
						important = true;
					}

					if (pickup->RootComponent == nullptr)
					{
						continue;
						important = true;
					}

					auto size = renderer->getTextExtent(name, FONT_SIZE, FONT_TYPE);
					auto dis = Util::GetDistance(actor->RootComponent->Location,
						Global::m_LocalPlayer->PlayerController->RootComponent->Location);
					wstring distanceText = Util::DistanceToString(dis);
					wstring text = name;
					text += L"|" + distanceText;
					if (ModeItemESP == Advanced || important)
						renderer->drawText(Vec2(screenPos.X - size.x, screenPos.Y - size.y), text, color, 0, FONT_SIZE, FONT_TYPE);				
				}
			}
			//Supply-Drops
			else if (actor->GetName().find("AthenaSupplyDrop_02_C") != string::npos && ModeItemESP != Off)
			{
				SDK::FVector2D screenPos;
				if (!Util::Engine::WorldToScreen(Global::m_LocalPlayer->PlayerController, actor->RootComponent->Location,
					&screenPos))
				{
					continue;
				}

				auto size = renderer->getTextExtent(L"SupplyDrop", 10.0f, L"Verdana");
				auto dis = Util::GetDistance(actor->RootComponent->Location,
					Global::m_LocalPlayer->PlayerController->RootComponent->Location);
				wstring distanceText = Util::DistanceToString(dis);
				wstring text = L"SupplyDrop|" + distanceText;
				renderer->drawText(Vec2(screenPos.X - size.x, screenPos.Y - size.y), text, ITEM_COLOR_SUPPLYDROP, 0, FONT_SIZE,
					FONT_TYPE);
			}
			
		}
	}
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
		D3D11_DEPTH_STENCIL_DESC stencilDesc;
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
		pDevice->CreateDepthStencilState(&stencilDesc,
		                                 &myDepthStencilStates[static_cast<int>(eDepthState::NO_READ_NO_WRITE)]);

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

		//use the back buffer address to create the render target
		if (SUCCEEDED(pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&RenderTargetTexture)))
		{
			//warning: this will crash on res change, nothing seems to fix it (no crash when switching window/fullscreen)
			pDevice->CreateRenderTargetView(RenderTargetTexture, nullptr, &RenderTargetView);
			RenderTargetTexture->Release();
		}

		renderer = std::make_unique<Renderer>(pDevice);
		firstTime = false;
	}

	// shaders
	if (!psRed)
	{
		GenerateShader(pDevice, &psRed, 0.85f, 0.0f, 0.0f);
	}

	if (!psGreen)
	{
		GenerateShader(pDevice, &psGreen, 0.0f, 0.85f, 0.0f);
	}

	// viewport
	pContext->RSGetViewports(&vps, &viewport);
	ScreenCenterX = viewport.Width / 2.0f;
	ScreenCenterY = viewport.Height / 2.0f;

	// call before you draw
	pContext->OMSetRenderTargets(1, &RenderTargetView, nullptr);

	renderer->begin();

	wstringstream wss;
	wss << "Griizz Visuals Only";
	wss << L" | " << L"Chams: " << (EnableChams ? L"ON" : L"OFF");
	wss << L" | " << L"EnemyESP: " << GetTextForMode(ModeEnemyESP);
	wss << L" | " << L"ItemESP: " << GetTextForMode(ModeItemESP);

	renderer->drawText(Vec2(16.0f, 12.0f), wss.str(), Color{0.0f, 1.0f, 0.0f, 1.0f}, 0, FONT_SIZE, FONT_TYPE);

	if ((*Global::m_UWorld) != nullptr)
	{
		DrawESP();
		if (ShowMenue)
			DrawMenu();
	}

	renderer->draw();
	renderer->end();

	return phookD3D11Present(pSwapChain, SyncInterval, Flags);
}

//==========================================================================================================================

void __stdcall hookD3D11DrawIndexed(ID3D11DeviceContext* pContext, UINT IndexCount, UINT StartIndexLocation,
                                    INT BaseVertexLocation)
{
	//get stride & vdesc.ByteWidth
	pContext->IAGetVertexBuffers(0, 1, &veBuffer, &Stride, &veBufferOffset);
	if (veBuffer)
		veBuffer->GetDesc(&vedesc);
	if (veBuffer != nullptr)
	{
		veBuffer->Release();
		veBuffer = nullptr;
	}

	//get indesc.ByteWidth
	pContext->IAGetIndexBuffer(&inBuffer, &inFormat, &inOffset);
	if (inBuffer)
		inBuffer->GetDesc(&indesc);
	if (inBuffer != nullptr)
	{
		inBuffer->Release();
		inBuffer = nullptr;
	}

	//get pscdesc.ByteWidth
	pContext->PSGetConstantBuffers(pscStartSlot, 1, &pcsBuffer);
	if (pcsBuffer)
		pcsBuffer->GetDesc(&pscdesc);
	if (pcsBuffer != nullptr)
	{
		pcsBuffer->Release();
		pcsBuffer = nullptr;
	}

	//wallhack/chams
	if ((Stride == 24 || Stride == countnum && Descr.Format == 71 && pscdesc.ByteWidth == 4096) && EnableChams)
	{
		SetDepthStencilState(DISABLED);
		pContext->PSSetShader(psRed, nullptr, NULL);
		phookD3D11DrawIndexed(pContext, IndexCount, StartIndexLocation, BaseVertexLocation);
		pContext->PSSetShader(psGreen, nullptr, NULL);
		SetDepthStencilState(READ_NO_WRITE);
	}

	return phookD3D11DrawIndexed(pContext, IndexCount, StartIndexLocation, BaseVertexLocation);
}

//==========================================================================================================================

void __stdcall hookD3D11PSSetShaderResources(ID3D11DeviceContext* pContext, UINT StartSlot, UINT NumViews,
                                             ID3D11ShaderResourceView*const * ppShaderResourceViews)
{
	pssrStartSlot = StartSlot;

	for (UINT j = 0; j < NumViews; j++)
	{
		//resources loop
		ID3D11ShaderResourceView* pShaderResView = ppShaderResourceViews[j];
		if (pShaderResView)
		{
			pShaderResView->GetDesc(&Descr);

			ID3D11Resource* Resource;
			pShaderResView->GetResource(&Resource);
			auto* Texture = (ID3D11Texture2D *)Resource;
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

void __stdcall hookD3D11CreateQuery(ID3D11Device* pDevice, const D3D11_QUERY_DESC* pQueryDesc, ID3D11Query** ppQuery)
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

void __stdcall hookD3D11DrawIndexedInstanced(ID3D11DeviceContext* pContext, UINT IndexCountPerInstance,
                                             UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation,
                                             UINT StartInstanceLocation)
{
	if (GetAsyncKeyState(VK_F9) & 1)
		Log("DrawIndexedInstanced called");

	return phookD3D11DrawIndexedInstanced(pContext, IndexCountPerInstance, InstanceCount, StartIndexLocation,
	                                      BaseVertexLocation, StartInstanceLocation);
}

//==========================================================================================================================

void __stdcall hookD3D11Draw(ID3D11DeviceContext* pContext, UINT VertexCount, UINT StartVertexLocation)
{
	if (GetAsyncKeyState(VK_F9) & 1)
		Log("Draw called");

	return phookD3D11Draw(pContext, VertexCount, StartVertexLocation);
}

//==========================================================================================================================

void __stdcall hookD3D11DrawInstanced(ID3D11DeviceContext* pContext, UINT VertexCountPerInstance, UINT InstanceCount,
                                      UINT StartVertexLocation, UINT StartInstanceLocation)
{
	if (GetAsyncKeyState(VK_F9) & 1)
		Log("DrawInstanced called");

	return phookD3D11DrawInstanced(pContext, VertexCountPerInstance, InstanceCount, StartVertexLocation,
	                               StartInstanceLocation);
}

//==========================================================================================================================

void __stdcall hookD3D11DrawInstancedIndirect(ID3D11DeviceContext* pContext, ID3D11Buffer* pBufferForArgs,
                                              UINT AlignedByteOffsetForArgs)
{
	if (GetAsyncKeyState(VK_F9) & 1)
		Log("DrawInstancedIndirect called");

	return phookD3D11DrawInstancedIndirect(pContext, pBufferForArgs, AlignedByteOffsetForArgs);
}

//==========================================================================================================================

void __stdcall hookD3D11DrawIndexedInstancedIndirect(ID3D11DeviceContext* pContext, ID3D11Buffer* pBufferForArgs,
                                                     UINT AlignedByteOffsetForArgs)
{
	if (GetAsyncKeyState(VK_F9) & 1)
		Log("DrawIndexedInstancedIndirect called");

	return phookD3D11DrawIndexedInstancedIndirect(pContext, pBufferForArgs, AlignedByteOffsetForArgs);
}

//==========================================================================================================================

void __stdcall hookD3D11VSSetConstantBuffers(ID3D11DeviceContext* pContext, UINT StartSlot, UINT NumBuffers,
                                             ID3D11Buffer*const * ppConstantBuffers)
{
	if (ppConstantBuffers != nullptr)
		vsStartSlot = StartSlot;

	return phookD3D11VSSetConstantBuffers(pContext, StartSlot, NumBuffers, ppConstantBuffers);
}

//==========================================================================================================================

void __stdcall hookD3D11PSSetSamplers(ID3D11DeviceContext* pContext, UINT StartSlot, UINT NumSamplers,
                                      ID3D11SamplerState*const * ppSamplers)
{
	if (ppSamplers != nullptr)
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
	HMODULE hDXGIDLL = nullptr;
	do
	{
		hDXGIDLL = GetModuleHandle("dxgi.dll");
		Sleep(100);
	}
	while (!hDXGIDLL);
	Sleep(100);

	CreateThread(nullptr, 0, UpdateThread, nullptr, 0, nullptr);

	IDXGISwapChain* pSwapChain;

	WNDCLASSEXA wc = {
		sizeof(WNDCLASSEX), CS_CLASSDC, DXGIMsgProc, 0L, 0L, GetModuleHandleA(nullptr), nullptr, nullptr, nullptr, nullptr,
		"DX", nullptr
	};
	RegisterClassExA(&wc);
	HWND hWnd = CreateWindowA("DX", nullptr, WS_OVERLAPPEDWINDOW, 100, 100, 300, 300, nullptr, nullptr, wc.hInstance,
		nullptr);

	D3D_FEATURE_LEVEL requestedLevels[] = {D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_1};
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

	IDXGISwapChain* d3dSwapChain = nullptr;

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
	if (MH_CreateHook((DWORD_PTR*)pSwapChainVtable[8], hookD3D11Present,
	                  reinterpret_cast<void**>(&phookD3D11Present)) != MH_OK)
	{
		return 1;
	}
	if (MH_EnableHook((DWORD_PTR*)pSwapChainVtable[8]) != MH_OK)
	{
		return 1;
	}
	if (MH_CreateHook((DWORD_PTR*)pContextVTable[12], hookD3D11DrawIndexed,
	                  reinterpret_cast<void**>(&phookD3D11DrawIndexed)) != MH_OK)
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
				dlldir[i + 1] = 0;
				break;
			}
		}
		CreateThread(nullptr, 0, InitializeHook, nullptr, 0, nullptr);
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

Color GetItemColor(SDK::EFortItemTier tier)
{
	switch (tier)
	{
	case SDK::EFortItemTier::I:
		return ITEM_COLOR_TIER_WHITE;
	case SDK::EFortItemTier::II:
		return ITEM_COLOR_TIER_GREEN;
	case SDK::EFortItemTier::III:
		return ITEM_COLOR_TIER_BLUE;
	case SDK::EFortItemTier::IV:
		return ITEM_COLOR_TIER_PURPLE;
	case SDK::EFortItemTier::V:
		return ITEM_COLOR_TIER_ORANGE;
	case SDK::EFortItemTier::VI:
	case SDK::EFortItemTier::VII:
		return ITEM_COLOR_TIER_GOLD;
	case SDK::EFortItemTier::VIII:
	case SDK::EFortItemTier::IX:
	case SDK::EFortItemTier::X:
		return ITEM_COLOR_TIER_UNKNOWN;
	default:
		return ITEM_COLOR_TIER_WHITE;
	}
}

wstring GetTextForMode(Mode mode)
{
	switch (mode)
	{
	case Off:
		return L"Off";
	case Simple:
		return L"Simple";
	case Advanced:
		return L"Advanced";
	default:
		return L"Unknown Mode";
	}
}


void UpdateMenu()
{
	if ((GetAsyncKeyState(VK_UP) & 0x8000) && ((timer.now() - delay) > std::chrono::milliseconds(250)))
	{
		--CurrentMenuOption;
		delay = timer.now();
	}
	if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && ((timer.now() - delay) > std::chrono::milliseconds(250)))
	{
		++CurrentMenuOption;
		delay = timer.now();
	}
	if ((GetAsyncKeyState(VK_RIGHT) & 0x8000) && ((timer.now() - delay) > std::chrono::milliseconds(250)))
	{
		ChangeOption(CurrentMenuOption, 1);
		delay = timer.now();
	}
	if ((GetAsyncKeyState(VK_LEFT) & 0x8000) && ((timer.now() - delay) > std::chrono::milliseconds(250)))
	{
		ChangeOption(CurrentMenuOption, -1);
		delay = timer.now();
	}
}

void DrawMenu()
{
	for (int i = 0; i < MENU_OPTIONS_COUNT; i++)
	{
		Color color = (i == CurrentMenuOption) ? MENU_HIGHLIGHT_COLOR : MENU_NORMAL_COLOR;
		renderer->drawText(Vec2(MenuPosition.x, MenuPosition.y + MenuOffset * i), GetTextForOption(static_cast<Option>(i)), color, 0, MENU_FONT_SIZE, FONT_TYPE);
	}
}


wstring GetTextForOption(Option option)
{
	switch (option)
	{
	case Chams:
		return L"Chams - " + GetStatus(EnableChams);
	case EnemyESP:
		return L"EnemyESP - " + GetTextForMode(ModeEnemyESP);
	case ItemESP:
		return L"ItemESP - " + GetTextForMode(ModeItemESP);
	case AimbotKey:
		return L"AimButton - " + GetTextForAimButton(aimButton);
		/*OLD OPTIONS
	case AutoFire:
		return L"Autofire - " + GetStatus(AutofireEnabled);		
	case NoSpread:
		return L"NoSpread - " + GetStatus(EnableNoSpread);
	case InstantReload:
		return L"InstantReload - " + GetStatus(EnableInstantReload);
		*/
	case HeadshotRange:
		return L"Headshotrange - " + Util::DistanceToString(HeadshotMinDistance);
	case FieldOfView:
		return L"Field of View - " + std::to_wstring(static_cast<int>(fieldOfView));
	default:
		return L"Unknown Option";
	}
}

std::wstring GetTextForAimButton(AimButton AimButton)
{
	switch(AimButton)
	{
	case Mouse5:
		return L"Mouse5";
	case RMouseButton:
		return L"RMouseButton";
	case LeftAlt:
		return L"LeftAlt";
	default:
		return L"Mouse5 - Error";
	}
}

int GetAimButton(AimButton AimButton)
{
	switch(AimButton)
	{
	case Mouse5:
		return VK_XBUTTON2;
	case RMouseButton:
		return VK_RBUTTON;
	case LeftAlt:
		return VK_MENU;
	default:
		return VK_XBUTTON2;
	}
}

void ChangeOption(Option option, int direction)
{
	switch(option)
	{
	case Chams:
		EnableChams = !EnableChams;
		break;
	case EnemyESP:
		(direction > 0) ? ++ModeEnemyESP : --ModeEnemyESP;
		break;
	case ItemESP:
		(direction > 0) ? ++ModeItemESP : --ModeItemESP;
		break;
		
	case AimbotKey:
		(direction > 0) ? ++aimButton : --aimButton;
		break;
		/* OLD OPTIONS
	case AutoFire:
		AutofireEnabled = !AutofireEnabled;
		break;
	case NoSpread:
		EnableNoSpread = !EnableNoSpread;
		break;
	case InstantReload:
		EnableInstantReload = !EnableInstantReload;
		break;
		*/
	case HeadshotRange:
		(direction > 0) ? HeadshotMinDistance += 100 : HeadshotMinDistance -= 100;
		break;
	case FieldOfView:
		(direction > 0) ? fieldOfView++ : fieldOfView--;
		break;
	default:
		break;
	}
}

wstring GetStatus(bool status)
{
	return status ? L"On" : L"Off";
}

void HandelInput()
{
	if ((timer.now() - delay) < std::chrono::milliseconds(250))
		return;

	auto oldDelay = delay;
	delay = timer.now();



	if (GetAsyncKeyState(MENU_TOGGLE_KEY) & 0x8000)
	{
		ShowMenue = !ShowMenue;		
		return;
	}

	if (GetAsyncKeyState(PLAYER_ESP_KEY) & 0x8000)
	{
		++ModeEnemyESP;
		return;
	}

	if (GetAsyncKeyState(ITEM_ESP_KEY) & 0x8000)
	{
		++ModeItemESP;
		return;
	}

	if (GetAsyncKeyState(CHAMS_KEY) & 0x8000)
	{
		EnableChams = !EnableChams;
		return;
	}

	
	if (GetAsyncKeyState(DEVMODE_KEY) & 0x8000)
	{
		EnableDevMode = !EnableDevMode;
		return;
	}
	/* OLD HOTKEYS
	if (GetAsyncKeyState(NOSPREAD_KEY) & 0x8000)
	{
	EnableNoSpread = !EnableNoSpread;
	return;
	}
	if (GetAsyncKeyState(INSTANT_RELOAD_KEY) & 0x8000)
	{
	EnableInstantReload = !EnableInstantReload;
	return;
	}
	if (GetAsyncKeyState(INCREASE_FOV_KEY) & 0x8000)
	{
	fieldOfView++;
	return;
	}
	if (GetAsyncKeyState(DECREASE_FOV_KEY) & 0x8000)
	{
	fieldOfView--;
	return;
	}
	if (GetAsyncKeyState(INCREASE_HSRANGE_KEY) & 0x8000)
	{
	HeadshotMinDistance += 100;
	return;
	}
	if (GetAsyncKeyState(DECREASE_HSRANGE_KEY) & 0x8000)
	{
	HeadshotMinDistance -= 100;
	return;
	}
	*/

	delay = oldDelay;
}

void InitializeGlobals()
{
	if ((*Global::m_UWorld) == nullptr)
	{
		return;
	}
	Global::m_persistentLevel = (*Global::m_UWorld)->PersistentLevel;
	Global::m_owningGameInstance = (*Global::m_UWorld)->OwningGameInstance;
	Global::LocalPlayers = Global::m_owningGameInstance->LocalPlayers;
	Global::m_LocalPlayer = Global::LocalPlayers[0];
	Global::m_Actors = &Global::m_persistentLevel->AActors;
}


void DrawPlayerBox(SDK::AFortPawn* playerPawn)
{

	SDK::FVector TopPosition, BottemPosition;
	Util::Engine::GetBoneLocation(playerPawn->Mesh, &TopPosition, BONE_HEAD);
	Util::Engine::GetBoneLocation(playerPawn->Mesh, &BottemPosition, BONE_L_FOOT_MID);
	SDK::FVector2D TopPoint, BottemPoint;
	Util::Engine::WorldToScreen(Global::m_LocalPlayer->PlayerController, TopPosition, &TopPoint);
	Util::Engine::WorldToScreen(Global::m_LocalPlayer->PlayerController, BottemPosition, &BottemPoint);

	float height = BottemPosition.Y - TopPosition.Y;
	float width = height * 0.65f;

	renderer->drawRect(Vec4(TopPoint.X - width / 2, TopPoint.Y, width, height), 10.0f, ENEMY_HEALTH_COLOR);
}

void DrawDevVisuals()
{
	if (Global::m_LocalPlayer == nullptr)
		return;

	Vec2 startpoint(200.0f, 800.0f);
	auto pos = Global::m_LocalPlayer->PlayerController->RootComponent->Location;
	float offset = FONT_SIZE * 2 + 4;
	float values[]{ pos.X, pos.Y, pos.Z };

	for (int i = 0; i < 3; i++ )
	{
		renderer->drawText(Vec2(startpoint.x, startpoint.y + offset * i), std::to_wstring(values[i]), ITEM_COLOR_TIER_WHITE, 0, FONT_SIZE * 2, FONT_TYPE);
	}
}


//RESULTING IN INSTANT BAN
void ApplyNospread(SDK::APlayerController* playerController)
{
		if (playerController->AcknowledgedPawn->IsA(SDK::AFortPawn::StaticClass()))
		{
			auto localPawn = static_cast<SDK::AFortPawn*>(playerController->AcknowledgedPawn);
			auto currentWeapon = static_cast<SDK::AFortWeapon*>(localPawn->CurrentWeapon);

			if (currentWeapon != nullptr && currentWeapon->IsA(SDK::AFortWeaponRanged::StaticClass()))
			{
				auto weaponStats = pGetWeaponStatsRow(&currentWeapon->WeaponData->WeaponStatHandle,
					&SDK::FString(L"UFortKismetLibrary::GetWeaponStatsRow"), 0, 0);

				if (weaponStats != nullptr)
				{					
						// Spread
						weaponStats->Spread = 0.0f;
						weaponStats->SpreadDownsights = 0.0f;
						weaponStats->StandingStillSpreadMultiplier = 0.0f;
						weaponStats->AthenaSprintingSpreadMultiplier = 0.0f;
						weaponStats->AthenaJumpingFallingSpreadMultiplier = 0.0f;
						weaponStats->AthenaCrouchingSpreadMultiplier = 0.0f;
						weaponStats->MinSpeedForSpreadMultiplier = std::numeric_limits<float>::max();
						weaponStats->MaxSpeedForSpreadMultiplier = std::numeric_limits<float>::max();

						// Recoil
						weaponStats->RecoilHoriz = 0.0f;
						weaponStats->RecoilVert = 0.0f;
						weaponStats->RecoilDownsightsMultiplier = 0.0f;
										
						//InstandReload
						weaponStats->ReloadTime = 0.0f;
						weaponStats->ReloadScale = 0.0f;
						weaponStats->ChargeDownTime = 0.1f;				
				}
			}
		}	
}
