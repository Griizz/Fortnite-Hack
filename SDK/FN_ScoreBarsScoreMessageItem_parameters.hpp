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

// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnAppearAnimationFinished
struct UScoreBarsScoreMessageItem_C_OnAppearAnimationFinished_Params
{
};

// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ClearScoreValueWidget
struct UScoreBarsScoreMessageItem_C_ClearScoreValueWidget_Params
{
};

// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.GetScoreValueWidget
struct UScoreBarsScoreMessageItem_C_GetScoreValueWidget_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.Setup
struct UScoreBarsScoreMessageItem_C_Setup_Params
{
	int                                                Base_Delta;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Name_Text;                                                // (CPF_Parm)
	class UScoreMessageNumber_C*                       In_Score_Widget;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.UpdateValues
struct UScoreBarsScoreMessageItem_C_UpdateValues_Params
{
};

// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnStackSizeChanged
struct UScoreBarsScoreMessageItem_C_OnStackSizeChanged_Params
{
	int*                                               OldStackSize;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnBeginRemove
struct UScoreBarsScoreMessageItem_C_OnBeginRemove_Params
{
};

// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ExecuteUbergraph_ScoreBarsScoreMessageItem
struct UScoreBarsScoreMessageItem_C_ExecuteUbergraph_ScoreBarsScoreMessageItem_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
