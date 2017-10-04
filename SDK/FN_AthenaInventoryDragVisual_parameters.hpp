#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.Construct
struct UAthenaInventoryDragVisual_C_Construct_Params
{
};

// Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.PreConstruct
struct UAthenaInventoryDragVisual_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryDragVisual.AthenaInventoryDragVisual_C.ExecuteUbergraph_AthenaInventoryDragVisual
struct UAthenaInventoryDragVisual_C_ExecuteUbergraph_AthenaInventoryDragVisual_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
