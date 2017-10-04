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

// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.GetToolTipWidget
struct UItemCraftingIngredientListEntryHaveNeed_C_GetToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.Refresh
struct UItemCraftingIngredientListEntryHaveNeed_C_Refresh_Params
{
};

// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.DoDesignTimeRandomization
struct UItemCraftingIngredientListEntryHaveNeed_C_DoDesignTimeRandomization_Params
{
};

// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.PreConstruct
struct UItemCraftingIngredientListEntryHaveNeed_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.HandleDifferentItemOrQuantitySetBP
struct UItemCraftingIngredientListEntryHaveNeed_C_HandleDifferentItemOrQuantitySetBP_Params
{
	bool*                                              IsBeingReset;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemCraftingIngredientListEntryHaveNeed.ItemCraftingIngredientListEntryHaveNeed_C.ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeed
struct UItemCraftingIngredientListEntryHaveNeed_C_ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeed_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
