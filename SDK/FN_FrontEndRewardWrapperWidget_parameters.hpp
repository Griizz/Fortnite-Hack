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

// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.IntroAnimation
struct UFrontEndRewardWrapperWidget_C_IntroAnimation_Params
{
};

// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.AddToWrapper
struct UFrontEndRewardWrapperWidget_C_AddToWrapper_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // (CPF_Parm)
};

// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.Construct
struct UFrontEndRewardWrapperWidget_C_Construct_Params
{
};

// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.Go_Trigger
struct UFrontEndRewardWrapperWidget_C_Go_Trigger_Params
{
};

// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.ExecuteUbergraph_FrontEndRewardWrapperWidget
struct UFrontEndRewardWrapperWidget_C_ExecuteUbergraph_FrontEndRewardWrapperWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.EventDispatcher_Go_Trigger__DelegateSignature
struct UFrontEndRewardWrapperWidget_C_EventDispatcher_Go_Trigger__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
