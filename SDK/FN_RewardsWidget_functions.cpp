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

// Function RewardsWidget.RewardsWidget_C.OnHandleAction
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FEventReply             Result                         (CPF_Parm, CPF_OutParm)
// bool                           bPassThrough                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewardsWidget_C::OnHandleAction(struct FEventReply* Result, bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.OnHandleAction");

	URewardsWidget_C_OnHandleAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function RewardsWidget.RewardsWidget_C.On_ClosedChest_MouseButtonDown_2
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply URewardsWidget_C::On_ClosedChest_MouseButtonDown_2(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.On_ClosedChest_MouseButtonDown_2");

	URewardsWidget_C_On_ClosedChest_MouseButtonDown_2_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RewardsWidget.RewardsWidget_C.GetClosedChestImage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              ChestImage                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewardsWidget_C::GetClosedChestImage(class UTexture2D** ChestImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.GetClosedChestImage");

	URewardsWidget_C_GetClosedChestImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChestImage != nullptr)
		*ChestImage = params.ChestImage;
}


// Function RewardsWidget.RewardsWidget_C.TerminateQuestConverstation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewardsWidget_C::TerminateQuestConverstation()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.TerminateQuestConverstation");

	URewardsWidget_C_TerminateQuestConverstation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsWidget.RewardsWidget_C.Init
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewardsWidget_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.Init");

	URewardsWidget_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsWidget.RewardsWidget_C.SetupQuestRewardsChoice
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewardsWidget_C::SetupQuestRewardsChoice(class UFortQuestItem* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.SetupQuestRewardsChoice");

	URewardsWidget_C_SetupQuestRewardsChoice_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsWidget.RewardsWidget_C.CreateRewardChoice
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            RewardIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsRewardSelection              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewardsWidget_C::CreateRewardChoice(int RewardIndex, bool IsRewardSelection, TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.CreateRewardChoice");

	URewardsWidget_C_CreateRewardChoice_Params params;
	params.RewardIndex = RewardIndex;
	params.IsRewardSelection = IsRewardSelection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function RewardsWidget.RewardsWidget_C.SelectRewards
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            RewardIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewardsWidget_C::SelectRewards(int RewardIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.SelectRewards");

	URewardsWidget_C_SelectRewards_Params params;
	params.RewardIndex = RewardIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsWidget.RewardsWidget_C.PlayQuestConversation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortConversation*       Conversation                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewardsWidget_C::PlayQuestConversation(class UFortConversation* Conversation)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.PlayQuestConversation");

	URewardsWidget_C_PlayQuestConversation_Params params;
	params.Conversation = Conversation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsWidget.RewardsWidget_C.OnConversationEnded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewardsWidget_C::OnConversationEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.OnConversationEnded");

	URewardsWidget_C_OnConversationEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsWidget.RewardsWidget_C.GetChestImage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              MissionIcon                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewardsWidget_C::GetChestImage(class UTexture2D** MissionIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.GetChestImage");

	URewardsWidget_C_GetChestImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MissionIcon != nullptr)
		*MissionIcon = params.MissionIcon;
}


// Function RewardsWidget.RewardsWidget_C.SelectText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   InText                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   Default                        (CPF_Parm)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText URewardsWidget_C::SelectText(const struct FText& InText, const struct FText& Default)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.SelectText");

	URewardsWidget_C_SelectText_Params params;
	params.InText = InText;
	params.Default = Default;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RewardsWidget.RewardsWidget_C.PopulateFromMissionWithRewards
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortLastMissionInfo    LastMissionInfo                (CPF_Parm)
// TArray<struct FFortItemInstanceQuantityPair> MissionRewards                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void URewardsWidget_C::PopulateFromMissionWithRewards(const struct FFortLastMissionInfo& LastMissionInfo, TArray<struct FFortItemInstanceQuantityPair>* MissionRewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.PopulateFromMissionWithRewards");

	URewardsWidget_C_PopulateFromMissionWithRewards_Params params;
	params.LastMissionInfo = LastMissionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MissionRewards != nullptr)
		*MissionRewards = params.MissionRewards;
}


