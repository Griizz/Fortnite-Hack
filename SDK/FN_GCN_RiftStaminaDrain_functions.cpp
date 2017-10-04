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

// Function GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C.OnWhileActiveParticleSystemDeactivate
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UParticleSystemComponent** WhileActiveParticleSysComponent (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AGCN_RiftStaminaDrain_C::OnWhileActiveParticleSystemDeactivate(class UParticleSystemComponent** WhileActiveParticleSysComponent, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C.OnWhileActiveParticleSystemDeactivate");

	AGCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemDeactivate_Params params;
	params.WhileActiveParticleSysComponent = WhileActiveParticleSysComponent;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C.OnWhileActiveParticleSystemActivate
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UParticleSystemComponent** WhileActiveParticleSysComponent (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AGCN_RiftStaminaDrain_C::OnWhileActiveParticleSystemActivate(class UParticleSystemComponent** WhileActiveParticleSysComponent, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C.OnWhileActiveParticleSystemActivate");

	AGCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate_Params params;
	params.WhileActiveParticleSysComponent = WhileActiveParticleSysComponent;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGCN_RiftStaminaDrain_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C.UserConstructionScript");

	AGCN_RiftStaminaDrain_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
