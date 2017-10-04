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

// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.IsFrontEndRewards Running
struct ACheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running_Params
{
	bool                                               IsRunning;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.Daily Rewards Open
struct ACheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open_Params
{
	bool                                               bRunning;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.CompleteDailyRewardAction
struct ACheckFrontEndDailyRewardsAction_C_CompleteDailyRewardAction_Params
{
};

// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.ShowDailyRewards
struct ACheckFrontEndDailyRewardsAction_C_ShowDailyRewards_Params
{
};

// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.UserConstructionScript
struct ACheckFrontEndDailyRewardsAction_C_UserConstructionScript_Params
{
};

// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.Execute
struct ACheckFrontEndDailyRewardsAction_C_Execute_Params
{
	struct FFortScriptedActionParams*                  Params;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.HandleClientEvent_FinishedModalQueue
struct ACheckFrontEndDailyRewardsAction_C_HandleClientEvent_FinishedModalQueue_Params
{
	class UObject*                                     EventSource;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.ExecuteUbergraph_CheckFrontEndDailyRewardsAction
struct ACheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
