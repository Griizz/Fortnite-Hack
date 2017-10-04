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

// Function RejoinWindow.RejoinWindow_C.OnButtonClicked
struct URejoinWindow_C_OnButtonClicked_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RejoinWindow.RejoinWindow_C.CenterFirstButton
struct URejoinWindow_C_CenterFirstButton_Params
{
};

// Function RejoinWindow.RejoinWindow_C.InitializeRejoinWindow
struct URejoinWindow_C_InitializeRejoinWindow_Params
{
};

// Function RejoinWindow.RejoinWindow_C.ShowInitalScreen
struct URejoinWindow_C_ShowInitalScreen_Params
{
	float                                              TimeoutSeconds;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RejoinWindow.RejoinWindow_C.ShowRetryScreen
struct URejoinWindow_C_ShowRetryScreen_Params
{
	struct FText                                       Failure;                                                  // (CPF_Parm)
	float                                              TimeoutSeconds;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               AllowRetry;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RejoinWindow.RejoinWindow_C.Construct
struct URejoinWindow_C_Construct_Params
{
};

// Function RejoinWindow.RejoinWindow_C.OnTimeoutTimeReached
struct URejoinWindow_C_OnTimeoutTimeReached_Params
{
};

// Function RejoinWindow.RejoinWindow_C.ExecuteUbergraph_RejoinWindow
struct URejoinWindow_C_ExecuteUbergraph_RejoinWindow_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RejoinWindow.RejoinWindow_C.OnRequestRejoinRetry__DelegateSignature
struct URejoinWindow_C_OnRequestRejoinRetry__DelegateSignature_Params
{
};

// Function RejoinWindow.RejoinWindow_C.OnRequestAbandon__DelegateSignature
struct URejoinWindow_C_OnRequestAbandon__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
