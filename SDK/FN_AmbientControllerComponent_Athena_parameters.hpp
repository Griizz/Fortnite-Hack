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

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.SetTargetLPFFreq
struct UAmbientControllerComponent_Athena_C_SetTargetLPFFreq_Params
{
	float                                              Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.SetIndoorMixEnabled
struct UAmbientControllerComponent_Athena_C_SetIndoorMixEnabled_Params
{
	bool                                               Enabled;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Trace
struct UAmbientControllerComponent_Athena_C_Trace_Params
{
	struct FVector                                     Start;                                                    // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     Direction;                                                // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Crossfade
struct UAmbientControllerComponent_Athena_C_Crossfade_Params
{
	class USoundBase*                                  NewSound;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.RegisterTimeOfDayCallbacks
struct UAmbientControllerComponent_Athena_C_RegisterTimeOfDayCallbacks_Params
{
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveBeginPlay
struct UAmbientControllerComponent_Athena_C_ReceiveBeginPlay_Params
{
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveEndPlay
struct UAmbientControllerComponent_Athena_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.OnCheckIfSurrounded
struct UAmbientControllerComponent_Athena_C_OnCheckIfSurrounded_Params
{
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Evaluate Inside State
struct UAmbientControllerComponent_Athena_C_Evaluate_Inside_State_Params
{
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Day Phase Change
struct UAmbientControllerComponent_Athena_C_On_Day_Phase_Change_Params
{
	TEnumAsByte<EFortDayPhase>                         CurrentDayPhase;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortDayPhase>                         PreviousDayPhase;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAtCreation;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveTick
struct UAmbientControllerComponent_Athena_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Game Phase Change
struct UAmbientControllerComponent_Athena_C_On_Game_Phase_Change_Params
{
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Game Phase Step Change
struct UAmbientControllerComponent_Athena_C_On_Game_Phase_Step_Change_Params
{
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Set Storm Amb Layer Enabled
struct UAmbientControllerComponent_Athena_C_Set_Storm_Amb_Layer_Enabled_Params
{
	bool                                               Enabled;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ExecuteUbergraph_AmbientControllerComponent_Athena
struct UAmbientControllerComponent_Athena_C_ExecuteUbergraph_AmbientControllerComponent_Athena_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
