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

// Function FriendNotification.FriendNotification_C.ShowFriendInvites
struct UFriendNotification_C_ShowFriendInvites_Params
{
};

// Function FriendNotification.FriendNotification_C.ShowPartyInvites
struct UFriendNotification_C_ShowPartyInvites_Params
{
};

// Function FriendNotification.FriendNotification_C.TakeAction
struct UFriendNotification_C_TakeAction_Params
{
};

// Function FriendNotification.FriendNotification_C.ExecuteUbergraph_FriendNotification
struct UFriendNotification_C_ExecuteUbergraph_FriendNotification_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
