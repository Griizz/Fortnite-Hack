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

// Function MissionAlertIndicator.MissionAlertIndicator_C.Update
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionAlertIndicator_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionAlertIndicator.MissionAlertIndicator_C.Update");

	UMissionAlertIndicator_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionAlertIndicator.MissionAlertIndicator_C.ToggleTimer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionAlertIndicator_C::ToggleTimer(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionAlertIndicator.MissionAlertIndicator_C.ToggleTimer");

	UMissionAlertIndicator_C_ToggleTimer_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionAlertIndicator.MissionAlertIndicator_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMissionAlertIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionAlertIndicator.MissionAlertIndicator_C.Construct");

	UMissionAlertIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionAlertIndicator.MissionAlertIndicator_C.ExecuteUbergraph_MissionAlertIndicator
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionAlertIndicator_C::ExecuteUbergraph_MissionAlertIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionAlertIndicator.MissionAlertIndicator_C.ExecuteUbergraph_MissionAlertIndicator");

	UMissionAlertIndicator_C_ExecuteUbergraph_MissionAlertIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
