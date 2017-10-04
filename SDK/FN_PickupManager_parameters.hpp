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

// Function PickupManager.PickupManager_C.UpdateKeybinds
struct UPickupManager_C_UpdateKeybinds_Params
{
};

// Function PickupManager.PickupManager_C.RefreshCounts
struct UPickupManager_C_RefreshCounts_Params
{
};

// Function PickupManager.PickupManager_C.HandleItemPickedUp
struct UPickupManager_C_HandleItemPickedUp_Params
{
	class UFortWorldItem*                              NewItem;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PickupManager.PickupManager_C.HandleMessageExpired
struct UPickupManager_C_HandleMessageExpired_Params
{
	class UFortUIMessageItemWidget*                    Message_Item;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PickupManager.PickupManager_C.TryGetNextItem
struct UPickupManager_C_TryGetNextItem_Params
{
};

// Function PickupManager.PickupManager_C.Construct
struct UPickupManager_C_Construct_Params
{
};

// Function PickupManager.PickupManager_C.HandleWorldItemsChanged
struct UPickupManager_C_HandleWorldItemsChanged_Params
{
};

// Function PickupManager.PickupManager_C.HandleWorldItemListChanged
struct UPickupManager_C_HandleWorldItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      ItemsAdded;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<class UFortWorldItem*>                      ItemsRemoved;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function PickupManager.PickupManager_C.Destruct
struct UPickupManager_C_Destruct_Params
{
};

// Function PickupManager.PickupManager_C.ExecuteUbergraph_PickupManager
struct UPickupManager_C_ExecuteUbergraph_PickupManager_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
