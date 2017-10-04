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

// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.HandleTransitionInComplete
struct UFrontEndRewards_Expedition_C_HandleTransitionInComplete_Params
{
};

// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ContinueSuccess
struct UFrontEndRewards_Expedition_C_ContinueSuccess_Params
{
};

// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ContinueFail
struct UFrontEndRewards_Expedition_C_ContinueFail_Params
{
};

// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.Check
struct UFrontEndRewards_Expedition_C_Check_Params
{
};

// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetSuccessChanceFromExpedition
struct UFrontEndRewards_Expedition_C_SetSuccessChanceFromExpedition_Params
{
};

// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetTitleFromExpedition
struct UFrontEndRewards_Expedition_C_SetTitleFromExpedition_Params
{
};

// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetBrushFromExpedition
struct UFrontEndRewards_Expedition_C_SetBrushFromExpedition_Params
{
};

// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.PopulateFromExpedition
struct UFrontEndRewards_Expedition_C_PopulateFromExpedition_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.TransitionInBegin
struct UFrontEndRewards_Expedition_C_TransitionInBegin_Params
{
};

// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.TransitionOutBegin
struct UFrontEndRewards_Expedition_C_TransitionOutBegin_Params
{
};

// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnCollectExpeditionCompleted
struct UFrontEndRewards_Expedition_C_OnCollectExpeditionCompleted_Params
{
	class UFortExpeditionItem**                        Expedition;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              bSucceeded;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFortItemInstanceQuantityPair>*      Rewards;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnPrimaryAction
struct UFrontEndRewards_Expedition_C_OnPrimaryAction_Params
{
};

// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.Construct
struct UFrontEndRewards_Expedition_C_Construct_Params
{
};

// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ExecuteUbergraph_FrontEndRewards_Expedition
struct UFrontEndRewards_Expedition_C_ExecuteUbergraph_FrontEndRewards_Expedition_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnExpeditionCompleted__DelegateSignature
struct UFrontEndRewards_Expedition_C_OnExpeditionCompleted__DelegateSignature_Params
{
	bool                                               Succeeded;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
