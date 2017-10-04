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

// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.HandleDifferentItemOrQuantitySetBP
struct UMiniCraftingIngredientListEntry_C_HandleDifferentItemOrQuantitySetBP_Params
{
	bool*                                              IsBeingReset;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.ExecuteUbergraph_MiniCraftingIngredientListEntry
struct UMiniCraftingIngredientListEntry_C_ExecuteUbergraph_MiniCraftingIngredientListEntry_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
