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

// Function WM_Lights.WM_Lights_C.UserConstructionScript
struct AWM_Lights_C_UserConstructionScript_Params
{
};

// Function WM_Lights.WM_Lights_C.ReceiveBeginPlay
struct AWM_Lights_C_ReceiveBeginPlay_Params
{
};

// Function WM_Lights.WM_Lights_C.WM-Lightcontrol
struct AWM_Lights_C_WM_Lightcontrol_Params
{
	bool                                               TurnOn;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WM_Lights.WM_Lights_C.ExecuteUbergraph_WM_Lights
struct AWM_Lights_C_ExecuteUbergraph_WM_Lights_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
