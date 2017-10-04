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

// Function HitPointBar.HitPointBar_C.UpdateVolatileForUpdate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitPointBar_C::UpdateVolatileForUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.UpdateVolatileForUpdate");

	UHitPointBar_C_UpdateVolatileForUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.Update
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitPointBar_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.Update");

	UHitPointBar_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.Update Delta Bar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitPointBar_C::Update_Delta_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.Update Delta Bar");

	UHitPointBar_C_Update_Delta_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.Initialize Bar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitPointBar_C::Initialize_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.Initialize Bar");

	UHitPointBar_C_Initialize_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.UpdateCurrentValueWithoutReason
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Current                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitPointBar_C::UpdateCurrentValueWithoutReason(float Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.UpdateCurrentValueWithoutReason");

	UHitPointBar_C_UpdateCurrentValueWithoutReason_Params params;
	params.Current = Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.Update Fill Bar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitPointBar_C::Update_Fill_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.Update Fill Bar");

	UHitPointBar_C_Update_Fill_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.UpdateCurrentValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Current                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitPointBar_C::UpdateCurrentValue(float Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.UpdateCurrentValue");

	UHitPointBar_C_UpdateCurrentValue_Params params;
	params.Current = Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.UpdateMaxValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Max                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitPointBar_C::UpdateMaxValue(float Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.UpdateMaxValue");

	UHitPointBar_C_UpdateMaxValue_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitPointBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.PreConstruct");

	UHitPointBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHitPointBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.Construct");

	UHitPointBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitPointBar_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.Tick");

	UHitPointBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.ExecuteUbergraph_HitPointBar
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitPointBar_C::ExecuteUbergraph_HitPointBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.ExecuteUbergraph_HitPointBar");

	UHitPointBar_C_ExecuteUbergraph_HitPointBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
