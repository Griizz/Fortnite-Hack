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

// Function Rewards_Header.Rewards_Header_C.SkipFadeInSubHeaderAnimation
struct URewards_Header_C_SkipFadeInSubHeaderAnimation_Params
{
};

// Function Rewards_Header.Rewards_Header_C.SetQuestNameText
struct URewards_Header_C_SetQuestNameText_Params
{
};

// Function Rewards_Header.Rewards_Header_C.PopulateFromRewardType
struct URewards_Header_C_PopulateFromRewardType_Params
{
	EFrontEndRewardType                                Selection;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ECollectionBookRewardType                          CollectionBookRewardType;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       RewardDetailText;                                         // (CPF_Parm)
};

// Function Rewards_Header.Rewards_Header_C.ResetSubHeader
struct URewards_Header_C_ResetSubHeader_Params
{
};

// Function Rewards_Header.Rewards_Header_C.FadeInSubHeader
struct URewards_Header_C_FadeInSubHeader_Params
{
};

// Function Rewards_Header.Rewards_Header_C.SetMissionLootLevelText
struct URewards_Header_C_SetMissionLootLevelText_Params
{
};

// Function Rewards_Header.Rewards_Header_C.PopulateFromReward
struct URewards_Header_C_PopulateFromReward_Params
{
	class UFortRewardNotificationData*                 InReward;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Rewards_Header.Rewards_Header_C.PreConstruct
struct URewards_Header_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Rewards_Header.Rewards_Header_C.ExecuteUbergraph_Rewards_Header
struct URewards_Header_C_ExecuteUbergraph_Rewards_Header_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
