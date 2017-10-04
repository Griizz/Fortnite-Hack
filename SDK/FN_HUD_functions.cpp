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

// Function HUD.HUD_C.CheckHUDElementVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   HiddenHUDElementTags           (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTag            HUDElementTagToCheck           (CPF_Parm)
// class UWidget*                 HUDElement                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UHUD_C::CheckHUDElementVisibility(const struct FGameplayTag& HUDElementTagToCheck, struct FGameplayTagContainer* HiddenHUDElementTags, class UWidget** HUDElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.CheckHUDElementVisibility");

	UHUD_C_CheckHUDElementVisibility_Params params;
	params.HUDElementTagToCheck = HUDElementTagToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HiddenHUDElementTags != nullptr)
		*HiddenHUDElementTags = params.HiddenHUDElementTags;
	if (HUDElement != nullptr)
		*HUDElement = params.HUDElement;
}


// Function HUD.HUD_C.OnHUDElementVisibilityChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   HiddenHUDElementTags           (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UHUD_C::OnHUDElementVisibilityChanged(struct FGameplayTagContainer* HiddenHUDElementTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnHUDElementVisibilityChanged");

	UHUD_C_OnHUDElementVisibilityChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HiddenHUDElementTags != nullptr)
		*HiddenHUDElementTags = params.HiddenHUDElementTags;
}


