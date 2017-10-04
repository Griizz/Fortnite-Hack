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

// Function B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.UserConstructionScript
struct AB_PlayerHealthDamage_CameraLensEffect_C_UserConstructionScript_Params
{
};

// Function B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.PassParticle_Parameter
struct AB_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter_Params
{
	float                                              NewParam;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               First_Hit;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect
struct AB_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
