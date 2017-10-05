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

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.GetHeightEstimate
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Height                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDefaultObjectiveContentWidget_C::GetHeightEstimate(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.GetHeightEstimate");

	UDefaultObjectiveContentWidget_C_GetHeightEstimate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
}


// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleTimerComponentUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortMissionTimerComponent* InTimerComponent               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDefaultObjectiveContentWidget_C::HandleTimerComponentUpdated(class UFortMissionTimerComponent* InTimerComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleTimerComponentUpdated");

	UDefaultObjectiveContentWidget_C_HandleTimerComponentUpdated_Params params;
	params.InTimerComponent = InTimerComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.CreateRichTextBlock
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_Parm)

void UDefaultObjectiveContentWidget_C::CreateRichTextBlock(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.CreateRichTextBlock");

	UDefaultObjectiveContentWidget_C_CreateRichTextBlock_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.GetRichTextBlock
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMissionRichText_C*      MissionRichTextBlock           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDefaultObjectiveContentWidget_C::GetRichTextBlock(class UMissionRichText_C** MissionRichTextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.GetRichTextBlock");

	UDefaultObjectiveContentWidget_C_GetRichTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MissionRichTextBlock != nullptr)
		*MissionRichTextBlock = params.MissionRichTextBlock;
}


// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDefaultObjectiveContentWidget_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.Update");

	UDefaultObjectiveContentWidget_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.Setup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bInConfigureAsHUD              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDefaultObjectiveContentWidget_C::Setup(class AFortObjectiveBase* Objective, bool bInConfigureAsHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.Setup");

	UDefaultObjectiveContentWidget_C_Setup_Params params;
	params.Objective = Objective;
	params.bInConfigureAsHUD = bInConfigureAsHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleObjectiveStatusChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFortObjectiveStatus           NewStatus                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDefaultObjectiveContentWidget_C::HandleObjectiveStatusChanged(class AFortObjectiveBase* Objective, EFortObjectiveStatus NewStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleObjectiveStatusChanged");

	UDefaultObjectiveContentWidget_C_HandleObjectiveStatusChanged_Params params;
	params.Objective = Objective;
	params.NewStatus = NewStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleObjectiveVisibilityChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bNewVisibility                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDefaultObjectiveContentWidget_C::HandleObjectiveVisibilityChanged(class AFortObjectiveBase* Objective, bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleObjectiveVisibilityChanged");

	UDefaultObjectiveContentWidget_C_HandleObjectiveVisibilityChanged_Params params;
	params.Objective = Objective;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortMissionState*       MissionState                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDefaultObjectiveContentWidget_C::HandleUpdate(class AFortMissionState* MissionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleUpdate");

	UDefaultObjectiveContentWidget_C_HandleUpdate_Params params;
	params.MissionState = MissionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.ExecuteUbergraph_DefaultObjectiveContentWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDefaultObjectiveContentWidget_C::ExecuteUbergraph_DefaultObjectiveContentWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.ExecuteUbergraph_DefaultObjectiveContentWidget");

	UDefaultObjectiveContentWidget_C_ExecuteUbergraph_DefaultObjectiveContentWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
