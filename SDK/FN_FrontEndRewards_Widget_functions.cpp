// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionRewardsClaimFailed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::HandleOnMissionRewardsClaimFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionRewardsClaimFailed");

	UFrontEndRewards_Widget_C_HandleOnMissionRewardsClaimFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.DebugPrintChoiceReward
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Widget_C::DebugPrintChoiceReward(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.DebugPrintChoiceReward");

	UFrontEndRewards_Widget_C_DebugPrintChoiceReward_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SafePop
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::SafePop()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SafePop");

	UFrontEndRewards_Widget_C_SafePop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.TriggerUpdateWhenDone
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::TriggerUpdateWhenDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.TriggerUpdateWhenDone");

	UFrontEndRewards_Widget_C_TriggerUpdateWhenDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionAlertRewardsClaimed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UFrontEndRewards_Widget_C::HandleOnMissionAlertRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionAlertRewardsClaimed");

	UFrontEndRewards_Widget_C_HandleOnMissionAlertRewardsClaimed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimMissionAlertRewards
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::ClaimMissionAlertRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimMissionAlertRewards");

	UFrontEndRewards_Widget_C_ClaimMissionAlertRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateMissionAlertRewards
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::PopulateMissionAlertRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateMissionAlertRewards");

	UFrontEndRewards_Widget_C_PopulateMissionAlertRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitRewardsQueue
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::InitRewardsQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitRewardsQueue");

	UFrontEndRewards_Widget_C_InitRewardsQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitializeRewardsData
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFrontEndRewards_Definition FrontEndRewards_Definition     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UFrontEndRewards_Widget_C::InitializeRewardsData(const struct FFrontEndRewards_Definition& FrontEndRewards_Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitializeRewardsData");

	UFrontEndRewards_Widget_C_InitializeRewardsData_Params params;
	params.FrontEndRewards_Definition = FrontEndRewards_Definition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitAdditionalRewards
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFrontEndRewards_Definition Definition                     (CPF_Parm)

void UFrontEndRewards_Widget_C::InitAdditionalRewards(const struct FFrontEndRewards_Definition& Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitAdditionalRewards");

	UFrontEndRewards_Widget_C_InitAdditionalRewards_Params params;
	params.Definition = Definition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleBorderShown
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::HandleBorderShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleBorderShown");

	UFrontEndRewards_Widget_C_HandleBorderShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SkipPopAnimation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::SkipPopAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SkipPopAnimation");

	UFrontEndRewards_Widget_C_SkipPopAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SkipOpenAnimation
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::SkipOpenAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SkipOpenAnimation");

	UFrontEndRewards_Widget_C_SkipOpenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateVO
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::PopulateVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateVO");

	UFrontEndRewards_Widget_C_PopulateVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnNoRewardsToClaim
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::HandleOnNoRewardsToClaim()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnNoRewardsToClaim");

	UFrontEndRewards_Widget_C_HandleOnNoRewardsToClaim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.UnbindEvents
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::UnbindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.UnbindEvents");

	UFrontEndRewards_Widget_C_UnbindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ResetQueueState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::ResetQueueState()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ResetQueueState");

	UFrontEndRewards_Widget_C_ResetQueueState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.TransitionIn
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::TransitionIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.TransitionIn");

	UFrontEndRewards_Widget_C_TransitionIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OpenReward
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::OpenReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OpenReward");

	UFrontEndRewards_Widget_C_OpenReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateChoiceRewardsWidgetFromCardList
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class URewards_ItemCard_C*> Cards                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UFrontEndRewards_Widget_C::PopulateChoiceRewardsWidgetFromCardList(TArray<class URewards_ItemCard_C*>* Cards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateChoiceRewardsWidgetFromCardList");

	UFrontEndRewards_Widget_C_PopulateChoiceRewardsWidgetFromCardList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cards != nullptr)
		*Cards = params.Cards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleCurrentRewardTransitionOutComplete
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::HandleCurrentRewardTransitionOutComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleCurrentRewardTransitionOutComplete");

	UFrontEndRewards_Widget_C_HandleCurrentRewardTransitionOutComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOpenAnimationFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::HandleOpenAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOpenAnimationFinished");

	UFrontEndRewards_Widget_C_HandleOpenAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitSubWidgets
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::InitSubWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitSubWidgets");

	UFrontEndRewards_Widget_C_InitSubWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionRewardsClaimed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UFrontEndRewards_Widget_C::HandleOnMissionRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionRewardsClaimed");

	UFrontEndRewards_Widget_C_HandleOnMissionRewardsClaimed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateListRewardsWidgetFromCardList
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class URewards_ItemCard_C*> Cards                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UFrontEndRewards_Widget_C::PopulateListRewardsWidgetFromCardList(TArray<class URewards_ItemCard_C*>* Cards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateListRewardsWidgetFromCardList");

	UFrontEndRewards_Widget_C_PopulateListRewardsWidgetFromCardList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cards != nullptr)
		*Cards = params.Cards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnCollectionBookRewardsClaimed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortCollectionBookRewards RewardRequested                (CPF_Parm)
// bool                           Success                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FFortItemInstanceQuantityPair> ActualRewards                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UFrontEndRewards_Widget_C::HandleOnCollectionBookRewardsClaimed(const struct FFortCollectionBookRewards& RewardRequested, bool Success, TArray<struct FFortItemInstanceQuantityPair>* ActualRewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnCollectionBookRewardsClaimed");

	UFrontEndRewards_Widget_C_HandleOnCollectionBookRewardsClaimed_Params params;
	params.RewardRequested = RewardRequested;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActualRewards != nullptr)
		*ActualRewards = params.ActualRewards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnQuestRewardsClaimed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UFrontEndRewards_Widget_C::HandleOnQuestRewardsClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnQuestRewardsClaimed");

	UFrontEndRewards_Widget_C_HandleOnQuestRewardsClaimed_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimCollectionBookChoiceReward
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData* NotificationData               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SelectionIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Widget_C::ClaimCollectionBookChoiceReward(class UFortRewardNotificationData* NotificationData, int SelectionIndex, class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimCollectionBookChoiceReward");

	UFrontEndRewards_Widget_C_ClaimCollectionBookChoiceReward_Params params;
	params.NotificationData = NotificationData;
	params.SelectionIndex = SelectionIndex;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimCollectionBookRewards
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::ClaimCollectionBookRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimCollectionBookRewards");

	UFrontEndRewards_Widget_C_ClaimCollectionBookRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimQuestListReward
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::ClaimQuestListReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimQuestListReward");

	UFrontEndRewards_Widget_C_ClaimQuestListReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateCollectionBookRewards
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::PopulateCollectionBookRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateCollectionBookRewards");

	UFrontEndRewards_Widget_C_PopulateCollectionBookRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateExpedition
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::PopulateExpedition()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateExpedition");

	UFrontEndRewards_Widget_C_PopulateExpedition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateNewQuest
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::PopulateNewQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateNewQuest");

	UFrontEndRewards_Widget_C_PopulateNewQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateQuestRewards
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::PopulateQuestRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateQuestRewards");

	UFrontEndRewards_Widget_C_PopulateQuestRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateMissionRewards
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::PopulateMissionRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateMissionRewards");

	UFrontEndRewards_Widget_C_PopulateMissionRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SetHeaderVisibility
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::SetHeaderVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SetHeaderVisibility");

	UFrontEndRewards_Widget_C_SetHeaderVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimMissionRewards
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::ClaimMissionRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimMissionRewards");

	UFrontEndRewards_Widget_C_ClaimMissionRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemInstanceQuantityList
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair> Items                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class URewards_ItemCard_C*> Cards                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UFrontEndRewards_Widget_C::CreateCardsFromItemInstanceQuantityList(TArray<struct FFortItemInstanceQuantityPair>* Items, TArray<class URewards_ItemCard_C*>* Cards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemInstanceQuantityList");

	UFrontEndRewards_Widget_C_CreateCardsFromItemInstanceQuantityList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (Cards != nullptr)
		*Cards = params.Cards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemQuantityList
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FFortItemQuantityPair> Items                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class URewards_ItemCard_C*> Cards                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UFrontEndRewards_Widget_C::CreateCardsFromItemQuantityList(TArray<struct FFortItemQuantityPair>* Items, TArray<class URewards_ItemCard_C*>* Cards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemQuantityList");

	UFrontEndRewards_Widget_C_CreateCardsFromItemQuantityList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (Cards != nullptr)
		*Cards = params.Cards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemList
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>       Items                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<TEnumAsByte<EFortInventoryType>> ItemInventoryTypeList          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class URewards_ItemCard_C*> Cards                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UFrontEndRewards_Widget_C::CreateCardsFromItemList(TArray<class UFortItem*>* Items, TArray<TEnumAsByte<EFortInventoryType>>* ItemInventoryTypeList, TArray<class URewards_ItemCard_C*>* Cards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemList");

	UFrontEndRewards_Widget_C_CreateCardsFromItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (ItemInventoryTypeList != nullptr)
		*ItemInventoryTypeList = params.ItemInventoryTypeList;
	if (Cards != nullptr)
		*Cards = params.Cards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimQuestChoiceReward
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData* NotificationData               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SelectionIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Widget_C::ClaimQuestChoiceReward(class UFortRewardNotificationData* NotificationData, int SelectionIndex, class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimQuestChoiceReward");

	UFrontEndRewards_Widget_C_ClaimQuestChoiceReward_Params params;
	params.NotificationData = NotificationData;
	params.SelectionIndex = SelectionIndex;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleChoiceRewardSelected
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            RewardIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Widget_C::HandleChoiceRewardSelected(int RewardIndex, class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleChoiceRewardSelected");

	UFrontEndRewards_Widget_C_HandleChoiceRewardSelected_Params params;
	params.RewardIndex = RewardIndex;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitInitialRewards
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFrontEndRewards_Definition Definition                     (CPF_Parm)

void UFrontEndRewards_Widget_C::InitInitialRewards(const struct FFrontEndRewards_Definition& Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitInitialRewards");

	UFrontEndRewards_Widget_C_InitInitialRewards_Params params;
	params.Definition = Definition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleExpeditionCompleted
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Succeeded                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UFrontEndRewards_Widget_C::HandleExpeditionCompleted(bool Succeeded, TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleExpeditionCompleted");

	UFrontEndRewards_Widget_C_HandleExpeditionCompleted_Params params;
	params.Succeeded = Succeeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Cleanup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Cleanup");

	UFrontEndRewards_Widget_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ShowCurrentReward
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::ShowCurrentReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ShowCurrentReward");

	UFrontEndRewards_Widget_C_ShowCurrentReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateCurrentRewardWidget
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::PopulateCurrentRewardWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateCurrentRewardWidget");

	UFrontEndRewards_Widget_C_PopulateCurrentRewardWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.AdjustCurrentRewardPadding
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::AdjustCurrentRewardPadding()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.AdjustCurrentRewardPadding");

	UFrontEndRewards_Widget_C_AdjustCurrentRewardPadding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.BindEvents
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::BindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.BindEvents");

	UFrontEndRewards_Widget_C_BindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleShowHeaderFinished
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::HandleShowHeaderFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleShowHeaderFinished");

	UFrontEndRewards_Widget_C_HandleShowHeaderFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopNextReward
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::PopNextReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopNextReward");

	UFrontEndRewards_Widget_C_PopNextReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.DropReward
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData* InReward                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Widget_C::DropReward(class UFortRewardNotificationData* InReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.DropReward");

	UFrontEndRewards_Widget_C_DropReward_Params params;
	params.InReward = InReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleCurrentRewardDisplayed
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::HandleCurrentRewardDisplayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleCurrentRewardDisplayed");

	UFrontEndRewards_Widget_C_HandleCurrentRewardDisplayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationLeft
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::OnNavigationLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationLeft");

	UFrontEndRewards_Widget_C_OnNavigationLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationRight
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::OnNavigationRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationRight");

	UFrontEndRewards_Widget_C_OnNavigationRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationUp
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::OnNavigationUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationUp");

	UFrontEndRewards_Widget_C_OnNavigationUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationDown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::OnNavigationDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationDown");

	UFrontEndRewards_Widget_C_OnNavigationDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionDisabled
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::OnPrimaryActionDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionDisabled");

	UFrontEndRewards_Widget_C_OnPrimaryActionDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionEnabled
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::OnPrimaryActionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionEnabled");

	UFrontEndRewards_Widget_C_OnPrimaryActionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::OnPrimaryActionHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionHidden");

	UFrontEndRewards_Widget_C_OnPrimaryActionHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionTextChanged
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UFrontEndRewards_Widget_C::OnPrimaryActionTextChanged(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionTextChanged");

	UFrontEndRewards_Widget_C_OnPrimaryActionTextChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.BndEvt__ButtonOpen_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Widget_C::BndEvt__ButtonOpen_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.BndEvt__ButtonOpen_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature");

	UFrontEndRewards_Widget_C_BndEvt__ButtonOpen_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Construct");

	UFrontEndRewards_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnActivated");

	UFrontEndRewards_Widget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HideStarburst
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delay                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Widget_C::HideStarburst(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HideStarburst");

	UFrontEndRewards_Widget_C_HideStarburst_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnDeactivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnDeactivated");

	UFrontEndRewards_Widget_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InspectItem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem**              ItemToInspect                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Widget_C::InspectItem(class UFortItem** ItemToInspect)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InspectItem");

	UFrontEndRewards_Widget_C_InspectItem_Params params;
	params.ItemToInspect = ItemToInspect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.IntroSequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::IntroSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.IntroSequence");

	UFrontEndRewards_Widget_C_IntroSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Destruct");

	UFrontEndRewards_Widget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnMatchmakingOrLobbyStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::OnMatchmakingOrLobbyStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnMatchmakingOrLobbyStarted");

	UFrontEndRewards_Widget_C_OnMatchmakingOrLobbyStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ExecuteUbergraph_FrontEndRewards_Widget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Widget_C::ExecuteUbergraph_FrontEndRewards_Widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ExecuteUbergraph_FrontEndRewards_Widget");

	UFrontEndRewards_Widget_C_ExecuteUbergraph_FrontEndRewards_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsClaimError__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C* RewardsWidget                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Widget_C::OnRewardsClaimError__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsClaimError__DelegateSignature");

	UFrontEndRewards_Widget_C_OnRewardsClaimError__DelegateSignature_Params params;
	params.RewardsWidget = RewardsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsClaimed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C* RewardsWidget                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Widget_C::OnRewardsClaimed__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsClaimed__DelegateSignature");

	UFrontEndRewards_Widget_C_OnRewardsClaimed__DelegateSignature_Params params;
	params.RewardsWidget = RewardsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Widget_C::OnComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnComplete__DelegateSignature");

	UFrontEndRewards_Widget_C_OnComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
