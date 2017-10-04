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

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.Get Current Boost
struct UXpBoostDailyBonus_C_Get_Current_Boost_Params
{
	int                                                Boost_Amount;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.Update Daily Bonus
struct UXpBoostDailyBonus_C_Update_Daily_Bonus_Params
{
};

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.Construct
struct UXpBoostDailyBonus_C_Construct_Params
{
};

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.ExecuteUbergraph_XpBoostDailyBonus
struct UXpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
