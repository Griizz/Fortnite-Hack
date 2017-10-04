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

// Function PerkWidgetNew.PerkWidgetNew_C.Get_OverlayAbilityPerk_ToolTipWidget
struct UPerkWidgetNew_C_Get_OverlayAbilityPerk_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PerkWidgetNew.PerkWidgetNew_C.InitializeSettings
struct UPerkWidgetNew_C_InitializeSettings_Params
{
	bool                                               bIncludeName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIncludeDescription;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        IconSize;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseLargeFormatName;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortUIPerk                                 Perk;                                                     // (CPF_Parm)
	bool                                               ShowMouseTooltips;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PerkWidgetNew.PerkWidgetNew_C.HighlightBadge
struct UPerkWidgetNew_C_HighlightBadge_Params
{
};

// Function PerkWidgetNew.PerkWidgetNew_C.GetPerkStat
struct UPerkWidgetNew_C_GetPerkStat_Params
{
	struct FTooltipStat                                TooltipStat;                                              // (CPF_Parm, CPF_OutParm)
};

// Function PerkWidgetNew.PerkWidgetNew_C.ShowTierImage
struct UPerkWidgetNew_C_ShowTierImage_Params
{
};

// Function PerkWidgetNew.PerkWidgetNew_C.SetupBadge
struct UPerkWidgetNew_C_SetupBadge_Params
{
};

// Function PerkWidgetNew.PerkWidgetNew_C.InitializeHeroBonusIcon
struct UPerkWidgetNew_C_InitializeHeroBonusIcon_Params
{
};

// Function PerkWidgetNew.PerkWidgetNew_C.InitializeText
struct UPerkWidgetNew_C_InitializeText_Params
{
};

// Function PerkWidgetNew.PerkWidgetNew_C.ShouldFadePerk
struct UPerkWidgetNew_C_ShouldFadePerk_Params
{
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PerkWidgetNew.PerkWidgetNew_C.GetHighlightColor
struct UPerkWidgetNew_C_GetHighlightColor_Params
{
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function PerkWidgetNew.PerkWidgetNew_C.GetTierAbilityBrush
struct UPerkWidgetNew_C_GetTierAbilityBrush_Params
{
	struct FSlateBrush                                 SlateBrush;                                               // (CPF_Parm, CPF_OutParm)
};

// Function PerkWidgetNew.PerkWidgetNew_C.InitializeAbilityPerk
struct UPerkWidgetNew_C_InitializeAbilityPerk_Params
{
};

// Function PerkWidgetNew.PerkWidgetNew_C.InitializeBasicPerk
struct UPerkWidgetNew_C_InitializeBasicPerk_Params
{
};

// Function PerkWidgetNew.PerkWidgetNew_C.PreConstruct
struct UPerkWidgetNew_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PerkWidgetNew.PerkWidgetNew_C.Construct
struct UPerkWidgetNew_C_Construct_Params
{
};

// Function PerkWidgetNew.PerkWidgetNew_C.ExecuteUbergraph_PerkWidgetNew
struct UPerkWidgetNew_C_ExecuteUbergraph_PerkWidgetNew_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
