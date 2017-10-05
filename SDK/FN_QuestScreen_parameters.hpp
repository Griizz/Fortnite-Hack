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

// Function QuestScreen.QuestScreen_C.ShouldShowPlayQuest
struct UQuestScreen_C_ShouldShowPlayQuest_Params
{
	class UFortQuestItem*                              Quest;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShouldShowPlay;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.Toggle Disable Claim Reward Button
struct UQuestScreen_C_Toggle_Disable_Claim_Reward_Button_Params
{
	bool                                               ToDisable;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.HandleInventory
struct UQuestScreen_C_HandleInventory_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.Update Category Buttons Bang State
struct UQuestScreen_C_Update_Category_Buttons_Bang_State_Params
{
};

// Function QuestScreen.QuestScreen_C.Update Pending Seen Quest Items
struct UQuestScreen_C_Update_Pending_Seen_Quest_Items_Params
{
};

// Function QuestScreen.QuestScreen_C.RefreshQuestCategories
struct UQuestScreen_C_RefreshQuestCategories_Params
{
};

// Function QuestScreen.QuestScreen_C.HandleOnEndSpokenDialog
struct UQuestScreen_C_HandleOnEndSpokenDialog_Params
{
};

// Function QuestScreen.QuestScreen_C.StopConversation
struct UQuestScreen_C_StopConversation_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.ReplayOutroAudio
struct UQuestScreen_C_ReplayOutroAudio_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.HandlePendingNavigationOp
struct UQuestScreen_C_HandlePendingNavigationOp_Params
{
};

// Function QuestScreen.QuestScreen_C.SelectQuest
struct UQuestScreen_C_SelectQuest_Params
{
	class UFortQuestItem*                              Quest;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.HandleQuestOp
struct UQuestScreen_C_HandleQuestOp_Params
{
	class UFortQuestItem*                              Quest;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.PinQuest
struct UQuestScreen_C_PinQuest_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.UpdateInputHandlers
struct UQuestScreen_C_UpdateInputHandlers_Params
{
	class UFortQuestItem*                              Active_Quest;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.ClaimReward
struct UQuestScreen_C_ClaimReward_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.SelectInitialQuest
struct UQuestScreen_C_SelectInitialQuest_Params
{
};

// Function QuestScreen.QuestScreen_C.AbandonQuest
struct UQuestScreen_C_AbandonQuest_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.ReplayIntroAudio
struct UQuestScreen_C_ReplayIntroAudio_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.SetupInputHandlers
struct UQuestScreen_C_SetupInputHandlers_Params
{
};

// Function QuestScreen.QuestScreen_C.populateDetailWidgets
struct UQuestScreen_C_populateDetailWidgets_Params
{
};

// Function QuestScreen.QuestScreen_C.PlayQuest
struct UQuestScreen_C_PlayQuest_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.HandleBack
struct UQuestScreen_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.OnGetChildrenForCategory
struct UQuestScreen_C_OnGetChildrenForCategory_Params
{
	class UObject*                                     Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UObject*>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function QuestScreen.QuestScreen_C.BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_23_OnListViewItemWidgetCreated__DelegateSignature
struct UQuestScreen_C_BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_23_OnListViewItemWidgetCreated__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_150_OnTabButtonCreated__DelegateSignature
struct UQuestScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_150_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_252_OnTabSelected__DelegateSignature
struct UQuestScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_252_OnTabSelected__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.Refresh Tree View
struct UQuestScreen_C_Refresh_Tree_View_Params
{
};

// Function QuestScreen.QuestScreen_C.OnActivated
struct UQuestScreen_C_OnActivated_Params
{
};

// Function QuestScreen.QuestScreen_C.OnDeactivated
struct UQuestScreen_C_OnDeactivated_Params
{
};

// Function QuestScreen.QuestScreen_C.BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_200_OnListViewItemWidgetDestroyed__DelegateSignature
struct UQuestScreen_C_BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_200_OnListViewItemWidgetDestroyed__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.PlayerPartyStateChanged
struct UQuestScreen_C_PlayerPartyStateChanged_Params
{
	struct FFortTeamMemberInfo                         PlayerInfo;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function QuestScreen.QuestScreen_C.OnClientPartyStateChanged
struct UQuestScreen_C_OnClientPartyStateChanged_Params
{
	EFortPartyState                                    PartyState;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.OnMatchamkingComplete
struct UQuestScreen_C_OnMatchamkingComplete_Params
{
	EMatchmakingCompleteResult                         Result;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.OnMatchmakingStarted
struct UQuestScreen_C_OnMatchmakingStarted_Params
{
};

// Function QuestScreen.QuestScreen_C.OnPartyLeft
struct UQuestScreen_C_OnPartyLeft_Params
{
};

// Function QuestScreen.QuestScreen_C.Construct
struct UQuestScreen_C_Construct_Params
{
};

// Function QuestScreen.QuestScreen_C.OnItemSelected
struct UQuestScreen_C_OnItemSelected_Params
{
	class UObject*                                     Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsSelected;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.ExecuteUbergraph_QuestScreen
struct UQuestScreen_C_ExecuteUbergraph_QuestScreen_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestScreen.QuestScreen_C.CloseJournal__DelegateSignature
struct UQuestScreen_C_CloseJournal__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
