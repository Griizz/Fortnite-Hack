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

// Function InputReflector.InputReflector_C.OnButtonAdded
struct UInputReflector_C_OnButtonAdded_Params
{
	class UCommonButton**                              AddedButton;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCommonInputActionHandlerData*              Data;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function InputReflector.InputReflector_C.ClearButtons
struct UInputReflector_C_ClearButtons_Params
{
};

// Function InputReflector.InputReflector_C.Construct
struct UInputReflector_C_Construct_Params
{
};

// Function InputReflector.InputReflector_C.ExecuteUbergraph_InputReflector
struct UInputReflector_C_ExecuteUbergraph_InputReflector_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
