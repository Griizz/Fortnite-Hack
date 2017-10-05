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

// Function ScoreBadgeProviderMission.ScoreBadgeProviderMission_C.GetTotalScore
struct UScoreBadgeProviderMission_C_GetTotalScore_Params
{
	EStatCategory                                      ScoreCategory;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Score;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ScoreBadgeProviderMission.ScoreBadgeProviderMission_C.GetScoreBadgeInfos
struct UScoreBadgeProviderMission_C_GetScoreBadgeInfos_Params
{
	EStatCategory                                      ScoreCategory;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FCollectionMissionBadgeDisplayInfo>  BadgeInfos;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
