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

// Function CommonUI.CommonUserWidget.SetConsumePointerInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInConsumePointerInput         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonUserWidget::SetConsumePointerInput(bool bInConsumePointerInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonUserWidget.SetConsumePointerInput");

	UCommonUserWidget_SetConsumePointerInput_Params params;
	params.bInConsumePointerInput = bInConsumePointerInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.SetTabEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bEnable                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonTabListWidget::SetTabEnabled(const struct FName& TabNameID, bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.SetTabEnabled");

	UCommonTabListWidget_SetTabEnabled_Params params;
	params.TabNameID = TabNameID;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.SetListeningForInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bShouldListen                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonTabListWidget::SetListeningForInput(bool bShouldListen)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.SetListeningForInput");

	UCommonTabListWidget_SetListeningForInput_Params params;
	params.bShouldListen = bShouldListen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.SetLinkedSwitcher
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCommonWidgetSwitcher*   CommonSwitcher                 (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonTabListWidget::SetLinkedSwitcher(class UCommonWidgetSwitcher* CommonSwitcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.SetLinkedSwitcher");

	UCommonTabListWidget_SetLinkedSwitcher_Params params;
	params.CommonSwitcher = CommonSwitcher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.SelectTabByID
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bSuppressClickFeedback         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonTabListWidget::SelectTabByID(const struct FName& TabNameID, bool bSuppressClickFeedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.SelectTabByID");

	UCommonTabListWidget_SelectTabByID_Params params;
	params.TabNameID = TabNameID;
	params.bSuppressClickFeedback = bSuppressClickFeedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidget.RemoveTab
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonTabListWidget::RemoveTab(const struct FName& TabNameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.RemoveTab");

	UCommonTabListWidget_RemoveTab_Params params;
	params.TabNameID = TabNameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidget.RemoveAllTabs
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonTabListWidget::RemoveAllTabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.RemoveAllTabs");

	UCommonTabListWidget_RemoveAllTabs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.RegisterTab
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  ButtonWidgetType               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidget*                 ContentWidget                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonTabListWidget::RegisterTab(const struct FName& TabNameID, class UClass* ButtonWidgetType, class UWidget* ContentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.RegisterTab");

	UCommonTabListWidget_RegisterTab_Params params;
	params.TabNameID = TabNameID;
	params.ButtonWidgetType = ButtonWidgetType;
	params.ContentWidget = ContentWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction CommonUI.CommonTabListWidget.OnTabSelected__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonTabListWidget::OnTabSelected__DelegateSignature(const struct FName& TabId)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonTabListWidget.OnTabSelected__DelegateSignature");

	UCommonTabListWidget_OnTabSelected__DelegateSignature_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonTabListWidget.OnTabButtonRemoved__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonButton*           TabButton                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonTabListWidget::OnTabButtonRemoved__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonTabListWidget.OnTabButtonRemoved__DelegateSignature");

	UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonTabListWidget.OnTabButtonCreated__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonButton*           TabButton                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonTabListWidget::OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonTabListWidget.OnTabButtonCreated__DelegateSignature");

	UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.HandleTabRemoved
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabNameID                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonButton*           TabButton                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonTabListWidget::HandleTabRemoved(const struct FName& TabNameID, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.HandleTabRemoved");

	UCommonTabListWidget_HandleTabRemoved_Params params;
	params.TabNameID = TabNameID;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.HandleTabCreated
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabNameID                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonButton*           TabButton                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonTabListWidget::HandleTabCreated(const struct FName& TabNameID, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.HandleTabCreated");

	UCommonTabListWidget_HandleTabCreated_Params params;
	params.TabNameID = TabNameID;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.HandleTabButtonSelected
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UCommonButton*           SelectedTabButton              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            ButtonIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonTabListWidget::HandleTabButtonSelected(class UCommonButton* SelectedTabButton, int ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.HandleTabButtonSelected");

	UCommonTabListWidget_HandleTabButtonSelected_Params params;
	params.SelectedTabButton = SelectedTabButton;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.HandlePreviousTabInputAction
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasOutParms)
// Parameters:
// bool                           bPassThrough                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonTabListWidget::HandlePreviousTabInputAction(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.HandlePreviousTabInputAction");

	UCommonTabListWidget_HandlePreviousTabInputAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function CommonUI.CommonTabListWidget.HandlePreLinkedSwitcherChanged_BP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCommonTabListWidget::HandlePreLinkedSwitcherChanged_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.HandlePreLinkedSwitcherChanged_BP");

	UCommonTabListWidget_HandlePreLinkedSwitcherChanged_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.HandlePostLinkedSwitcherChanged_BP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCommonTabListWidget::HandlePostLinkedSwitcherChanged_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.HandlePostLinkedSwitcherChanged_BP");

	UCommonTabListWidget_HandlePostLinkedSwitcherChanged_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.HandleNextTabInputAction
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasOutParms)
// Parameters:
// bool                           bPassThrough                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonTabListWidget::HandleNextTabInputAction(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.HandleNextTabInputAction");

	UCommonTabListWidget_HandleNextTabInputAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function CommonUI.CommonTabListWidget.GetTabCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCommonTabListWidget::GetTabCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.GetTabCount");

	UCommonTabListWidget_GetTabCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidget.GetTabButtonByID
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonButton*           ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UCommonButton* UCommonTabListWidget::GetTabButtonByID(const struct FName& TabNameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.GetTabButtonByID");

	UCommonTabListWidget_GetTabButtonByID_Params params;
	params.TabNameID = TabNameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidget.GetLinkedSwitcher
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UCommonWidgetSwitcher*   ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UCommonWidgetSwitcher* UCommonTabListWidget::GetLinkedSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.GetLinkedSwitcher");

	UCommonTabListWidget_GetLinkedSwitcher_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidget.GetActiveTab
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UCommonTabListWidget::GetActiveTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.GetActiveTab");

	UCommonTabListWidget_GetActiveTab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidget.DisableTabWithReason
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Reason                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UCommonTabListWidget::DisableTabWithReason(const struct FName& TabNameID, const struct FText& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.DisableTabWithReason");

	UCommonTabListWidget_DisableTabWithReason_Params params;
	params.TabNameID = TabNameID;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.SetInputActionHandlerWithProgress
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (CPF_Parm)
// struct FScriptDelegate         CommitedEvent                  (CPF_Parm, CPF_ZeroConstructor)
// struct FScriptDelegate         ProgressEvent                  (CPF_Parm, CPF_ZeroConstructor)

void UCommonActivatablePanel::SetInputActionHandlerWithProgress(const struct FDataTableRowHandle& InputActionRow, const struct FScriptDelegate& CommitedEvent, const struct FScriptDelegate& ProgressEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.SetInputActionHandlerWithProgress");

	UCommonActivatablePanel_SetInputActionHandlerWithProgress_Params params;
	params.InputActionRow = InputActionRow;
	params.CommitedEvent = CommitedEvent;
	params.ProgressEvent = ProgressEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.SetInputActionHandler
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (CPF_Parm)
// struct FScriptDelegate         CommitedEvent                  (CPF_Parm, CPF_ZeroConstructor)

void UCommonActivatablePanel::SetInputActionHandler(const struct FDataTableRowHandle& InputActionRow, const struct FScriptDelegate& CommitedEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.SetInputActionHandler");

	UCommonActivatablePanel_SetInputActionHandler_Params params;
	params.InputActionRow = InputActionRow;
	params.CommitedEvent = CommitedEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateWithDisabledCommitEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UDataTable*              DataTable                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FScriptDelegate         DisabledCommitEvent            (CPF_Parm, CPF_ZeroConstructor)

void UCommonActivatablePanel::SetActionHandlerStateWithDisabledCommitEvent(class UDataTable* DataTable, const struct FName& RowName, const struct FScriptDelegate& DisabledCommitEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.SetActionHandlerStateWithDisabledCommitEvent");

	UCommonActivatablePanel_SetActionHandlerStateWithDisabledCommitEvent_Params params;
	params.DataTable = DataTable;
	params.RowName = RowName;
	params.DisabledCommitEvent = DisabledCommitEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandleWithDisabledCommitEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (CPF_Parm)
// struct FScriptDelegate         DisabledCommitEvent            (CPF_Parm, CPF_ZeroConstructor)

void UCommonActivatablePanel::SetActionHandlerStateFromHandleWithDisabledCommitEvent(const struct FDataTableRowHandle& InputActionRow, const struct FScriptDelegate& DisabledCommitEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandleWithDisabledCommitEvent");

	UCommonActivatablePanel_SetActionHandlerStateFromHandleWithDisabledCommitEvent_Params params;
	params.InputActionRow = InputActionRow;
	params.DisabledCommitEvent = DisabledCommitEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (CPF_Parm)

void UCommonActivatablePanel::SetActionHandlerStateFromHandle(const struct FDataTableRowHandle& InputActionRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandle");

	UCommonActivatablePanel_SetActionHandlerStateFromHandle_Params params;
	params.InputActionRow = InputActionRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.SetActionHandlerState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UDataTable*              DataTable                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonActivatablePanel::SetActionHandlerState(class UDataTable* DataTable, const struct FName& RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.SetActionHandlerState");

	UCommonActivatablePanel_SetActionHandlerState_Params params;
	params.DataTable = DataTable;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.RemoveInputActionHandler
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (CPF_Parm)

void UCommonActivatablePanel::RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.RemoveInputActionHandler");

	UCommonActivatablePanel_RemoveInputActionHandler_Params params;
	params.InputActionRow = InputActionRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.RemoveAllInputActionHandlers
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonActivatablePanel::RemoveAllInputActionHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.RemoveAllInputActionHandlers");

	UCommonActivatablePanel_RemoveAllInputActionHandlers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.PopPanel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonActivatablePanel::PopPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.PopPanel");

	UCommonActivatablePanel_PopPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.OnDeactivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCommonActivatablePanel::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.OnDeactivated");

	UCommonActivatablePanel_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.OnBeginOutro
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCommonActivatablePanel::OnBeginOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.OnBeginOutro");

	UCommonActivatablePanel_OnBeginOutro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.OnBeginIntro
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCommonActivatablePanel::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.OnBeginIntro");

	UCommonActivatablePanel_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCommonActivatablePanel::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.OnActivated");

	UCommonActivatablePanel_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.IsIntroed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonActivatablePanel::IsIntroed()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.IsIntroed");

	UCommonActivatablePanel_IsIntroed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatablePanel.IsActivated
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonActivatablePanel::IsActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.IsActivated");

	UCommonActivatablePanel_IsActivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatablePanel.HasInputActionHandler
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonActivatablePanel::HasInputActionHandler(const struct FDataTableRowHandle& InputActionRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.HasInputActionHandler");

	UCommonActivatablePanel_HasInputActionHandler_Params params;
	params.InputActionRow = InputActionRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatablePanel.GetInputActions
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FCommonInputActionHandlerData> InputActionDataRows            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonActivatablePanel::GetInputActions(TArray<struct FCommonInputActionHandlerData>* InputActionDataRows)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.GetInputActions");

	UCommonActivatablePanel_GetInputActions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputActionDataRows != nullptr)
		*InputActionDataRows = params.InputActionDataRows;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatablePanel.EndOutro
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonActivatablePanel::EndOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.EndOutro");

	UCommonActivatablePanel_EndOutro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.EndIntro
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonActivatablePanel::EndIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.EndIntro");

	UCommonActivatablePanel_EndIntro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.BeginOutro
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonActivatablePanel::BeginOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.BeginOutro");

	UCommonActivatablePanel_BeginOutro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.BeginIntro
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonActivatablePanel::BeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.BeginIntro");

	UCommonActivatablePanel_BeginIntro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.AddInputActionNoHandler
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UDataTable*              DataTable                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonActivatablePanel::AddInputActionNoHandler(class UDataTable* DataTable, const struct FName& RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.AddInputActionNoHandler");

	UCommonActivatablePanel_AddInputActionNoHandler_Params params;
	params.DataTable = DataTable;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.AddInputActionHandlerWithProgress
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UDataTable*              DataTable                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FScriptDelegate         CommitedEvent                  (CPF_Parm, CPF_ZeroConstructor)
// struct FScriptDelegate         ProgressEvent                  (CPF_Parm, CPF_ZeroConstructor)

void UCommonActivatablePanel::AddInputActionHandlerWithProgress(class UDataTable* DataTable, const struct FName& RowName, const struct FScriptDelegate& CommitedEvent, const struct FScriptDelegate& ProgressEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.AddInputActionHandlerWithProgress");

	UCommonActivatablePanel_AddInputActionHandlerWithProgress_Params params;
	params.DataTable = DataTable;
	params.RowName = RowName;
	params.CommitedEvent = CommitedEvent;
	params.ProgressEvent = ProgressEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.AddInputActionHandler
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UDataTable*              DataTable                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FScriptDelegate         CommitedEvent                  (CPF_Parm, CPF_ZeroConstructor)

void UCommonActivatablePanel::AddInputActionHandler(class UDataTable* DataTable, const struct FName& RowName, const struct FScriptDelegate& CommitedEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.AddInputActionHandler");

	UCommonActivatablePanel_AddInputActionHandler_Params params;
	params.DataTable = DataTable;
	params.RowName = RowName;
	params.CommitedEvent = CommitedEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetTriggeredInputAction
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UCommonActivatablePanel* OldPanel                       (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonButton::SetTriggeredInputAction(const struct FDataTableRowHandle& InputActionRow, class UCommonActivatablePanel* OldPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetTriggeredInputAction");

	UCommonButton_SetTriggeredInputAction_Params params;
	params.InputActionRow = InputActionRow;
	params.OldPanel = OldPanel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetStyle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  InStyle                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonButton::SetStyle(class UClass* InStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetStyle");

	UCommonButton_SetStyle_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetShouldSelectUponReceivingFocus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInShouldSelectUponReceivingFocus (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonButton::SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetShouldSelectUponReceivingFocus");

	UCommonButton_SetShouldSelectUponReceivingFocus_Params params;
	params.bInShouldSelectUponReceivingFocus = bInShouldSelectUponReceivingFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetSelectedInternal
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInSelected                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAllowSound                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bBroadcast                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonButton::SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetSelectedInternal");

	UCommonButton_SetSelectedInternal_Params params;
	params.bInSelected = bInSelected;
	params.bAllowSound = bAllowSound;
	params.bBroadcast = bBroadcast;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetMinDimensions
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InMinWidth                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InMinHeight                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonButton::SetMinDimensions(int InMinWidth, int InMinHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetMinDimensions");

	UCommonButton_SetMinDimensions_Params params;
	params.InMinWidth = InMinWidth;
	params.InMinHeight = InMinHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetIsToggleable
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInIsToggleable                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonButton::SetIsToggleable(bool bInIsToggleable)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetIsToggleable");

	UCommonButton_SetIsToggleable_Params params;
	params.bInIsToggleable = bInIsToggleable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetIsSelected
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InSelected                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bGiveClickFeedback             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonButton::SetIsSelected(bool InSelected, bool bGiveClickFeedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetIsSelected");

	UCommonButton_SetIsSelected_Params params;
	params.InSelected = InSelected;
	params.bGiveClickFeedback = bGiveClickFeedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetIsSelectable
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInIsSelectable                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonButton::SetIsSelectable(bool bInIsSelectable)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetIsSelectable");

	UCommonButton_SetIsSelectable_Params params;
	params.bInIsSelectable = bInIsSelectable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetIsInteractionEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInIsInteractionEnabled        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonButton::SetIsInteractionEnabled(bool bInIsInteractionEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetIsInteractionEnabled");

	UCommonButton_SetIsInteractionEnabled_Params params;
	params.bInIsInteractionEnabled = bInIsInteractionEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetInputActionProgressMaterial
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSlateBrush             InProgressMaterialBrush        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   InProgressMaterialParam        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UCommonButton::SetInputActionProgressMaterial(const struct FSlateBrush& InProgressMaterialBrush, const struct FName& InProgressMaterialParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetInputActionProgressMaterial");

	UCommonButton_SetInputActionProgressMaterial_Params params;
	params.InProgressMaterialBrush = InProgressMaterialBrush;
	params.InProgressMaterialParam = InProgressMaterialParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.OnUnhovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCommonButton::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.OnUnhovered");

	UCommonButton_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.OnTriggeredInputActionChanged
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     NewTriggeredAction             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UCommonButton::OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.OnTriggeredInputActionChanged");

	UCommonButton_OnTriggeredInputActionChanged_Params params;
	params.NewTriggeredAction = NewTriggeredAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.OnSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCommonButton::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.OnSelected");

	UCommonButton_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.OnInputMethodChanged
// (FUNC_Native, FUNC_Protected)
// Parameters:
// bool                           bUsingGamepad                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonButton::OnInputMethodChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.OnInputMethodChanged");

	UCommonButton_OnInputMethodChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.OnHovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCommonButton::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.OnHovered");

	UCommonButton_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.OnEnabled
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCommonButton::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.OnEnabled");

	UCommonButton_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.OnDoubleClicked
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCommonButton::OnDoubleClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.OnDoubleClicked");

	UCommonButton_OnDoubleClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.OnDisabled
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCommonButton::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.OnDisabled");

	UCommonButton_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.OnDeselected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCommonButton::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.OnDeselected");

	UCommonButton_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.OnCurrentTextStyleChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCommonButton::OnCurrentTextStyleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.OnCurrentTextStyleChanged");

	UCommonButton_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.OnClicked
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCommonButton::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.OnClicked");

	UCommonButton_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.OnActionProgress
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          HeldPercent                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonButton::OnActionProgress(float HeldPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.OnActionProgress");

	UCommonButton_OnActionProgress_Params params;
	params.HeldPercent = HeldPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.OnActionComplete
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCommonButton::OnActionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.OnActionComplete");

	UCommonButton_OnActionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.NativeOnActionProgress
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// float                          HeldPercent                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonButton::NativeOnActionProgress(float HeldPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.NativeOnActionProgress");

	UCommonButton_NativeOnActionProgress_Params params;
	params.HeldPercent = HeldPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.NativeOnActionComplete
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UCommonButton::NativeOnActionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.NativeOnActionComplete");

	UCommonButton_NativeOnActionComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.IsPressed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonButton::IsPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.IsPressed");

	UCommonButton_IsPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.IsInteractionEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonButton::IsInteractionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.IsInteractionEnabled");

	UCommonButton_IsInteractionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.IsHovered
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonButton::IsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.IsHovered");

	UCommonButton_IsHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.HandleTriggeringActionCommited
// (FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// bool                           bPassThrough                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonButton::HandleTriggeringActionCommited(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.HandleTriggeringActionCommited");

	UCommonButton_HandleTriggeringActionCommited_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function CommonUI.CommonButton.HandleFocusReceived
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UCommonButton::HandleFocusReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.HandleFocusReceived");

	UCommonButton_HandleFocusReceived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.HandleButtonDoubleClicked
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UCommonButton::HandleButtonDoubleClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.HandleButtonDoubleClicked");

	UCommonButton_HandleButtonDoubleClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.HandleButtonClicked
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UCommonButton::HandleButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.HandleButtonClicked");

	UCommonButton_HandleButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.GetStyle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UCommonButtonStyle*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UCommonButtonStyle* UCommonButton::GetStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.GetStyle");

	UCommonButton_GetStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.GetSingleMaterialStyleMID
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMaterialInstanceDynamic* UCommonButton::GetSingleMaterialStyleMID()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.GetSingleMaterialStyleMID");

	UCommonButton_GetSingleMaterialStyleMID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.GetShouldSelectUponReceivingFocus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonButton::GetShouldSelectUponReceivingFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.GetShouldSelectUponReceivingFocus");

	UCommonButton_GetShouldSelectUponReceivingFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.GetSelected
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonButton::GetSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.GetSelected");

	UCommonButton_GetSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.GetInputAction
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonButton::GetInputAction(struct FDataTableRowHandle* InputActionRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.GetInputAction");

	UCommonButton_GetInputAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputActionRow != nullptr)
		*InputActionRow = params.InputActionRow;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.GetCurrentTextStyleClass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UClass* UCommonButton::GetCurrentTextStyleClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.GetCurrentTextStyleClass");

	UCommonButton_GetCurrentTextStyleClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.GetCurrentTextStyle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UCommonTextStyle*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UCommonTextStyle* UCommonButton::GetCurrentTextStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.GetCurrentTextStyle");

	UCommonButton_GetCurrentTextStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.GetCurrentCustomPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FMargin                 OutCustomPadding               (CPF_Parm, CPF_OutParm)

void UCommonButton::GetCurrentCustomPadding(struct FMargin* OutCustomPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.GetCurrentCustomPadding");

	UCommonButton_GetCurrentCustomPadding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCustomPadding != nullptr)
		*OutCustomPadding = params.OutCustomPadding;
}


// Function CommonUI.CommonButton.GetCurrentButtonPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FMargin                 OutButtonPadding               (CPF_Parm, CPF_OutParm)

void UCommonButton::GetCurrentButtonPadding(struct FMargin* OutButtonPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.GetCurrentButtonPadding");

	UCommonButton_GetCurrentButtonPadding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutButtonPadding != nullptr)
		*OutButtonPadding = params.OutButtonPadding;
}


// Function CommonUI.CommonButton.EnableButton
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonButton::EnableButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.EnableButton");

	UCommonButton_EnableButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.DisableButtonWithReason
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   DisabledReason                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UCommonButton::DisableButtonWithReason(const struct FText& DisabledReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.DisableButtonWithReason");

	UCommonButton_DisableButtonWithReason_Params params;
	params.DisabledReason = DisabledReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.DisableButton
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonButton::DisableButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.DisableButton");

	UCommonButton_DisableButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.ClearSelection
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonButton::ClearSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.ClearSelection");

	UCommonButton_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetGroupBase.RemoveWidget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 InWidget                       (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonWidgetGroupBase::RemoveWidget(class UWidget* InWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetGroupBase.RemoveWidget");

	UCommonWidgetGroupBase_RemoveWidget_Params params;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetGroupBase.RemoveAll
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonWidgetGroupBase::RemoveAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetGroupBase.RemoveAll");

	UCommonWidgetGroupBase_RemoveAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetGroupBase.AddWidget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 InWidget                       (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonWidgetGroupBase::AddWidget(class UWidget* InWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetGroupBase.AddWidget");

	UCommonWidgetGroupBase_AddWidget_Params params;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.SetSelectionRequired
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bRequireSelection              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonButtonGroup::SetSelectionRequired(bool bRequireSelection)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.SetSelectionRequired");

	UCommonButtonGroup_SetSelectionRequired_Params params;
	params.bRequireSelection = bRequireSelection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.SelectPreviousButton
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bAllowWrap                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonButtonGroup::SelectPreviousButton(bool bAllowWrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.SelectPreviousButton");

	UCommonButtonGroup_SelectPreviousButton_Params params;
	params.bAllowWrap = bAllowWrap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.SelectNextButton
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bAllowWrap                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonButtonGroup::SelectNextButton(bool bAllowWrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.SelectNextButton");

	UCommonButtonGroup_SelectNextButton_Params params;
	params.bAllowWrap = bAllowWrap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.SelectButtonAtIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ButtonIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonButtonGroup::SelectButtonAtIndex(int ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.SelectButtonAtIndex");

	UCommonButtonGroup_SelectButtonAtIndex_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.OnSelectionStateChanged
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class UCommonButton*           BaseButton                     (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           bIsSelected                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonButtonGroup::OnSelectionStateChanged(class UCommonButton* BaseButton, bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.OnSelectionStateChanged");

	UCommonButtonGroup_OnSelectionStateChanged_Params params;
	params.BaseButton = BaseButton;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.OnHandleButtonDoubleClicked
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class UCommonButton*           BaseButton                     (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonButtonGroup::OnHandleButtonDoubleClicked(class UCommonButton* BaseButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.OnHandleButtonDoubleClicked");

	UCommonButtonGroup_OnHandleButtonDoubleClicked_Params params;
	params.BaseButton = BaseButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.OnHandleButtonClicked
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class UCommonButton*           BaseButton                     (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonButtonGroup::OnHandleButtonClicked(class UCommonButton* BaseButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.OnHandleButtonClicked");

	UCommonButtonGroup_OnHandleButtonClicked_Params params;
	params.BaseButton = BaseButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.OnButtonUnhovered
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class UCommonButton*           BaseButton                     (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonButtonGroup::OnButtonUnhovered(class UCommonButton* BaseButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.OnButtonUnhovered");

	UCommonButtonGroup_OnButtonUnhovered_Params params;
	params.BaseButton = BaseButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.OnButtonHovered
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class UCommonButton*           BaseButton                     (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonButtonGroup::OnButtonHovered(class UCommonButton* BaseButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.OnButtonHovered");

	UCommonButtonGroup_OnButtonHovered_Params params;
	params.BaseButton = BaseButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.HasAnyButtons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonButtonGroup::HasAnyButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.HasAnyButtons");

	UCommonButtonGroup_HasAnyButtons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonGroup.GetSelectedButtonIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCommonButtonGroup::GetSelectedButtonIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.GetSelectedButtonIndex");

	UCommonButtonGroup_GetSelectedButtonIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonGroup.GetButtonAtIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonButton*           ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UCommonButton* UCommonButtonGroup::GetButtonAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.GetButtonAtIndex");

	UCommonButtonGroup_GetButtonAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonGroup.FindButtonIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UCommonButton*           ButtonToFind                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCommonButtonGroup::FindButtonIndex(class UCommonButton* ButtonToFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.FindButtonIndex");

	UCommonButtonGroup_FindButtonIndex_Params params;
	params.ButtonToFind = ButtonToFind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonGroup.DeselectAll
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonButtonGroup::DeselectAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.DeselectAll");

	UCommonButtonGroup_DeselectAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTextBlock.SetWrapTextWidth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InWrapTextAt                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonTextBlock::SetWrapTextWidth(int InWrapTextAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextBlock.SetWrapTextWidth");

	UCommonTextBlock_SetWrapTextWidth_Params params;
	params.InWrapTextAt = InWrapTextAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTextBlock.SetStyle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  InStyle                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonTextBlock::SetStyle(class UClass* InStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextBlock.SetStyle");

	UCommonTextBlock_SetStyle_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTextBlock.SetScrollStyle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  InScrollStyle                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonTextBlock::SetScrollStyle(class UClass* InScrollStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextBlock.SetScrollStyle");

	UCommonTextBlock_SetScrollStyle_Params params;
	params.InScrollStyle = InScrollStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTextBlock.SetProperties
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  InStyle                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  InScrollStyle                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonTextBlock::SetProperties(class UClass* InStyle, class UClass* InScrollStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextBlock.SetProperties");

	UCommonTextBlock_SetProperties_Params params;
	params.InStyle = InStyle;
	params.InScrollStyle = InScrollStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTextBlock.ResetScrollState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonTextBlock::ResetScrollState()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextBlock.ResetScrollState");

	UCommonTextBlock_ResetScrollState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonNumericTextBlock.SetCurrentValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewValue                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonNumericTextBlock::SetCurrentValue(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonNumericTextBlock.SetCurrentValue");

	UCommonNumericTextBlock_SetCurrentValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// class UCommonNumericTextBlock* NumericTextBlock               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonNumericTextBlock::OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature");

	UCommonNumericTextBlock_OnOutro__DelegateSignature_Params params;
	params.NumericTextBlock = NumericTextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// class UCommonNumericTextBlock* NumericTextBlock               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           HadCompleted                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonNumericTextBlock::OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature");

	UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Params params;
	params.NumericTextBlock = NumericTextBlock;
	params.HadCompleted = HadCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonNumericTextBlock::IsInterpolatingNumericValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue");

	UCommonNumericTextBlock_IsInterpolatingNumericValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonNumericTextBlock.InterpolateToValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          TargetValue                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaximumInterpolationDuration   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MinimumChangeRate              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          OutroOffset                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonNumericTextBlock::InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonNumericTextBlock.InterpolateToValue");

	UCommonNumericTextBlock_InterpolateToValue_Params params;
	params.TargetValue = TargetValue;
	params.MaximumInterpolationDuration = MaximumInterpolationDuration;
	params.MinimumChangeRate = MinimumChangeRate;
	params.OutroOffset = OutroOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonNumericTextBlock.GetTargetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UCommonNumericTextBlock::GetTargetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonNumericTextBlock.GetTargetValue");

	UCommonNumericTextBlock_GetTargetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonListView.SetSimulateDoubleClickOnSelectedItemClick
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInSimulateDoubleClick         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonListView::SetSimulateDoubleClickOnSelectedItemClick(bool bInSimulateDoubleClick)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.SetSimulateDoubleClickOnSelectedItemClick");

	UCommonListView_SetSimulateDoubleClickOnSelectedItemClick_Params params;
	params.bInSimulateDoubleClick = bInSimulateDoubleClick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListView.SetSelectionMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<ESelectionMode>    SelectionMode                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonListView::SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.SetSelectionMode");

	UCommonListView_SetSelectionMode_Params params;
	params.SelectionMode = SelectionMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListView.SetSelectedItem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bWaitIfPendingRefresh          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonListView::SetSelectedItem(class UObject* Item, bool bWaitIfPendingRefresh)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.SetSelectedItem");

	UCommonListView_SetSelectedItem_Params params;
	params.Item = Item;
	params.bWaitIfPendingRefresh = bWaitIfPendingRefresh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonListView.SetSelectedIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonListView::SetSelectedIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.SetSelectedIndex");

	UCommonListView_SetSelectedIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonListView.SetItemSelection
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bSelected                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonListView::SetItemSelection(class UObject* Item, bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.SetItemSelection");

	UCommonListView_SetItemSelection_Params params;
	params.Item = Item;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListView.SetItemHeight
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewHeight                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonListView::SetItemHeight(float NewHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.SetItemHeight");

	UCommonListView_SetItemHeight_Params params;
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListView.SetDesiredItemPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 DesiredPadding                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UCommonListView::SetDesiredItemPadding(const struct FMargin& DesiredPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.SetDesiredItemPadding");

	UCommonListView_SetDesiredItemPadding_Params params;
	params.DesiredPadding = DesiredPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListView.SetDataProvider
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UObject*>         InDataProvider                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UCommonListView::SetDataProvider(TArray<class UObject*> InDataProvider)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.SetDataProvider");

	UCommonListView_SetDataProvider_Params params;
	params.InDataProvider = InDataProvider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListView.ScrollIntoView
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           NavigateOnScrollIntoView       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonListView::ScrollIntoView(class UObject* Item, bool NavigateOnScrollIntoView)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.ScrollIntoView");

	UCommonListView_ScrollIntoView_Params params;
	params.Item = Item;
	params.NavigateOnScrollIntoView = NavigateOnScrollIntoView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListView.IsRefreshPending
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonListView::IsRefreshPending()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.IsRefreshPending");

	UCommonListView_IsRefreshPending_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonListView.IsItemVisible
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonListView::IsItemVisible(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.IsItemVisible");

	UCommonListView_IsItemVisible_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonListView.GetSelectionModeBP
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<ESelectionMode>    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESelectionMode> UCommonListView::GetSelectionModeBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.GetSelectionModeBP");

	UCommonListView_GetSelectionModeBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonListView.GetSelectedItems
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// TArray<class UObject*>         Items                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonListView::GetSelectedItems(TArray<class UObject*>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.GetSelectedItems");

	UCommonListView_GetSelectedItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;

	return params.ReturnValue;
}


// Function CommonUI.CommonListView.GetSelectedItem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UCommonListView::GetSelectedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.GetSelectedItem");

	UCommonListView_GetSelectedItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonListView.GetNumItemsSelected
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCommonListView::GetNumItemsSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.GetNumItemsSelected");

	UCommonListView_GetNumItemsSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonListView.GetNumItems
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCommonListView::GetNumItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.GetNumItems");

	UCommonListView_GetNumItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonListView.GetItemAt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UCommonListView::GetItemAt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.GetItemAt");

	UCommonListView_GetItemAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonListView.GetIndexForItem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCommonListView::GetIndexForItem(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.GetIndexForItem");

	UCommonListView_GetIndexForItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonListView.DynamicHandleItemUnhoveredCommonButton
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonListView::DynamicHandleItemUnhoveredCommonButton(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.DynamicHandleItemUnhoveredCommonButton");

	UCommonListView_DynamicHandleItemUnhoveredCommonButton_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListView.DynamicHandleItemHoveredCommonButton
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonListView::DynamicHandleItemHoveredCommonButton(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.DynamicHandleItemHoveredCommonButton");

	UCommonListView_DynamicHandleItemHoveredCommonButton_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListView.DynamicHandleItemDoubleClickedCommonButton
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonListView::DynamicHandleItemDoubleClickedCommonButton(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.DynamicHandleItemDoubleClickedCommonButton");

	UCommonListView_DynamicHandleItemDoubleClickedCommonButton_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListView.DynamicHandleItemClickedUserWidget
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonListView::DynamicHandleItemClickedUserWidget(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.DynamicHandleItemClickedUserWidget");

	UCommonListView_DynamicHandleItemClickedUserWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListView.DynamicHandleItemClickedCommonButton
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonListView::DynamicHandleItemClickedCommonButton(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.DynamicHandleItemClickedCommonButton");

	UCommonListView_DynamicHandleItemClickedCommonButton_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListView.ClearSelection
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonListView::ClearSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.ClearSelection");

	UCommonListView_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListView.Clear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonListView::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.Clear");

	UCommonListView_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListView.AddItem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// class UObject*                 Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonListView::AddItem(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.AddItem");

	UCommonListView_AddItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTileView.SetItemWidth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewWidth                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonTileView::SetItemWidth(float NewWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTileView.SetItemWidth");

	UCommonTileView_SetItemWidth_Params params;
	params.NewWidth = NewWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActionWidget.SetInputAction
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (CPF_Parm)

void UCommonActionWidget::SetInputAction(const struct FDataTableRowHandle& InputActionRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActionWidget.SetInputAction");

	UCommonActionWidget_SetInputAction_Params params;
	params.InputActionRow = InputActionRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bUsingGamepad                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonActionWidget::OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature");

	UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActionWidget.IsHeldAction
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonActionWidget::IsHeldAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActionWidget.IsHeldAction");

	UCommonActionWidget_IsHeldAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActionWidget.GetIcon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UCommonActionWidget::GetIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActionWidget.GetIcon");

	UCommonActionWidget_GetIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActionWidget.GetDisplayText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UCommonActionWidget::GetDisplayText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActionWidget.GetDisplayText");

	UCommonActionWidget_GetDisplayText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonBorderStyle.GetBackgroundBrush
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FSlateBrush             Brush                          (CPF_Parm, CPF_OutParm)

void UCommonBorderStyle::GetBackgroundBrush(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonBorderStyle.GetBackgroundBrush");

	UCommonBorderStyle_GetBackgroundBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonBorder.SetStyle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  InStyle                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonBorder::SetStyle(class UClass* InStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonBorder.SetStyle");

	UCommonBorder_SetStyle_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonStyle.GetSelectedTextStyle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UCommonTextStyle*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UCommonTextStyle* UCommonButtonStyle::GetSelectedTextStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetSelectedTextStyle");

	UCommonButtonStyle_GetSelectedTextStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FSlateBrush             Brush                          (CPF_Parm, CPF_OutParm)

void UCommonButtonStyle::GetSelectedPressedBrush(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush");

	UCommonButtonStyle_GetSelectedPressedBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UCommonTextStyle*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UCommonTextStyle* UCommonButtonStyle::GetSelectedHoveredTextStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle");

	UCommonButtonStyle_GetSelectedHoveredTextStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FSlateBrush             Brush                          (CPF_Parm, CPF_OutParm)

void UCommonButtonStyle::GetSelectedHoveredBrush(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush");

	UCommonButtonStyle_GetSelectedHoveredBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FSlateBrush             Brush                          (CPF_Parm, CPF_OutParm)

void UCommonButtonStyle::GetSelectedBaseBrush(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush");

	UCommonButtonStyle_GetSelectedBaseBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetNormalTextStyle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UCommonTextStyle*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UCommonTextStyle* UCommonButtonStyle::GetNormalTextStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetNormalTextStyle");

	UCommonButtonStyle_GetNormalTextStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonStyle.GetNormalPressedBrush
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FSlateBrush             Brush                          (CPF_Parm, CPF_OutParm)

void UCommonButtonStyle::GetNormalPressedBrush(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetNormalPressedBrush");

	UCommonButtonStyle_GetNormalPressedBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UCommonTextStyle*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UCommonTextStyle* UCommonButtonStyle::GetNormalHoveredTextStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle");

	UCommonButtonStyle_GetNormalHoveredTextStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FSlateBrush             Brush                          (CPF_Parm, CPF_OutParm)

void UCommonButtonStyle::GetNormalHoveredBrush(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush");

	UCommonButtonStyle_GetNormalHoveredBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetNormalBaseBrush
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FSlateBrush             Brush                          (CPF_Parm, CPF_OutParm)

void UCommonButtonStyle::GetNormalBaseBrush(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetNormalBaseBrush");

	UCommonButtonStyle_GetNormalBaseBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetMaterialBrush
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FSlateBrush             Brush                          (CPF_Parm, CPF_OutParm)

void UCommonButtonStyle::GetMaterialBrush(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetMaterialBrush");

	UCommonButtonStyle_GetMaterialBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetDisabledTextStyle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UCommonTextStyle*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UCommonTextStyle* UCommonButtonStyle::GetDisabledTextStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetDisabledTextStyle");

	UCommonButtonStyle_GetDisabledTextStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonStyle.GetDisabledBrush
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FSlateBrush             Brush                          (CPF_Parm, CPF_OutParm)

void UCommonButtonStyle::GetDisabledBrush(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetDisabledBrush");

	UCommonButtonStyle_GetDisabledBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetCustomPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FMargin                 OutCustomPadding               (CPF_Parm, CPF_OutParm)

void UCommonButtonStyle::GetCustomPadding(struct FMargin* OutCustomPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetCustomPadding");

	UCommonButtonStyle_GetCustomPadding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCustomPadding != nullptr)
		*OutCustomPadding = params.OutCustomPadding;
}


// Function CommonUI.CommonButtonStyle.GetButtonPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FMargin                 OutButtonPadding               (CPF_Parm, CPF_OutParm)

void UCommonButtonStyle::GetButtonPadding(struct FMargin* OutButtonPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetButtonPadding");

	UCommonButtonStyle_GetButtonPadding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutButtonPadding != nullptr)
		*OutButtonPadding = params.OutButtonPadding;
}


// DelegateFunction CommonUI.CommonCustomNavigation.OnCustomNavigationEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonCustomNavigation::OnCustomNavigationEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonCustomNavigation.OnCustomNavigationEvent__DelegateSignature");

	UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonInputManager.StopListeningForExistingHeldAction
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionDataRow             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FScriptDelegate         CompleteEvent                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FScriptDelegate         ProgressEvent                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonInputManager::StopListeningForExistingHeldAction(const struct FDataTableRowHandle& InputActionDataRow, const struct FScriptDelegate& CompleteEvent, const struct FScriptDelegate& ProgressEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.StopListeningForExistingHeldAction");

	UCommonInputManager_StopListeningForExistingHeldAction_Params params;
	params.InputActionDataRow = InputActionDataRow;
	params.CompleteEvent = CompleteEvent;
	params.ProgressEvent = ProgressEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonInputManager.StartListeningForExistingHeldAction
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionDataRow             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FScriptDelegate         CompleteEvent                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FScriptDelegate         ProgressEvent                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonInputManager::StartListeningForExistingHeldAction(const struct FDataTableRowHandle& InputActionDataRow, const struct FScriptDelegate& CompleteEvent, const struct FScriptDelegate& ProgressEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.StartListeningForExistingHeldAction");

	UCommonInputManager_StartListeningForExistingHeldAction_Params params;
	params.InputActionDataRow = InputActionDataRow;
	params.CompleteEvent = CompleteEvent;
	params.ProgressEvent = ProgressEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonInputManager.SetGlobalInputHandlerPriorityFilter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InFilterPriority               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonInputManager::SetGlobalInputHandlerPriorityFilter(int InFilterPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.SetGlobalInputHandlerPriorityFilter");

	UCommonInputManager_SetGlobalInputHandlerPriorityFilter_Params params;
	params.InFilterPriority = InFilterPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonInputManager.PushActivatablePanel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCommonActivatablePanel* ActivatablePanel               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           bIntroPanel                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bOutroPanelBelow               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonInputManager::PushActivatablePanel(class UCommonActivatablePanel* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.PushActivatablePanel");

	UCommonInputManager_PushActivatablePanel_Params params;
	params.ActivatablePanel = ActivatablePanel;
	params.bIntroPanel = bIntroPanel;
	params.bOutroPanelBelow = bOutroPanelBelow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonInputManager.PopActivatablePanel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCommonActivatablePanel* ActivatablePanel               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonInputManager::PopActivatablePanel(class UCommonActivatablePanel* ActivatablePanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.PopActivatablePanel");

	UCommonInputManager_PopActivatablePanel_Params params;
	params.ActivatablePanel = ActivatablePanel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonInputManager.IsPanelOnStack
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UCommonActivatablePanel* InPanel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonInputManager::IsPanelOnStack(class UCommonActivatablePanel* InPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.IsPanelOnStack");

	UCommonInputManager_IsPanelOnStack_Params params;
	params.InPanel = InPanel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonInputManager.IsInputSuspended
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonInputManager::IsInputSuspended()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.IsInputSuspended");

	UCommonInputManager_IsInputSuspended_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonInputManager.GetGlobalInputHandlerPriorityFilter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCommonInputManager::GetGlobalInputHandlerPriorityFilter()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.GetGlobalInputHandlerPriorityFilter");

	UCommonInputManager_GetGlobalInputHandlerPriorityFilter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonInputManager.GetAvailableInputActions
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FCommonInputActionHandlerData> AvailableInputActions          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonInputManager::GetAvailableInputActions(TArray<struct FCommonInputActionHandlerData>* AvailableInputActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.GetAvailableInputActions");

	UCommonInputManager_GetAvailableInputActions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableInputActions != nullptr)
		*AvailableInputActions = params.AvailableInputActions;

	return params.ReturnValue;
}


// Function CommonUI.CommonLoadGuard.SetLoadingText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   InLoadingText                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UCommonLoadGuard::SetLoadingText(const struct FText& InLoadingText)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLoadGuard.SetLoadingText");

	UCommonLoadGuard_SetLoadingText_Params params;
	params.InLoadingText = InLoadingText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLoadGuard.SetIsLoading
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInIsLoading                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonLoadGuard::SetIsLoading(bool bInIsLoading)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLoadGuard.SetIsLoading");

	UCommonLoadGuard_SetIsLoading_Params params;
	params.bInIsLoading = bInIsLoading;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UObject*                 Object                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonLoadGuard::OnAssetLoaded__DelegateSignature(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature");

	UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLoadGuard.IsLoading
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonLoadGuard::IsLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLoadGuard.IsLoading");

	UCommonLoadGuard_IsLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TAssetPtr<class UObject>       InLazyAsset                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FScriptDelegate         OnAssetLoaded                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UCommonLoadGuard::BP_GuardAndLoadAsset(TAssetPtr<class UObject> InLazyAsset, const struct FScriptDelegate& OnAssetLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset");

	UCommonLoadGuard_BP_GuardAndLoadAsset_Params params;
	params.InLazyAsset = InLazyAsset;
	params.OnAssetLoaded = OnAssetLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLazyImage.ShowDefaultImage
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCommonLazyImage::ShowDefaultImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLazyImage.ShowDefaultImage");

	UCommonLazyImage_ShowDefaultImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TAssetPtr<class UTexture2D>    LazyTexture                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bMatchSize                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonLazyImage::SetBrushFromLazyTexture(TAssetPtr<class UTexture2D> LazyTexture, bool bMatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture");

	UCommonLazyImage_SetBrushFromLazyTexture_Params params;
	params.LazyTexture = LazyTexture;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TAssetPtr<class UMaterialInterface> LazyMaterial                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UCommonLazyImage::SetBrushFromLazyMaterial(TAssetPtr<class UMaterialInterface> LazyMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial");

	UCommonLazyImage_SetBrushFromLazyMaterial_Params params;
	params.LazyMaterial = LazyMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TAssetPtr<class UObject>       LazyObject                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bMatchTextureSize              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonLazyImage::SetBrushFromLazyDisplayAsset(TAssetPtr<class UObject> LazyObject, bool bMatchTextureSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset");

	UCommonLazyImage_SetBrushFromLazyDisplayAsset_Params params;
	params.LazyObject = LazyObject;
	params.bMatchTextureSize = bMatchTextureSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLazyImage.IsLoading
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonLazyImage::IsLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLazyImage.IsLoading");

	UCommonLazyImage_IsLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonLazyImage.ForwardLoadingStateChanged
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// bool                           bIsLoading                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonLazyImage::ForwardLoadingStateChanged(bool bIsLoading)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLazyImage.ForwardLoadingStateChanged");

	UCommonLazyImage_ForwardLoadingStateChanged_Params params;
	params.bIsLoading = bIsLoading;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTreeView.SetSelection
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 InItem                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonTreeView::SetSelection(class UObject* InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTreeView.SetSelection");

	UCommonTreeView_SetSelection_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTreeView.SetItemExpansion
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InShouldExpandItem             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonTreeView::SetItemExpansion(class UObject* Item, bool InShouldExpandItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTreeView.SetItemExpansion");

	UCommonTreeView_SetItemExpansion_Params params;
	params.Item = Item;
	params.InShouldExpandItem = InShouldExpandItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTreeView.RequestRefresh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonTreeView::RequestRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTreeView.RequestRefresh");

	UCommonTreeView_RequestRefresh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTreeView.DynamicHandleItemClickedCommonButton
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonTreeView::DynamicHandleItemClickedCommonButton(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTreeView.DynamicHandleItemClickedCommonButton");

	UCommonTreeView_DynamicHandleItemClickedCommonButton_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCommonPoolableWidgetInterface::OnReleaseToPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool");

	UCommonPoolableWidgetInterface_OnReleaseToPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCommonPoolableWidgetInterface::OnAcquireFromPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool");

	UCommonPoolableWidgetInterface_OnAcquireFromPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListItem.ToggleExpansion
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCommonListItem::ToggleExpansion()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListItem.ToggleExpansion");

	UCommonListItem_ToggleExpansion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListItem.SetSelected
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSelected                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonListItem::SetSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListItem.SetSelected");

	UCommonListItem_SetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListItem.SetIndexInList
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndexInList                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonListItem::SetIndexInList(int InIndexInList)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListItem.SetIndexInList");

	UCommonListItem_SetIndexInList_Params params;
	params.InIndexInList = InIndexInList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListItem.SetExpanded
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bExpanded                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonListItem::SetExpanded(bool bExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListItem.SetExpanded");

	UCommonListItem_SetExpanded_Params params;
	params.bExpanded = bExpanded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListItem.RegisterOnClicked
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UCommonListItem::RegisterOnClicked(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListItem.RegisterOnClicked");

	UCommonListItem_RegisterOnClicked_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListItem.Private_OnExpanderArrowShiftClicked
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCommonListItem::Private_OnExpanderArrowShiftClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListItem.Private_OnExpanderArrowShiftClicked");

	UCommonListItem_Private_OnExpanderArrowShiftClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListItem.IsItemExpanded
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonListItem::IsItemExpanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListItem.IsItemExpanded");

	UCommonListItem_IsItemExpanded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonListItem.GetIndentLevel
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCommonListItem::GetIndentLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListItem.GetIndentLevel");

	UCommonListItem_GetIndentLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonListItem.DoesItemHaveChildren
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCommonListItem::DoesItemHaveChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListItem.DoesItemHaveChildren");

	UCommonListItem_DoesItemHaveChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonObjectListItem.SetData
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 InData                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonListView*         OwningList                     (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonObjectListItem::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonObjectListItem.SetData");

	UCommonObjectListItem_SetData_Params params;
	params.InData = InData;
	params.OwningList = OwningList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonObjectListItem.Reset
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCommonObjectListItem::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonObjectListItem.Reset");

	UCommonObjectListItem_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonObjectListItem.GetData
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UCommonObjectListItem::GetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonObjectListItem.GetData");

	UCommonObjectListItem_GetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTextStyle.GetShadowOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               OutShadowOffset                (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UCommonTextStyle::GetShadowOffset(struct FVector2D* OutShadowOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetShadowOffset");

	UCommonTextStyle_GetShadowOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutShadowOffset != nullptr)
		*OutShadowOffset = params.OutShadowOffset;
}


// Function CommonUI.CommonTextStyle.GetShadowColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FLinearColor            OutColor                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UCommonTextStyle::GetShadowColor(struct FLinearColor* OutColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetShadowColor");

	UCommonTextStyle_GetShadowColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutColor != nullptr)
		*OutColor = params.OutColor;
}


// Function CommonUI.CommonTextStyle.GetMargin
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FMargin                 OutMargin                      (CPF_Parm, CPF_OutParm)

void UCommonTextStyle::GetMargin(struct FMargin* OutMargin)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetMargin");

	UCommonTextStyle_GetMargin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMargin != nullptr)
		*OutMargin = params.OutMargin;
}


// Function CommonUI.CommonTextStyle.GetLineHeightPercentage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UCommonTextStyle::GetLineHeightPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetLineHeightPercentage");

	UCommonTextStyle_GetLineHeightPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTextStyle.GetFont
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FSlateFontInfo          OutFont                        (CPF_Parm, CPF_OutParm)

void UCommonTextStyle::GetFont(struct FSlateFontInfo* OutFont)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetFont");

	UCommonTextStyle_GetFont_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFont != nullptr)
		*OutFont = params.OutFont;
}


// Function CommonUI.CommonTextStyle.GetColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FLinearColor            OutColor                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UCommonTextStyle::GetColor(struct FLinearColor* OutColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetColor");

	UCommonTextStyle_GetColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutColor != nullptr)
		*OutColor = params.OutColor;
}


// Function CommonUI.CommonUIContext.SetGamepadInputType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonUIContext::SetGamepadInputType()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonUIContext.SetGamepadInputType");

	UCommonUIContext_SetGamepadInputType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonUIContext.IsUsingTouch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonUIContext::IsUsingTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonUIContext.IsUsingTouch");

	UCommonUIContext_IsUsingTouch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonUIContext.IsUsingPointerInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonUIContext::IsUsingPointerInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonUIContext.IsUsingPointerInput");

	UCommonUIContext_IsUsingPointerInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonUIContext.IsUsingGamepad
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonUIContext::IsUsingGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonUIContext.IsUsingGamepad");

	UCommonUIContext_IsUsingGamepad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction CommonUI.CommonUIContext.InputSuspensionChanged__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bInputSuspended                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonUIContext::InputSuspensionChanged__DelegateSignature(bool bInputSuspended)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonUIContext.InputSuspensionChanged__DelegateSignature");

	UCommonUIContext_InputSuspensionChanged__DelegateSignature_Params params;
	params.bInputSuspended = bInputSuspended;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonUIContext.InputMethodChangedDelegate__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bUsingGamepad                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonUIContext::InputMethodChangedDelegate__DelegateSignature(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonUIContext.InputMethodChangedDelegate__DelegateSignature");

	UCommonUIContext_InputMethodChangedDelegate__DelegateSignature_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonUIContext.GetInputManager
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UCommonInputManager*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UCommonInputManager* UCommonUIContext::GetInputManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonUIContext.GetInputManager");

	UCommonUIContext_GetInputManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonUIContext.GetInputActionButtonIcon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FDataTableRowHandle     InputActionRowHandle           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UCommonUIContext::GetInputActionButtonIcon(const struct FDataTableRowHandle& InputActionRowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonUIContext.GetInputActionButtonIcon");

	UCommonUIContext_GetInputActionButtonIcon_Params params;
	params.InputActionRowHandle = InputActionRowHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonUIContext.GetCurrentInputType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)

void UCommonUIContext::GetCurrentInputType()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonUIContext.GetCurrentInputType");

	UCommonUIContext_GetCurrentInputType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonUILibrary.FindParentWidgetOfType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 StartingWidget                 (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UClass*                  Type                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidget*                 ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWidget* UCommonUILibrary::STATIC_FindParentWidgetOfType(class UWidget* StartingWidget, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonUILibrary.FindParentWidgetOfType");

	UCommonUILibrary_FindParentWidgetOfType_Params params;
	params.StartingWidget = StartingWidget;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonRotator.ShiftTextRight
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonRotator::ShiftTextRight(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.ShiftTextRight");

	UCommonRotator_ShiftTextRight_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonRotator.ShiftTextLeft
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonRotator::ShiftTextLeft(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.ShiftTextLeft");

	UCommonRotator_ShiftTextLeft_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonRotator.SetSelectedItem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonRotator::SetSelectedItem(int InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.SetSelectedItem");

	UCommonRotator_SetSelectedItem_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonRotator.PopulateTextLabels
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FText>           Labels                         (CPF_Parm, CPF_ZeroConstructor)

void UCommonRotator::PopulateTextLabels(TArray<struct FText> Labels)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.PopulateTextLabels");

	UCommonRotator_PopulateTextLabels_Params params;
	params.Labels = Labels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonRotator.GetSelectedText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UCommonRotator::GetSelectedText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.GetSelectedText");

	UCommonRotator_GetSelectedText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonInputReflector.OnButtonAdded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           AddedButton                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FCommonInputActionHandlerData Data                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UCommonInputReflector::OnButtonAdded(class UCommonButton* AddedButton, const struct FCommonInputActionHandlerData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputReflector.OnButtonAdded");

	UCommonInputReflector_OnButtonAdded_Params params;
	params.AddedButton = AddedButton;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonInputReflector.ClearButtons
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCommonInputReflector::ClearButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputReflector.ClearButtons");

	UCommonInputReflector_ClearButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetSwitcher.SetActiveWidgetIndex_Advanced
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Index                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           AttemptActivationChange        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonWidgetSwitcher::SetActiveWidgetIndex_Advanced(int Index, bool AttemptActivationChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetSwitcher.SetActiveWidgetIndex_Advanced");

	UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Params params;
	params.Index = Index;
	params.AttemptActivationChange = AttemptActivationChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetSwitcher.SetActiveWidget_Advanced
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           AttemptActivationChange        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonWidgetSwitcher::SetActiveWidget_Advanced(class UWidget* Widget, bool AttemptActivationChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetSwitcher.SetActiveWidget_Advanced");

	UCommonWidgetSwitcher_SetActiveWidget_Advanced_Params params;
	params.Widget = Widget;
	params.AttemptActivationChange = AttemptActivationChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetSwitcher.HasWidgets
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCommonWidgetSwitcher::HasWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetSwitcher.HasWidgets");

	UCommonWidgetSwitcher_HasWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonWidgetSwitcher.HandleActiveWidgetDeactivated
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UCommonActivatablePanel* DeactivatedPanel               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonWidgetSwitcher::HandleActiveWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetSwitcher.HandleActiveWidgetDeactivated");

	UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Params params;
	params.DeactivatedPanel = DeactivatedPanel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetSwitcher.DeactivateWidget
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonWidgetSwitcher::DeactivateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetSwitcher.DeactivateWidget");

	UCommonWidgetSwitcher_DeactivateWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetSwitcher.ActivateWidget
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonWidgetSwitcher::ActivateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetSwitcher.ActivateWidget");

	UCommonWidgetSwitcher_ActivateWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetSwitcher.ActivatePreviousWidget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bCanWrap                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonWidgetSwitcher::ActivatePreviousWidget(bool bCanWrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetSwitcher.ActivatePreviousWidget");

	UCommonWidgetSwitcher_ActivatePreviousWidget_Params params;
	params.bCanWrap = bCanWrap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetSwitcher.ActivateNextWidget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bCanWrap                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonWidgetSwitcher::ActivateNextWidget(bool bCanWrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetSwitcher.ActivateNextWidget");

	UCommonWidgetSwitcher_ActivateNextWidget_Params params;
	params.bCanWrap = bCanWrap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonWidgetCarousel::SetActiveWidgetIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex");

	UCommonWidgetCarousel_SetActiveWidgetIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarousel.SetActiveWidget
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonWidgetCarousel::SetActiveWidget(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.SetActiveWidget");

	UCommonWidgetCarousel_SetActiveWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarousel.PreviousPage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonWidgetCarousel::PreviousPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.PreviousPage");

	UCommonWidgetCarousel_PreviousPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarousel.NextPage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonWidgetCarousel::NextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.NextPage");

	UCommonWidgetCarousel_NextPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidget*                 ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWidget* UCommonWidgetCarousel::GetWidgetAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex");

	UCommonWidgetCarousel_GetWidgetAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCommonWidgetCarousel::GetActiveWidgetIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex");

	UCommonWidgetCarousel_GetActiveWidgetIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonWidgetCarousel.EndAutoScrolling
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonWidgetCarousel::EndAutoScrolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.EndAutoScrolling");

	UCommonWidgetCarousel_EndAutoScrolling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ScrollInterval                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCommonWidgetCarousel::BeginAutoScrolling(float ScrollInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling");

	UCommonWidgetCarousel_BeginAutoScrolling_Params params;
	params.ScrollInterval = ScrollInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetStack.PushWidget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 InWidget                       (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCommonWidgetStack::PushWidget(class UWidget* InWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetStack.PushWidget");

	UCommonWidgetStack_PushWidget_Params params;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetStack.PopWigdet
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWidget* UCommonWidgetStack::PopWigdet()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetStack.PopWigdet");

	UCommonWidgetStack_PopWigdet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonWidgetStack.DeactivateWidget
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonWidgetStack::DeactivateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetStack.DeactivateWidget");

	UCommonWidgetStack_DeactivateWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetStack.ActivateWidget
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCommonWidgetStack::ActivateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetStack.ActivateWidget");

	UCommonWidgetStack_ActivateWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
