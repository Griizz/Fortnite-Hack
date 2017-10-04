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

// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.GetIsValidScoreBox
struct UResults_PlayerScoreBox_C_GetIsValidScoreBox_Params
{
	bool                                               bIsValidScoreBox;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetIsValidScoreBox
struct UResults_PlayerScoreBox_C_SetIsValidScoreBox_Params
{
	bool                                               bIsValidScoreBox;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetSkippingToEnd
struct UResults_PlayerScoreBox_C_SetSkippingToEnd_Params
{
};

// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetIsBestScore
struct UResults_PlayerScoreBox_C_SetIsBestScore_Params
{
	bool                                               bIsBestScore;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Initialize
struct UResults_PlayerScoreBox_C_Initialize_Params
{
	int                                                Score;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.PreConstruct
struct UResults_PlayerScoreBox_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Intro Sequence
struct UResults_PlayerScoreBox_C_Intro_Sequence_Params
{
};

// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_PlayerScoreBox_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Count Sequence
struct UResults_PlayerScoreBox_C_Count_Sequence_Params
{
};

// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Skipped Count Interpolation
struct UResults_PlayerScoreBox_C_Skipped_Count_Interpolation_Params
{
};

// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature
struct UResults_PlayerScoreBox_C_BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature_Params
{
	class UCommonNumericTextBlock*                     NumericTextBlock;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HadCompleted;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.ExecuteUbergraph_Results_PlayerScoreBox
struct UResults_PlayerScoreBox_C_ExecuteUbergraph_Results_PlayerScoreBox_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
