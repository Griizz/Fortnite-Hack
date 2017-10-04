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

// Function MicIndicator.MicIndicator_C.OnPlayerTalkingChanged
struct UMicIndicator_C_OnPlayerTalkingChanged_Params
{
	bool*                                              bIsTalking;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MicIndicator.MicIndicator_C.OnPlayerMuted
struct UMicIndicator_C_OnPlayerMuted_Params
{
	bool*                                              bIsMuted;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MicIndicator.MicIndicator_C.ExecuteUbergraph_MicIndicator
struct UMicIndicator_C_ExecuteUbergraph_MicIndicator_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
