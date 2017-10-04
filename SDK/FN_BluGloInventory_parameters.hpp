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

// Function BluGloInventory.BluGloInventory_C.Update
struct UBluGloInventory_C_Update_Params
{
};

// Function BluGloInventory.BluGloInventory_C.HandleOnWorldItemListChanged
struct UBluGloInventory_C_HandleOnWorldItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      Items_Added;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<class UFortWorldItem*>                      Items_Removed;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function BluGloInventory.BluGloInventory_C.HandleWorldItemsChanged
struct UBluGloInventory_C_HandleWorldItemsChanged_Params
{
};

// Function BluGloInventory.BluGloInventory_C.HandleItemPickedUp
struct UBluGloInventory_C_HandleItemPickedUp_Params
{
	class UFortWorldItem*                              New_Item;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BluGloInventory.BluGloInventory_C.Construct
struct UBluGloInventory_C_Construct_Params
{
};

// Function BluGloInventory.BluGloInventory_C.ExecuteUbergraph_BluGloInventory
struct UBluGloInventory_C_ExecuteUbergraph_BluGloInventory_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
