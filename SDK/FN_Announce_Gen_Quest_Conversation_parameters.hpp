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

// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.UserConstructionScript
struct AAnnounce_Gen_Quest_Conversation_C_UserConstructionScript_Params
{
};

// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.OnConversationFinished
struct AAnnounce_Gen_Quest_Conversation_C_OnConversationFinished_Params
{
	struct FFortConversationSentence*                  FinishingSentence;                                        // (CPF_Parm)
	int*                                               FinishingSentenceSentenceIndex;                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.ExecuteUbergraph_Announce_Gen_Quest_Conversation
struct AAnnounce_Gen_Quest_Conversation_C_ExecuteUbergraph_Announce_Gen_Quest_Conversation_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
