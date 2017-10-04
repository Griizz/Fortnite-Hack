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

// WidgetBlueprintGeneratedClass QuestUpdatesLog.QuestUpdatesLog_C
// 0x008C (0x02EC - 0x0260)
class UQuestUpdatesLog_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                QuestUpdatesBox;                                          // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<class UFortQuestItem*>                      PinnedQuests;                                             // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UFortQuestItem*                              RequiredQuest;                                            // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       PinnedQuestSingularText;                                  // 0x0288(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       PinnedQuestsPluralText;                                   // 0x02A0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FDynamicQuestUpdateInfo>             QueuedDynamicQuestStatusUpdates;                          // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                MaxDisplayedQuestUpdates;                                 // 0x02C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	TArray<class UWidget*>                             QuestUpdateWidgets;                                       // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FTimerHandle                                TryDisplayNextUpdateTimerHandle;                          // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                MaxDisplayedQuestObjectives;                              // 0x02E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestUpdatesLog.QuestUpdatesLog_C");
		return ptr;
	}


	void CanDisplayAnotherObjective(bool* Result);
	void GetTotalDisplayedObjectives(int* NumObjectives);
	void CreateAnnouncementUpdate(const struct FDynamicQuestUpdateInfo& UpdateInfo);
	void HandleQuestUpdateWidgetFinished(class UQuestUpdateEntry_C* UpdateWidget);
	void GetAvailableQuestUpdateWidget(const struct FDynamicQuestUpdateInfo& UpdateInfo, class UQuestUpdateEntry_C** AvailableWIdget);
	void TryDisplayDynamicQuestStatusUpdate();
	void CreateQuestUpdateWIdgets();
	void HandleDisplayDynamicQuestUpdate(class UFortQuestObjectiveInfo* QuestObjective, bool bDisplayStatusUpdate, bool bDisplayAnnouncementUpdate);
	void Construct();
	void ExecuteUbergraph_QuestUpdatesLog(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
