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

// Function GCN_BluGloPylon_Health_Activate.GCN_BluGloPylon_Health_Activate_C.OnStartParticleSystemSpawned
struct AGCN_BluGloPylon_Health_Activate_C_OnStartParticleSystemSpawned_Params
{
	class UParticleSystemComponent**                   SpawnedParticleSysComponent;                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GCN_BluGloPylon_Health_Activate.GCN_BluGloPylon_Health_Activate_C.UserConstructionScript
struct AGCN_BluGloPylon_Health_Activate_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
