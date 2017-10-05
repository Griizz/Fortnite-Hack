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

// Function JournalQuestDetails.JournalQuestDetails_C.Get Streaming Attached Quest Name
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UJournalQuestDetails_C::Get_Streaming_Attached_Quest_Name()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.Get Streaming Attached Quest Name");

	UJournalQuestDetails_C_Get_Streaming_Attached_Quest_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JournalQuestDetails.JournalQuestDetails_C.Is Streaming Quest
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bStreamingQuest                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJournalQuestDetails_C::Is_Streaming_Quest(bool* bStreamingQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.Is Streaming Quest");

	UJournalQuestDetails_C_Is_Streaming_Quest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bStreamingQuest != nullptr)
		*bStreamingQuest = params.bStreamingQuest;
}


// Function JournalQuestDetails.JournalQuestDetails_C.Get Quest Item Def
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UFortQuestItemDefinition* AsFort_Quest_Item_Definition   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJournalQuestDetails_C::Get_Quest_Item_Def(class UFortQuestItemDefinition** AsFort_Quest_Item_Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.Get Quest Item Def");

	UJournalQuestDetails_C_Get_Quest_Item_Def_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsFort_Quest_Item_Definition != nullptr)
		*AsFort_Quest_Item_Definition = params.AsFort_Quest_Item_Definition;
}


// Function JournalQuestDetails.JournalQuestDetails_C.Set Quest Display Name
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_Parm)

void UJournalQuestDetails_C::Set_Quest_Display_Name(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.Set Quest Display Name");

	UJournalQuestDetails_C_Set_Quest_Display_Name_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.IsQuestAudioPlaying
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsQuestAudioPlaying            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJournalQuestDetails_C::IsQuestAudioPlaying(bool* IsQuestAudioPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.IsQuestAudioPlaying");

	UJournalQuestDetails_C_IsQuestAudioPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsQuestAudioPlaying != nullptr)
		*IsQuestAudioPlaying = params.IsQuestAudioPlaying;
}


// Function JournalQuestDetails.JournalQuestDetails_C.StartConversation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortConversation*       Conversation                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortQuestItem*          QuestItem                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsOutro_                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJournalQuestDetails_C::StartConversation(class UFortConversation* Conversation, class UFortQuestItem* QuestItem, bool IsOutro_)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.StartConversation");

	UJournalQuestDetails_C_StartConversation_Params params;
	params.Conversation = Conversation;
	params.QuestItem = QuestItem;
	params.IsOutro_ = IsOutro_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.StopConversation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJournalQuestDetails_C::StopConversation()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.StopConversation");

	UJournalQuestDetails_C_StopConversation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.AbandonQuest
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           questAbandoned_                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJournalQuestDetails_C::AbandonQuest(bool* questAbandoned_)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.AbandonQuest");

	UJournalQuestDetails_C_AbandonQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (questAbandoned_ != nullptr)
		*questAbandoned_ = params.questAbandoned_;
}


// Function JournalQuestDetails.JournalQuestDetails_C.UpdatePanelInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJournalQuestDetails_C::UpdatePanelInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.UpdatePanelInfo");

	UJournalQuestDetails_C_UpdatePanelInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.UpdatePlayButtonState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJournalQuestDetails_C::UpdatePlayButtonState()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.UpdatePlayButtonState");

	UJournalQuestDetails_C_UpdatePlayButtonState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.UpdateButtonStates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJournalQuestDetails_C::UpdateButtonStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.UpdateButtonStates");

	UJournalQuestDetails_C_UpdateButtonStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.HandleOnEndSpokenDialog
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJournalQuestDetails_C::HandleOnEndSpokenDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.HandleOnEndSpokenDialog");

	UJournalQuestDetails_C_HandleOnEndSpokenDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.HandleOnBeginSpokenDialog
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Title                          (CPF_Parm)
// struct FText                   Subtitle                       (CPF_Parm)
// EFortAnnouncementDisplayPreference DisplayPreference              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJournalQuestDetails_C::HandleOnBeginSpokenDialog(class UTexture2D* Image, const struct FText& Title, const struct FText& Subtitle, EFortAnnouncementDisplayPreference DisplayPreference)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.HandleOnBeginSpokenDialog");

	UJournalQuestDetails_C_HandleOnBeginSpokenDialog_Params params;
	params.Image = Image;
	params.Title = Title;
	params.Subtitle = Subtitle;
	params.DisplayPreference = DisplayPreference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.Setup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJournalQuestDetails_C::Setup()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.Setup");

	UJournalQuestDetails_C_Setup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UJournalQuestDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.Construct");

	UJournalQuestDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.HandleCurrentQuestChangedBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UJournalQuestDetails_C::HandleCurrentQuestChangedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.HandleCurrentQuestChangedBP");

	UJournalQuestDetails_C_HandleCurrentQuestChangedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.ExecuteUbergraph_JournalQuestDetails
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJournalQuestDetails_C::ExecuteUbergraph_JournalQuestDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.ExecuteUbergraph_JournalQuestDetails");

	UJournalQuestDetails_C_ExecuteUbergraph_JournalQuestDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.OnSpokenDialogEnded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJournalQuestDetails_C::OnSpokenDialogEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.OnSpokenDialogEnded__DelegateSignature");

	UJournalQuestDetails_C_OnSpokenDialogEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
