#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C
// 0x0028 (0x0470 - 0x0448)
class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C : public AFortClientAnnouncement_Conversation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FScriptMulticastDelegate                    OnNewSentence;                                            // 0x0450(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCurrentConversationFinished;                            // 0x0460(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C");
		return ptr;
	}


	void StopCurrentConversation();
	void PlayCurrentConversation();
	void UserConstructionScript();
	void OnConversationFinished(struct FFortConversationSentence* FinishingSentence, int* FinishingSentenceSentenceIndex);
	void OnSentenceStarted(struct FFortConversationSentence* Sentence, int* SentenceIndex);
	void ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards(int EntryPoint);
	void OnCurrentConversationFinished__DelegateSignature();
	void OnNewSentence__DelegateSignature(const struct FFortConversationSentence& Sentence);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
