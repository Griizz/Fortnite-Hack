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

// Function QuestTreeEntry.QuestTreeEntry_C.Get Streaming Attached Quest Name
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ModifiedName                   (CPF_Parm, CPF_OutParm)

void UQuestTreeEntry_C::Get_Streaming_Attached_Quest_Name(struct FText* ModifiedName)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.Get Streaming Attached Quest Name");

	UQuestTreeEntry_C_Get_Streaming_Attached_Quest_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifiedName != nullptr)
		*ModifiedName = params.ModifiedName;
}


// Function QuestTreeEntry.QuestTreeEntry_C.Is Streaming Quest
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bStreamingQuest                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestTreeEntry_C::Is_Streaming_Quest(bool* bStreamingQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.Is Streaming Quest");

	UQuestTreeEntry_C_Is_Streaming_Quest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bStreamingQuest != nullptr)
		*bStreamingQuest = params.bStreamingQuest;
}


// Function QuestTreeEntry.QuestTreeEntry_C.Set Quest Category Display Name
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestTreeEntry_C::Set_Quest_Category_Display_Name()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.Set Quest Category Display Name");

	UQuestTreeEntry_C_Set_Quest_Category_Display_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTreeEntry.QuestTreeEntry_C.Set Quest Display Name
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestTreeEntry_C::Set_Quest_Display_Name()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.Set Quest Display Name");

	UQuestTreeEntry_C_Set_Quest_Display_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTreeEntry.QuestTreeEntry_C.Get Quest Item Def
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UFortQuestItemDefinition* AsFort_Quest_Item_Definition   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestTreeEntry_C::Get_Quest_Item_Def(class UFortQuestItemDefinition** AsFort_Quest_Item_Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.Get Quest Item Def");

	UQuestTreeEntry_C_Get_Quest_Item_Def_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsFort_Quest_Item_Definition != nullptr)
		*AsFort_Quest_Item_Definition = params.AsFort_Quest_Item_Definition;
}


// Function QuestTreeEntry.QuestTreeEntry_C.Quest Category Have Unseen Quests
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           HasUnseen                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestTreeEntry_C::Quest_Category_Have_Unseen_Quests(bool* HasUnseen)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.Quest Category Have Unseen Quests");

	UQuestTreeEntry_C_Quest_Category_Have_Unseen_Quests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasUnseen != nullptr)
		*HasUnseen = params.HasUnseen;
}


// Function QuestTreeEntry.QuestTreeEntry_C.Update Quest Category Bang State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestTreeEntry_C::Update_Quest_Category_Bang_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.Update Quest Category Bang State");

	UQuestTreeEntry_C_Update_Quest_Category_Bang_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTreeEntry.QuestTreeEntry_C.Update Quest Item Seen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestTreeEntry_C::Update_Quest_Item_Seen()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.Update Quest Item Seen");

	UQuestTreeEntry_C_Update_Quest_Item_Seen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTreeEntry.QuestTreeEntry_C.Update Quest Item Bang State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestTreeEntry_C::Update_Quest_Item_Bang_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.Update Quest Item Bang State");

	UQuestTreeEntry_C_Update_Quest_Item_Bang_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTreeEntry.QuestTreeEntry_C.SetCompletionPercentage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestTreeEntry_C::SetCompletionPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.SetCompletionPercentage");

	UQuestTreeEntry_C_SetCompletionPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTreeEntry.QuestTreeEntry_C.Unpin
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestTreeEntry_C::Unpin()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.Unpin");

	UQuestTreeEntry_C_Unpin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTreeEntry.QuestTreeEntry_C.SetPinnedState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestTreeEntry_C::SetPinnedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.SetPinnedState");

	UQuestTreeEntry_C_SetPinnedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTreeEntry.QuestTreeEntry_C.SetupAsCategory
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestCategory**     Category                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestTreeEntry_C::SetupAsCategory(class UFortQuestCategory** Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.SetupAsCategory");

	UQuestTreeEntry_C_SetupAsCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTreeEntry.QuestTreeEntry_C.SetupAsQuest
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItem**         Category                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestTreeEntry_C::SetupAsQuest(class UFortQuestItem** Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.SetupAsQuest");

	UQuestTreeEntry_C_SetupAsQuest_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTreeEntry.QuestTreeEntry_C.ExpansionChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bExpanded                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestTreeEntry_C::ExpansionChanged(bool* bExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.ExpansionChanged");

	UQuestTreeEntry_C_ExpansionChanged_Params params;
	params.bExpanded = bExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTreeEntry.QuestTreeEntry_C.OnSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UQuestTreeEntry_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.OnSelected");

	UQuestTreeEntry_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTreeEntry.QuestTreeEntry_C.OnQuestsUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UQuestTreeEntry_C::OnQuestsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.OnQuestsUpdated");

	UQuestTreeEntry_C_OnQuestsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTreeEntry.QuestTreeEntry_C.OnHovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UQuestTreeEntry_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.OnHovered");

	UQuestTreeEntry_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTreeEntry.QuestTreeEntry_C.OnQuestSeen_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestTreeEntry_C::OnQuestSeen_Event_1(class UFortQuestItem* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.OnQuestSeen_Event_1");

	UQuestTreeEntry_C_OnQuestSeen_Event_1_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTreeEntry.QuestTreeEntry_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuestTreeEntry_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.Destruct");

	UQuestTreeEntry_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTreeEntry.QuestTreeEntry_C.ExecuteUbergraph_QuestTreeEntry
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestTreeEntry_C::ExecuteUbergraph_QuestTreeEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTreeEntry.QuestTreeEntry_C.ExecuteUbergraph_QuestTreeEntry");

	UQuestTreeEntry_C_ExecuteUbergraph_QuestTreeEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
