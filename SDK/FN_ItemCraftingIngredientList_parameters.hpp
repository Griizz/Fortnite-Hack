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

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.ItemNeedsInventoryTracking
struct UItemCraftingIngredientList_C_ItemNeedsInventoryTracking_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               NeedsTracking;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleItemChanged
struct UItemCraftingIngredientList_C_HandleItemChanged_Params
{
	bool                                               ItemChanged;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               AmmoChanged;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IngredientsChanged;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.RefreshInventoryTracking
struct UItemCraftingIngredientList_C_RefreshInventoryTracking_Params
{
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleWorldItemsChanged
struct UItemCraftingIngredientList_C_HandleWorldItemsChanged_Params
{
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleWorldItemListChanged
struct UItemCraftingIngredientList_C_HandleWorldItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      ItemsAdded;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<class UFortWorldItem*>                      ItemsRemoved;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.Refresh
struct UItemCraftingIngredientList_C_Refresh_Params
{
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.SetItemToRepresent
struct UItemCraftingIngredientList_C_SetItemToRepresent_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.DoDesignTimeRandomization
struct UItemCraftingIngredientList_C_DoDesignTimeRandomization_Params
{
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.PreConstruct
struct UItemCraftingIngredientList_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.AddListEntry
struct UItemCraftingIngredientList_C_AddListEntry_Params
{
	class UFortItemQuantityListEntryBase**             ListEntry;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.ExecuteUbergraph_ItemCraftingIngredientList
struct UItemCraftingIngredientList_C_ExecuteUbergraph_ItemCraftingIngredientList_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
