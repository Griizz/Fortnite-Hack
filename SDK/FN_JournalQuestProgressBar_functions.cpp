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

// Function JournalQuestProgressBar.JournalQuestProgressBar_C.SetStylesToDefault
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJournalQuestProgressBar_C::SetStylesToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestProgressBar.JournalQuestProgressBar_C.SetStylesToDefault");

	UJournalQuestProgressBar_C_SetStylesToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestProgressBar.JournalQuestProgressBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UJournalQuestProgressBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestProgressBar.JournalQuestProgressBar_C.Construct");

	UJournalQuestProgressBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestProgressBar.JournalQuestProgressBar_C.HandleNewQuestObjectiveBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UJournalQuestProgressBar_C::HandleNewQuestObjectiveBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestProgressBar.JournalQuestProgressBar_C.HandleNewQuestObjectiveBP");

	UJournalQuestProgressBar_C_HandleNewQuestObjectiveBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestProgressBar.JournalQuestProgressBar_C.Handle Quests Updated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UJournalQuestProgressBar_C::Handle_Quests_Updated()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestProgressBar.JournalQuestProgressBar_C.Handle Quests Updated");

	UJournalQuestProgressBar_C_Handle_Quests_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestProgressBar.JournalQuestProgressBar_C.ExecuteUbergraph_JournalQuestProgressBar
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UJournalQuestProgressBar_C::ExecuteUbergraph_JournalQuestProgressBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestProgressBar.JournalQuestProgressBar_C.ExecuteUbergraph_JournalQuestProgressBar");

	UJournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
