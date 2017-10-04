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

// Function Announce_TutorialConversation.Announce_TutorialConversation_C.HandleSentenceStop_UI
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SentenceIdx                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAnnounce_TutorialConversation_C::HandleSentenceStop_UI(int SentenceIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.HandleSentenceStop_UI");

	AAnnounce_TutorialConversation_C_HandleSentenceStop_UI_Params params;
	params.SentenceIdx = SentenceIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.HandleSentenceStart_UI
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SentenceIdx                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAnnounce_TutorialConversation_C::HandleSentenceStart_UI(int SentenceIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.HandleSentenceStart_UI");

	AAnnounce_TutorialConversation_C_HandleSentenceStart_UI_Params params;
	params.SentenceIdx = SentenceIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.InitAnnouncement
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAnnounce_TutorialConversation_C::InitAnnouncement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.InitAnnouncement");

	AAnnounce_TutorialConversation_C_InitAnnouncement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAnnounce_TutorialConversation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.UserConstructionScript");

	AAnnounce_TutorialConversation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnClientAnnouncementStart
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAnnounce_TutorialConversation_C::OnClientAnnouncementStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnClientAnnouncementStart");

	AAnnounce_TutorialConversation_C_OnClientAnnouncementStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnSentenceStarted
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortConversationSentence* Sentence                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int*                           SentenceIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAnnounce_TutorialConversation_C::OnSentenceStarted(struct FFortConversationSentence* Sentence, int* SentenceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnSentenceStarted");

	AAnnounce_TutorialConversation_C_OnSentenceStarted_Params params;
	params.Sentence = Sentence;
	params.SentenceIndex = SentenceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnConversationFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFortConversationSentence* FinishingSentence              (CPF_Parm)
// int*                           FinishingSentenceSentenceIndex (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAnnounce_TutorialConversation_C::OnConversationFinished(struct FFortConversationSentence* FinishingSentence, int* FinishingSentenceSentenceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnConversationFinished");

	AAnnounce_TutorialConversation_C_OnConversationFinished_Params params;
	params.FinishingSentence = FinishingSentence;
	params.FinishingSentenceSentenceIndex = FinishingSentenceSentenceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnSentenceFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortConversationSentence* Sentence                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int*                           SentenceIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAnnounce_TutorialConversation_C::OnSentenceFinished(struct FFortConversationSentence* Sentence, int* SentenceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnSentenceFinished");

	AAnnounce_TutorialConversation_C_OnSentenceFinished_Params params;
	params.Sentence = Sentence;
	params.SentenceIndex = SentenceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnClientAnnouncementStop
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAnnounce_TutorialConversation_C::OnClientAnnouncementStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnClientAnnouncementStop");

	AAnnounce_TutorialConversation_C_OnClientAnnouncementStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.ExecuteUbergraph_Announce_TutorialConversation
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAnnounce_TutorialConversation_C::ExecuteUbergraph_Announce_TutorialConversation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.ExecuteUbergraph_Announce_TutorialConversation");

	AAnnounce_TutorialConversation_C_ExecuteUbergraph_Announce_TutorialConversation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
