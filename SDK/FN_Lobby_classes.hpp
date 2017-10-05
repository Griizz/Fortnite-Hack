#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Lobby.LobbyBeaconClient
// 0x01A0 (0x05E0 - 0x0440)
class ALobbyBeaconClient : public AOnlineBeaconClient
{
public:
	class ALobbyBeaconPlayerState*                     PlayerState;                                              // 0x0440(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0448(0x0001) MISSED OFFSET
	ELobbyBeaconJoinState                              LobbyJoinServerState;                                     // 0x0449(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x196];                                     // 0x044A(0x0196) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconClient");
		return ptr;
	}


	void ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId);
	void ServerNotifyJoiningServer();
	void ServerLoginPlayer(const struct FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const struct FString& UrlString);
	void ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason);
	void ServerDisconnectFromLobby();
	void ServerCheat(const struct FString& Msg);
	void ClientWasKicked(const struct FText& KickReason);
	void ClientSetInviteFlags(const struct FJoinabilitySettings& Settings);
	void ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId);
	void ClientPlayerJoined(const struct FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId);
	void ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
	void ClientJoinGame();
	void ClientAckJoiningServer();
};


// Class Lobby.LobbyBeaconHost
// 0x0030 (0x03E0 - 0x03B0)
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET
	TAssetPtr<class UClass>                            LobbyStateClass;                                          // 0x03B8(0x0020)
	class ALobbyBeaconState*                           LobbyState;                                               // 0x03D8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconHost");
		return ptr;
	}

};


// Class Lobby.LobbyBeaconPlayerState
// 0x0138 (0x04C0 - 0x0388)
class ALobbyBeaconPlayerState : public AInfo
{
public:
	struct FText                                       DisplayName;                                              // 0x0388(0x0018) (CPF_Net)
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x03A0(0x0018) (CPF_Net)
	struct FUniqueNetIdRepl                            PartyOwnerUniqueId;                                       // 0x03B8(0x0018) (CPF_Net)
	bool                                               bInLobby;                                                 // 0x03D0(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	class AOnlineBeaconClient*                         ClientActor;                                              // 0x03D8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xE0];                                      // 0x03E0(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconPlayerState");
		return ptr;
	}


	void OnRep_PartyOwner();
	void OnRep_InLobby();
};


// Class Lobby.LobbyBeaconState
// 0x02B8 (0x0640 - 0x0388)
class ALobbyBeaconState : public AInfo
{
public:
	int                                                MaxPlayers;                                               // 0x0388(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	class UClass*                                      LobbyBeaconPlayerStateClass;                              // 0x0390(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0398(0x0008) MISSED OFFSET
	bool                                               bLobbyStarted;                                            // 0x03A0(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	float                                              WaitForPlayersTimeRemaining;                              // 0x03A4(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FLobbyPlayerStateInfoArray                  Players;                                                  // 0x03A8(0x00C8) (CPF_Net)
	unsigned char                                      UnknownData03[0x1D0];                                     // 0x0470(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconState");
		return ptr;
	}


	void OnRep_WaitForPlayersTimeRemaining();
	void OnRep_LobbyStarted();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
