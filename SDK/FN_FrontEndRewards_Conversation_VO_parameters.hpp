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

// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.CreateConversationActor
struct UFrontEndRewards_Conversation_VO_C_CreateConversationActor_Params
{
	class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C* NewAnnoucement;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.PlayConversation
struct UFrontEndRewards_Conversation_VO_C_PlayConversation_Params
{
	class UFortQuestItem*                              QuestItem;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.HandleConversationFinished
struct UFrontEndRewards_Conversation_VO_C_HandleConversationFinished_Params
{
};

// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.HandleNewSentence
struct UFrontEndRewards_Conversation_VO_C_HandleNewSentence_Params
{
	struct FFortConversationSentence                   Sentence;                                                 // (CPF_Parm)
};

// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.StopConversation
struct UFrontEndRewards_Conversation_VO_C_StopConversation_Params
{
};

// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.HandleReplayAction
struct UFrontEndRewards_Conversation_VO_C_HandleReplayAction_Params
{
	bool                                               Committed;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.PopulateFromConversation
struct UFrontEndRewards_Conversation_VO_C_PopulateFromConversation_Params
{
	class UFortConversation*                           Conversation;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
