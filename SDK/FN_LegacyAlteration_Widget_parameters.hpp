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

// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.InitSmallAlteration
struct ULegacyAlteration_Widget_C_InitSmallAlteration_Params
{
};

// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.InitFullAlteration
struct ULegacyAlteration_Widget_C_InitFullAlteration_Params
{
};

// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.ShouldFadeAlteration
struct ULegacyAlteration_Widget_C_ShouldFadeAlteration_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.GetHighlightColor
struct ULegacyAlteration_Widget_C_GetHighlightColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.Construct
struct ULegacyAlteration_Widget_C_Construct_Params
{
};

// Function LegacyAlteration_Widget.LegacyAlteration_Widget_C.ExecuteUbergraph_LegacyAlteration_Widget
struct ULegacyAlteration_Widget_C_ExecuteUbergraph_LegacyAlteration_Widget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
