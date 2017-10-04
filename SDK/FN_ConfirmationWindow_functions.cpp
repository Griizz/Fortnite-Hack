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

// Function ConfirmationWindow.ConfirmationWindow_C.TriggerCameraMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConfirmationWindow_C::TriggerCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.TriggerCameraMode");

	UConfirmationWindow_C_TriggerCameraMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.TriggerCursorMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConfirmationWindow_C::TriggerCursorMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.TriggerCursorMode");

	UConfirmationWindow_C_TriggerCursorMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.CloseConfirmation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConfirmationWindow_C::CloseConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.CloseConfirmation");

	UConfirmationWindow_C_CloseConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.CenterFirstButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConfirmationWindow_C::CenterFirstButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.CenterFirstButton");

	UConfirmationWindow_C_CenterFirstButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.SetupAdditionalContent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConfirmationWindow_C::SetupAdditionalContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.SetupAdditionalContent");

	UConfirmationWindow_C_SetupAdditionalContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.SetupLeftAdditionalContent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConfirmationWindow_C::SetupLeftAdditionalContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.SetupLeftAdditionalContent");

	UConfirmationWindow_C_SetupLeftAdditionalContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.SetupNonInteractiveContent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConfirmationWindow_C::SetupNonInteractiveContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.SetupNonInteractiveContent");

	UConfirmationWindow_C_SetupNonInteractiveContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.ClickButtonIfBot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConfirmationWindow_C::ClickButtonIfBot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.ClickButtonIfBot");

	UConfirmationWindow_C_ClickButtonIfBot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.OnWaitForExternalLatentAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortDialogExternalLatentActionHandle LatentActionHandle             (CPF_Parm)

void UConfirmationWindow_C::OnWaitForExternalLatentAction(const struct FFortDialogExternalLatentActionHandle& LatentActionHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.OnWaitForExternalLatentAction");

	UConfirmationWindow_C_OnWaitForExternalLatentAction_Params params;
	params.LatentActionHandle = LatentActionHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.StopWaitingForLatentAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConfirmationWindow_C::StopWaitingForLatentAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.StopWaitingForLatentAction");

	UConfirmationWindow_C_StopWaitingForLatentAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.GetLatentActionWaitHandle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FFortDialogExternalLatentActionHandle LatentActionHandle             (CPF_Parm, CPF_OutParm)

void UConfirmationWindow_C::GetLatentActionWaitHandle(struct FFortDialogExternalLatentActionHandle* LatentActionHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.GetLatentActionWaitHandle");

	UConfirmationWindow_C_GetLatentActionWaitHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LatentActionHandle != nullptr)
		*LatentActionHandle = params.LatentActionHandle;
}


// Function ConfirmationWindow.ConfirmationWindow_C.Set Hover Description
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button_to_Hover                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConfirmationWindow_C::Set_Hover_Description(class UCommonButton* Button_to_Hover)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.Set Hover Description");

	UConfirmationWindow_C_Set_Hover_Description_Params params;
	params.Button_to_Hover = Button_to_Hover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.SetupLeft
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConfirmationWindow_C::SetupLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.SetupLeft");

	UConfirmationWindow_C_SetupLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.SetupTitleAndDescription
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConfirmationWindow_C::SetupTitleAndDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.SetupTitleAndDescription");

	UConfirmationWindow_C_SetupTitleAndDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.SetupMainIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConfirmationWindow_C::SetupMainIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.SetupMainIcon");

	UConfirmationWindow_C_SetupMainIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.Deinitialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConfirmationWindow_C::Deinitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.Deinitialize");

	UConfirmationWindow_C_Deinitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.KillCurrentConfirmation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConfirmationWindow_C::KillCurrentConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.KillCurrentConfirmation");

	UConfirmationWindow_C_KillCurrentConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.GetResultName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UIconTextButton_C*       ConfirmButton                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ResultName                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConfirmationWindow_C::GetResultName(class UIconTextButton_C* ConfirmButton, struct FName* ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.GetResultName");

	UConfirmationWindow_C_GetResultName_Params params;
	params.ConfirmButton = ConfirmButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultName != nullptr)
		*ResultName = params.ResultName;
}


// Function ConfirmationWindow.ConfirmationWindow_C.GetInputAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           UseInputAction                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDataTableRowHandle     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FDataTableRowHandle UConfirmationWindow_C::GetInputAction(const struct FName& RowName, bool UseInputAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.GetInputAction");

	UConfirmationWindow_C_GetInputAction_Params params;
	params.RowName = RowName;
	params.UseInputAction = UseInputAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConfirmationWindow.ConfirmationWindow_C.AddSingleConfirmButton
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FConfirmationDialogAction ConfirmDialogAction            (CPF_Parm)
// bool                           UseInputAction                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConfirmationWindow_C::AddSingleConfirmButton(const struct FConfirmationDialogAction& ConfirmDialogAction, bool UseInputAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.AddSingleConfirmButton");

	UConfirmationWindow_C_AddSingleConfirmButton_Params params;
	params.ConfirmDialogAction = ConfirmDialogAction;
	params.UseInputAction = UseInputAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.HasAnyConfirmAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UConfirmationWindow_C::HasAnyConfirmAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.HasAnyConfirmAction");

	UConfirmationWindow_C_HasAnyConfirmAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConfirmationWindow.ConfirmationWindow_C.ConfirmActionClicked
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConfirmationWindow_C::ConfirmActionClicked(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.ConfirmActionClicked");

	UConfirmationWindow_C_ConfirmActionClicked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.IsSimpleConfirmAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UConfirmationWindow_C::IsSimpleConfirmAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.IsSimpleConfirmAction");

	UConfirmationWindow_C_IsSimpleConfirmAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConfirmationWindow.ConfirmationWindow_C.DeclineActionClicked
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConfirmationWindow_C::DeclineActionClicked(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.DeclineActionClicked");

	UConfirmationWindow_C_DeclineActionClicked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.AddDeclineButton
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConfirmationWindow_C::AddDeclineButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.AddDeclineButton");

	UConfirmationWindow_C_AddDeclineButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.AddConfirmButtons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConfirmationWindow_C::AddConfirmButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.AddConfirmButtons");

	UConfirmationWindow_C_AddConfirmButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConfirmationWindow_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.Initialize");

	UConfirmationWindow_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.SetDescription
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortDialogDescription_NUI NewDescription                 (CPF_Parm)

void UConfirmationWindow_C::SetDescription(const struct FFortDialogDescription_NUI& NewDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.SetDescription");

	UConfirmationWindow_C_SetDescription_Params params;
	params.NewDescription = NewDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UConfirmationWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.Construct");

	UConfirmationWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.HandleIntroEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConfirmationWindow_C::HandleIntroEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.HandleIntroEnded");

	UConfirmationWindow_C_HandleIntroEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.HandleOutroEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConfirmationWindow_C::HandleOutroEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.HandleOutroEnded");

	UConfirmationWindow_C_HandleOutroEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.OnBeginIntro
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UConfirmationWindow_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.OnBeginIntro");

	UConfirmationWindow_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.OnBeginOutro
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UConfirmationWindow_C::OnBeginOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.OnBeginOutro");

	UConfirmationWindow_C_OnBeginOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConfirmationWindow_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.PreConstruct");

	UConfirmationWindow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UConfirmationWindow_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.OnActivated");

	UConfirmationWindow_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UConfirmationWindow_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.Destruct");

	UConfirmationWindow_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConfirmationWindow_C::ExecuteUbergraph_ConfirmationWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow");

	UConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