// Function HUD.HUD_C.OnManagementTabSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::OnManagementTabSelected(const struct FName& TabName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnManagementTabSelected");

	UHUD_C_OnManagementTabSelected_Params params;
	params.TabName = TabName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.PopContentWidgetInternal
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FContentPushState*      State                          (CPF_Parm)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UHUD_C::PopContentWidgetInternal(struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.PopContentWidgetInternal");

	UHUD_C_PopContentWidgetInternal_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.CreateInterestIndicatorWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::CreateInterestIndicatorWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.CreateInterestIndicatorWidget");

	UHUD_C_CreateInterestIndicatorWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleOnPointOfInterestRemoved
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  PointOfInterest                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::HandleOnPointOfInterestRemoved(class AActor* PointOfInterest)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleOnPointOfInterestRemoved");

	UHUD_C_HandleOnPointOfInterestRemoved_Params params;
	params.PointOfInterest = PointOfInterest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleOnPointOfInterestAdded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  PointOfInterest                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   DisplayText                    (CPF_Parm)
// class UTexture2D*              DisplayImage                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::HandleOnPointOfInterestAdded(class AActor* PointOfInterest, const struct FText& DisplayText, class UTexture2D* DisplayImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleOnPointOfInterestAdded");

	UHUD_C_HandleOnPointOfInterestAdded_Params params;
	params.PointOfInterest = PointOfInterest;
	params.DisplayText = DisplayText;
	params.DisplayImage = DisplayImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ShowPicker
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InitialOption                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IgnoreFirstAccept              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::ShowPicker(int InitialOption, bool IgnoreFirstAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowPicker");

	UHUD_C_ShowPicker_Params params;
	params.InitialOption = InitialOption;
	params.IgnoreFirstAccept = IgnoreFirstAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnHordeTierCompleteWidgetFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::OnHordeTierCompleteWidgetFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnHordeTierCompleteWidgetFinished");

	UHUD_C_OnHordeTierCompleteWidgetFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleHordeTierComplete
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::HandleHordeTierComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleHordeTierComplete");

	UHUD_C_HandleHordeTierComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleFocusChat
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::HandleFocusChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleFocusChat");

	UHUD_C_HandleFocusChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ToggleTopLevelMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::ToggleTopLevelMenu(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ToggleTopLevelMenu");

	UHUD_C_ToggleTopLevelMenu_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ToggleChat
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::ToggleChat(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ToggleChat");

	UHUD_C_ToggleChat_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SetPersistentHUDContentVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::SetPersistentHUDContentVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetPersistentHUDContentVisibility");

	UHUD_C_SetPersistentHUDContentVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleIndicatorModeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InidicatorsEnabled             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::HandleIndicatorModeChanged(bool InidicatorsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleIndicatorModeChanged");

	UHUD_C_HandleIndicatorModeChanged_Params params;
	params.InidicatorsEnabled = InidicatorsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SetCursorModeContent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             CustomWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ActionName                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UHUD_C::SetCursorModeContent(class UUserWidget* CustomWidget, struct FName* ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetCursorModeContent");

	UHUD_C_SetCursorModeContent_Params params;
	params.CustomWidget = CustomWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionName != nullptr)
		*ActionName = params.ActionName;
}


// Function HUD.HUD_C.SetGameMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::SetGameMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetGameMode");

	UHUD_C_SetGameMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnPlayerTargetingChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsTargeting                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::OnPlayerTargetingChanged(bool IsTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnPlayerTargetingChanged");

	UHUD_C_OnPlayerTargetingChanged_Params params;
	params.IsTargeting = IsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleKeybindsChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::HandleKeybindsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleKeybindsChanged");

	UHUD_C_HandleKeybindsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleZoneCompleted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::HandleZoneCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleZoneCompleted");

	UHUD_C_HandleZoneCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnHandleAction
// (FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FEventReply             Result                         (CPF_Parm, CPF_OutParm)
// bool                           bPassThrough                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::OnHandleAction(struct FEventReply* Result, bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnHandleAction");

	UHUD_C_OnHandleAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function HUD.HUD_C.SetQuickbarSizes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::SetQuickbarSizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetQuickbarSizes");

	UHUD_C_SetQuickbarSizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleQuickbarSlotFocusSlotChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::HandleQuickbarSlotFocusSlotChanged(int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleQuickbarSlotFocusSlotChanged");

	UHUD_C_HandleQuickbarSlotFocusSlotChanged_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleCursorModeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUserWidget*             CursorModeContentCustomWidget  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::HandleCursorModeChanged(bool IsEnabled, const struct FName& ActionName, class UUserWidget* CursorModeContentCustomWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleCursorModeChanged");

	UHUD_C_HandleCursorModeChanged_Params params;
	params.IsEnabled = IsEnabled;
	params.ActionName = ActionName;
	params.CursorModeContentCustomWidget = CursorModeContentCustomWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnDeclined_0E0300084F8A9EB1D6CB5E836DBF8C7A
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::OnDeclined_0E0300084F8A9EB1D6CB5E836DBF8C7A()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnDeclined_0E0300084F8A9EB1D6CB5E836DBF8C7A");

	UHUD_C_OnDeclined_0E0300084F8A9EB1D6CB5E836DBF8C7A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnConfirmed_0E0300084F8A9EB1D6CB5E836DBF8C7A
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::OnConfirmed_0E0300084F8A9EB1D6CB5E836DBF8C7A()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnConfirmed_0E0300084F8A9EB1D6CB5E836DBF8C7A");

	UHUD_C_OnConfirmed_0E0300084F8A9EB1D6CB5E836DBF8C7A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnEnterState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_C::OnEnterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnEnterState");

	UHUD_C_OnEnterState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.QuestsCompleted
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>  Quests                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UHUD_C::QuestsCompleted(TArray<class UFortQuestItem*> Quests)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.QuestsCompleted");

	UHUD_C_QuestsCompleted_Params params;
	params.Quests = Quests;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.Construct");

	UHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.LoadingScreenChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bVisible                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::LoadingScreenChanged(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.LoadingScreenChanged");

	UHUD_C_LoadingScreenChanged_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.EndOfDayRecapStarted
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FEndOfDayRecap          EndOfDayRecap                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UHUD_C::EndOfDayRecapStarted(const struct FEndOfDayRecap& EndOfDayRecap)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.EndOfDayRecapStarted");

	UHUD_C_EndOfDayRecapStarted_Params params;
	params.EndOfDayRecap = EndOfDayRecap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.EndOfDayRecapEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::EndOfDayRecapEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.EndOfDayRecapEnded");

	UHUD_C_EndOfDayRecapEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.PushContentWidgetInternal
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FContentPushState*      State                          (CPF_Parm)

void UHUD_C::PushContentWidgetInternal(class UWidget** Widget, struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.PushContentWidgetInternal");

	UHUD_C_PushContentWidgetInternal_Params params;
	params.Widget = Widget;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.Destruct");

	UHUD_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HandleInputMethodChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::HandleInputMethodChanged(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HandleInputMethodChanged");

	UHUD_C_HandleInputMethodChanged_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature
// (FUNC_BlueprintEvent)

void UHUD_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature");

	UHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature
// (FUNC_BlueprintEvent)

void UHUD_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature");

	UHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ExecuteUbergraph_HUD
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::ExecuteUbergraph_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ExecuteUbergraph_HUD");

	UHUD_C_ExecuteUbergraph_HUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
