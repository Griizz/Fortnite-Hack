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

// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.GetRecipeItemQuantityPairs
struct UMiniItemCraftingIngredientsDetailWidget_C_GetRecipeItemQuantityPairs_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFortItemQuantityPair>               Pairs;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToDetailSet
struct UMiniItemCraftingIngredientsDetailWidget_C_HandlePostDifferentItemToDetailSet_Params
{
};

// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToCompareWithSet
struct UMiniItemCraftingIngredientsDetailWidget_C_HandlePostDifferentItemToCompareWithSet_Params
{
};

// Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget
struct UMiniItemCraftingIngredientsDetailWidget_C_ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
