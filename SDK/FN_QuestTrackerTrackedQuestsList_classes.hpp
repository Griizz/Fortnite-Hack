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

// WidgetBlueprintGeneratedClass QuestTrackerTrackedQuestsList.QuestTrackerTrackedQuestsList_C
// 0x0000 (0x0270 - 0x0270)
class UQuestTrackerTrackedQuestsList_C : public UFortQuestTrackerList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestTrackerTrackedQuestsList.QuestTrackerTrackedQuestsList_C");
		return ptr;
	}


	TArray<class UFortQuestItem*> GetQuestsToDisplay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
