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

// Function AthenaHUD.AthenaHUD_C.AddTeamMemberIndicator
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*  Player_State                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Team_Member_Index              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHUD_C::AddTeamMemberIndicator(class AFortPlayerStateAthena* Player_State, int Team_Member_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.AddTeamMemberIndicator");

	UAthenaHUD_C_AddTeamMemberIndicator_Params params;
	params.Player_State = Player_State;
	params.Team_Member_Index = Team_Member_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandleAircraftModeChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaHUD_C::HandleAircraftModeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandleAircraftModeChanged");

	UAthenaHUD_C_HandleAircraftModeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.CheckHUDElementVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   HiddenHUDElementTags           (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTag            HUDElementTagToCheck           (CPF_Parm)
// class UWidget*                 HUDElement                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UAthenaHUD_C::CheckHUDElementVisibility(const struct FGameplayTag& HUDElementTagToCheck, struct FGameplayTagContainer* HiddenHUDElementTags, class UWidget** HUDElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.CheckHUDElementVisibility");

	UAthenaHUD_C_CheckHUDElementVisibility_Params params;
	params.HUDElementTagToCheck = HUDElementTagToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HiddenHUDElementTags != nullptr)
		*HiddenHUDElementTags = params.HiddenHUDElementTags;
	if (HUDElement != nullptr)
		*HUDElement = params.HUDElement;
}


// Function AthenaHUD.AthenaHUD_C.OnHUDElementVisibilityChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   HiddenHUDElementTags           (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAthenaHUD_C::OnHUDElementVisibilityChanged(struct FGameplayTagContainer* HiddenHUDElementTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.OnHUDElementVisibilityChanged");

	UAthenaHUD_C_OnHUDElementVisibilityChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HiddenHUDElementTags != nullptr)
		*HiddenHUDElementTags = params.HiddenHUDElementTags;
}


