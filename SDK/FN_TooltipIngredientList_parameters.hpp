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

// Function TooltipIngredientList.TooltipIngredientList_C.Refresh
struct UTooltipIngredientList_C_Refresh_Params
{
};

// Function TooltipIngredientList.TooltipIngredientList_C.Construct
struct UTooltipIngredientList_C_Construct_Params
{
};

// Function TooltipIngredientList.TooltipIngredientList_C.ExecuteUbergraph_TooltipIngredientList
struct UTooltipIngredientList_C_ExecuteUbergraph_TooltipIngredientList_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
