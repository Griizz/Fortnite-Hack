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

// Function LegacyAlterationGroup_Widget.LegacyAlterationGroup_Widget_C.Construct
struct ULegacyAlterationGroup_Widget_C_Construct_Params
{
};

// Function LegacyAlterationGroup_Widget.LegacyAlterationGroup_Widget_C.OnGenerateAlteration
struct ULegacyAlterationGroup_Widget_C_OnGenerateAlteration_Params
{
	struct FFortUIAlteration*                          AlterationInfo;                                           // (CPF_Parm)
};

// Function LegacyAlterationGroup_Widget.LegacyAlterationGroup_Widget_C.ExecuteUbergraph_LegacyAlterationGroup_Widget
struct ULegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
