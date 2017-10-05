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

// BlueprintGeneratedClass CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C
// 0x0068 (0x0450 - 0x03E8)
class ACheckExpeditionRewardsAction_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFrontEndRewards_Definition                 RewardsDefinition;                                        // 0x03F8(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               ShowRewardsWidget;                                        // 0x0440(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	class UFrontEndRewards_Widget_C*                   Claimed_Reward_Widget;                                    // 0x0448(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C");
		return ptr;
	}


	void Find_First_Valid_Player_Controller(class AFortPlayerController** FoundPC1);
	void Is_FrontEndRewards_Running(bool* bRunning);
	void HandleRewardsClaimError(class UFrontEndRewards_Widget_C* RewardsWidget);
	void Clear();
	void HandleRewardsClaimed(class UFrontEndRewards_Widget_C* RewardsWidget);
	void PopulateExpeditionRewards();
	void PopulateRewards();
	void OpenFrontEndRewards();
	void PopulateCompletedQuests();
	void GetCompletedQuests(TArray<class UFortQuestItem*>* Completed_Quests);
	void CompleteRewardsAction();
	void UserConstructionScript();
	void Execute(struct FFortScriptedActionParams* Params);
	void Handle_Rewards_Running();
	void ExecuteUbergraph_CheckExpeditionRewardsAction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
