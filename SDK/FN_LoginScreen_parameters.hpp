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

// Function LoginScreen.LoginScreen_C.CloseAnyConfirmationsOpen
struct ULoginScreen_C_CloseAnyConfirmationsOpen_Params
{
};

// Function LoginScreen.LoginScreen_C.SafePopContent
struct ULoginScreen_C_SafePopContent_Params
{
};

// Function LoginScreen.LoginScreen_C.ShowAccountSelectWindow
struct ULoginScreen_C_ShowAccountSelectWindow_Params
{
};

// Function LoginScreen.LoginScreen_C.CheckSkipSplashScreen
struct ULoginScreen_C_CheckSkipSplashScreen_Params
{
};

// Function LoginScreen.LoginScreen_C.EmptyLoginStack
struct ULoginScreen_C_EmptyLoginStack_Params
{
};

// Function LoginScreen.LoginScreen_C.HideNonSplashScreenContent
struct ULoginScreen_C_HideNonSplashScreenContent_Params
{
};

// Function LoginScreen.LoginScreen_C.RollbackToSplashScreen
struct ULoginScreen_C_RollbackToSplashScreen_Params
{
};

// Function LoginScreen.LoginScreen_C.PopContentWidgetInternal
struct ULoginScreen_C_PopContentWidgetInternal_Params
{
	struct FContentPushState*                          State;                                                    // (CPF_Parm)
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.ShowSplashScreen
struct ULoginScreen_C_ShowSplashScreen_Params
{
};

// Function LoginScreen.LoginScreen_C.GetLoginMenu
struct ULoginScreen_C_GetLoginMenu_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.OnMouseButtonUp_MenuBorder
struct ULoginScreen_C_OnMouseButtonUp_MenuBorder_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function LoginScreen.LoginScreen_C.SkipBenchmark
struct ULoginScreen_C_SkipBenchmark_Params
{
};

// Function LoginScreen.LoginScreen_C.RunBenchmark
struct ULoginScreen_C_RunBenchmark_Params
{
};

// Function LoginScreen.LoginScreen_C.ShouldShowBenchmark
struct ULoginScreen_C_ShouldShowBenchmark_Params
{
	bool                                               Return_Value;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.ShowEulaWindow
struct ULoginScreen_C_ShowEulaWindow_Params
{
	struct FText                                       Text;                                                     // (CPF_Parm)
	bool                                               ViewOnly;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.SetResultsDescription
struct ULoginScreen_C_SetResultsDescription_Params
{
	struct FText                                       Description;                                              // (CPF_Parm)
};

// Function LoginScreen.LoginScreen_C.SetResultTitle
struct ULoginScreen_C_SetResultTitle_Params
{
	struct FText                                       Title;                                                    // (CPF_Parm)
	bool                                               bShowError;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.ShowResultWindow
struct ULoginScreen_C_ShowResultWindow_Params
{
	struct FText                                       Title;                                                    // (CPF_Parm)
	struct FText                                       Description;                                              // (CPF_Parm)
	bool                                               bShowError;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.ToggleLoginMenu
struct ULoginScreen_C_ToggleLoginMenu_Params
{
};

// Function LoginScreen.LoginScreen_C.UpdateStatusTitle
struct ULoginScreen_C_UpdateStatusTitle_Params
{
	struct FText                                       Title;                                                    // (CPF_Parm)
};

// Function LoginScreen.LoginScreen_C.ShowAccountLinkingWindow
struct ULoginScreen_C_ShowAccountLinkingWindow_Params
{
	bool                                               InLinkedAccountNeedsPurchase;                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.ShowStatusWindow
struct ULoginScreen_C_ShowStatusWindow_Params
{
	struct FText                                       StatusText;                                               // (CPF_Parm)
};

// Function LoginScreen.LoginScreen_C.ShowSignInWindow
struct ULoginScreen_C_ShowSignInWindow_Params
{
	bool                                               DirectSignIn;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.DialogResult_EE7DC32F44B9651770AED08101A03510
struct ULoginScreen_C_DialogResult_EE7DC32F44B9651770AED08101A03510_Params
{
	EFortDialogResult                                  Result;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ResultName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.DialogResult_B952A8754B3836D2151B4981F531542E
struct ULoginScreen_C_DialogResult_B952A8754B3836D2151B4981F531542E_Params
{
	EFortDialogResult                                  Result;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ResultName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.Construct
struct ULoginScreen_C_Construct_Params
{
};

// Function LoginScreen.LoginScreen_C.OnPatchingComplete
struct ULoginScreen_C_OnPatchingComplete_Params
{
	bool*                                              bProceed;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.OnEnterState
struct ULoginScreen_C_OnEnterState_Params
{
	EFortUIState*                                      PreviousUIState;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.OnExitState
struct ULoginScreen_C_OnExitState_Params
{
	EFortUIState*                                      NextUIState;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.HandleOnStartLogin
struct ULoginScreen_C_HandleOnStartLogin_Params
{
	struct FString                                     LoginEmail;                                               // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     LoginPassword;                                            // (CPF_Parm, CPF_ZeroConstructor)
};

// Function LoginScreen.LoginScreen_C.OnLoginFailed
struct ULoginScreen_C_OnLoginFailed_Params
{
	struct FText*                                      Reason;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function LoginScreen.LoginScreen_C.OnLoginSuceeded
struct ULoginScreen_C_OnLoginSuceeded_Params
{
};

// Function LoginScreen.LoginScreen_C.OnEulaAvailable
struct ULoginScreen_C_OnEulaAvailable_Params
{
	struct FText*                                      EulaText;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function LoginScreen.LoginScreen_C.HandleEulaResponse
struct ULoginScreen_C_HandleEulaResponse_Params
{
	bool                                               Accepted;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.HandleResultConfirmed
struct ULoginScreen_C_HandleResultConfirmed_Params
{
};

// Function LoginScreen.LoginScreen_C.HandlerBenchmarkFlow
struct ULoginScreen_C_HandlerBenchmarkFlow_Params
{
};

// Function LoginScreen.LoginScreen_C.AccountLinking_PushStatus
struct ULoginScreen_C_AccountLinking_PushStatus_Params
{
	struct FText                                       StatusText;                                               // (CPF_Parm)
};

// Function LoginScreen.LoginScreen_C.AccountLinking_PopStatus
struct ULoginScreen_C_AccountLinking_PopStatus_Params
{
};

// Function LoginScreen.LoginScreen_C.AccountLinking_LinkingFailed
struct ULoginScreen_C_AccountLinking_LinkingFailed_Params
{
	struct FText                                       FailReason;                                               // (CPF_Parm)
};

// Function LoginScreen.LoginScreen_C.AccountLinking_RequestSignIn
struct ULoginScreen_C_AccountLinking_RequestSignIn_Params
{
};

// Function LoginScreen.LoginScreen_C.AccountLinking_RequestAutoLogin
struct ULoginScreen_C_AccountLinking_RequestAutoLogin_Params
{
};

// Function LoginScreen.LoginScreen_C.OnSplashScreenClosed
struct ULoginScreen_C_OnSplashScreenClosed_Params
{
};

// Function LoginScreen.LoginScreen_C.PushContentWidgetInternal
struct ULoginScreen_C_PushContentWidgetInternal_Params
{
	class UWidget**                                    Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FContentPushState*                          State;                                                    // (CPF_Parm)
};

// Function LoginScreen.LoginScreen_C.OnLogoutComplete
struct ULoginScreen_C_OnLogoutComplete_Params
{
};

// Function LoginScreen.LoginScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature
struct ULoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.AccountLinking_ViewEula
struct ULoginScreen_C_AccountLinking_ViewEula_Params
{
};

// Function LoginScreen.LoginScreen_C.HandleViewOnlyClose
struct ULoginScreen_C_HandleViewOnlyClose_Params
{
};

// Function LoginScreen.LoginScreen_C.OnNeedsPurchaseOrAccountLinking
struct ULoginScreen_C_OnNeedsPurchaseOrAccountLinking_Params
{
	bool*                                              bLinkedAccountNeedsPurchase;                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.OnDisplayErrorComplete
struct ULoginScreen_C_OnDisplayErrorComplete_Params
{
};

// Function LoginScreen.LoginScreen_C.HandleOnLoginAccountTypeSelected
struct ULoginScreen_C_HandleOnLoginAccountTypeSelected_Params
{
	EFortLoginAccountType                              LoginAccountType;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.OnPostLoginLogoutComplete
struct ULoginScreen_C_OnPostLoginLogoutComplete_Params
{
	struct FText*                                      Reason;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function LoginScreen.LoginScreen_C.OnShowLoginMessage
struct ULoginScreen_C_OnShowLoginMessage_Params
{
	bool*                                              bShow;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText*                                      Tile;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FText*                                      Body;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen
struct ULoginScreen_C_ExecuteUbergraph_LoginScreen_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
