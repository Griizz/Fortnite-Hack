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

// WidgetBlueprintGeneratedClass RewardsListWidget.RewardsListWidget_C
// 0x0038 (0x0278 - 0x0240)
class URewardsListWidget_C : public UFortUserWidget
{
public:
	class UVerticalBox*                                RewardsVerticalBox;                                       // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<class UFrontEndRewardWrapperWidget_C*>      RewardsArray;                                             // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                Index;                                                    // 0x0258(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                RewardCount;                                              // 0x025C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DoNotAnimate;                                             // 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bPlaySound;                                               // 0x0261(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0262(0x0006) MISSED OFFSET
	TArray<class UFrontEndRewardWrapperWidget_C*>      SelectableRewardsArray;                                   // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardsListWidget.RewardsListWidget_C");
		return ptr;
	}


	void PresentAllRewards();
	void CreateRewardWrapper(class UHomeScreenQuestRewardItem_C* Item, const struct FText& DisplayName, class UFrontEndRewardWrapperWidget_C** OutputPin);
	void CreateReward(const struct FFortItemInstanceQuantityPair& FortItemInstanceQuantityPair, bool Selectable);
	void PresentNextReward();
	void PopulateRewards(TArray<struct FFortItemInstanceQuantityPair>* Rewards, TArray<struct FFortItemInstanceQuantityPair>* SelectableRewards);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
