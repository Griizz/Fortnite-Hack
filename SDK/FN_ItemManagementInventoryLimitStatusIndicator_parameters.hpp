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

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.RefreshStorageInventoryStatus
struct UItemManagementInventoryLimitStatusIndicator_C_RefreshStorageInventoryStatus_Params
{
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.TrackStorageInventory
struct UItemManagementInventoryLimitStatusIndicator_C_TrackStorageInventory_Params
{
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.RefreshWorldInventoryStatus
struct UItemManagementInventoryLimitStatusIndicator_C_RefreshWorldInventoryStatus_Params
{
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.TrackVaultInventory
struct UItemManagementInventoryLimitStatusIndicator_C_TrackVaultInventory_Params
{
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.TrackWorldInventory
struct UItemManagementInventoryLimitStatusIndicator_C_TrackWorldInventory_Params
{
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleVaultItemLimitStateChanged
struct UItemManagementInventoryLimitStatusIndicator_C_HandleVaultItemLimitStateChanged_Params
{
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.Construct
struct UItemManagementInventoryLimitStatusIndicator_C_Construct_Params
{
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.Destruct
struct UItemManagementInventoryLimitStatusIndicator_C_Destruct_Params
{
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleWorldItemListChanged
struct UItemManagementInventoryLimitStatusIndicator_C_HandleWorldItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      ItemsAdded;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<class UFortWorldItem*>                      ItemsRemoved;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleOutpostItemListChanged
struct UItemManagementInventoryLimitStatusIndicator_C_HandleOutpostItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      ItemsAdded;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<class UFortWorldItem*>                      ItemsRemoved;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.ExecuteUbergraph_ItemManagementInventoryLimitStatusIndicator
struct UItemManagementInventoryLimitStatusIndicator_C_ExecuteUbergraph_ItemManagementInventoryLimitStatusIndicator_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
