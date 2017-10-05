#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaHUD.AthenaHUD_C.AddTeamMemberIndicator
struct UAthenaHUD_C_AddTeamMemberIndicator_Params
{
	class AFortPlayerStateAthena*                      Player_State;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Team_Member_Index;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.HandleAircraftModeChanged
struct UAthenaHUD_C_HandleAircraftModeChanged_Params
{
};

// Function AthenaHUD.AthenaHUD_C.CheckHUDElementVisibility
struct UAthenaHUD_C_CheckHUDElementVisibility_Params
{
	struct FGameplayTagContainer                       HiddenHUDElementTags;                                     // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                HUDElementTagToCheck;                                     // (CPF_Parm)
	class UWidget*                                     HUDElement;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.OnHUDElementVisibilityChanged
struct UAthenaHUD_C_OnHUDElementVisibilityChanged_Params
{
	struct FGameplayTagContainer                       HiddenHUDElementTags;                                     // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function AthenaHUD.AthenaHUD_C.PopContentWidgetInternal
struct UAthenaHUD_C_PopContentWidgetInternal_Params
{
	struct FContentPushState*                          State;                                                    // (CPF_Parm)
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.CreateInterestIndicatorWidget
struct UAthenaHUD_C_CreateInterestIndicatorWidget_Params
{
};

// Function AthenaHUD.AthenaHUD_C.HandleOnPointOfInterestRemoved
struct UAthenaHUD_C_HandleOnPointOfInterestRemoved_Params
{
	class AActor*                                      PointOfInterest;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.HandleOnPointOfInterestAdded
struct UAthenaHUD_C_HandleOnPointOfInterestAdded_Params
{
	class AActor*                                      PointOfInterest;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       DisplayText;                                              // (CPF_Parm)
	class UTexture2D*                                  DisplayImage;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.ShowPicker
struct UAthenaHUD_C_ShowPicker_Params
{
	EFortPickerMode                                    Mode;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InitialOption;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IgnoreFirstAccept;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.HandleFocusChat
struct UAthenaHUD_C_HandleFocusChat_Params
{
};

// Function AthenaHUD.AthenaHUD_C.ToggleTopLevelMenu
struct UAthenaHUD_C_ToggleTopLevelMenu_Params
{
	bool                                               Show;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.ToggleChat
struct UAthenaHUD_C_ToggleChat_Params
{
	bool                                               Show;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.SetPersistentHUDContentVisibility
struct UAthenaHUD_C_SetPersistentHUDContentVisibility_Params
{
	bool                                               Visible;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.HandleIndicatorModeChanged
struct UAthenaHUD_C_HandleIndicatorModeChanged_Params
{
	bool                                               InidicatorsEnabled;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.SetCursorModeContent
struct UAthenaHUD_C_SetCursorModeContent_Params
{
	class UUserWidget*                                 CustomWidget;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.OnPlayerTargetingChanged
struct UAthenaHUD_C_OnPlayerTargetingChanged_Params
{
	bool                                               IsTargeting;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.HandleKeybindsChanged
struct UAthenaHUD_C_HandleKeybindsChanged_Params
{
};

// Function AthenaHUD.AthenaHUD_C.OnHandleAction
struct UAthenaHUD_C_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                   // (CPF_Parm, CPF_OutParm)
	bool                                               bPassThrough;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.SetQuickbarSizes
struct UAthenaHUD_C_SetQuickbarSizes_Params
{
};

// Function AthenaHUD.AthenaHUD_C.HandleQuickbarSlotFocusSlotChanged
struct UAthenaHUD_C_HandleQuickbarSlotFocusSlotChanged_Params
{
	EFortQuickBars                                     Quickbar_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Slot;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.HandleCursorModeChanged
struct UAthenaHUD_C_HandleCursorModeChanged_Params
{
	bool                                               IsEnabled;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UUserWidget*                                 CursorModeContentCustomWidget;                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED
struct UAthenaHUD_C_OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED_Params
{
};

// Function AthenaHUD.AthenaHUD_C.OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED
struct UAthenaHUD_C_OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED_Params
{
};

// Function AthenaHUD.AthenaHUD_C.Construct
struct UAthenaHUD_C_Construct_Params
{
};

// Function AthenaHUD.AthenaHUD_C.OnEnterState
struct UAthenaHUD_C_OnEnterState_Params
{
	EFortUIState*                                      PreviousUIState;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.QuestsCompleted
struct UAthenaHUD_C_QuestsCompleted_Params
{
	TArray<class UFortQuestItem*>                      Quests;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function AthenaHUD.AthenaHUD_C.PushContentWidgetInternal
struct UAthenaHUD_C_PushContentWidgetInternal_Params
{
	class UWidget**                                    Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FContentPushState*                          State;                                                    // (CPF_Parm)
};

// Function AthenaHUD.AthenaHUD_C.Destruct
struct UAthenaHUD_C_Destruct_Params
{
};

// Function AthenaHUD.AthenaHUD_C.HandleInputMethodChanged
struct UAthenaHUD_C_HandleInputMethodChanged_Params
{
	bool                                               UsingGamepad;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaHUD.AthenaHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature
struct UAthenaHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature_Params
{
};

// Function AthenaHUD.AthenaHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature
struct UAthenaHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature_Params
{
};

// Function AthenaHUD.AthenaHUD_C.Prepare Game Over
struct UAthenaHUD_C_Prepare_Game_Over_Params
{
};

// Function AthenaHUD.AthenaHUD_C.On Player Died
struct UAthenaHUD_C_On_Player_Died_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function AthenaHUD.AthenaHUD_C.PrepareToShowEndGameUI
struct UAthenaHUD_C_PrepareToShowEndGameUI_Params
{
};

// Function AthenaHUD.AthenaHUD_C.On Player Won
struct UAthenaHUD_C_On_Player_Won_Params
{
};

// Function AthenaHUD.AthenaHUD_C.OnRevived
struct UAthenaHUD_C_OnRevived_Params
{
};

// Function AthenaHUD.AthenaHUD_C.HandleRevived
struct UAthenaHUD_C_HandleRevived_Params
{
};

// Function AthenaHUD.AthenaHUD_C.OnUnableToPerformAction
struct UAthenaHUD_C_OnUnableToPerformAction_Params
{
	struct FGameplayTagContainer                       FailedReason;                                             // (CPF_Parm)
	struct FText                                       FailureText;                                              // (CPF_Parm)
};

// Function AthenaHUD.AthenaHUD_C.On Team Won
struct UAthenaHUD_C_On_Team_Won_Params
{
};

// Function AthenaHUD.AthenaHUD_C.TeamMembersChanged
struct UAthenaHUD_C_TeamMembersChanged_Params
{
};

// Function AthenaHUD.AthenaHUD_C.ExecuteUbergraph_AthenaHUD
struct UAthenaHUD_C_ExecuteUbergraph_AthenaHUD_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
