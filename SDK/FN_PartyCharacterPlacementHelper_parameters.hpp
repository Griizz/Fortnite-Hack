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

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartyDataChanged
struct APartyCharacterPlacementHelper_C_OnPartyDataChanged_Params
{
	struct FFortTeamMemberInfo                         MemberInfo;                                               // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.CompletedQuestPrerequisites
struct APartyCharacterPlacementHelper_C_CompletedQuestPrerequisites_Params
{
	bool                                               bCompleted;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.IsInLobby
struct APartyCharacterPlacementHelper_C_IsInLobby_Params
{
	bool                                               IsInLobby;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.PlayLobbyAnimation
struct APartyCharacterPlacementHelper_C_PlayLobbyAnimation_Params
{
	int                                                PartyMemberIndex;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyDisconnected
struct APartyCharacterPlacementHelper_C_OnLobbyDisconnected_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.RefreshWidgets
struct APartyCharacterPlacementHelper_C_RefreshWidgets_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializeWidgets
struct APartyCharacterPlacementHelper_C_InitializeWidgets_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerUnhovered
struct APartyCharacterPlacementHelper_C_OnLobbyPlayerUnhovered_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberStateChanged
struct APartyCharacterPlacementHelper_C_OnTeamMemberStateChanged_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (CPF_Parm)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberRemoved
struct APartyCharacterPlacementHelper_C_OnTeamMemberRemoved_Params
{
	int                                                TeamMemberRemovedInt;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberAdded
struct APartyCharacterPlacementHelper_C_OnTeamMemberAdded_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (CPF_Parm)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnFrontEndCameraChanged
struct APartyCharacterPlacementHelper_C_OnFrontEndCameraChanged_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyStarted
struct APartyCharacterPlacementHelper_C_OnLobbyStarted_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializePadUI
struct APartyCharacterPlacementHelper_C_InitializePadUI_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.Initialize
struct APartyCharacterPlacementHelper_C_Initialize_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializeContextEvents
struct APartyCharacterPlacementHelper_C_InitializeContextEvents_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerUnselected
struct APartyCharacterPlacementHelper_C_OnLobbyPlayerUnselected_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerSelected
struct APartyCharacterPlacementHelper_C_OnLobbyPlayerSelected_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerHovered
struct APartyCharacterPlacementHelper_C_OnLobbyPlayerHovered_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.UserConstructionScript
struct APartyCharacterPlacementHelper_C_UserConstructionScript_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.ReceiveBeginPlay
struct APartyCharacterPlacementHelper_C_ReceiveBeginPlay_Params
{
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.HandleClientEvent_StoreTabClosed
struct APartyCharacterPlacementHelper_C_HandleClientEvent_StoreTabClosed_Params
{
	class UObject*                                     EventSource;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.HandleClientEvent_StoreTabSelected
struct APartyCharacterPlacementHelper_C_HandleClientEvent_StoreTabSelected_Params
{
	class UObject*                                     EventSource;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.ExecuteUbergraph_PartyCharacterPlacementHelper
struct APartyCharacterPlacementHelper_C_ExecuteUbergraph_PartyCharacterPlacementHelper_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.NewEventDispatcher_0__DelegateSignature
struct APartyCharacterPlacementHelper_C_NewEventDispatcher_0__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
