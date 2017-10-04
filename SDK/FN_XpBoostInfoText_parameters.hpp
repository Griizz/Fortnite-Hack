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

// Function XpBoostInfoText.XpBoostInfoText_C.Update Available Boosts
struct UXpBoostInfoText_C_Update_Available_Boosts_Params
{
};

// Function XpBoostInfoText.XpBoostInfoText_C.Construct
struct UXpBoostInfoText_C_Construct_Params
{
};

// Function XpBoostInfoText.XpBoostInfoText_C.HandleAccountUpdate
struct UXpBoostInfoText_C_HandleAccountUpdate_Params
{
	struct FFortPublicAccountInfo                      NewInfo;                                                  // (CPF_Parm)
};

// Function XpBoostInfoText.XpBoostInfoText_C.Xp Boost Changed
struct UXpBoostInfoText_C_Xp_Boost_Changed_Params
{
	int                                                BoostAmount;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function XpBoostInfoText.XpBoostInfoText_C.ExecuteUbergraph_XpBoostInfoText
struct UXpBoostInfoText_C_ExecuteUbergraph_XpBoostInfoText_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
