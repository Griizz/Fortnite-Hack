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

// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.CalculatePlayerPositionNearBox
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 BoxMin                         (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 BoxMax                         (CPF_Parm, CPF_IsPlainOldData)
// float                          VolumePlayerCoveragePercentage (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AThreatPostProcessManagerAndParticleBlueprint_C::CalculatePlayerPositionNearBox(const struct FVector& BoxMin, const struct FVector& BoxMax, float* VolumePlayerCoveragePercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.CalculatePlayerPositionNearBox");

	AThreatPostProcessManagerAndParticleBlueprint_C_CalculatePlayerPositionNearBox_Params params;
	params.BoxMin = BoxMin;
	params.BoxMax = BoxMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VolumePlayerCoveragePercentage != nullptr)
		*VolumePlayerCoveragePercentage = params.VolumePlayerCoveragePercentage;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.UserConstructionScript");

	AThreatPostProcessManagerAndParticleBlueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__FinishedFunc
// (FUNC_BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::Ramp_Up_down_values_on_death__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__FinishedFunc");

	AThreatPostProcessManagerAndParticleBlueprint_C_Ramp_Up_down_values_on_death__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__UpdateFunc
// (FUNC_BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::Ramp_Up_down_values_on_death__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__UpdateFunc");

	AThreatPostProcessManagerAndParticleBlueprint_C_Ramp_Up_down_values_on_death__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AThreatPostProcessManagerAndParticleBlueprint_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ReceiveTick");

	AThreatPostProcessManagerAndParticleBlueprint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatCloudsChanged
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FThreatLocationInfo>* ThreatLocationInfo             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AThreatPostProcessManagerAndParticleBlueprint_C::OnThreatCloudsChanged(TArray<struct FThreatLocationInfo>* ThreatLocationInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatCloudsChanged");

	AThreatPostProcessManagerAndParticleBlueprint_C_OnThreatCloudsChanged_Params params;
	params.ThreatLocationInfo = ThreatLocationInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnWorldReady
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::OnWorldReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnWorldReady");

	AThreatPostProcessManagerAndParticleBlueprint_C_OnWorldReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.VFX_RainTracePeriodic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::VFX_RainTracePeriodic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.VFX_RainTracePeriodic");

	AThreatPostProcessManagerAndParticleBlueprint_C_VFX_RainTracePeriodic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.StartTraceTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::StartTraceTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.StartTraceTimer");

	AThreatPostProcessManagerAndParticleBlueprint_C_StartTraceTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ForceUpdateLensEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::ForceUpdateLensEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ForceUpdateLensEffect");

	AThreatPostProcessManagerAndParticleBlueprint_C_ForceUpdateLensEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AThreatPostProcessManagerAndParticleBlueprint_C::ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint");

	AThreatPostProcessManagerAndParticleBlueprint_C_ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher0__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::NewEventDispatcher0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher0__DelegateSignature");

	AThreatPostProcessManagerAndParticleBlueprint_C_NewEventDispatcher0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::NewEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher__DelegateSignature");

	AThreatPostProcessManagerAndParticleBlueprint_C_NewEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
