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

// Function Frontend.FrontEnd_C.EnableTutorial
struct AFrontEnd_C_EnableTutorial_Params
{
};

// Function Frontend.FrontEnd_C.OnMatchStarted
struct AFrontEnd_C_OnMatchStarted_Params
{
};

// Function Frontend.FrontEnd_C.ReceiveBeginPlay
struct AFrontEnd_C_ReceiveBeginPlay_Params
{
};

// Function Frontend.FrontEnd_C.ExecuteUbergraph_FrontEnd
struct AFrontEnd_C_ExecuteUbergraph_FrontEnd_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
