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

// Function JoinServer.JoinServer_C.HandleLobbyConnectingToGame
struct UJoinServer_C_HandleLobbyConnectingToGame_Params
{
};

// Function JoinServer.JoinServer_C.ShowAbandoningProgress
struct UJoinServer_C_ShowAbandoningProgress_Params
{
};

// Function JoinServer.JoinServer_C.ShowRetryRejoinWindow
struct UJoinServer_C_ShowRetryRejoinWindow_Params
{
	struct FText                                       Failure;                                                  // (CPF_Parm)
	bool                                               AllowRetry;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function JoinServer.JoinServer_C.ShowRetryRejoinSession
struct UJoinServer_C_ShowRetryRejoinSession_Params
{
};

// Function JoinServer.JoinServer_C.ShowRejoiningProgress
struct UJoinServer_C_ShowRejoiningProgress_Params
{
};

// Function JoinServer.JoinServer_C.HideRejoinWindow
struct UJoinServer_C_HideRejoinWindow_Params
{
	bool                                               AbandonSession;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function JoinServer.JoinServer_C.ShowRejoinWindow
struct UJoinServer_C_ShowRejoinWindow_Params
{
};

// Function JoinServer.JoinServer_C.HandleGetMainMenuContent
struct UJoinServer_C_HandleGetMainMenuContent_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function JoinServer.JoinServer_C.ShowTutorialCanceled
struct UJoinServer_C_ShowTutorialCanceled_Params
{
};

// Function JoinServer.JoinServer_C.GetMatchmakingError
struct UJoinServer_C_GetMatchmakingError_Params
{
	struct FText                                       ErrorText;                                                // (CPF_Parm, CPF_OutParm)
};

// Function JoinServer.JoinServer_C.HandleLobbyTimeUpdated
struct UJoinServer_C_HandleLobbyTimeUpdated_Params
{
	int                                                TimeRemaining;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function JoinServer.JoinServer_C.SkipTutorial
struct UJoinServer_C_SkipTutorial_Params
{
};

// Function JoinServer.JoinServer_C.StartTutorialMatchmakingFlow
struct UJoinServer_C_StartTutorialMatchmakingFlow_Params
{
};

// Function JoinServer.JoinServer_C.HandleEnterState
struct UJoinServer_C_HandleEnterState_Params
{
};

// Function JoinServer.JoinServer_C.HandleLobbyDisconnected
struct UJoinServer_C_HandleLobbyDisconnected_Params
{
};

// Function JoinServer.JoinServer_C.HandleMatchmakingStateChange
struct UJoinServer_C_HandleMatchmakingStateChange_Params
{
	TEnumAsByte<EMatchmakingState>                     OldState;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMatchmakingState>                     NewState;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function JoinServer.JoinServer_C.HandleMatchmakingComplete
struct UJoinServer_C_HandleMatchmakingComplete_Params
{
};

// Function JoinServer.JoinServer_C.Initialize
struct UJoinServer_C_Initialize_Params
{
};

// Function JoinServer.JoinServer_C.DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF
struct UJoinServer_C_DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF_Params
{
	struct FName                                       ResultName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function JoinServer.JoinServer_C.OnFailure_B419884742513722D11D8AB4D90DE5E2
struct UJoinServer_C_OnFailure_B419884742513722D11D8AB4D90DE5E2_Params
{
};

// Function JoinServer.JoinServer_C.OnSuccess_B419884742513722D11D8AB4D90DE5E2
struct UJoinServer_C_OnSuccess_B419884742513722D11D8AB4D90DE5E2_Params
{
};

// Function JoinServer.JoinServer_C.OnFailure_C91A02504569664A4B1E259E5F57A79D
struct UJoinServer_C_OnFailure_C91A02504569664A4B1E259E5F57A79D_Params
{
};

// Function JoinServer.JoinServer_C.OnSuccess_C91A02504569664A4B1E259E5F57A79D
struct UJoinServer_C_OnSuccess_C91A02504569664A4B1E259E5F57A79D_Params
{
};

// Function JoinServer.JoinServer_C.RequestTutorialRetry
struct UJoinServer_C_RequestTutorialRetry_Params
{
};

// Function JoinServer.JoinServer_C.ShowSkipTutorial
struct UJoinServer_C_ShowSkipTutorial_Params
{
};

// Function JoinServer.JoinServer_C.HandleClientEvent_RejoinStart
struct UJoinServer_C_HandleClientEvent_RejoinStart_Params
{
	class UObject*                                     EventSource;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function JoinServer.JoinServer_C.HandleRequestRejoinRetry
struct UJoinServer_C_HandleRequestRejoinRetry_Params
{
};

// Function JoinServer.JoinServer_C.HandleRequestAbandon
struct UJoinServer_C_HandleRequestAbandon_Params
{
};

// Function JoinServer.JoinServer_C.HandleClientEvent_OnboardingStartMatchmaking
struct UJoinServer_C_HandleClientEvent_OnboardingStartMatchmaking_Params
{
	class UObject*                                     EventSource;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function JoinServer.JoinServer_C.Construct
struct UJoinServer_C_Construct_Params
{
};

// Function JoinServer.JoinServer_C.OnEnterState
struct UJoinServer_C_OnEnterState_Params
{
};

// Function JoinServer.JoinServer_C.ExecuteUbergraph_JoinServer
struct UJoinServer_C_ExecuteUbergraph_JoinServer_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
