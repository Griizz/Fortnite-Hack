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

// Function LegacyPerkWidget.LegacyPerkWidget_C.CreateToolTipWidget
struct ULegacyPerkWidget_C_CreateToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeTextInfo
struct ULegacyPerkWidget_C_InitializeTextInfo_Params
{
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.HighlightBadge
struct ULegacyPerkWidget_C_HighlightBadge_Params
{
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.GetPerkStat
struct ULegacyPerkWidget_C_GetPerkStat_Params
{
	struct FTooltipStat                                TooltipStat;                                              // (CPF_Parm, CPF_OutParm)
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.ShowTierImage
struct ULegacyPerkWidget_C_ShowTierImage_Params
{
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.SetupBadge
struct ULegacyPerkWidget_C_SetupBadge_Params
{
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeHeroBonusIcon
struct ULegacyPerkWidget_C_InitializeHeroBonusIcon_Params
{
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeTextOnlyPerk
struct ULegacyPerkWidget_C_InitializeTextOnlyPerk_Params
{
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.ShouldFadePerk
struct ULegacyPerkWidget_C_ShouldFadePerk_Params
{
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.GetHighlightColor
struct ULegacyPerkWidget_C_GetHighlightColor_Params
{
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.GetTierAbilityBrush
struct ULegacyPerkWidget_C_GetTierAbilityBrush_Params
{
	struct FSlateBrush                                 SlateBrush;                                               // (CPF_Parm, CPF_OutParm)
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeAbilityPerk
struct ULegacyPerkWidget_C_InitializeAbilityPerk_Params
{
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.InitializeBasicPerk
struct ULegacyPerkWidget_C_InitializeBasicPerk_Params
{
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.PreConstruct
struct ULegacyPerkWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.Construct
struct ULegacyPerkWidget_C_Construct_Params
{
};

// Function LegacyPerkWidget.LegacyPerkWidget_C.ExecuteUbergraph_LegacyPerkWidget
struct ULegacyPerkWidget_C_ExecuteUbergraph_LegacyPerkWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
