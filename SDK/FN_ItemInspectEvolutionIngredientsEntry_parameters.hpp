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

// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.GetHaveQuantity
struct UItemInspectEvolutionIngredientsEntry_C_GetHaveQuantity_Params
{
	struct FFortItemQuantityPair                       InPair;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.SetIngredientCount
struct UItemInspectEvolutionIngredientsEntry_C_SetIngredientCount_Params
{
};

// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.GetIconBrush
struct UItemInspectEvolutionIngredientsEntry_C_GetIconBrush_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (CPF_Parm, CPF_OutParm)
};

// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.Construct
struct UItemInspectEvolutionIngredientsEntry_C_Construct_Params
{
};

// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.ExecuteUbergraph_ItemInspectEvolutionIngredientsEntry
struct UItemInspectEvolutionIngredientsEntry_C_ExecuteUbergraph_ItemInspectEvolutionIngredientsEntry_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
