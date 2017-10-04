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

// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.StopCurrentConversation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::StopCurrentConversation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.StopCurrentConversation");

	AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_StopCurrentConversation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.PlayCurrentConversation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::PlayCurrentConversation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.PlayCurrentConversation");

	AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_PlayCurrentConversation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.UserConstructionScript");

	AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnConversationFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFortConversationSentence* FinishingSentence              (CPF_Parm)
// int*                           FinishingSentenceSentenceIndex (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::OnConversationFinished(struct FFortConversationSentence* FinishingSentence, int* FinishingSentenceSentenceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnConversationFinished");

	AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_OnConversationFinished_Params params;
	params.FinishingSentence = FinishingSentence;
	params.FinishingSentenceSentenceIndex = FinishingSentenceSentenceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnSentenceStarted
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortConversationSentence* Sentence                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int*                           SentenceIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::OnSentenceStarted(struct FFortConversationSentence* Sentence, int* SentenceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnSentenceStarted");

	AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_OnSentenceStarted_Params params;
	params.Sentence = Sentence;
	params.SentenceIndex = SentenceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards");

	AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnCurrentConversationFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::OnCurrentConversationFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnCurrentConversationFinished__DelegateSignature");

	AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_OnCurrentConversationFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnNewSentence__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortConversationSentence Sentence                       (CPF_Parm)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::OnNewSentence__DelegateSignature(const struct FFortConversationSentence& Sentence)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnNewSentence__DelegateSignature");

	AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_OnNewSentence__DelegateSignature_Params params;
	params.Sentence = Sentence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
