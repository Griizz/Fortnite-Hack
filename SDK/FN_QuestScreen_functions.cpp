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

// Function QuestScreen.QuestScreen_C.Toggle Disable Claim Reward Button
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ToDisable                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestScreen_C::Toggle_Disable_Claim_Reward_Button(bool ToDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.Toggle Disable Claim Reward Button");

	UQuestScreen_C_Toggle_Disable_Claim_Reward_Button_Params params;
	params.ToDisable = ToDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.HandleInventory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestScreen_C::HandleInventory(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.HandleInventory");

	UQuestScreen_C_HandleInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function QuestScreen.QuestScreen_C.Update Category Buttons Bang State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestScreen_C::Update_Category_Buttons_Bang_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.Update Category Buttons Bang State");

	UQuestScreen_C_Update_Category_Buttons_Bang_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.Update Pending Seen Quest Items
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestScreen_C::Update_Pending_Seen_Quest_Items()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.Update Pending Seen Quest Items");

	UQuestScreen_C_Update_Pending_Seen_Quest_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.RefreshQuestCategories
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestScreen_C::RefreshQuestCategories()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.RefreshQuestCategories");

	UQuestScreen_C_RefreshQuestCategories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.HandleOnEndSpokenDialog
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestScreen_C::HandleOnEndSpokenDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.HandleOnEndSpokenDialog");

	UQuestScreen_C_HandleOnEndSpokenDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.StopConversation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestScreen_C::StopConversation(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.StopConversation");

	UQuestScreen_C_StopConversation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function QuestScreen.QuestScreen_C.ReplayOutroAudio
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestScreen_C::ReplayOutroAudio(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.ReplayOutroAudio");

	UQuestScreen_C_ReplayOutroAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function QuestScreen.QuestScreen_C.HandlePendingNavigationOp
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestScreen_C::HandlePendingNavigationOp()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.HandlePendingNavigationOp");

	UQuestScreen_C_HandlePendingNavigationOp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.SelectQuest
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestScreen_C::SelectQuest(class UFortQuestItem* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.SelectQuest");

	UQuestScreen_C_SelectQuest_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.HandleQuestOp
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestScreen_C::HandleQuestOp(class UFortQuestItem* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.HandleQuestOp");

	UQuestScreen_C_HandleQuestOp_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.PinQuest
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestScreen_C::PinQuest(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.PinQuest");

	UQuestScreen_C_PinQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function QuestScreen.QuestScreen_C.UpdateInputHandlers
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Active_Quest                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestScreen_C::UpdateInputHandlers(class UFortQuestItem* Active_Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.UpdateInputHandlers");

	UQuestScreen_C_UpdateInputHandlers_Params params;
	params.Active_Quest = Active_Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.ClaimReward
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestScreen_C::ClaimReward(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.ClaimReward");

	UQuestScreen_C_ClaimReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function QuestScreen.QuestScreen_C.SelectInitialQuest
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestScreen_C::SelectInitialQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.SelectInitialQuest");

	UQuestScreen_C_SelectInitialQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.AbandonQuest
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestScreen_C::AbandonQuest(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.AbandonQuest");

	UQuestScreen_C_AbandonQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function QuestScreen.QuestScreen_C.ReplayIntroAudio
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestScreen_C::ReplayIntroAudio(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.ReplayIntroAudio");

	UQuestScreen_C_ReplayIntroAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function QuestScreen.QuestScreen_C.SetupInputHandlers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestScreen_C::SetupInputHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.SetupInputHandlers");

	UQuestScreen_C_SetupInputHandlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.populateDetailWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestScreen_C::populateDetailWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.populateDetailWidgets");

	UQuestScreen_C_populateDetailWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.PlayQuest
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestScreen_C::PlayQuest(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.PlayQuest");

	UQuestScreen_C_PlayQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function QuestScreen.QuestScreen_C.HandleBack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestScreen_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.HandleBack");

	UQuestScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function QuestScreen.QuestScreen_C.OnGetChildrenForCategory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UObject*>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class UObject*> UQuestScreen_C::OnGetChildrenForCategory(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.OnGetChildrenForCategory");

	UQuestScreen_C_OnGetChildrenForCategory_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuestScreen.QuestScreen_C.BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_23_OnListViewItemWidgetCreated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestScreen_C::BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_23_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_23_OnListViewItemWidgetCreated__DelegateSignature");

	UQuestScreen_C_BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_23_OnListViewItemWidgetCreated__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_150_OnTabButtonCreated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonButton*           TabButton                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestScreen_C::BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_150_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_150_OnTabButtonCreated__DelegateSignature");

	UQuestScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_150_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_252_OnTabSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestScreen_C::BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_252_OnTabSelected__DelegateSignature(const struct FName& TabId)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_252_OnTabSelected__DelegateSignature");

	UQuestScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_252_OnTabSelected__DelegateSignature_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.Refresh Tree View
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestScreen_C::Refresh_Tree_View()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.Refresh Tree View");

	UQuestScreen_C_Refresh_Tree_View_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UQuestScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.OnActivated");

	UQuestScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.OnDeactivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UQuestScreen_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.OnDeactivated");

	UQuestScreen_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_200_OnListViewItemWidgetDestroyed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestScreen_C::BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_200_OnListViewItemWidgetDestroyed__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_200_OnListViewItemWidgetDestroyed__DelegateSignature");

	UQuestScreen_C_BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_200_OnListViewItemWidgetDestroyed__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.PlayerPartyStateChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     PlayerInfo                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UQuestScreen_C::PlayerPartyStateChanged(const struct FFortTeamMemberInfo& PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.PlayerPartyStateChanged");

	UQuestScreen_C_PlayerPartyStateChanged_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.OnClientPartyStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestScreen_C::OnClientPartyStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.OnClientPartyStateChanged");

	UQuestScreen_C_OnClientPartyStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.OnMatchamkingComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestScreen_C::OnMatchamkingComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.OnMatchamkingComplete");

	UQuestScreen_C_OnMatchamkingComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.OnMatchmakingStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestScreen_C::OnMatchmakingStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.OnMatchmakingStarted");

	UQuestScreen_C_OnMatchmakingStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.OnPartyLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestScreen_C::OnPartyLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.OnPartyLeft");

	UQuestScreen_C_OnPartyLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuestScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.Construct");

	UQuestScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.OnItemSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsSelected                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestScreen_C::OnItemSelected(class UObject* Item, bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.OnItemSelected");

	UQuestScreen_C_OnItemSelected_Params params;
	params.Item = Item;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.ExecuteUbergraph_QuestScreen
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestScreen_C::ExecuteUbergraph_QuestScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.ExecuteUbergraph_QuestScreen");

	UQuestScreen_C_ExecuteUbergraph_QuestScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestScreen.QuestScreen_C.CloseJournal__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestScreen_C::CloseJournal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestScreen.QuestScreen_C.CloseJournal__DelegateSignature");

	UQuestScreen_C_CloseJournal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
