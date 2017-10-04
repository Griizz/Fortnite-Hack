// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AB_PlayerHealthDamage_CameraLensEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.UserConstructionScript");

	AB_PlayerHealthDamage_CameraLensEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.PassParticle_Parameter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewParam                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           First_Hit                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_PlayerHealthDamage_CameraLensEffect_C::PassParticle_Parameter(float NewParam, bool First_Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.PassParticle_Parameter");

	AB_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter_Params params;
	params.NewParam = NewParam;
	params.First_Hit = First_Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AB_PlayerHealthDamage_CameraLensEffect_C::ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect");

	AB_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
