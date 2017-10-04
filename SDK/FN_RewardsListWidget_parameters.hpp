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

// Function RewardsListWidget.RewardsListWidget_C.PresentAllRewards
struct URewardsListWidget_C_PresentAllRewards_Params
{
};

// Function RewardsListWidget.RewardsListWidget_C.CreateRewardWrapper
struct URewardsListWidget_C_CreateRewardWrapper_Params
{
	class UHomeScreenQuestRewardItem_C*                Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // (CPF_Parm)
	class UFrontEndRewardWrapperWidget_C*              OutputPin;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RewardsListWidget.RewardsListWidget_C.CreateReward
struct URewardsListWidget_C_CreateReward_Params
{
	struct FFortItemInstanceQuantityPair               FortItemInstanceQuantityPair;                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               Selectable;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RewardsListWidget.RewardsListWidget_C.PresentNextReward
struct URewardsListWidget_C_PresentNextReward_Params
{
};

// Function RewardsListWidget.RewardsListWidget_C.PopulateRewards
struct URewardsListWidget_C_PopulateRewards_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<struct FFortItemInstanceQuantityPair>       SelectableRewards;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
