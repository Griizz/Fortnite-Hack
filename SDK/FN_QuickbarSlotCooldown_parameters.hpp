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

// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.Initialize
struct UQuickbarSlotCooldown_C_Initialize_Params
{
	TEnumAsByte<EItemDisplayStyle>                     QuickbarItemDisplayStyle;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<EFortItemCooldownType>                      DesiredCooldownTypesSupported;                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.Show Countdown
struct UQuickbarSlotCooldown_C_Show_Countdown_Params
{
	bool                                               Show;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.OnCooldownStarted
struct UQuickbarSlotCooldown_C_OnCooldownStarted_Params
{
	EFortItemCooldownType*                             CooldownType;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.OnCooldownStopped
struct UQuickbarSlotCooldown_C_OnCooldownStopped_Params
{
	EFortItemCooldownType*                             CooldownType;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.ExecuteUbergraph_QuickbarSlotCooldown
struct UQuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
