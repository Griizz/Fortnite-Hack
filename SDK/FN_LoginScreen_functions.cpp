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

// Function LoginScreen.LoginScreen_C.CloseAnyConfirmationsOpen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::CloseAnyConfirmationsOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.CloseAnyConfirmationsOpen");

	ULoginScreen_C_CloseAnyConfirmationsOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.SafePopContent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::SafePopContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.SafePopContent");

	ULoginScreen_C_SafePopContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.ShowAccountSelectWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::ShowAccountSelectWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ShowAccountSelectWindow");

	ULoginScreen_C_ShowAccountSelectWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.CheckSkipSplashScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::CheckSkipSplashScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.CheckSkipSplashScreen");

	ULoginScreen_C_CheckSkipSplashScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.EmptyLoginStack
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::EmptyLoginStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.EmptyLoginStack");

	ULoginScreen_C_EmptyLoginStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.HideNonSplashScreenContent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::HideNonSplashScreenContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.HideNonSplashScreenContent");

	ULoginScreen_C_HideNonSplashScreenContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.RollbackToSplashScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::RollbackToSplashScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.RollbackToSplashScreen");

	ULoginScreen_C_RollbackToSplashScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.PopContentWidgetInternal
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FContentPushState*      State                          (CPF_Parm)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* ULoginScreen_C::PopContentWidgetInternal(struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.PopContentWidgetInternal");

	ULoginScreen_C_PopContentWidgetInternal_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LoginScreen.LoginScreen_C.ShowSplashScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::ShowSplashScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ShowSplashScreen");

	ULoginScreen_C_ShowSplashScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.GetLoginMenu
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* ULoginScreen_C::GetLoginMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.GetLoginMenu");

	ULoginScreen_C_GetLoginMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LoginScreen.LoginScreen_C.OnMouseButtonUp_MenuBorder
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply ULoginScreen_C::OnMouseButtonUp_MenuBorder(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnMouseButtonUp_MenuBorder");

	ULoginScreen_C_OnMouseButtonUp_MenuBorder_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LoginScreen.LoginScreen_C.SkipBenchmark
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::SkipBenchmark()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.SkipBenchmark");

	ULoginScreen_C_SkipBenchmark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.RunBenchmark
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::RunBenchmark()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.RunBenchmark");

	ULoginScreen_C_RunBenchmark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.ShouldShowBenchmark
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginScreen_C::ShouldShowBenchmark(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ShouldShowBenchmark");

	ULoginScreen_C_ShouldShowBenchmark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function LoginScreen.LoginScreen_C.ShowEulaWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_Parm)
// bool                           ViewOnly                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginScreen_C::ShowEulaWindow(const struct FText& Text, bool ViewOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ShowEulaWindow");

	ULoginScreen_C_ShowEulaWindow_Params params;
	params.Text = Text;
	params.ViewOnly = ViewOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.SetResultsDescription
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Description                    (CPF_Parm)

void ULoginScreen_C::SetResultsDescription(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.SetResultsDescription");

	ULoginScreen_C_SetResultsDescription_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.SetResultTitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_Parm)
// bool                           bShowError                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginScreen_C::SetResultTitle(const struct FText& Title, bool bShowError)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.SetResultTitle");

	ULoginScreen_C_SetResultTitle_Params params;
	params.Title = Title;
	params.bShowError = bShowError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.ShowResultWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_Parm)
// struct FText                   Description                    (CPF_Parm)
// bool                           bShowError                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginScreen_C::ShowResultWindow(const struct FText& Title, const struct FText& Description, bool bShowError)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ShowResultWindow");

	ULoginScreen_C_ShowResultWindow_Params params;
	params.Title = Title;
	params.Description = Description;
	params.bShowError = bShowError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.ToggleLoginMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::ToggleLoginMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ToggleLoginMenu");

	ULoginScreen_C_ToggleLoginMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.UpdateStatusTitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_Parm)

