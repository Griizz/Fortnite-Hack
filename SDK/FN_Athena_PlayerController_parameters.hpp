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

// Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript
struct AAthena_PlayerController_C_UserConstructionScript_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay
struct AAthena_PlayerController_C_ReceiveBeginPlay_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveTick
struct AAthena_PlayerController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects
struct AAthena_PlayerController_C_PlayWinEffects_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController
struct AAthena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
