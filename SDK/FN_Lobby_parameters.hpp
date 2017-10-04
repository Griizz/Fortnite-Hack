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

// Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
struct ALobbyBeaconClient_ServerSetPartyOwner_Params
{
	struct FUniqueNetIdRepl                            InUniqueId;                                               // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
	struct FUniqueNetIdRepl                            InPartyOwnerId;                                           // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
};

// Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
struct ALobbyBeaconClient_ServerNotifyJoiningServer_Params
{
};

// Function Lobby.LobbyBeaconClient.ServerLoginPlayer
struct ALobbyBeaconClient_ServerLoginPlayer_Params
{
	struct FString                                     InSessionId;                                              // (CPF_Parm, CPF_ZeroConstructor)
	struct FUniqueNetIdRepl                            InUniqueId;                                               // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
	struct FString                                     UrlString;                                                // (CPF_Parm, CPF_ZeroConstructor)
};

// Function Lobby.LobbyBeaconClient.ServerKickPlayer
struct ALobbyBeaconClient_ServerKickPlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerToKick;                                             // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
	struct FText                                       Reason;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
};

// Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
struct ALobbyBeaconClient_ServerDisconnectFromLobby_Params
{
};

// Function Lobby.LobbyBeaconClient.ServerCheat
struct ALobbyBeaconClient_ServerCheat_Params
{
	struct FString                                     Msg;                                                      // (CPF_Parm, CPF_ZeroConstructor)
};

// Function Lobby.LobbyBeaconClient.ClientWasKicked
struct ALobbyBeaconClient_ClientWasKicked_Params
{
	struct FText                                       KickReason;                                               // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
};

// Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
struct ALobbyBeaconClient_ClientSetInviteFlags_Params
{
	struct FJoinabilitySettings                        Settings;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
};

// Function Lobby.LobbyBeaconClient.ClientPlayerLeft
struct ALobbyBeaconClient_ClientPlayerLeft_Params
{
	struct FUniqueNetIdRepl                            InUniqueId;                                               // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
};

// Function Lobby.LobbyBeaconClient.ClientPlayerJoined
struct ALobbyBeaconClient_ClientPlayerJoined_Params
{
	struct FText                                       NewPlayerName;                                            // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
	struct FUniqueNetIdRepl                            InUniqueId;                                               // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
};

// Function Lobby.LobbyBeaconClient.ClientLoginComplete
struct ALobbyBeaconClient_ClientLoginComplete_Params
{
	struct FUniqueNetIdRepl                            InUniqueId;                                               // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.LobbyBeaconClient.ClientJoinGame
struct ALobbyBeaconClient_ClientJoinGame_Params
{
};

// Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
struct ALobbyBeaconClient_ClientAckJoiningServer_Params
{
};

// Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
struct ALobbyBeaconPlayerState_OnRep_PartyOwner_Params
{
};

// Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
struct ALobbyBeaconPlayerState_OnRep_InLobby_Params
{
};

// Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
struct ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Params
{
};

// Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
struct ALobbyBeaconState_OnRep_LobbyStarted_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
