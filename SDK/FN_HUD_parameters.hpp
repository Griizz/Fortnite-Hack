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

// Function HUD.HUD_C.CheckHUDElementVisibility
struct UHUD_C_CheckHUDElementVisibility_Params
{
	struct FGameplayTagContainer                       HiddenHUDElementTags;                                     // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                HUDElementTagToCheck;                                     // (CPF_Parm)
	class UWidget*                                     HUDElement;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function HUD.HUD_C.OnHUDElementVisibilityChanged
struct UHUD_C_OnHUDElementVisibilityChanged_Params
{
	struct FGameplayTagContainer                       HiddenHUDElementTags;                                     // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function HUD.HUD_C.OnManagementTabSelected
struct UHUD_C_OnManagementTabSelected_Params
{
	struct FName                                       TabName;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HUD.HUD_C.PopContentWidgetInternal
struct UHUD_C_PopContentWidgetInternal_Params
{
	struct FContentPushState*                          State;                                                    // (CPF_Parm)
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function HUD.HUD_C.CreateInterestIndicatorWidget
struct UHUD_C_CreateInterestIndicatorWidget_Params
{
};

// Function HUD.HUD_C.HandleOnPointOfInterestRemoved
struct UHUD_C_HandleOnPointOfInterestRemoved_Params
{
	class AActor*                                      PointOfInterest;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HUD.HUD_C.HandleOnPointOfInterestAdded
struct UHUD_C_HandleOnPointOfInterestAdded_Params
{
	class AActor*                                      PointOfInterest;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       DisplayText;                                              // (CPF_Parm)
	class UTexture2D*                                  DisplayImage;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HUD.HUD_C.ShowPicker
struct UHUD_C_ShowPicker_Params
{
	EFortPickerMode                                    Mode;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InitialOption;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IgnoreFirstAccept;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HUD.HUD_C.OnHordeTierCompleteWidgetFinished
struct UHUD_C_OnHordeTierCompleteWidgetFinished_Params
{
};

// Function HUD.HUD_C.HandleHordeTierComplete
struct UHUD_C_HandleHordeTierComplete_Params
{
	EFortCompletionResult                              Result;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HUD.HUD_C.HandleFocusChat
struct UHUD_C_HandleFocusChat_Params
{
};

// Function HUD.HUD_C.ToggleTopLevelMenu
struct UHUD_C_ToggleTopLevelMenu_Params
{
	bool                                               Show;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HUD.HUD_C.ToggleChat
struct UHUD_C_ToggleChat_Params
{
	bool                                               Show;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HUD.HUD_C.SetPersistentHUDContentVisibility
struct UHUD_C_SetPersistentHUDContentVisibility_Params
{
	bool                                               Visible;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HUD.HUD_C.HandleIndicatorModeChanged
struct UHUD_C_HandleIndicatorModeChanged_Params
{
	bool                                               InidicatorsEnabled;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HUD.HUD_C.SetCursorModeContent
struct UHUD_C_SetCursorModeContent_Params
{
	class UUserWidget*                                 CustomWidget;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function HUD.HUD_C.SetGameMode
struct UHUD_C_SetGameMode_Params
{
};

// Function HUD.HUD_C.OnPlayerTargetingChanged
struct UHUD_C_OnPlayerTargetingChanged_Params
{
	bool                                               IsTargeting;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HUD.HUD_C.HandleKeybindsChanged
struct UHUD_C_HandleKeybindsChanged_Params
{
};

// Function HUD.HUD_C.HandleZoneCompleted
struct UHUD_C_HandleZoneCompleted_Params
{
};

// Function HUD.HUD_C.OnHandleAction
struct UHUD_C_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                   // (CPF_Parm, CPF_OutParm)
	bool                                               bPassThrough;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HUD.HUD_C.SetQuickbarSizes
struct UHUD_C_SetQuickbarSizes_Params
{
};

// Function HUD.HUD_C.HandleQuickbarSlotFocusSlotChanged
struct UHUD_C_HandleQuickbarSlotFocusSlotChanged_Params
{
	EFortQuickBars                                     Quickbar_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Slot;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HUD.HUD_C.HandleCursorModeChanged
struct UHUD_C_HandleCursorModeChanged_Params
{
	bool                                               IsEnabled;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UUserWidget*                                 CursorModeContentCustomWidget;                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HUD.HUD_C.OnDeclined_0E0300084F8A9EB1D6CB5E836DBF8C7A
struct UHUD_C_OnDeclined_0E0300084F8A9EB1D6CB5E836DBF8C7A_Params
{
};

// Function HUD.HUD_C.OnConfirmed_0E0300084F8A9EB1D6CB5E836DBF8C7A
struct UHUD_C_OnConfirmed_0E0300084F8A9EB1D6CB5E836DBF8C7A_Params
{
};

// Function HUD.HUD_C.OnEnterState
struct UHUD_C_OnEnterState_Params
{
	EFortUIState*                                      PreviousUIState;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HUD.HUD_C.QuestsCompleted
struct UHUD_C_QuestsCompleted_Params
{
	TArray<class UFortQuestItem*>                      Quests;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function HUD.HUD_C.Construct
struct UHUD_C_Construct_Params
{
};

// Function HUD.HUD_C.LoadingScreenChanged
struct UHUD_C_LoadingScreenChanged_Params
{
	bool                                               bVisible;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HUD.HUD_C.EndOfDayRecapStarted
struct UHUD_C_EndOfDayRecapStarted_Params
{
	struct FEndOfDayRecap                              EndOfDayRecap;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function HUD.HUD_C.EndOfDayRecapEnded
struct UHUD_C_EndOfDayRecapEnded_Params
{
};

// Function HUD.HUD_C.PushContentWidgetInternal
struct UHUD_C_PushContentWidgetInternal_Params
{
	class UWidget**                                    Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FContentPushState*                          State;                                                    // (CPF_Parm)
};

// Function HUD.HUD_C.Destruct
struct UHUD_C_Destruct_Params
{
};

// Function HUD.HUD_C.HandleInputMethodChanged
struct UHUD_C_HandleInputMethodChanged_Params
{
	bool                                               UsingGamepad;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HUD.HUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature
struct UHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature_Params
{
};

// Function HUD.HUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature
struct UHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature_Params
{
};

// Function HUD.HUD_C.ExecuteUbergraph_HUD
struct UHUD_C_ExecuteUbergraph_HUD_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
