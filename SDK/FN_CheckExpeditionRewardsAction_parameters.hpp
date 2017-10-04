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

// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Find First Valid Player Controller
struct ACheckExpeditionRewardsAction_C_Find_First_Valid_Player_Controller_Params
{
	class AFortPlayerController*                       FoundPC1;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Is FrontEndRewards Running
struct ACheckExpeditionRewardsAction_C_Is_FrontEndRewards_Running_Params
{
	bool                                               bRunning;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.HandleRewardsClaimError
struct ACheckExpeditionRewardsAction_C_HandleRewardsClaimError_Params
{
	class UFrontEndRewards_Widget_C*                   RewardsWidget;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Clear
struct ACheckExpeditionRewardsAction_C_Clear_Params
{
};

// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.HandleRewardsClaimed
struct ACheckExpeditionRewardsAction_C_HandleRewardsClaimed_Params
{
	class UFrontEndRewards_Widget_C*                   RewardsWidget;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.PopulateExpeditionRewards
struct ACheckExpeditionRewardsAction_C_PopulateExpeditionRewards_Params
{
};

// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.PopulateRewards
struct ACheckExpeditionRewardsAction_C_PopulateRewards_Params
{
};

// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.OpenFrontEndRewards
struct ACheckExpeditionRewardsAction_C_OpenFrontEndRewards_Params
{
};

// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.PopulateCompletedQuests
struct ACheckExpeditionRewardsAction_C_PopulateCompletedQuests_Params
{
};

// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.GetCompletedQuests
struct ACheckExpeditionRewardsAction_C_GetCompletedQuests_Params
{
	TArray<class UFortQuestItem*>                      Completed_Quests;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.CompleteRewardsAction
struct ACheckExpeditionRewardsAction_C_CompleteRewardsAction_Params
{
};

// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.UserConstructionScript
struct ACheckExpeditionRewardsAction_C_UserConstructionScript_Params
{
};

// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Execute
struct ACheckExpeditionRewardsAction_C_Execute_Params
{
	struct FFortScriptedActionParams*                  Params;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Handle Rewards Running
struct ACheckExpeditionRewardsAction_C_Handle_Rewards_Running_Params
{
};

// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.ExecuteUbergraph_CheckExpeditionRewardsAction
struct ACheckExpeditionRewardsAction_C_ExecuteUbergraph_CheckExpeditionRewardsAction_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
