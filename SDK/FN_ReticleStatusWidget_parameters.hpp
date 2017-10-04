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

// Function ReticleStatusWidget.ReticleStatusWidget_C.Construct
struct UReticleStatusWidget_C_Construct_Params
{
};

// Function ReticleStatusWidget.ReticleStatusWidget_C.OnUnableToPerformAction
struct UReticleStatusWidget_C_OnUnableToPerformAction_Params
{
	struct FGameplayTagContainer                       FailedReason;                                             // (CPF_Parm)
	struct FText                                       FailureText;                                              // (CPF_Parm)
};

// Function ReticleStatusWidget.ReticleStatusWidget_C.ExecuteUbergraph_ReticleStatusWidget
struct UReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
