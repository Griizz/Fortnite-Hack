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

// Function TopBar.TopBar_C.ConfigureVisibleItemsForSubGame
struct UTopBar_C_ConfigureVisibleItemsForSubGame_Params
{
};

// Function TopBar.TopBar_C.OpenSocialMenu
struct UTopBar_C_OpenSocialMenu_Params
{
};

// Function TopBar.TopBar_C.FireOpenAnalyticsEvent
struct UTopBar_C_FireOpenAnalyticsEvent_Params
{
};

// Function TopBar.TopBar_C.HideMTXPlusButton
struct UTopBar_C_HideMTXPlusButton_Params
{
};

// Function TopBar.TopBar_C.ForceMenuClosed
struct UTopBar_C_ForceMenuClosed_Params
{
};

// Function TopBar.TopBar_C.GetMainMenuTooltipWidget
struct UTopBar_C_GetMainMenuTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TopBar.TopBar_C.GetFriendsTooltipWidget
struct UTopBar_C_GetFriendsTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TopBar.TopBar_C.HandleActiveInvitesCountChanged
struct UTopBar_C_HandleActiveInvitesCountChanged_Params
{
	int                                                ActiveInvitesCount;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TopBar.TopBar_C.HandleAccountPickerResult
struct UTopBar_C_HandleAccountPickerResult_Params
{
	int                                                ControllerIndex;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UserSwitched;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TopBar.TopBar_C.UnbindActiveFriendsCountChangedEvent
struct UTopBar_C_UnbindActiveFriendsCountChangedEvent_Params
{
};

// Function TopBar.TopBar_C.HandleActiveFriendsCountChanged
struct UTopBar_C_HandleActiveFriendsCountChanged_Params
{
	int                                                ActiveFriendsCount;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TopBar.TopBar_C.BindActiveFriendsCountChangedEvent
struct UTopBar_C_BindActiveFriendsCountChangedEvent_Params
{
};

// Function TopBar.TopBar_C.BindSwitchProfileAction
struct UTopBar_C_BindSwitchProfileAction_Params
{
};

// Function TopBar.TopBar_C.HandleSwitchProfileAction
struct UTopBar_C_HandleSwitchProfileAction_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TopBar.TopBar_C.HandleFeatureSwitchOp
struct UTopBar_C_HandleFeatureSwitchOp_Params
{
	EFortUIFeature                                     Feature;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TopBar.TopBar_C.UnbindNavigationDelegates
struct UTopBar_C_UnbindNavigationDelegates_Params
{
};

// Function TopBar.TopBar_C.BindNavigationDelegates
struct UTopBar_C_BindNavigationDelegates_Params
{
};

// Function TopBar.TopBar_C.ForceMenuOpen
struct UTopBar_C_ForceMenuOpen_Params
{
};

// Function TopBar.TopBar_C.GetSocialMenuContent
struct UTopBar_C_GetSocialMenuContent_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TopBar.TopBar_C.CreateWidgets
struct UTopBar_C_CreateWidgets_Params
{
};

// Function TopBar.TopBar_C.HandleCloseAction
struct UTopBar_C_HandleCloseAction_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TopBar.TopBar_C.BindPanelControl
struct UTopBar_C_BindPanelControl_Params
{
};

// Function TopBar.TopBar_C.CloseMainMenu
struct UTopBar_C_CloseMainMenu_Params
{
};

// Function TopBar.TopBar_C.OpenMainMenu
struct UTopBar_C_OpenMainMenu_Params
{
};

// Function TopBar.TopBar_C.DialogResult_32D813B145A5E184B01A15AABE16B774
struct UTopBar_C_DialogResult_32D813B145A5E184B01A15AABE16B774_Params
{
	EFortDialogResult                                  Result;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ResultName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TopBar.TopBar_C.OnBeginIntro
struct UTopBar_C_OnBeginIntro_Params
{
};

// Function TopBar.TopBar_C.OnBeginOutro
struct UTopBar_C_OnBeginOutro_Params
{
};

// Function TopBar.TopBar_C.OnActivated
struct UTopBar_C_OnActivated_Params
{
};

// Function TopBar.TopBar_C.Hidden
struct UTopBar_C_Hidden_Params
{
};

// Function TopBar.TopBar_C.BndEvt__MainMenu_K2Node_ComponentBoundEvent_48_OnRequestShowFeedbackWidget__DelegateSignature
struct UTopBar_C_BndEvt__MainMenu_K2Node_ComponentBoundEvent_48_OnRequestShowFeedbackWidget__DelegateSignature_Params
{
};

// Function TopBar.TopBar_C.BndEvt__Social_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature
struct UTopBar_C_BndEvt__Social_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TopBar.TopBar_C.PreConstruct
struct UTopBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TopBar.TopBar_C.Construct
struct UTopBar_C_Construct_Params
{
};

// Function TopBar.TopBar_C.Destruct
struct UTopBar_C_Destruct_Params
{
};

// Function TopBar.TopBar_C.OnAnimationFinished
struct UTopBar_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TopBar.TopBar_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_101_StreamTimerStarted__DelegateSignature
struct UTopBar_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_101_StreamTimerStarted__DelegateSignature_Params
{
};

// Function TopBar.TopBar_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_108_StreamTimerExpired__DelegateSignature
struct UTopBar_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_108_StreamTimerExpired__DelegateSignature_Params
{
};

// Function TopBar.TopBar_C.ShowSocialConfirmation
struct UTopBar_C_ShowSocialConfirmation_Params
{
	struct FText                                       MESSAGE;                                                  // (CPF_Parm)
};

// Function TopBar.TopBar_C.On Power Increased
struct UTopBar_C_On_Power_Increased_Params
{
};

// Function TopBar.TopBar_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_70_CommonButtonClicked__DelegateSignature
struct UTopBar_C_BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_70_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TopBar.TopBar_C.ExecuteUbergraph_TopBar
struct UTopBar_C_ExecuteUbergraph_TopBar_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TopBar.TopBar_C.OpenAccountPicker__DelegateSignature
struct UTopBar_C_OpenAccountPicker__DelegateSignature_Params
{
};

// Function TopBar.TopBar_C.MainMenuStateChanged__DelegateSignature
struct UTopBar_C_MainMenuStateChanged__DelegateSignature_Params
{
	bool                                               Open;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
