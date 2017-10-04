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

// Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// struct FUniqueNetIdRepl        InPartyOwnerId                 (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void ALobbyBeaconClient::ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerSetPartyOwner");

	ALobbyBeaconClient_ServerSetPartyOwner_Params params;
	params.InUniqueId = InUniqueId;
	params.InPartyOwnerId = InPartyOwnerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void ALobbyBeaconClient::ServerNotifyJoiningServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer");

	ALobbyBeaconClient_ServerNotifyJoiningServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ServerLoginPlayer
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FString                 InSessionId                    (CPF_Parm, CPF_ZeroConstructor)
// struct FUniqueNetIdRepl        InUniqueId                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// struct FString                 UrlString                      (CPF_Parm, CPF_ZeroConstructor)

void ALobbyBeaconClient::ServerLoginPlayer(const struct FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const struct FString& UrlString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerLoginPlayer");

	ALobbyBeaconClient_ServerLoginPlayer_Params params;
	params.InSessionId = InSessionId;
	params.InUniqueId = InUniqueId;
	params.UrlString = UrlString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ServerKickPlayer
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FUniqueNetIdRepl        PlayerToKick                   (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// struct FText                   Reason                         (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void ALobbyBeaconClient::ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerKickPlayer");

	ALobbyBeaconClient_ServerKickPlayer_Params params;
	params.PlayerToKick = PlayerToKick;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void ALobbyBeaconClient::ServerDisconnectFromLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby");

	ALobbyBeaconClient_ServerDisconnectFromLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ServerCheat
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FString                 Msg                            (CPF_Parm, CPF_ZeroConstructor)

void ALobbyBeaconClient::ServerCheat(const struct FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerCheat");

	ALobbyBeaconClient_ServerCheat_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ClientWasKicked
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FText                   KickReason                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void ALobbyBeaconClient::ClientWasKicked(const struct FText& KickReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientWasKicked");

	ALobbyBeaconClient_ClientWasKicked_Params params;
	params.KickReason = KickReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// struct FJoinabilitySettings    Settings                       (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void ALobbyBeaconClient::ClientSetInviteFlags(const struct FJoinabilitySettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientSetInviteFlags");

	ALobbyBeaconClient_ClientSetInviteFlags_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ClientPlayerLeft
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void ALobbyBeaconClient::ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientPlayerLeft");

	ALobbyBeaconClient_ClientPlayerLeft_Params params;
	params.InUniqueId = InUniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ClientPlayerJoined
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FText                   NewPlayerName                  (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// struct FUniqueNetIdRepl        InUniqueId                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void ALobbyBeaconClient::ClientPlayerJoined(const struct FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientPlayerJoined");

	ALobbyBeaconClient_ClientPlayerJoined_Params params;
	params.NewPlayerName = NewPlayerName;
	params.InUniqueId = InUniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ClientLoginComplete
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// bool                           bWasSuccessful                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALobbyBeaconClient::ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientLoginComplete");

	ALobbyBeaconClient_ClientLoginComplete_Params params;
	params.InUniqueId = InUniqueId;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ClientJoinGame
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)

void ALobbyBeaconClient::ClientJoinGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientJoinGame");

	ALobbyBeaconClient_ClientJoinGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)

void ALobbyBeaconClient::ClientAckJoiningServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientAckJoiningServer");

	ALobbyBeaconClient_ClientAckJoiningServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ALobbyBeaconPlayerState::OnRep_PartyOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner");

	ALobbyBeaconPlayerState_OnRep_PartyOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ALobbyBeaconPlayerState::OnRep_InLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby");

	ALobbyBeaconPlayerState_OnRep_InLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ALobbyBeaconState::OnRep_WaitForPlayersTimeRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining");

	ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ALobbyBeaconState::OnRep_LobbyStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconState.OnRep_LobbyStarted");

	ALobbyBeaconState_OnRep_LobbyStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
