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

// Function SignInWidget.SignInWidget_C.HandleTextCommited
struct USignInWidget_C_HandleTextCommited_Params
{
	TEnumAsByte<ETextCommit>                           TextCommitType;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonBorder*                               HighlightBorder;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonBorder*                               NormalBorder;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SignInWidget.SignInWidget_C.BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_86_OnEditableTextCommittedEvent__DelegateSignature
struct USignInWidget_C_BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_86_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SignInWidget.SignInWidget_C.BndEvt__EmailEditText_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
struct USignInWidget_C_BndEvt__EmailEditText_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SignInWidget.SignInWidget_C.BndEvt__EmailEditText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
struct USignInWidget_C_BndEvt__EmailEditText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function SignInWidget.SignInWidget_C.BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
struct USignInWidget_C_BndEvt__PasswordEditText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function SignInWidget.SignInWidget_C.OnActivated
struct USignInWidget_C_OnActivated_Params
{
};

// Function SignInWidget.SignInWidget_C.BndEvt__SignInButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature
struct USignInWidget_C_BndEvt__SignInButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SignInWidget.SignInWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature
struct USignInWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SignInWidget.SignInWidget_C.ExecuteUbergraph_SignInWidget
struct USignInWidget_C_ExecuteUbergraph_SignInWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