void ULoginScreen_C::UpdateStatusTitle(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.UpdateStatusTitle");

	ULoginScreen_C_UpdateStatusTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.ShowAccountLinkingWindow
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InLinkedAccountNeedsPurchase   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginScreen_C::ShowAccountLinkingWindow(bool InLinkedAccountNeedsPurchase)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ShowAccountLinkingWindow");

	ULoginScreen_C_ShowAccountLinkingWindow_Params params;
	params.InLinkedAccountNeedsPurchase = InLinkedAccountNeedsPurchase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.ShowStatusWindow
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   StatusText                     (CPF_Parm)

void ULoginScreen_C::ShowStatusWindow(const struct FText& StatusText)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ShowStatusWindow");

	ULoginScreen_C_ShowStatusWindow_Params params;
	params.StatusText = StatusText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.ShowSignInWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DirectSignIn                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginScreen_C::ShowSignInWindow(bool DirectSignIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ShowSignInWindow");

	ULoginScreen_C_ShowSignInWindow_Params params;
	params.DirectSignIn = DirectSignIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.DialogResult_EE7DC32F44B9651770AED08101A03510
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginScreen_C::DialogResult_EE7DC32F44B9651770AED08101A03510(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.DialogResult_EE7DC32F44B9651770AED08101A03510");

	ULoginScreen_C_DialogResult_EE7DC32F44B9651770AED08101A03510_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.DialogResult_B952A8754B3836D2151B4981F531542E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginScreen_C::DialogResult_B952A8754B3836D2151B4981F531542E(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.DialogResult_B952A8754B3836D2151B4981F531542E");

	ULoginScreen_C_DialogResult_B952A8754B3836D2151B4981F531542E_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoginScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.Construct");

	ULoginScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnPatchingComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bProceed                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginScreen_C::OnPatchingComplete(bool* bProceed)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnPatchingComplete");

	ULoginScreen_C_OnPatchingComplete_Params params;
	params.bProceed = bProceed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnEnterState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EFortUIState*                  PreviousUIState                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginScreen_C::OnEnterState(EFortUIState* PreviousUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnEnterState");

	ULoginScreen_C_OnEnterState_Params params;
	params.PreviousUIState = PreviousUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnExitState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EFortUIState*                  NextUIState                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginScreen_C::OnExitState(EFortUIState* NextUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnExitState");

	ULoginScreen_C_OnExitState_Params params;
	params.NextUIState = NextUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.HandleOnStartLogin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 LoginEmail                     (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 LoginPassword                  (CPF_Parm, CPF_ZeroConstructor)

void ULoginScreen_C::HandleOnStartLogin(const struct FString& LoginEmail, const struct FString& LoginPassword)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.HandleOnStartLogin");

	ULoginScreen_C_HandleOnStartLogin_Params params;
	params.LoginEmail = LoginEmail;
	params.LoginPassword = LoginPassword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnLoginFailed
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText*                  Reason                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULoginScreen_C::OnLoginFailed(struct FText* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnLoginFailed");

	ULoginScreen_C_OnLoginFailed_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnLoginSuceeded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::OnLoginSuceeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnLoginSuceeded");

	ULoginScreen_C_OnLoginSuceeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnEulaAvailable
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText*                  EulaText                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULoginScreen_C::OnEulaAvailable(struct FText* EulaText)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnEulaAvailable");

	ULoginScreen_C_OnEulaAvailable_Params params;
	params.EulaText = EulaText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.HandleEulaResponse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Accepted                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginScreen_C::HandleEulaResponse(bool Accepted)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.HandleEulaResponse");

	ULoginScreen_C_HandleEulaResponse_Params params;
	params.Accepted = Accepted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.HandleResultConfirmed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::HandleResultConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.HandleResultConfirmed");

	ULoginScreen_C_HandleResultConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.HandlerBenchmarkFlow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::HandlerBenchmarkFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.HandlerBenchmarkFlow");

	ULoginScreen_C_HandlerBenchmarkFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.AccountLinking_PushStatus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   StatusText                     (CPF_Parm)

void ULoginScreen_C::AccountLinking_PushStatus(const struct FText& StatusText)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.AccountLinking_PushStatus");

	ULoginScreen_C_AccountLinking_PushStatus_Params params;
	params.StatusText = StatusText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.AccountLinking_PopStatus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::AccountLinking_PopStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.AccountLinking_PopStatus");

	ULoginScreen_C_AccountLinking_PopStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.AccountLinking_LinkingFailed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   FailReason                     (CPF_Parm)

void ULoginScreen_C::AccountLinking_LinkingFailed(const struct FText& FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.AccountLinking_LinkingFailed");

	ULoginScreen_C_AccountLinking_LinkingFailed_Params params;
	params.FailReason = FailReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.AccountLinking_RequestSignIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::AccountLinking_RequestSignIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.AccountLinking_RequestSignIn");

	ULoginScreen_C_AccountLinking_RequestSignIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.AccountLinking_RequestAutoLogin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::AccountLinking_RequestAutoLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.AccountLinking_RequestAutoLogin");

	ULoginScreen_C_AccountLinking_RequestAutoLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnSplashScreenClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::OnSplashScreenClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnSplashScreenClosed");

	ULoginScreen_C_OnSplashScreenClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.PushContentWidgetInternal
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FContentPushState*      State                          (CPF_Parm)

void ULoginScreen_C::PushContentWidgetInternal(class UWidget** Widget, struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.PushContentWidgetInternal");

	ULoginScreen_C_PushContentWidgetInternal_Params params;
	params.Widget = Widget;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnLogoutComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoginScreen_C::OnLogoutComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnLogoutComplete");

	ULoginScreen_C_OnLogoutComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginScreen_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature");

	ULoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.AccountLinking_ViewEula
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::AccountLinking_ViewEula()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.AccountLinking_ViewEula");

	ULoginScreen_C_AccountLinking_ViewEula_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.HandleViewOnlyClose
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULoginScreen_C::HandleViewOnlyClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.HandleViewOnlyClose");

	ULoginScreen_C_HandleViewOnlyClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnNeedsPurchaseOrAccountLinking
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bLinkedAccountNeedsPurchase    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginScreen_C::OnNeedsPurchaseOrAccountLinking(bool* bLinkedAccountNeedsPurchase)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnNeedsPurchaseOrAccountLinking");

	ULoginScreen_C_OnNeedsPurchaseOrAccountLinking_Params params;
	params.bLinkedAccountNeedsPurchase = bLinkedAccountNeedsPurchase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnDisplayErrorComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoginScreen_C::OnDisplayErrorComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnDisplayErrorComplete");

	ULoginScreen_C_OnDisplayErrorComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.HandleOnLoginAccountTypeSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortLoginAccountType          LoginAccountType               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginScreen_C::HandleOnLoginAccountTypeSelected(EFortLoginAccountType LoginAccountType)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.HandleOnLoginAccountTypeSelected");

	ULoginScreen_C_HandleOnLoginAccountTypeSelected_Params params;
	params.LoginAccountType = LoginAccountType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnPostLoginLogoutComplete
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText*                  Reason                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULoginScreen_C::OnPostLoginLogoutComplete(struct FText* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnPostLoginLogoutComplete");

	ULoginScreen_C_OnPostLoginLogoutComplete_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnShowLoginMessage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bShow                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText*                  Tile                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText*                  Body                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULoginScreen_C::OnShowLoginMessage(bool* bShow, struct FText* Tile, struct FText* Body)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnShowLoginMessage");

	ULoginScreen_C_OnShowLoginMessage_Params params;
	params.bShow = bShow;
	params.Tile = Tile;
	params.Body = Body;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULoginScreen_C::ExecuteUbergraph_LoginScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen");

	ULoginScreen_C_ExecuteUbergraph_LoginScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
