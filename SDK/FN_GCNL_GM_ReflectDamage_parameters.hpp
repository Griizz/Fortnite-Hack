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

// Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.OnStartParticleSystemSpawned
struct AGCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned_Params
{
	class UParticleSystemComponent**                   SpawnedParticleSysComponent;                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.UserConstructionScript
struct AGCNL_GM_ReflectDamage_C_UserConstructionScript_Params
{
};

// Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.ReceiveBeginPlay
struct AGCNL_GM_ReflectDamage_C_ReceiveBeginPlay_Params
{
};

// Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.ReceiveTick
struct AGCNL_GM_ReflectDamage_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.ExecuteUbergraph_GCNL_GM_ReflectDamage
struct AGCNL_GM_ReflectDamage_C_ExecuteUbergraph_GCNL_GM_ReflectDamage_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
