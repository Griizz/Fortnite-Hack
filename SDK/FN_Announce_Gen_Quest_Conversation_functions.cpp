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

// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAnnounce_Gen_Quest_Conversation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.UserConstructionScript");

	AAnnounce_Gen_Quest_Conversation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.OnConversationFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFortConversationSentence* FinishingSentence              (CPF_Parm)
// int*                           FinishingSentenceSentenceIndex (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAnnounce_Gen_Quest_Conversation_C::OnConversationFinished(struct FFortConversationSentence* FinishingSentence, int* FinishingSentenceSentenceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.OnConversationFinished");

	AAnnounce_Gen_Quest_Conversation_C_OnConversationFinished_Params params;
	params.FinishingSentence = FinishingSentence;
	params.FinishingSentenceSentenceIndex = FinishingSentenceSentenceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.ExecuteUbergraph_Announce_Gen_Quest_Conversation
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAnnounce_Gen_Quest_Conversation_C::ExecuteUbergraph_Announce_Gen_Quest_Conversation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.ExecuteUbergraph_Announce_Gen_Quest_Conversation");

	AAnnounce_Gen_Quest_Conversation_C_ExecuteUbergraph_Announce_Gen_Quest_Conversation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
