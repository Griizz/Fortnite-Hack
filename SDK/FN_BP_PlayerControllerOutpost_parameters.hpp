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

// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.UserConstructionScript
struct ABP_PlayerControllerOutpost_C_UserConstructionScript_Params
{
};

// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.ServerStartExpandingOutpost
struct ABP_PlayerControllerOutpost_C_ServerStartExpandingOutpost_Params
{
	bool                                               GetHelp;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.ExecuteUbergraph_BP_PlayerControllerOutpost
struct ABP_PlayerControllerOutpost_C_ExecuteUbergraph_BP_PlayerControllerOutpost_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
