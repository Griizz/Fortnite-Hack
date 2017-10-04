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

// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateDBNOState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsDBNO                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHitPointBar_C::UpdateDBNOState(bool bIsDBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateDBNOState");

	UAthenaHitPointBar_C_UpdateDBNOState_Params params;
	params.bIsDBNO = bIsDBNO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateHealthType
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaHitPointBar_C::UpdateHealthType()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateHealthType");

	UAthenaHitPointBar_C_UpdateHealthType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateVolatileForUpdate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaHitPointBar_C::UpdateVolatileForUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateVolatileForUpdate");

	UAthenaHitPointBar_C_UpdateVolatileForUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.Update
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaHitPointBar_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.Update");

	UAthenaHitPointBar_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.Update Delta Bar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaHitPointBar_C::Update_Delta_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.Update Delta Bar");

	UAthenaHitPointBar_C_Update_Delta_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.Initialize Bar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaHitPointBar_C::Initialize_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.Initialize Bar");

	UAthenaHitPointBar_C_Initialize_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateCurrentValueWithoutReason
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Current                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHitPointBar_C::UpdateCurrentValueWithoutReason(float Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateCurrentValueWithoutReason");

	UAthenaHitPointBar_C_UpdateCurrentValueWithoutReason_Params params;
	params.Current = Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.Update Fill Bar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaHitPointBar_C::Update_Fill_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.Update Fill Bar");

	UAthenaHitPointBar_C_Update_Fill_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateCurrentValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Current                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHitPointBar_C::UpdateCurrentValue(float Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateCurrentValue");

	UAthenaHitPointBar_C_UpdateCurrentValue_Params params;
	params.Current = Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateMaxValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Max                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHitPointBar_C::UpdateMaxValue(float Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateMaxValue");

	UAthenaHitPointBar_C_UpdateMaxValue_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHitPointBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.PreConstruct");

	UAthenaHitPointBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaHitPointBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.Construct");

	UAthenaHitPointBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHitPointBar_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.Tick");

	UAthenaHitPointBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.ExecuteUbergraph_AthenaHitPointBar
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHitPointBar_C::ExecuteUbergraph_AthenaHitPointBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.ExecuteUbergraph_AthenaHitPointBar");

	UAthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
