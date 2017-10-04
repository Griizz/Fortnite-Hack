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

// Function TracerGeneric.TracerGeneric_C.GetLocalPawnForPassBy
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AFortPlayerPawn*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AFortPlayerPawn* ATracerGeneric_C::GetLocalPawnForPassBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TracerGeneric.TracerGeneric_C.GetLocalPawnForPassBy");

	ATracerGeneric_C_GetLocalPawnForPassBy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TracerGeneric.TracerGeneric_C.PlayPassBySound
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATracerGeneric_C::PlayPassBySound()
{
	static auto fn = UObject::FindObject<UFunction>("Function TracerGeneric.TracerGeneric_C.PlayPassBySound");

	ATracerGeneric_C_PlayPassBySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TracerGeneric.TracerGeneric_C.TrackPassBy
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Changed                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Pass_Distance                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATracerGeneric_C::TrackPassBy(bool* Changed, float* Pass_Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function TracerGeneric.TracerGeneric_C.TrackPassBy");

	ATracerGeneric_C_TrackPassBy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
	if (Pass_Distance != nullptr)
		*Pass_Distance = params.Pass_Distance;
}


// Function TracerGeneric.TracerGeneric_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATracerGeneric_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TracerGeneric.TracerGeneric_C.UserConstructionScript");

	ATracerGeneric_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TracerGeneric.TracerGeneric_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATracerGeneric_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TracerGeneric.TracerGeneric_C.ReceiveTick");

	ATracerGeneric_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TracerGeneric.TracerGeneric_C.OnInit
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector*                Start                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector*                End                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ATracerGeneric_C::OnInit(struct FVector* Start, struct FVector* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function TracerGeneric.TracerGeneric_C.OnInit");

	ATracerGeneric_C_OnInit_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TracerGeneric.TracerGeneric_C.ExecuteUbergraph_TracerGeneric
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATracerGeneric_C::ExecuteUbergraph_TracerGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TracerGeneric.TracerGeneric_C.ExecuteUbergraph_TracerGeneric");

	ATracerGeneric_C_ExecuteUbergraph_TracerGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
