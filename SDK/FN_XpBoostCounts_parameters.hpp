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

// Function XpBoostCounts.XpBoostCounts_C.Update Available Boosts
struct UXpBoostCounts_C_Update_Available_Boosts_Params
{
};

// Function XpBoostCounts.XpBoostCounts_C.Construct
struct UXpBoostCounts_C_Construct_Params
{
};

// Function XpBoostCounts.XpBoostCounts_C.HandleAccountUpdate
struct UXpBoostCounts_C_HandleAccountUpdate_Params
{
	struct FFortPublicAccountInfo                      NewInfo;                                                  // (CPF_Parm)
};

// Function XpBoostCounts.XpBoostCounts_C.Xp Boost Changed
struct UXpBoostCounts_C_Xp_Boost_Changed_Params
{
	int                                                BoostAmount;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function XpBoostCounts.XpBoostCounts_C.ExecuteUbergraph_XpBoostCounts
struct UXpBoostCounts_C_ExecuteUbergraph_XpBoostCounts_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
