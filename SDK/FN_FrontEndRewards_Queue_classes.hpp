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

// WidgetBlueprintGeneratedClass FrontEndRewards_Queue.FrontEndRewards_Queue_C
// 0x0058 (0x0290 - 0x0238)
class UFrontEndRewards_Queue_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UOverlay*                                    OverlayMain;                                              // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<class URewardsIcon_C*>                      IconList;                                                 // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              IconPadding;                                              // 0x0258(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              IconScale;                                                // 0x025C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<int>                                        SlideIndexList;                                           // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FTimerHandle                                IconSlideHandle;                                          // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              IconSlideStaggerTime;                                     // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              IconInitStaggerTime;                                      // 0x027C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTimerHandle                                IconInitHandle;                                           // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                InitIndex;                                                // 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BaseIconOffset;                                           // 0x028C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FrontEndRewards_Queue.FrontEndRewards_Queue_C");
		return ptr;
	}


	void TickIconInit();
	void StartInitAnimation();
	void SlideIcon(class URewardsIcon_C* Icon);
	void StartDequeueAnimation();
	void TickIconSlide();
	void HandleIconHideAnimationFinished(class URewardsIcon_C* Icon);
	void PopIcon(class URewardsIcon_C** OutIcon);
	void RandomizeDesignView();
	void CloneIconList(TArray<class URewardsIcon_C*>* IconListClone);
	void ClearQueue();
	void DequeueReward(class UFortRewardNotificationData** OutReward);
	void QueueReward(class UFortRewardNotificationData* RewardItem, bool IsDesignTime, class URewardsIcon_C** OutIcon);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_FrontEndRewards_Queue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
