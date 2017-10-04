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

// Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.RefreshWorldInventoryStatus
struct UAthenaInventoryLimitStatusIndicator_C_RefreshWorldInventoryStatus_Params
{
};

// Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.TrackWorldInventory
struct UAthenaInventoryLimitStatusIndicator_C_TrackWorldInventory_Params
{
};

// Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.Construct
struct UAthenaInventoryLimitStatusIndicator_C_Construct_Params
{
};

// Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.Destruct
struct UAthenaInventoryLimitStatusIndicator_C_Destruct_Params
{
};

// Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.HandleWorldItemListChanged
struct UAthenaInventoryLimitStatusIndicator_C_HandleWorldItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      ItemsAdded;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<class UFortWorldItem*>                      ItemsRemoved;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.ExecuteUbergraph_AthenaInventoryLimitStatusIndicator
struct UAthenaInventoryLimitStatusIndicator_C_ExecuteUbergraph_AthenaInventoryLimitStatusIndicator_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
