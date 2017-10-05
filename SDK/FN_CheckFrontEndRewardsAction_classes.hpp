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

// BlueprintGeneratedClass CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C
// 0x005A (0x0442 - 0x03E8)
class ACheckFrontEndRewardsAction_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFrontEndRewards_Definition                 RewardsDefinition;                                        // 0x03F8(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               ShowRewardsWidget;                                        // 0x0440(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      NewVar_1;                                                 // 0x0441(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C");
		return ptr;
	}


	bool CanShowFrontendRewards();
	void Is_FrontEndRewards_Running(bool* bRunning);
	void PopulateMissionAlertRewards();
	void HandleRewardsClaimError(class UFrontEndRewards_Widget_C* RewardsWidget);
	void Clear();
	void HandleRewardsClaimed(class UFrontEndRewards_Widget_C* RewardsWidget);
	void PopulateCollectionBookRewards();
	void PopulateRewards();
	void OpenFrontEndRewards();
	void PopulateUnseenQuests(EFortQuestType QuestType);
	void GetCompletedQuests(TArray<class UFortQuestItem*>* Completed_Quests);
	void PopulateNewQuests();
	void PopulateQuestRewards();
	void PopulateMissionRewards();
	void CompleteRewardsAction();
	void UserConstructionScript();
	void Execute(struct FFortScriptedActionParams* Params);
	void ExecuteUbergraph_CheckFrontEndRewardsAction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
