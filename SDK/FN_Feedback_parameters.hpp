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

// Function Feedback.Feedback_C.Setup For Reporting Player
struct UFeedback_C_Setup_For_Reporting_Player_Params
{
	struct FText                                       Player_Name;                                              // (CPF_Parm)
};

// Function Feedback.Feedback_C.InitializeFeedback
struct UFeedback_C_InitializeFeedback_Params
{
};

// Function Feedback.Feedback_C.IsAllTextNotEmpty
struct UFeedback_C_IsAllTextNotEmpty_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Feedback.Feedback_C.AddButtonFeedbackTypes
struct UFeedback_C_AddButtonFeedbackTypes_Params
{
};

// Function Feedback.Feedback_C.BindDelegates
struct UFeedback_C_BindDelegates_Params
{
};

// Function Feedback.Feedback_C.Construct
struct UFeedback_C_Construct_Params
{
};

// Function Feedback.Feedback_C.OnInitiateDebugInfoForFeedbackComplete
struct UFeedback_C_OnInitiateDebugInfoForFeedbackComplete_Params
{
};

// Function Feedback.Feedback_C.OnBeginIntro
struct UFeedback_C_OnBeginIntro_Params
{
};

// Function Feedback.Feedback_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UFeedback_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Feedback.Feedback_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UFeedback_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Feedback.Feedback_C.HandleTextChanged
struct UFeedback_C_HandleTextChanged_Params
{
	struct FText                                       Text;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function Feedback.Feedback_C.OnActivated
struct UFeedback_C_OnActivated_Params
{
};

// Function Feedback.Feedback_C.ExecuteUbergraph_Feedback
struct UFeedback_C_ExecuteUbergraph_Feedback_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
