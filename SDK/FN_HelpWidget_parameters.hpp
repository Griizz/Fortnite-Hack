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

// Function HelpWidget.HelpWidget_C.Init
struct UHelpWidget_C_Init_Params
{
	struct FText                                       inTitle;                                                  // (CPF_Parm)
	struct FText                                       inDescription;                                            // (CPF_Parm)
	struct FText                                       inStep1_Text;                                             // (CPF_Parm)
	struct FText                                       inStep2_Text;                                             // (CPF_Parm)
	struct FText                                       inStep3_Text;                                             // (CPF_Parm)
	class UTexture2D*                                  inStep1_Picture;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  inStep2_Picture;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  inStep3_Picture;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                inNumOfSteps;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HelpWidget.HelpWidget_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature
struct UHelpWidget_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HelpWidget.HelpWidget_C.Construct
struct UHelpWidget_C_Construct_Params
{
};

// Function HelpWidget.HelpWidget_C.ExecuteUbergraph_HelpWidget
struct UHelpWidget_C_ExecuteUbergraph_HelpWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
