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

// WidgetBlueprintGeneratedClass FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C
// 0x0028 (0x0288 - 0x0260)
class UFrontEndRewards_Conversation_VO_C : public UFortRewardConversationWidget
{
public:
	struct FDataTableRowHandle                         ReplayAction;                                             // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UFortConversation*                           Conversation;                                             // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UFortQuestItem*                              QuestItemRef;                                             // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C* ConversationActor;                                        // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C");
		return ptr;
	}


	void CreateConversationActor(class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C** NewAnnoucement);
	void PlayConversation(class UFortQuestItem* QuestItem);
	void HandleConversationFinished();
	void HandleNewSentence(const struct FFortConversationSentence& Sentence);
	void StopConversation();
	void HandleReplayAction(bool* Committed);
	void PopulateFromConversation(class UFortConversation* Conversation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
