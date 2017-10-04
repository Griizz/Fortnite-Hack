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

// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.GetHeightEstimate
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UQuestTrackerSubEntry_C::GetHeightEstimate()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.GetHeightEstimate");

	UQuestTrackerSubEntry_C_GetHeightEstimate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.HandleRemoveFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestTrackerSubEntry_C::HandleRemoveFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.HandleRemoveFinished");

	UQuestTrackerSubEntry_C_HandleRemoveFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.HideIfEmpty
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestTrackerSubEntry_C::HideIfEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.HideIfEmpty");

	UQuestTrackerSubEntry_C_HideIfEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.UpdateObjectiveText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestTrackerSubEntry_C::UpdateObjectiveText()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.UpdateObjectiveText");

	UQuestTrackerSubEntry_C_UpdateObjectiveText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuestTrackerSubEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.Construct");

	UQuestTrackerSubEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.OnQuestsUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UQuestTrackerSubEntry_C::OnQuestsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.OnQuestsUpdated");

	UQuestTrackerSubEntry_C_OnQuestsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.OnPlayObjectiveCompletedAnimation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UQuestTrackerSubEntry_C::OnPlayObjectiveCompletedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.OnPlayObjectiveCompletedAnimation");

	UQuestTrackerSubEntry_C_OnPlayObjectiveCompletedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.OnCompletionFlashFInished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestTrackerSubEntry_C::OnCompletionFlashFInished()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.OnCompletionFlashFInished");

	UQuestTrackerSubEntry_C_OnCompletionFlashFInished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.PostCompletionDelay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestTrackerSubEntry_C::PostCompletionDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.PostCompletionDelay");

	UQuestTrackerSubEntry_C_PostCompletionDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.OnSetup
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UQuestTrackerSubEntry_C::OnSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.OnSetup");

	UQuestTrackerSubEntry_C_OnSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.ExecuteUbergraph_QuestTrackerSubEntry
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestTrackerSubEntry_C::ExecuteUbergraph_QuestTrackerSubEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.ExecuteUbergraph_QuestTrackerSubEntry");

	UQuestTrackerSubEntry_C_ExecuteUbergraph_QuestTrackerSubEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
