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

// Function PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C.UserConstructionScript
struct APBWA_W1_QuarterWallS_C_UserConstructionScript_Params
{
};

// Function PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C.GameplayCue.Abilities.Activation.Generic.BannerWallBuff1
struct APBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff1_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C.GameplayCue.Abilities.Activation.Generic.BannerWallBuff2
struct APBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff2_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C.ExecuteUbergraph_PBWA_W1_QuarterWallS
struct APBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
