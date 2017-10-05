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

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.SetTargetLPFFreq
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAmbientControllerComponent_Athena_C::SetTargetLPFFreq(float Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.SetTargetLPFFreq");

	UAmbientControllerComponent_Athena_C_SetTargetLPFFreq_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.SetIndoorMixEnabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAmbientControllerComponent_Athena_C::SetIndoorMixEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.SetIndoorMixEnabled");

	UAmbientControllerComponent_Athena_C_SetIndoorMixEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Trace
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Direction                      (CPF_Parm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAmbientControllerComponent_Athena_C::Trace(const struct FVector& Start, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Trace");

	UAmbientControllerComponent_Athena_C_Trace_Params params;
	params.Start = Start;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Crossfade
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USoundBase*              NewSound                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAmbientControllerComponent_Athena_C::Crossfade(class USoundBase* NewSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Crossfade");

	UAmbientControllerComponent_Athena_C_Crossfade_Params params;
	params.NewSound = NewSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.RegisterTimeOfDayCallbacks
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAmbientControllerComponent_Athena_C::RegisterTimeOfDayCallbacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.RegisterTimeOfDayCallbacks");

	UAmbientControllerComponent_Athena_C_RegisterTimeOfDayCallbacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAmbientControllerComponent_Athena_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveBeginPlay");

	UAmbientControllerComponent_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAmbientControllerComponent_Athena_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveEndPlay");

	UAmbientControllerComponent_Athena_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.OnCheckIfSurrounded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAmbientControllerComponent_Athena_C::OnCheckIfSurrounded()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.OnCheckIfSurrounded");

	UAmbientControllerComponent_Athena_C_OnCheckIfSurrounded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Evaluate Inside State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAmbientControllerComponent_Athena_C::Evaluate_Inside_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Evaluate Inside State");

	UAmbientControllerComponent_Athena_C_Evaluate_Inside_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Day Phase Change
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortDayPhase>     CurrentDayPhase                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EFortDayPhase>     PreviousDayPhase               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAtCreation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAmbientControllerComponent_Athena_C::On_Day_Phase_Change(TEnumAsByte<EFortDayPhase> CurrentDayPhase, TEnumAsByte<EFortDayPhase> PreviousDayPhase, bool bAtCreation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Day Phase Change");

	UAmbientControllerComponent_Athena_C_On_Day_Phase_Change_Params params;
	params.CurrentDayPhase = CurrentDayPhase;
	params.PreviousDayPhase = PreviousDayPhase;
	params.bAtCreation = bAtCreation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAmbientControllerComponent_Athena_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveTick");

	UAmbientControllerComponent_Athena_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Game Phase Change
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EAthenaGamePhase               GamePhase                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAmbientControllerComponent_Athena_C::On_Game_Phase_Change(EAthenaGamePhase GamePhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Game Phase Change");

	UAmbientControllerComponent_Athena_C_On_Game_Phase_Change_Params params;
	params.GamePhase = GamePhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Game Phase Step Change
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EAthenaGamePhaseStep           GamePhaseStep                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAmbientControllerComponent_Athena_C::On_Game_Phase_Step_Change(EAthenaGamePhaseStep GamePhaseStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Game Phase Step Change");

	UAmbientControllerComponent_Athena_C_On_Game_Phase_Step_Change_Params params;
	params.GamePhaseStep = GamePhaseStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Set Storm Amb Layer Enabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAmbientControllerComponent_Athena_C::Set_Storm_Amb_Layer_Enabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Set Storm Amb Layer Enabled");

	UAmbientControllerComponent_Athena_C_Set_Storm_Amb_Layer_Enabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ExecuteUbergraph_AmbientControllerComponent_Athena
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAmbientControllerComponent_Athena_C::ExecuteUbergraph_AmbientControllerComponent_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ExecuteUbergraph_AmbientControllerComponent_Athena");

	UAmbientControllerComponent_Athena_C_ExecuteUbergraph_AmbientControllerComponent_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
