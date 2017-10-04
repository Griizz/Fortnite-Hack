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

// Function UIManager.UIManager_C.IsShowingModalsConfirmationsErrors
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShowing                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::IsShowingModalsConfirmationsErrors(bool* bShowing)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.IsShowingModalsConfirmationsErrors");

	UUIManager_C_IsShowingModalsConfirmationsErrors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShowing != nullptr)
		*bShowing = params.bShowing;
}


// Function UIManager.UIManager_C.ClearConfirmationLayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::ClearConfirmationLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.ClearConfirmationLayer");

	UUIManager_C_ClearConfirmationLayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.RemoveModalPanel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* Panel                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::RemoveModalPanel(class UCommonActivatablePanel* Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.RemoveModalPanel");

	UUIManager_C_RemoveModalPanel_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.PopModalPanel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* ActivatablePanel               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::PopModalPanel(class UCommonActivatablePanel* ActivatablePanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.PopModalPanel");

	UUIManager_C_PopModalPanel_Params params;
	params.ActivatablePanel = ActivatablePanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.HandleStateContentUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortUIStateWidget_NUI*  NewStateWidget                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::HandleStateContentUpdated(class UFortUIStateWidget_NUI* NewStateWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.HandleStateContentUpdated");

	UUIManager_C_HandleStateContentUpdated_Params params;
	params.NewStateWidget = NewStateWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.HandleControllerConnectionChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bConnected                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::HandleControllerConnectionChanged(bool bConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.HandleControllerConnectionChanged");

	UUIManager_C_HandleControllerConnectionChanged_Params params;
	params.bConnected = bConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.OnEndLatentWaitForConfirmationDialog
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortDialogExternalLatentActionHandle WaitingDialogHandle            (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUIManager_C::OnEndLatentWaitForConfirmationDialog(struct FFortDialogExternalLatentActionHandle* WaitingDialogHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.OnEndLatentWaitForConfirmationDialog");

	UUIManager_C_OnEndLatentWaitForConfirmationDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaitingDialogHandle != nullptr)
		*WaitingDialogHandle = params.WaitingDialogHandle;
}


// Function UIManager.UIManager_C.IsConsole
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUIManager_C::IsConsole()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.IsConsole");

	UUIManager_C_IsConsole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UIManager.UIManager_C.DismissWebPurchase
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::DismissWebPurchase()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.DismissWebPurchase");

	UUIManager_C_DismissWebPurchase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.DisplayWebPurchase
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 WebWidget                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 OfferId                        (CPF_Parm, CPF_ZeroConstructor)

void UUIManager_C::DisplayWebPurchase(class UWidget* WebWidget, const struct FString& OfferId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.DisplayWebPurchase");

	UUIManager_C_DisplayWebPurchase_Params params;
	params.WebWidget = WebWidget;
	params.OfferId = OfferId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.HandleDeactivatedErrorWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* DeactivatedPanel               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::HandleDeactivatedErrorWindow(class UCommonActivatablePanel* DeactivatedPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.HandleDeactivatedErrorWindow");

	UUIManager_C_HandleDeactivatedErrorWindow_Params params;
	params.DeactivatedPanel = DeactivatedPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.ShowErrorInErrorWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortErrorInfo          ErrorInfo                      (CPF_Parm)

void UUIManager_C::ShowErrorInErrorWindow(const struct FFortErrorInfo& ErrorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.ShowErrorInErrorWindow");

	UUIManager_C_ShowErrorInErrorWindow_Params params;
	params.ErrorInfo = ErrorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.HandleDeactivatedPanelModalLayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* DeactivatedPanel               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::HandleDeactivatedPanelModalLayer(class UCommonActivatablePanel* DeactivatedPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.HandleDeactivatedPanelModalLayer");

	UUIManager_C_HandleDeactivatedPanelModalLayer_Params params;
	params.DeactivatedPanel = DeactivatedPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.AddActivatablePanelToModalLayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* ActivatablePanel               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::AddActivatablePanelToModalLayer(class UCommonActivatablePanel* ActivatablePanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.AddActivatablePanelToModalLayer");

	UUIManager_C_AddActivatablePanelToModalLayer_Params params;
	params.ActivatablePanel = ActivatablePanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.Initialize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.Initialize");

	UUIManager_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.QueueConfirmation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortDialogDescription_NUI ConfirmationDescription        (CPF_Parm)

void UUIManager_C::QueueConfirmation(const struct FFortDialogDescription_NUI& ConfirmationDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.QueueConfirmation");

	UUIManager_C_QueueConfirmation_Params params;
	params.ConfirmationDescription = ConfirmationDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.ShowNextConfirmation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::ShowNextConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.ShowNextConfirmation");

	UUIManager_C_ShowNextConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.HandleDeactivatedPanelConfirmationLayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* DeactivatedPanel               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::HandleDeactivatedPanelConfirmationLayer(class UCommonActivatablePanel* DeactivatedPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.HandleDeactivatedPanelConfirmationLayer");

	UUIManager_C_HandleDeactivatedPanelConfirmationLayer_Params params;
	params.DeactivatedPanel = DeactivatedPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.HandleModalContentCleared
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::HandleModalContentCleared()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.HandleModalContentCleared");

	UUIManager_C_HandleModalContentCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.IsStateContentChildShowing
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUIManager_C::IsStateContentChildShowing()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.IsStateContentChildShowing");

	UUIManager_C_IsStateContentChildShowing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UIManager.UIManager_C.BindDelegates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.BindDelegates");

	UUIManager_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.ShowNextModalWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::ShowNextModalWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.ShowNextModalWidget");

	UUIManager_C_ShowNextModalWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.QueueModalPanel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* ActivatablePanel               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::QueueModalPanel(class UCommonActivatablePanel* ActivatablePanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.QueueModalPanel");

	UUIManager_C_QueueModalPanel_Params params;
	params.ActivatablePanel = ActivatablePanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.PopCurrentModal
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::PopCurrentModal()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.PopCurrentModal");

	UUIManager_C_PopCurrentModal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.ClearLayers
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::ClearLayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.ClearLayers");

	UUIManager_C_ClearLayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.DisplayStateContent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bDisplay                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::DisplayStateContent(bool* bDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.DisplayStateContent");

	UUIManager_C_DisplayStateContent_Params params;
	params.bDisplay = bDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.OnStateStarted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUIManager_C::OnStateStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.OnStateStarted");

	UUIManager_C_OnStateStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUIManager_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.Destruct");

	UUIManager_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.KillConfirmation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUIManager_C::KillConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.KillConfirmation");

	UUIManager_C_KillConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.DisplayErrorDialog
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortErrorInfo*         Info                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUIManager_C::DisplayErrorDialog(struct FFortErrorInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.DisplayErrorDialog");

	UUIManager_C_DisplayErrorDialog_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.DebugToggleInvalidationPanel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::DebugToggleInvalidationPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.DebugToggleInvalidationPanel");

	UUIManager_C_DebugToggleInvalidationPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUIManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.Construct");

	UUIManager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.OnShowConfirmation_NUI
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortDialogDescription_NUI* Description                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUIManager_C::OnShowConfirmation_NUI(struct FFortDialogDescription_NUI* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.OnShowConfirmation_NUI");

	UUIManager_C_OnShowConfirmation_NUI_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.UpdateStateWidgetContent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UFortUIStateWidget_NUI** StateWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::UpdateStateWidgetContent(class UFortUIStateWidget_NUI** StateWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.UpdateStateWidgetContent");

	UUIManager_C_UpdateStateWidgetContent_Params params;
	params.StateWidget = StateWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.QueueActivatablePanelIntoModalLayer
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel** Panel                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::QueueActivatablePanelIntoModalLayer(class UCommonActivatablePanel** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.QueueActivatablePanelIntoModalLayer");

	UUIManager_C_QueueActivatablePanelIntoModalLayer_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.OnStateEnded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUIManager_C::OnStateEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.OnStateEnded");

	UUIManager_C_OnStateEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.PopActivatablePanelInModalLayer
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel** Panel                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::PopActivatablePanelInModalLayer(class UCommonActivatablePanel** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.PopActivatablePanelInModalLayer");

	UUIManager_C_PopActivatablePanelInModalLayer_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.CloseConfirmationWindow
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::CloseConfirmationWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.CloseConfirmationWindow");

	UUIManager_C_CloseConfirmationWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.CloseErrorWindow
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUIManager_C::CloseErrorWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.CloseErrorWindow");

	UUIManager_C_CloseErrorWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIManager.UIManager_C.ExecuteUbergraph_UIManager
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIManager_C::ExecuteUbergraph_UIManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.ExecuteUbergraph_UIManager");

	UUIManager_C_ExecuteUbergraph_UIManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
