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

// Function ItemInspectEvolutionIngredientsList.ItemInspectEvolutionIngredientsList_C.SetupItemLevelRequirement
struct UItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectEvolutionIngredientsList.ItemInspectEvolutionIngredientsList_C.ClearIngredients
struct UItemInspectEvolutionIngredientsList_C_ClearIngredients_Params
{
};

// Function ItemInspectEvolutionIngredientsList.ItemInspectEvolutionIngredientsList_C.SetIngredients
struct UItemInspectEvolutionIngredientsList_C_SetIngredients_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFortItemQuantityPair>               InIngredients;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
