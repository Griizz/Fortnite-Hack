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

// Function PartyFinderListItem.PartyFinderListItem_C.UnbindSocialItemDelegates
struct UPartyFinderListItem_C_UnbindSocialItemDelegates_Params
{
};

// Function PartyFinderListItem.PartyFinderListItem_C.UpdateStateText
struct UPartyFinderListItem_C_UpdateStateText_Params
{
};

// Function PartyFinderListItem.PartyFinderListItem_C.SetupExpansion
struct UPartyFinderListItem_C_SetupExpansion_Params
{
	bool                                               Expanded;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PartyFinderListItem.PartyFinderListItem_C.HandlePresenceUpdated
struct UPartyFinderListItem_C_HandlePresenceUpdated_Params
{
};

// Function PartyFinderListItem.PartyFinderListItem_C.BindSocialItemDelegates
struct UPartyFinderListItem_C_BindSocialItemDelegates_Params
{
};

// Function PartyFinderListItem.PartyFinderListItem_C.InitializeItem
struct UPartyFinderListItem_C_InitializeItem_Params
{
};

// Function PartyFinderListItem.PartyFinderListItem_C.OnSocialItemSet
struct UPartyFinderListItem_C_OnSocialItemSet_Params
{
};

// Function PartyFinderListItem.PartyFinderListItem_C.ExpansionChanged
struct UPartyFinderListItem_C_ExpansionChanged_Params
{
	bool*                                              bExpanded;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PartyFinderListItem.PartyFinderListItem_C.Construct
struct UPartyFinderListItem_C_Construct_Params
{
};

// Function PartyFinderListItem.PartyFinderListItem_C.Destruct
struct UPartyFinderListItem_C_Destruct_Params
{
};

// Function PartyFinderListItem.PartyFinderListItem_C.ExecuteUbergraph_PartyFinderListItem
struct UPartyFinderListItem_C_ExecuteUbergraph_PartyFinderListItem_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PartyFinderListItem.PartyFinderListItem_C.InviteJoinChanged__DelegateSignature
struct UPartyFinderListItem_C_InviteJoinChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