// Function RewardsWidget.RewardsWidget_C.PopulateMissionUI
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortLastMissionInfo    Mission                        (CPF_Parm)

void URewardsWidget_C::PopulateMissionUI(const struct FFortLastMissionInfo& Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.PopulateMissionUI");

	URewardsWidget_C_PopulateMissionUI_Params params;
	params.Mission = Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsWidget.RewardsWidget_C.SetupUI
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ERewardType>       RewardType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewardsWidget_C::SetupUI(TEnumAsByte<ERewardType> RewardType)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.SetupUI");

	URewardsWidget_C_SetupUI_Params params;
	params.RewardType = RewardType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsWidget.RewardsWidget_C.PopulateFromQuestWithRewards
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void URewardsWidget_C::PopulateFromQuestWithRewards(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.PopulateFromQuestWithRewards");

	URewardsWidget_C_PopulateFromQuestWithRewards_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function RewardsWidget.RewardsWidget_C.PopulateQuestUI
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           RewardSelect                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewardsWidget_C::PopulateQuestUI(class UFortQuestItem* Quest, bool RewardSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.PopulateQuestUI");

	URewardsWidget_C_PopulateQuestUI_Params params;
	params.Quest = Quest;
	params.RewardSelect = RewardSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsWidget.RewardsWidget_C.PopulateFromQuest
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewardsWidget_C::PopulateFromQuest(class UFortQuestItem* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.PopulateFromQuest");

	URewardsWidget_C_PopulateFromQuest_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsWidget.RewardsWidget_C.BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_377_FortBaseButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewardsWidget_C::BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_377_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_377_FortBaseButtonClicked__DelegateSignature");

	URewardsWidget_C_BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_377_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsWidget.RewardsWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URewardsWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.Destruct");

	URewardsWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsWidget.RewardsWidget_C.BndEvt__ButtonIconText_C_0_K2Node_ComponentBoundEvent_70_FortBaseButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewardsWidget_C::BndEvt__ButtonIconText_C_0_K2Node_ComponentBoundEvent_70_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.BndEvt__ButtonIconText_C_0_K2Node_ComponentBoundEvent_70_FortBaseButtonClicked__DelegateSignature");

	URewardsWidget_C_BndEvt__ButtonIconText_C_0_K2Node_ComponentBoundEvent_70_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsWidget.RewardsWidget_C.SetQuest
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItem**         Quest                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewardsWidget_C::SetQuest(class UFortQuestItem** Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.SetQuest");

	URewardsWidget_C_SetQuest_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsWidget.RewardsWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URewardsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.Construct");

	URewardsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsWidget.RewardsWidget_C.HandleClientEvent_ConversationFinished
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 EventFocus                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void URewardsWidget_C::HandleClientEvent_ConversationFinished(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.HandleClientEvent_ConversationFinished");

	URewardsWidget_C_HandleClientEvent_ConversationFinished_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsWidget.RewardsWidget_C.BndEvt__OpenChestButton_K2Node_ComponentBoundEvent_234_FortBaseButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewardsWidget_C::BndEvt__OpenChestButton_K2Node_ComponentBoundEvent_234_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.BndEvt__OpenChestButton_K2Node_ComponentBoundEvent_234_FortBaseButtonClicked__DelegateSignature");

	URewardsWidget_C_BndEvt__OpenChestButton_K2Node_ComponentBoundEvent_234_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsWidget.RewardsWidget_C.HandleImageClickedEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewardsWidget_C::HandleImageClickedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.HandleImageClickedEvent");

	URewardsWidget_C_HandleImageClickedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsWidget.RewardsWidget_C.HandleSkipOpenEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URewardsWidget_C::HandleSkipOpenEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.HandleSkipOpenEvent");

	URewardsWidget_C_HandleSkipOpenEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsWidget.RewardsWidget_C.ExecuteUbergraph_RewardsWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URewardsWidget_C::ExecuteUbergraph_RewardsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsWidget.RewardsWidget_C.ExecuteUbergraph_RewardsWidget");

	URewardsWidget_C_ExecuteUbergraph_RewardsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
