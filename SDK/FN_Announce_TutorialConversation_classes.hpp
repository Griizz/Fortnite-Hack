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

// BlueprintGeneratedClass Announce_TutorialConversation.Announce_TutorialConversation_C
// 0x0018 (0x05C8 - 0x05B0)
class AAnnounce_TutorialConversation_C : public AFortClientAnnouncement_TutorialConversation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05B0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	TArray<struct FTutorialHighlightData>              SentencedIndexedTutorialData;                             // 0x05B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_TutorialConversation.Announce_TutorialConversation_C");
		return ptr;
	}


	void HandleSentenceStop_UI(int SentenceIdx);
	void HandleSentenceStart_UI(int SentenceIdx);
	void InitAnnouncement();
	void UserConstructionScript();
	void OnClientAnnouncementStart();
	void OnSentenceStarted(struct FFortConversationSentence* Sentence, int* SentenceIndex);
	void OnConversationFinished(struct FFortConversationSentence* FinishingSentence, int* FinishingSentenceSentenceIndex);
	void OnSentenceFinished(struct FFortConversationSentence* Sentence, int* SentenceIndex);
	void OnClientAnnouncementStop();
	void ExecuteUbergraph_Announce_TutorialConversation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
