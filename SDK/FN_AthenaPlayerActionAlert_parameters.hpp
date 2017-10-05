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

// Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.AlertPlayer
struct UAthenaPlayerActionAlert_C_AlertPlayer_Params
{
	EAthenaPlayerActionAlert*                          Alert;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText*                                      DetailText;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.OnAnimationFinished
struct UAthenaPlayerActionAlert_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.ExecuteUbergraph_AthenaPlayerActionAlert
struct UAthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
