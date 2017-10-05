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

// Class Party.Chatroom
// 0x0030 (0x0058 - 0x0028)
class UChatroom : public UObject
{
public:
	struct FString                                     CurrentChatRoomId;                                        // 0x0028(0x0010) (CPF_ZeroConstructor)
	int                                                MaxChatRoomRetries;                                       // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumChatRoomRetries;                                       // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.Chatroom");
		return ptr;
	}

};


// Class Party.Party
// 0x0468 (0x0490 - 0x0028)
class UParty : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET
	int                                                DefaultMaxPartySize;                                      // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bLeavingPersistentParty;                                  // 0x009C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3F3];                                     // 0x009D(0x03F3) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.Party");
		return ptr;
	}

};


// Class Party.PartyGameState
// 0x05B8 (0x05E0 - 0x0028)
class UPartyGameState : public UObject
{
public:
	class UScriptStruct*                               PartyStateRefDef;                                         // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FUniqueNetIdRepl                            OwningUserId;                                             // 0x0038(0x0018)
	unsigned char                                      UnknownData01[0x118];                                     // 0x0050(0x0118) MISSED OFFSET
	bool                                               bDebugAcceptingMembers;                                   // 0x0168(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0169(0x0018) MISSED OFFSET
	bool                                               bStayWithPartyOnDisconnect;                               // 0x0181(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0182(0x0006) MISSED OFFSET
	class UClass*                                      PartyMemberStateClass;                                    // 0x0188(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x108];                                     // 0x0190(0x0108) MISSED OFFSET
	class UClass*                                      ReservationBeaconClientClass;                             // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class APartyBeaconClient*                          ReservationBeaconClient;                                  // 0x02A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x338];                                     // 0x02A8(0x0338) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.PartyGameState");
		return ptr;
	}

};


// Class Party.PartyMemberState
// 0x0050 (0x0078 - 0x0028)
class UPartyMemberState : public UObject
{
public:
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0028(0x0018) (CPF_Transient)
	struct FText                                       DisplayName;                                              // 0x0040(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
	class UScriptStruct*                               MemberStateRefDef;                                        // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET
	bool                                               bHasAnnouncedJoin;                                        // 0x0070(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.PartyMemberState");
		return ptr;
	}


	bool IsPartyLeader();
	bool IsLocalPlayer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
