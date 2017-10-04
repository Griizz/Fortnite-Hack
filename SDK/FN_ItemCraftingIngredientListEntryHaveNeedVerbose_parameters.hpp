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

// Function ItemCraftingIngredientListEntryHaveNeedVerbose.ItemCraftingIngredientListEntryHaveNeedVerbose_C.Refresh
struct UItemCraftingIngredientListEntryHaveNeedVerbose_C_Refresh_Params
{
};

// Function ItemCraftingIngredientListEntryHaveNeedVerbose.ItemCraftingIngredientListEntryHaveNeedVerbose_C.DoDesignTimeRandomization
struct UItemCraftingIngredientListEntryHaveNeedVerbose_C_DoDesignTimeRandomization_Params
{
};

// Function ItemCraftingIngredientListEntryHaveNeedVerbose.ItemCraftingIngredientListEntryHaveNeedVerbose_C.PreConstruct
struct UItemCraftingIngredientListEntryHaveNeedVerbose_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemCraftingIngredientListEntryHaveNeedVerbose.ItemCraftingIngredientListEntryHaveNeedVerbose_C.HandleDifferentItemOrQuantitySetBP
struct UItemCraftingIngredientListEntryHaveNeedVerbose_C_HandleDifferentItemOrQuantitySetBP_Params
{
	bool*                                              IsBeingReset;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemCraftingIngredientListEntryHaveNeedVerbose.ItemCraftingIngredientListEntryHaveNeedVerbose_C.ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeedVerbose
struct UItemCraftingIngredientListEntryHaveNeedVerbose_C_ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeedVerbose_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
