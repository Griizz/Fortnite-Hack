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
enum class EPartyType
{
	EPartyType__Public             = 0,
	EPartyType__FriendsOnly        = 1,
	EPartyType__Private            = 2,
	EPartyType__EPartyType_MAX     = 3
};


// Enum Party.EJoinPartyDenialReason
enum class EJoinPartyDenialReason
{
	EJoinPartyDenialReason__NoReason = 0,
	EJoinPartyDenialReason__Busy   = 1,
	EJoinPartyDenialReason__PartyFull = 2,
	EJoinPartyDenialReason__GameFull = 3,
	EJoinPartyDenialReason__NotPartyLeader = 4,
	EJoinPartyDenialReason__PartyPrivate = 5,
	EJoinPartyDenialReason__NeedsTutorial = 6,
	EJoinPartyDenialReason__EJoinPartyDenialReason_MAX = 7
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Party.PartyState
// 0x0010
struct FPartyState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty Party.PartyState.PartyType
	unsigned char                                      bLeaderFriendsOnly : 1;                                   // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLeaderInvitesOnly : 1;                                   // 0x000A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bInvitesDisabled : 1;                                     // 0x000B(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
