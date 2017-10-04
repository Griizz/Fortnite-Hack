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

// BlueprintGeneratedClass Announce_QuestUpdate.Announce_QuestUpdate_C
// 0x0028 (0x0420 - 0x03F8)
class AAnnounce_QuestUpdate_C : public AFortClientAnnouncement
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDynamicQuestUpdateInfo                     QuestUpdateInfo;                                          // 0x0400(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_QuestUpdate.Announce_QuestUpdate_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
