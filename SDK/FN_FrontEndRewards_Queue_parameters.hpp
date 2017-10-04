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

// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.TickIconInit
struct UFrontEndRewards_Queue_C_TickIconInit_Params
{
};

// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.StartInitAnimation
struct UFrontEndRewards_Queue_C_StartInitAnimation_Params
{
};

// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.SlideIcon
struct UFrontEndRewards_Queue_C_SlideIcon_Params
{
	class URewardsIcon_C*                              Icon;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.StartDequeueAnimation
struct UFrontEndRewards_Queue_C_StartDequeueAnimation_Params
{
};

// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.TickIconSlide
struct UFrontEndRewards_Queue_C_TickIconSlide_Params
{
};

// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.HandleIconHideAnimationFinished
struct UFrontEndRewards_Queue_C_HandleIconHideAnimationFinished_Params
{
	class URewardsIcon_C*                              Icon;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.PopIcon
struct UFrontEndRewards_Queue_C_PopIcon_Params
{
	class URewardsIcon_C*                              OutIcon;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.RandomizeDesignView
struct UFrontEndRewards_Queue_C_RandomizeDesignView_Params
{
};

// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.CloneIconList
struct UFrontEndRewards_Queue_C_CloneIconList_Params
{
	TArray<class URewardsIcon_C*>                      IconListClone;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.ClearQueue
struct UFrontEndRewards_Queue_C_ClearQueue_Params
{
};

// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.DequeueReward
struct UFrontEndRewards_Queue_C_DequeueReward_Params
{
	class UFortRewardNotificationData*                 OutReward;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.QueueReward
struct UFrontEndRewards_Queue_C_QueueReward_Params
{
	class UFortRewardNotificationData*                 RewardItem;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class URewardsIcon_C*                              OutIcon;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.PreConstruct
struct UFrontEndRewards_Queue_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.ExecuteUbergraph_FrontEndRewards_Queue
struct UFrontEndRewards_Queue_C_ExecuteUbergraph_FrontEndRewards_Queue_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
