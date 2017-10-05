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

// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateDBNOState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDBNO                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaViewTargetHitPointBar_C::UpdateDBNOState(bool IsDBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateDBNOState");

	UAthenaViewTargetHitPointBar_C_UpdateDBNOState_Params params;
	params.IsDBNO = IsDBNO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateVolatileForUpdate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaViewTargetHitPointBar_C::UpdateVolatileForUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateVolatileForUpdate");

	UAthenaViewTargetHitPointBar_C_UpdateVolatileForUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Update
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaViewTargetHitPointBar_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Update");

	UAthenaViewTargetHitPointBar_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Update Delta Bar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaViewTargetHitPointBar_C::Update_Delta_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Update Delta Bar");

	UAthenaViewTargetHitPointBar_C_Update_Delta_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Initialize Bar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaViewTargetHitPointBar_C::Initialize_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Initialize Bar");

	UAthenaViewTargetHitPointBar_C_Initialize_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateCurrentValueWithoutReason
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Current                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaViewTargetHitPointBar_C::UpdateCurrentValueWithoutReason(float Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateCurrentValueWithoutReason");

	UAthenaViewTargetHitPointBar_C_UpdateCurrentValueWithoutReason_Params params;
	params.Current = Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Update Fill Bar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaViewTargetHitPointBar_C::Update_Fill_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Update Fill Bar");

	UAthenaViewTargetHitPointBar_C_Update_Fill_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateCurrentValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Current                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFortHitPointModificationReason Reason                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaViewTargetHitPointBar_C::UpdateCurrentValue(float Current, EFortHitPointModificationReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateCurrentValue");

	UAthenaViewTargetHitPointBar_C_UpdateCurrentValue_Params params;
	params.Current = Current;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateMaxValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Max                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaViewTargetHitPointBar_C::UpdateMaxValue(float Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.UpdateMaxValue");

	UAthenaViewTargetHitPointBar_C_UpdateMaxValue_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaViewTargetHitPointBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Construct");

	UAthenaViewTargetHitPointBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaViewTargetHitPointBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.PreConstruct");

	UAthenaViewTargetHitPointBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaViewTargetHitPointBar_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.Tick");

	UAthenaViewTargetHitPointBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.ExecuteUbergraph_AthenaViewTargetHitPointBar
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaViewTargetHitPointBar_C::ExecuteUbergraph_AthenaViewTargetHitPointBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaViewTargetHitPointBar.AthenaViewTargetHitPointBar_C.ExecuteUbergraph_AthenaViewTargetHitPointBar");

	UAthenaViewTargetHitPointBar_C_ExecuteUbergraph_AthenaViewTargetHitPointBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
