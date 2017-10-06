#ifndef __HOOKS_H
#define __HOOKS_H

using D3D11PresentHook = HRESULT(__stdcall *) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
using D3D11DrawIndexedHook = void(__stdcall *) (ID3D11DeviceContext* pContext, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation);
using D3D11PSSetShaderResourcesHook = void(__stdcall *) (ID3D11DeviceContext* pContext, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const *ppShaderResourceViews);
using D3D11CreateQueryHook = void(__stdcall *) (ID3D11Device* pDevice, const D3D11_QUERY_DESC *pQueryDesc, ID3D11Query **ppQuery);

using D3D11DrawIndexedInstancedHook = void(__stdcall *) (ID3D11DeviceContext* pContext, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation);
using D3D11DrawHook = void(__stdcall *) (ID3D11DeviceContext* pContext, UINT VertexCount, UINT StartVertexLocation);
using D3D11DrawInstancedHook = void(__stdcall *) (ID3D11DeviceContext* pContext, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation);
using D3D11DrawInstancedIndirectHook = void(__stdcall *) (ID3D11DeviceContext* pContext, ID3D11Buffer *pBufferForArgs, UINT AlignedByteOffsetForArgs);
using D3D11DrawIndexedInstancedIndirectHook = void(__stdcall *) (ID3D11DeviceContext* pContext, ID3D11Buffer *pBufferForArgs, UINT AlignedByteOffsetForArgs);
using D3D11VSSetConstantBuffersHook = void(__stdcall *) (ID3D11DeviceContext* pContext, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const *ppConstantBuffers);
using D3D11PSSetSamplersHook = void(__stdcall *) (ID3D11DeviceContext* pContext, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const *ppSamplers);

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

#endif
