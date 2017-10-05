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

// Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.OnStartParticleSystemSpawned
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UParticleSystemComponent** SpawnedParticleSysComponent    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AGCNL_GM_ReflectDamage_C::OnStartParticleSystemSpawned(class UParticleSystemComponent** SpawnedParticleSysComponent, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.OnStartParticleSystemSpawned");

	AGCNL_GM_ReflectDamage_C_OnStartParticleSystemSpawned_Params params;
	params.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGCNL_GM_ReflectDamage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.UserConstructionScript");

	AGCNL_GM_ReflectDamage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AGCNL_GM_ReflectDamage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.ReceiveBeginPlay");

	AGCNL_GM_ReflectDamage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGCNL_GM_ReflectDamage_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.ReceiveTick");

	AGCNL_GM_ReflectDamage_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.ExecuteUbergraph_GCNL_GM_ReflectDamage
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGCNL_GM_ReflectDamage_C::ExecuteUbergraph_GCNL_GM_ReflectDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.ExecuteUbergraph_GCNL_GM_ReflectDamage");

	AGCNL_GM_ReflectDamage_C_ExecuteUbergraph_GCNL_GM_ReflectDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
