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

// Function CraftingIngredient.CraftingIngredient_C.ShowDivider
struct UCraftingIngredient_C_ShowDivider_Params
{
	bool                                               Show;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CraftingIngredient.CraftingIngredient_C.Get Tooltip
struct UCraftingIngredient_C_Get_Tooltip_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CraftingIngredient.CraftingIngredient_C.Refresh
struct UCraftingIngredient_C_Refresh_Params
{
};

// Function CraftingIngredient.CraftingIngredient_C.Construct
struct UCraftingIngredient_C_Construct_Params
{
};

// Function CraftingIngredient.CraftingIngredient_C.ExecuteUbergraph_CraftingIngredient
struct UCraftingIngredient_C_ExecuteUbergraph_CraftingIngredient_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
