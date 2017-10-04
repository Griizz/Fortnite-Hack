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

// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Completed_A3A081314405D22C4EED5CB989DC8CB1
struct UGA_DefaultPlayer_Consumable_C_Completed_A3A081314405D22C4EED5CB989DC8CB1_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Cancelled_A3A081314405D22C4EED5CB989DC8CB1
struct UGA_DefaultPlayer_Consumable_C_Cancelled_A3A081314405D22C4EED5CB989DC8CB1_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Triggered_A3A081314405D22C4EED5CB989DC8CB1
struct UGA_DefaultPlayer_Consumable_C_Triggered_A3A081314405D22C4EED5CB989DC8CB1_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.K2_ActivateAbilityFromEvent
struct UGA_DefaultPlayer_Consumable_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.ExecuteUbergraph_GA_DefaultPlayer_Consumable
struct UGA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
