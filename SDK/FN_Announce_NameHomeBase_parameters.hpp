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

// Function Announce_NameHomeBase.Announce_NameHomeBase_C.UserConstructionScript
struct AAnnounce_NameHomeBase_C_UserConstructionScript_Params
{
};

// Function Announce_NameHomeBase.Announce_NameHomeBase_C.InitAnnouncement
struct AAnnounce_NameHomeBase_C_InitAnnouncement_Params
{
};

// Function Announce_NameHomeBase.Announce_NameHomeBase_C.HandleSentenceStart_UI
struct AAnnounce_NameHomeBase_C_HandleSentenceStart_UI_Params
{
	int*                                               SentenceIdx;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Announce_NameHomeBase.Announce_NameHomeBase_C.HandleSentenceStop_UI
struct AAnnounce_NameHomeBase_C_HandleSentenceStop_UI_Params
{
	int*                                               SentenceIdx;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Announce_NameHomeBase.Announce_NameHomeBase_C.ExecuteUbergraph_Announce_NameHomeBase
struct AAnnounce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
