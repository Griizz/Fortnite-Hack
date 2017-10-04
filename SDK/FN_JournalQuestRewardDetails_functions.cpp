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

// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePanelInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJournalQuestRewardDetails_C::UpdatePanelInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePanelInfo");

	UJournalQuestRewardDetails_C_UpdatePanelInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePlayButtonState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJournalQuestRewardDetails_C::UpdatePlayButtonState()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePlayButtonState");

	UJournalQuestRewardDetails_C_UpdatePlayButtonState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdateButtonStates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJournalQuestRewardDetails_C::UpdateButtonStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdateButtonStates");

	UJournalQuestRewardDetails_C_UpdateButtonStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleOnEndSpokenDialog
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJournalQuestRewardDetails_C::HandleOnEndSpokenDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleOnEndSpokenDialog");

	UJournalQuestRewardDetails_C_HandleOnEndSpokenDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleOnBeginSpokenDialog
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Title                          (CPF_Parm)
// struct FText                   Subtitle                       (CPF_Parm)

void UJournalQuestRewardDetails_C::HandleOnBeginSpokenDialog(class UTexture2D* Image, const struct FText& Title, const struct FText& Subtitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleOnBeginSpokenDialog");

	UJournalQuestRewardDetails_C_HandleOnBeginSpokenDialog_Params params;
	params.Image = Image;
	params.Title = Title;
	params.Subtitle = Subtitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Setup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJournalQuestRewardDetails_C::Setup()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Setup");

	UJournalQuestRewardDetails_C_Setup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UJournalQuestRewardDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Construct");

	UJournalQuestRewardDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleCurrentQuestChangedBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UJournalQuestRewardDetails_C::HandleCurrentQuestChangedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleCurrentQuestChangedBP");

	UJournalQuestRewardDetails_C_HandleCurrentQuestChangedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.ExecuteUbergraph_JournalQuestRewardDetails
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJournalQuestRewardDetails_C::ExecuteUbergraph_JournalQuestRewardDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.ExecuteUbergraph_JournalQuestRewardDetails");

	UJournalQuestRewardDetails_C_ExecuteUbergraph_JournalQuestRewardDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
