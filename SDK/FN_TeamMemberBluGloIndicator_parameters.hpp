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

// Function TeamMemberBluGloIndicator.TeamMemberBluGloIndicator_C.OnPlayerAccumulatedItemsUpdated
struct UTeamMemberBluGloIndicator_C_OnPlayerAccumulatedItemsUpdated_Params
{
};

// Function TeamMemberBluGloIndicator.TeamMemberBluGloIndicator_C.SetPlayer
struct UTeamMemberBluGloIndicator_C_SetPlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerNetId;                                              // (CPF_Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
