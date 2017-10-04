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

// Function JoinServer.JoinServer_C.HandleLobbyConnectingToGame
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::HandleLobbyConnectingToGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleLobbyConnectingToGame");

	UJoinServer_C_HandleLobbyConnectingToGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ShowAbandoningProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::ShowAbandoningProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.ShowAbandoningProgress");

	UJoinServer_C_ShowAbandoningProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ShowRetryRejoinWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Failure                        (CPF_Parm)
// bool                           AllowRetry                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJoinServer_C::ShowRetryRejoinWindow(const struct FText& Failure, bool AllowRetry)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.ShowRetryRejoinWindow");

	UJoinServer_C_ShowRetryRejoinWindow_Params params;
	params.Failure = Failure;
	params.AllowRetry = AllowRetry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ShowRetryRejoinSession
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::ShowRetryRejoinSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.ShowRetryRejoinSession");

	UJoinServer_C_ShowRetryRejoinSession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ShowRejoiningProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::ShowRejoiningProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.ShowRejoiningProgress");

	UJoinServer_C_ShowRejoiningProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HideRejoinWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           AbandonSession                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJoinServer_C::HideRejoinWindow(bool AbandonSession)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HideRejoinWindow");

	UJoinServer_C_HideRejoinWindow_Params params;
	params.AbandonSession = AbandonSession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ShowRejoinWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::ShowRejoinWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.ShowRejoinWindow");

	UJoinServer_C_ShowRejoinWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleGetMainMenuContent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UJoinServer_C::HandleGetMainMenuContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleGetMainMenuContent");

	UJoinServer_C_HandleGetMainMenuContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JoinServer.JoinServer_C.ShowTutorialCanceled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::ShowTutorialCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.ShowTutorialCanceled");

	UJoinServer_C_ShowTutorialCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.GetMatchmakingError
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ErrorText                      (CPF_Parm, CPF_OutParm)

void UJoinServer_C::GetMatchmakingError(struct FText* ErrorText)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.GetMatchmakingError");

	UJoinServer_C_GetMatchmakingError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ErrorText != nullptr)
		*ErrorText = params.ErrorText;
}


// Function JoinServer.JoinServer_C.HandleLobbyTimeUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TimeRemaining                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJoinServer_C::HandleLobbyTimeUpdated(int TimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleLobbyTimeUpdated");

	UJoinServer_C_HandleLobbyTimeUpdated_Params params;
	params.TimeRemaining = TimeRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.SkipTutorial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::SkipTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.SkipTutorial");

	UJoinServer_C_SkipTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.StartTutorialMatchmakingFlow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::StartTutorialMatchmakingFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.StartTutorialMatchmakingFlow");

	UJoinServer_C_StartTutorialMatchmakingFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleEnterState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::HandleEnterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleEnterState");

	UJoinServer_C_HandleEnterState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleLobbyDisconnected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::HandleLobbyDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleLobbyDisconnected");

	UJoinServer_C_HandleLobbyDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleMatchmakingStateChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EMatchmakingState> OldState                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EMatchmakingState> NewState                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJoinServer_C::HandleMatchmakingStateChange(TEnumAsByte<EMatchmakingState> OldState, TEnumAsByte<EMatchmakingState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleMatchmakingStateChange");

	UJoinServer_C_HandleMatchmakingStateChange_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleMatchmakingComplete
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::HandleMatchmakingComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleMatchmakingComplete");

	UJoinServer_C_HandleMatchmakingComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.Initialize");

	UJoinServer_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJoinServer_C::DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF(const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF");

	UJoinServer_C_DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF_Params params;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.OnFailure_B419884742513722D11D8AB4D90DE5E2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::OnFailure_B419884742513722D11D8AB4D90DE5E2()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.OnFailure_B419884742513722D11D8AB4D90DE5E2");

	UJoinServer_C_OnFailure_B419884742513722D11D8AB4D90DE5E2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.OnSuccess_B419884742513722D11D8AB4D90DE5E2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::OnSuccess_B419884742513722D11D8AB4D90DE5E2()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.OnSuccess_B419884742513722D11D8AB4D90DE5E2");

	UJoinServer_C_OnSuccess_B419884742513722D11D8AB4D90DE5E2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.OnFailure_C91A02504569664A4B1E259E5F57A79D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::OnFailure_C91A02504569664A4B1E259E5F57A79D()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.OnFailure_C91A02504569664A4B1E259E5F57A79D");

	UJoinServer_C_OnFailure_C91A02504569664A4B1E259E5F57A79D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.OnSuccess_C91A02504569664A4B1E259E5F57A79D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::OnSuccess_C91A02504569664A4B1E259E5F57A79D()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.OnSuccess_C91A02504569664A4B1E259E5F57A79D");

	UJoinServer_C_OnSuccess_C91A02504569664A4B1E259E5F57A79D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.RequestTutorialRetry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::RequestTutorialRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.RequestTutorialRetry");

	UJoinServer_C_RequestTutorialRetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ShowSkipTutorial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::ShowSkipTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.ShowSkipTutorial");

	UJoinServer_C_ShowSkipTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleClientEvent_RejoinStart
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 EventFocus                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UJoinServer_C::HandleClientEvent_RejoinStart(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleClientEvent_RejoinStart");

	UJoinServer_C_HandleClientEvent_RejoinStart_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleRequestRejoinRetry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::HandleRequestRejoinRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleRequestRejoinRetry");

	UJoinServer_C_HandleRequestRejoinRetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleRequestAbandon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJoinServer_C::HandleRequestAbandon()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleRequestAbandon");

	UJoinServer_C_HandleRequestAbandon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleClientEvent_OnboardingStartMatchmaking
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 EventFocus                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UJoinServer_C::HandleClientEvent_OnboardingStartMatchmaking(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleClientEvent_OnboardingStartMatchmaking");

	UJoinServer_C_HandleClientEvent_OnboardingStartMatchmaking_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UJoinServer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.Construct");

	UJoinServer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.OnEnterState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UJoinServer_C::OnEnterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.OnEnterState");

	UJoinServer_C_OnEnterState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ExecuteUbergraph_JoinServer
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJoinServer_C::ExecuteUbergraph_JoinServer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.ExecuteUbergraph_JoinServer");

	UJoinServer_C_ExecuteUbergraph_JoinServer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
