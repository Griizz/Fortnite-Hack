// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.CreateConversationActor
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C* NewAnnoucement                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Conversation_VO_C::CreateConversationActor(class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C** NewAnnoucement)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.CreateConversationActor");

	UFrontEndRewards_Conversation_VO_C_CreateConversationActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewAnnoucement != nullptr)
		*NewAnnoucement = params.NewAnnoucement;
}


// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.PlayConversation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItem*          QuestItem                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Conversation_VO_C::PlayConversation(class UFortQuestItem* QuestItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.PlayConversation");

	UFrontEndRewards_Conversation_VO_C_PlayConversation_Params params;
	params.QuestItem = QuestItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.HandleConversationFinished
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Conversation_VO_C::HandleConversationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.HandleConversationFinished");

	UFrontEndRewards_Conversation_VO_C_HandleConversationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.HandleNewSentence
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortConversationSentence Sentence                       (CPF_Parm)

void UFrontEndRewards_Conversation_VO_C::HandleNewSentence(const struct FFortConversationSentence& Sentence)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.HandleNewSentence");

	UFrontEndRewards_Conversation_VO_C_HandleNewSentence_Params params;
	params.Sentence = Sentence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.StopConversation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Conversation_VO_C::StopConversation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.StopConversation");

	UFrontEndRewards_Conversation_VO_C_StopConversation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.HandleReplayAction
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Committed                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Conversation_VO_C::HandleReplayAction(bool* Committed)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.HandleReplayAction");

	UFrontEndRewards_Conversation_VO_C_HandleReplayAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Committed != nullptr)
		*Committed = params.Committed;
}


// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.PopulateFromConversation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortConversation*       Conversation                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Conversation_VO_C::PopulateFromConversation(class UFortConversation* Conversation)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.PopulateFromConversation");

	UFrontEndRewards_Conversation_VO_C_PopulateFromConversation_Params params;
	params.Conversation = Conversation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