// Function AthenaHUD.AthenaHUD_C.PopContentWidgetInternal
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FContentPushState*      State                          (CPF_Parm)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UAthenaHUD_C::PopContentWidgetInternal(struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.PopContentWidgetInternal");

	UAthenaHUD_C_PopContentWidgetInternal_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaHUD.AthenaHUD_C.CreateInterestIndicatorWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaHUD_C::CreateInterestIndicatorWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.CreateInterestIndicatorWidget");

	UAthenaHUD_C_CreateInterestIndicatorWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandleOnPointOfInterestRemoved
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  PointOfInterest                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHUD_C::HandleOnPointOfInterestRemoved(class AActor* PointOfInterest)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandleOnPointOfInterestRemoved");

	UAthenaHUD_C_HandleOnPointOfInterestRemoved_Params params;
	params.PointOfInterest = PointOfInterest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandleOnPointOfInterestAdded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  PointOfInterest                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   DisplayText                    (CPF_Parm)
// class UTexture2D*              DisplayImage                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHUD_C::HandleOnPointOfInterestAdded(class AActor* PointOfInterest, const struct FText& DisplayText, class UTexture2D* DisplayImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandleOnPointOfInterestAdded");

	UAthenaHUD_C_HandleOnPointOfInterestAdded_Params params;
	params.PointOfInterest = PointOfInterest;
	params.DisplayText = DisplayText;
	params.DisplayImage = DisplayImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.ShowPicker
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InitialOption                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IgnoreFirstAccept              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHUD_C::ShowPicker(int InitialOption, bool IgnoreFirstAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.ShowPicker");

	UAthenaHUD_C_ShowPicker_Params params;
	params.InitialOption = InitialOption;
	params.IgnoreFirstAccept = IgnoreFirstAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandleFocusChat
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaHUD_C::HandleFocusChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandleFocusChat");

	UAthenaHUD_C_HandleFocusChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.ToggleTopLevelMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHUD_C::ToggleTopLevelMenu(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.ToggleTopLevelMenu");

	UAthenaHUD_C_ToggleTopLevelMenu_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.ToggleChat
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHUD_C::ToggleChat(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.ToggleChat");

	UAthenaHUD_C_ToggleChat_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.SetPersistentHUDContentVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHUD_C::SetPersistentHUDContentVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.SetPersistentHUDContentVisibility");

	UAthenaHUD_C_SetPersistentHUDContentVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandleIndicatorModeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InidicatorsEnabled             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHUD_C::HandleIndicatorModeChanged(bool InidicatorsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandleIndicatorModeChanged");

	UAthenaHUD_C_HandleIndicatorModeChanged_Params params;
	params.InidicatorsEnabled = InidicatorsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.SetCursorModeContent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             CustomWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ActionName                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UAthenaHUD_C::SetCursorModeContent(class UUserWidget* CustomWidget, struct FName* ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.SetCursorModeContent");

	UAthenaHUD_C_SetCursorModeContent_Params params;
	params.CustomWidget = CustomWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionName != nullptr)
		*ActionName = params.ActionName;
}


// Function AthenaHUD.AthenaHUD_C.OnPlayerTargetingChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsTargeting                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHUD_C::OnPlayerTargetingChanged(bool IsTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.OnPlayerTargetingChanged");

	UAthenaHUD_C_OnPlayerTargetingChanged_Params params;
	params.IsTargeting = IsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandleKeybindsChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaHUD_C::HandleKeybindsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandleKeybindsChanged");

	UAthenaHUD_C_HandleKeybindsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.OnHandleAction
// (FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FEventReply             Result                         (CPF_Parm, CPF_OutParm)
// bool                           bPassThrough                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHUD_C::OnHandleAction(struct FEventReply* Result, bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.OnHandleAction");

	UAthenaHUD_C_OnHandleAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaHUD.AthenaHUD_C.SetQuickbarSizes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaHUD_C::SetQuickbarSizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.SetQuickbarSizes");

	UAthenaHUD_C_SetQuickbarSizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandleQuickbarSlotFocusSlotChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHUD_C::HandleQuickbarSlotFocusSlotChanged(int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandleQuickbarSlotFocusSlotChanged");

	UAthenaHUD_C_HandleQuickbarSlotFocusSlotChanged_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandleCursorModeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUserWidget*             CursorModeContentCustomWidget  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHUD_C::HandleCursorModeChanged(bool IsEnabled, const struct FName& ActionName, class UUserWidget* CursorModeContentCustomWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandleCursorModeChanged");

	UAthenaHUD_C_HandleCursorModeChanged_Params params;
	params.IsEnabled = IsEnabled;
	params.ActionName = ActionName;
	params.CursorModeContentCustomWidget = CursorModeContentCustomWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaHUD_C::OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED");

	UAthenaHUD_C_OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaHUD_C::OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED");

	UAthenaHUD_C_OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.Construct");

	UAthenaHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.OnEnterState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaHUD_C::OnEnterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.OnEnterState");

	UAthenaHUD_C_OnEnterState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.QuestsCompleted
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>  Quests                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UAthenaHUD_C::QuestsCompleted(TArray<class UFortQuestItem*> Quests)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.QuestsCompleted");

	UAthenaHUD_C_QuestsCompleted_Params params;
	params.Quests = Quests;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.PushContentWidgetInternal
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FContentPushState*      State                          (CPF_Parm)

void UAthenaHUD_C::PushContentWidgetInternal(class UWidget** Widget, struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.PushContentWidgetInternal");

	UAthenaHUD_C_PushContentWidgetInternal_Params params;
	params.Widget = Widget;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaHUD_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.Destruct");

	UAthenaHUD_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandleInputMethodChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHUD_C::HandleInputMethodChanged(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandleInputMethodChanged");

	UAthenaHUD_C_HandleInputMethodChanged_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature
// (FUNC_BlueprintEvent)

void UAthenaHUD_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature");

	UAthenaHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature
// (FUNC_BlueprintEvent)

void UAthenaHUD_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature");

	UAthenaHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.Prepare Game Over
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaHUD_C::Prepare_Game_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.Prepare Game Over");

	UAthenaHUD_C_Prepare_Game_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.On Player Died
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport  DeathReport                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAthenaHUD_C::On_Player_Died(const struct FFortPlayerDeathReport& DeathReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.On Player Died");

	UAthenaHUD_C_On_Player_Died_Params params;
	params.DeathReport = DeathReport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.PrepareToShowEndGameUI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaHUD_C::PrepareToShowEndGameUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.PrepareToShowEndGameUI");

	UAthenaHUD_C_PrepareToShowEndGameUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.On Player Won
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaHUD_C::On_Player_Won()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.On Player Won");

	UAthenaHUD_C_On_Player_Won_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.OnRevived
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaHUD_C::OnRevived()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.OnRevived");

	UAthenaHUD_C_OnRevived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.HandleRevived
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaHUD_C::HandleRevived()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.HandleRevived");

	UAthenaHUD_C_HandleRevived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.OnUnableToPerformAction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   FailedReason                   (CPF_Parm)
// struct FText                   FailureText                    (CPF_Parm)

void UAthenaHUD_C::OnUnableToPerformAction(const struct FGameplayTagContainer& FailedReason, const struct FText& FailureText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.OnUnableToPerformAction");

	UAthenaHUD_C_OnUnableToPerformAction_Params params;
	params.FailedReason = FailedReason;
	params.FailureText = FailureText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.On Team Won
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaHUD_C::On_Team_Won()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.On Team Won");

	UAthenaHUD_C_On_Team_Won_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.TeamMembersChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaHUD_C::TeamMembersChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.TeamMembersChanged");

	UAthenaHUD_C_TeamMembersChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD.AthenaHUD_C.ExecuteUbergraph_AthenaHUD
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaHUD_C::ExecuteUbergraph_AthenaHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD.AthenaHUD_C.ExecuteUbergraph_AthenaHUD");

	UAthenaHUD_C_ExecuteUbergraph_AthenaHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
