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

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.GetHeightEstimate
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Height                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionObjectiveProgressBarsManager_C::GetHeightEstimate(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.GetHeightEstimate");

	UMissionObjectiveProgressBarsManager_C_GetHeightEstimate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
}


// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleUpdate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortMissionState*       Objective                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionObjectiveProgressBarsManager_C::HandleUpdate(class AFortMissionState* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleUpdate");

	UMissionObjectiveProgressBarsManager_C_HandleUpdate_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleObjectiveVisibilityChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           New_Visibility                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionObjectiveProgressBarsManager_C::HandleObjectiveVisibilityChanged(class AFortObjectiveBase* Objective, bool New_Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleObjectiveVisibilityChanged");

	UMissionObjectiveProgressBarsManager_C_HandleObjectiveVisibilityChanged_Params params;
	params.Objective = Objective;
	params.New_Visibility = New_Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleObjectiveStatusChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFortObjectiveStatus           New_Status                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionObjectiveProgressBarsManager_C::HandleObjectiveStatusChanged(class AFortObjectiveBase* Objective, EFortObjectiveStatus New_Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleObjectiveStatusChanged");

	UMissionObjectiveProgressBarsManager_C_HandleObjectiveStatusChanged_Params params;
	params.Objective = Objective;
	params.New_Status = New_Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.CreateProgressBarWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionObjectiveProgressBarsManager_C::CreateProgressBarWidget(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.CreateProgressBarWidget");

	UMissionObjectiveProgressBarsManager_C_CreateProgressBarWidget_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.Setup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      TrackedObjective               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bInConfigureAsHUD              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionObjectiveProgressBarsManager_C::Setup(class AFortObjectiveBase* TrackedObjective, bool bInConfigureAsHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.Setup");

	UMissionObjectiveProgressBarsManager_C_Setup_Params params;
	params.TrackedObjective = TrackedObjective;
	params.bInConfigureAsHUD = bInConfigureAsHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.UpdateObjectiveProgressBars
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionObjectiveProgressBarsManager_C::UpdateObjectiveProgressBars()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.UpdateObjectiveProgressBars");

	UMissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
