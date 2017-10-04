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

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.InitializeSettings
struct UPerkTierWidgetNew_C_InitializeSettings_Params
{
	bool                                               bIncludeName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIncludeDescription;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        IconSize;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortUIPerkTier                             FortPerkTier;                                             // (CPF_Parm)
};

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.Construct
struct UPerkTierWidgetNew_C_Construct_Params
{
};

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.OnGeneratePerk
struct UPerkTierWidgetNew_C_OnGeneratePerk_Params
{
	struct FFortUIPerk*                                Perk;                                                     // (CPF_Parm)
	class UFortPerkWidget_NUI**                        PerkWidget;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.ExecuteUbergraph_PerkTierWidgetNew
struct UPerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
