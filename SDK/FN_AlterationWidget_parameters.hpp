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

// Function AlterationWidget.AlterationWidget_C.SetEvolutionDetails
struct UAlterationWidget_C_SetEvolutionDetails_Params
{
};

// Function AlterationWidget.AlterationWidget_C.UpdateRaritySwitcherVisiblity
struct UAlterationWidget_C_UpdateRaritySwitcherVisiblity_Params
{
};

// Function AlterationWidget.AlterationWidget_C.SetLevelText
struct UAlterationWidget_C_SetLevelText_Params
{
};

// Function AlterationWidget.AlterationWidget_C.InitText
struct UAlterationWidget_C_InitText_Params
{
};

// Function AlterationWidget.AlterationWidget_C.InitIcon
struct UAlterationWidget_C_InitIcon_Params
{
};

// Function AlterationWidget.AlterationWidget_C.ShouldFadeAlteration
struct UAlterationWidget_C_ShouldFadeAlteration_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AlterationWidget.AlterationWidget_C.GetHighlightColor
struct UAlterationWidget_C_GetHighlightColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AlterationWidget.AlterationWidget_C.Construct
struct UAlterationWidget_C_Construct_Params
{
};

// Function AlterationWidget.AlterationWidget_C.ExecuteUbergraph_AlterationWidget
struct UAlterationWidget_C_ExecuteUbergraph_AlterationWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
