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

// Function TracerGeneric.TracerGeneric_C.GetLocalPawnForPassBy
struct ATracerGeneric_C_GetLocalPawnForPassBy_Params
{
	class AFortPlayerPawn*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TracerGeneric.TracerGeneric_C.PlayPassBySound
struct ATracerGeneric_C_PlayPassBySound_Params
{
};

// Function TracerGeneric.TracerGeneric_C.TrackPassBy
struct ATracerGeneric_C_TrackPassBy_Params
{
	bool                                               Changed;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Pass_Distance;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TracerGeneric.TracerGeneric_C.UserConstructionScript
struct ATracerGeneric_C_UserConstructionScript_Params
{
};

// Function TracerGeneric.TracerGeneric_C.ReceiveTick
struct ATracerGeneric_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TracerGeneric.TracerGeneric_C.OnInit
struct ATracerGeneric_C_OnInit_Params
{
	struct FVector*                                    Start;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector*                                    End;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TracerGeneric.TracerGeneric_C.ExecuteUbergraph_TracerGeneric
struct ATracerGeneric_C_ExecuteUbergraph_TracerGeneric_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
