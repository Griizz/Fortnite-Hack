#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionRewardsClaimFailed
struct UFrontEndRewards_Widget_C_HandleOnMissionRewardsClaimFailed_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.DebugPrintChoiceReward
struct UFrontEndRewards_Widget_C_DebugPrintChoiceReward_Params
{
	class UObject*                                     Object;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SafePop
struct UFrontEndRewards_Widget_C_SafePop_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.TriggerUpdateWhenDone
struct UFrontEndRewards_Widget_C_TriggerUpdateWhenDone_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionAlertRewardsClaimed
struct UFrontEndRewards_Widget_C_HandleOnMissionAlertRewardsClaimed_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimMissionAlertRewards
struct UFrontEndRewards_Widget_C_ClaimMissionAlertRewards_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateMissionAlertRewards
struct UFrontEndRewards_Widget_C_PopulateMissionAlertRewards_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitRewardsQueue
struct UFrontEndRewards_Widget_C_InitRewardsQueue_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitializeRewardsData
struct UFrontEndRewards_Widget_C_InitializeRewardsData_Params
{
	struct FFrontEndRewards_Definition                 FrontEndRewards_Definition;                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitAdditionalRewards
struct UFrontEndRewards_Widget_C_InitAdditionalRewards_Params
{
	struct FFrontEndRewards_Definition                 Definition;                                               // (CPF_Parm)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleBorderShown
struct UFrontEndRewards_Widget_C_HandleBorderShown_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SkipPopAnimation
struct UFrontEndRewards_Widget_C_SkipPopAnimation_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SkipOpenAnimation
struct UFrontEndRewards_Widget_C_SkipOpenAnimation_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateVO
struct UFrontEndRewards_Widget_C_PopulateVO_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnNoRewardsToClaim
struct UFrontEndRewards_Widget_C_HandleOnNoRewardsToClaim_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.UnbindEvents
struct UFrontEndRewards_Widget_C_UnbindEvents_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ResetQueueState
struct UFrontEndRewards_Widget_C_ResetQueueState_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.TransitionIn
struct UFrontEndRewards_Widget_C_TransitionIn_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OpenReward
struct UFrontEndRewards_Widget_C_OpenReward_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateChoiceRewardsWidgetFromCardList
struct UFrontEndRewards_Widget_C_PopulateChoiceRewardsWidgetFromCardList_Params
{
	TArray<class URewards_ItemCard_C*>                 Cards;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleCurrentRewardTransitionOutComplete
struct UFrontEndRewards_Widget_C_HandleCurrentRewardTransitionOutComplete_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOpenAnimationFinished
struct UFrontEndRewards_Widget_C_HandleOpenAnimationFinished_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitSubWidgets
struct UFrontEndRewards_Widget_C_InitSubWidgets_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionRewardsClaimed
struct UFrontEndRewards_Widget_C_HandleOnMissionRewardsClaimed_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateListRewardsWidgetFromCardList
struct UFrontEndRewards_Widget_C_PopulateListRewardsWidgetFromCardList_Params
{
	TArray<class URewards_ItemCard_C*>                 Cards;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnCollectionBookRewardsClaimed
struct UFrontEndRewards_Widget_C_HandleOnCollectionBookRewardsClaimed_Params
{
	struct FFortCollectionBookRewards                  RewardRequested;                                          // (CPF_Parm)
	bool                                               Success;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFortItemInstanceQuantityPair>       ActualRewards;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnQuestRewardsClaimed
struct UFrontEndRewards_Widget_C_HandleOnQuestRewardsClaimed_Params
{
	class UFortQuestItem*                              Quest;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimCollectionBookChoiceReward
struct UFrontEndRewards_Widget_C_ClaimCollectionBookChoiceReward_Params
{
	class UFortRewardNotificationData*                 NotificationData;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SelectionIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimCollectionBookRewards
struct UFrontEndRewards_Widget_C_ClaimCollectionBookRewards_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimQuestListReward
struct UFrontEndRewards_Widget_C_ClaimQuestListReward_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateCollectionBookRewards
struct UFrontEndRewards_Widget_C_PopulateCollectionBookRewards_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateExpedition
struct UFrontEndRewards_Widget_C_PopulateExpedition_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateNewQuest
struct UFrontEndRewards_Widget_C_PopulateNewQuest_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateQuestRewards
struct UFrontEndRewards_Widget_C_PopulateQuestRewards_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateMissionRewards
struct UFrontEndRewards_Widget_C_PopulateMissionRewards_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SetHeaderVisibility
struct UFrontEndRewards_Widget_C_SetHeaderVisibility_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimMissionRewards
struct UFrontEndRewards_Widget_C_ClaimMissionRewards_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemInstanceQuantityList
struct UFrontEndRewards_Widget_C_CreateCardsFromItemInstanceQuantityList_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       Items;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<class URewards_ItemCard_C*>                 Cards;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemQuantityList
struct UFrontEndRewards_Widget_C_CreateCardsFromItemQuantityList_Params
{
	TArray<struct FFortItemQuantityPair>               Items;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<class URewards_ItemCard_C*>                 Cards;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemList
struct UFrontEndRewards_Widget_C_CreateCardsFromItemList_Params
{
	TArray<class UFortItem*>                           Items;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<TEnumAsByte<EFortInventoryType>>            ItemInventoryTypeList;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<class URewards_ItemCard_C*>                 Cards;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimQuestChoiceReward
struct UFrontEndRewards_Widget_C_ClaimQuestChoiceReward_Params
{
	class UFortRewardNotificationData*                 NotificationData;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SelectionIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleChoiceRewardSelected
struct UFrontEndRewards_Widget_C_HandleChoiceRewardSelected_Params
{
	int                                                RewardIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitInitialRewards
struct UFrontEndRewards_Widget_C_InitInitialRewards_Params
{
	struct FFrontEndRewards_Definition                 Definition;                                               // (CPF_Parm)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleExpeditionCompleted
struct UFrontEndRewards_Widget_C_HandleExpeditionCompleted_Params
{
	bool                                               Succeeded;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Cleanup
struct UFrontEndRewards_Widget_C_Cleanup_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ShowCurrentReward
struct UFrontEndRewards_Widget_C_ShowCurrentReward_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateCurrentRewardWidget
struct UFrontEndRewards_Widget_C_PopulateCurrentRewardWidget_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.AdjustCurrentRewardPadding
struct UFrontEndRewards_Widget_C_AdjustCurrentRewardPadding_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.BindEvents
struct UFrontEndRewards_Widget_C_BindEvents_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleShowHeaderFinished
struct UFrontEndRewards_Widget_C_HandleShowHeaderFinished_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopNextReward
struct UFrontEndRewards_Widget_C_PopNextReward_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.DropReward
struct UFrontEndRewards_Widget_C_DropReward_Params
{
	class UFortRewardNotificationData*                 InReward;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleCurrentRewardDisplayed
struct UFrontEndRewards_Widget_C_HandleCurrentRewardDisplayed_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationLeft
struct UFrontEndRewards_Widget_C_OnNavigationLeft_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationRight
struct UFrontEndRewards_Widget_C_OnNavigationRight_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationUp
struct UFrontEndRewards_Widget_C_OnNavigationUp_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationDown
struct UFrontEndRewards_Widget_C_OnNavigationDown_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionDisabled
struct UFrontEndRewards_Widget_C_OnPrimaryActionDisabled_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionEnabled
struct UFrontEndRewards_Widget_C_OnPrimaryActionEnabled_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionHidden
struct UFrontEndRewards_Widget_C_OnPrimaryActionHidden_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionTextChanged
struct UFrontEndRewards_Widget_C_OnPrimaryActionTextChanged_Params
{
	struct FText*                                      Text;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.BndEvt__ButtonOpen_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature
struct UFrontEndRewards_Widget_C_BndEvt__ButtonOpen_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Construct
struct UFrontEndRewards_Widget_C_Construct_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnActivated
struct UFrontEndRewards_Widget_C_OnActivated_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HideStarburst
struct UFrontEndRewards_Widget_C_HideStarburst_Params
{
	float                                              Delay;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnDeactivated
struct UFrontEndRewards_Widget_C_OnDeactivated_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InspectItem
struct UFrontEndRewards_Widget_C_InspectItem_Params
{
	class UFortItem**                                  ItemToInspect;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.IntroSequence
struct UFrontEndRewards_Widget_C_IntroSequence_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Destruct
struct UFrontEndRewards_Widget_C_Destruct_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnMatchmakingOrLobbyStarted
struct UFrontEndRewards_Widget_C_OnMatchmakingOrLobbyStarted_Params
{
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ExecuteUbergraph_FrontEndRewards_Widget
struct UFrontEndRewards_Widget_C_ExecuteUbergraph_FrontEndRewards_Widget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsClaimError__DelegateSignature
struct UFrontEndRewards_Widget_C_OnRewardsClaimError__DelegateSignature_Params
{
	class UFrontEndRewards_Widget_C*                   RewardsWidget;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsClaimed__DelegateSignature
struct UFrontEndRewards_Widget_C_OnRewardsClaimed__DelegateSignature_Params
{
	class UFrontEndRewards_Widget_C*                   RewardsWidget;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnComplete__DelegateSignature
struct UFrontEndRewards_Widget_C_OnComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
