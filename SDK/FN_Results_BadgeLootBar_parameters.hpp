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

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.GetNextLootLevelPoints
struct UResults_BadgeLootBar_C_GetNextLootLevelPoints_Params
{
	int                                                LootPoints;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NextLootLevelPoints;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.SkipToFinalState
struct UResults_BadgeLootBar_C_SkipToFinalState_Params
{
};

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.SetSkippingToEnd
struct UResults_BadgeLootBar_C_SetSkippingToEnd_Params
{
};

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.PlayAnimationCommon
struct UResults_BadgeLootBar_C_PlayAnimationCommon_Params
{
	class UWidgetAnimation*                            Animation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.GetBadgePoints
struct UResults_BadgeLootBar_C_GetBadgePoints_Params
{
	class UResults_Badge_C*                            Badge;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Points;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.SetLootLevel
struct UResults_BadgeLootBar_C_SetLootLevel_Params
{
	int                                                Level;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.Initialize
struct UResults_BadgeLootBar_C_Initialize_Params
{
	float                                              PlayRate;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.UpdateAddBadgePoints
struct UResults_BadgeLootBar_C_UpdateAddBadgePoints_Params
{
};

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.BndEvt__IntroAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_BadgeLootBar_C_BndEvt__IntroAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.Intro Sequence
struct UResults_BadgeLootBar_C_Intro_Sequence_Params
{
};

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.BndEvt__Anim_LevelUp_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_BadgeLootBar_C_BndEvt__Anim_LevelUp_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.Add Badge Points Sequence
struct UResults_BadgeLootBar_C_Add_Badge_Points_Sequence_Params
{
	class UResults_Badge_C*                            Badge;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.BndEvt__Anim_PostLevelUpIntro_K2Node_ComponentBoundEvent_6_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_BadgeLootBar_C_BndEvt__Anim_PostLevelUpIntro_K2Node_ComponentBoundEvent_6_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.On Leveled Up
struct UResults_BadgeLootBar_C_On_Leveled_Up_Params
{
};

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.Construct
struct UResults_BadgeLootBar_C_Construct_Params
{
};

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.ExecuteUbergraph_Results_BadgeLootBar
struct UResults_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.LeveledUp__DelegateSignature
struct UResults_BadgeLootBar_C_LeveledUp__DelegateSignature_Params
{
};

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.FinishedAddingBadgePoints__DelegateSignature
struct UResults_BadgeLootBar_C_FinishedAddingBadgePoints__DelegateSignature_Params
{
};

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.IntroComplete__DelegateSignature
struct UResults_BadgeLootBar_C_IntroComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
