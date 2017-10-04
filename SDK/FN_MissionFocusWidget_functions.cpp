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

// Function MissionFocusWidget.MissionFocusWidget_C.UpdateVisibility
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionFocusWidget_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionFocusWidget.MissionFocusWidget_C.UpdateVisibility");

	UMissionFocusWidget_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionFocusWidget.MissionFocusWidget_C.HandleFocusedMission
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortMission*            FocusedMission                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionFocusWidget_C::HandleFocusedMission(class AFortMission* FocusedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionFocusWidget.MissionFocusWidget_C.HandleFocusedMission");

	UMissionFocusWidget_C_HandleFocusedMission_Params params;
	params.FocusedMission = FocusedMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionFocusWidget.MissionFocusWidget_C.HandleTimerComponentChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortMissionTimerComponent* TimerComponent                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionFocusWidget_C::HandleTimerComponentChanged(class UFortMissionTimerComponent* TimerComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionFocusWidget.MissionFocusWidget_C.HandleTimerComponentChanged");

	UMissionFocusWidget_C_HandleTimerComponentChanged_Params params;
	params.TimerComponent = TimerComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionFocusWidget.MissionFocusWidget_C.UpdateTimer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionFocusWidget_C::UpdateTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionFocusWidget.MissionFocusWidget_C.UpdateTimer");

	UMissionFocusWidget_C_UpdateTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionFocusWidget.MissionFocusWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMissionFocusWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionFocusWidget.MissionFocusWidget_C.Construct");

	UMissionFocusWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionFocusWidget.MissionFocusWidget_C.ExecuteUbergraph_MissionFocusWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionFocusWidget_C::ExecuteUbergraph_MissionFocusWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionFocusWidget.MissionFocusWidget_C.ExecuteUbergraph_MissionFocusWidget");

	UMissionFocusWidget_C_ExecuteUbergraph_MissionFocusWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
