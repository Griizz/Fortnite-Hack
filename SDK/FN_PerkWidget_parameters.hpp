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

// Function PerkWidget.PerkWidget_C.CreateToolTipWidget
struct UPerkWidget_C_CreateToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PerkWidget.PerkWidget_C.InitializeTextInfo
struct UPerkWidget_C_InitializeTextInfo_Params
{
};

// Function PerkWidget.PerkWidget_C.HighlightBadge
struct UPerkWidget_C_HighlightBadge_Params
{
};

// Function PerkWidget.PerkWidget_C.GetPerkStat
struct UPerkWidget_C_GetPerkStat_Params
{
	struct FTooltipStat                                TooltipStat;                                              // (CPF_Parm, CPF_OutParm)
};

// Function PerkWidget.PerkWidget_C.ShowTierImage
struct UPerkWidget_C_ShowTierImage_Params
{
};

// Function PerkWidget.PerkWidget_C.SetupBadge
struct UPerkWidget_C_SetupBadge_Params
{
};

// Function PerkWidget.PerkWidget_C.InitializeHeroBonusIcon
struct UPerkWidget_C_InitializeHeroBonusIcon_Params
{
};

// Function PerkWidget.PerkWidget_C.InitializeTextOnlyPerk
struct UPerkWidget_C_InitializeTextOnlyPerk_Params
{
};

// Function PerkWidget.PerkWidget_C.ShouldFadePerk
struct UPerkWidget_C_ShouldFadePerk_Params
{
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PerkWidget.PerkWidget_C.GetHighlightColor
struct UPerkWidget_C_GetHighlightColor_Params
{
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function PerkWidget.PerkWidget_C.GetTierAbilityBrush
struct UPerkWidget_C_GetTierAbilityBrush_Params
{
	struct FSlateBrush                                 SlateBrush;                                               // (CPF_Parm, CPF_OutParm)
};

// Function PerkWidget.PerkWidget_C.InitializeAbilityPerk
struct UPerkWidget_C_InitializeAbilityPerk_Params
{
};

// Function PerkWidget.PerkWidget_C.InitializeBasicPerk
struct UPerkWidget_C_InitializeBasicPerk_Params
{
};

// Function PerkWidget.PerkWidget_C.PreConstruct
struct UPerkWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PerkWidget.PerkWidget_C.Construct
struct UPerkWidget_C_Construct_Params
{
};

// Function PerkWidget.PerkWidget_C.ExecuteUbergraph_PerkWidget
struct UPerkWidget_C_ExecuteUbergraph_PerkWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
