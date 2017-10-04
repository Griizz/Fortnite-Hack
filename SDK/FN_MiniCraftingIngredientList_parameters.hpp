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

// Function MiniCraftingIngredientList.MiniCraftingIngredientList_C.AddListEntry
struct UMiniCraftingIngredientList_C_AddListEntry_Params
{
	class UFortItemQuantityListEntryBase**             ListEntry;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MiniCraftingIngredientList.MiniCraftingIngredientList_C.ExecuteUbergraph_MiniCraftingIngredientList
struct UMiniCraftingIngredientList_C_ExecuteUbergraph_MiniCraftingIngredientList_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
