#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Party.EPartyType
enum class EPartyType : uint8_t
{
	Public                         = 0,
	FriendsOnly                    = 1,
	Private                        = 2,
	EPartyType_MAX                 = 3
};


// Enum Party.EJoinPartyDenialReason
enum class EJoinPartyDenialReason : uint8_t
{
	NoReason                       = 0,
	Busy                           = 1,
	PartyFull                      = 2,
	GameFull                       = 3,
	NotPartyLeader                 = 4,
	PartyPrivate                   = 5,
	NeedsTutorial                  = 6,
	GameModeRestricted             = 7,
	EJoinPartyDenialReason_MAX     = 8
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Party.PartyState
// 0x0010
struct FPartyState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	EPartyType                                         PartyType;                                                // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bLeaderFriendsOnly;                                       // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bLeaderInvitesOnly;                                       // 0x000A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInvitesDisabled;                                         // 0x000B(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Party.PartyMemberRepState
// 0x0008
struct FPartyMemberRepState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
