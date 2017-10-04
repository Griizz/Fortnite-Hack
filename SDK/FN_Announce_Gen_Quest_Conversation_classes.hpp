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

// BlueprintGeneratedClass Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C
// 0x0008 (0x0450 - 0x0448)
class AAnnounce_Gen_Quest_Conversation_C : public AFortClientAnnouncement_Conversation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnConversationFinished(struct FFortConversationSentence* FinishingSentence, int* FinishingSentenceSentenceIndex);
	void ExecuteUbergraph_Announce_Gen_Quest_Conversation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
