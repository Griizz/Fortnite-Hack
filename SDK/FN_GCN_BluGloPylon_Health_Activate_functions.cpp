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

// Function GCN_BluGloPylon_Health_Activate.GCN_BluGloPylon_Health_Activate_C.OnStartParticleSystemSpawned
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UParticleSystemComponent** SpawnedParticleSysComponent    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AGCN_BluGloPylon_Health_Activate_C::OnStartParticleSystemSpawned(class UParticleSystemComponent** SpawnedParticleSysComponent, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_BluGloPylon_Health_Activate.GCN_BluGloPylon_Health_Activate_C.OnStartParticleSystemSpawned");

	AGCN_BluGloPylon_Health_Activate_C_OnStartParticleSystemSpawned_Params params;
	params.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_BluGloPylon_Health_Activate.GCN_BluGloPylon_Health_Activate_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGCN_BluGloPylon_Health_Activate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_BluGloPylon_Health_Activate.GCN_BluGloPylon_Health_Activate_C.UserConstructionScript");

	AGCN_BluGloPylon_Health_Activate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
