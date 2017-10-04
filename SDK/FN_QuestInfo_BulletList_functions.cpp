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

// Function QuestInfo_BulletList.QuestInfo_BulletList_C.AddEntryWithBrush
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   EntryText                      (CPF_Parm)
// struct FSlateBrush             EntryIconBrush                 (CPF_Parm)

void UQuestInfo_BulletList_C::AddEntryWithBrush(const struct FText& EntryText, const struct FSlateBrush& EntryIconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_BulletList.QuestInfo_BulletList_C.AddEntryWithBrush");

	UQuestInfo_BulletList_C_AddEntryWithBrush_Params params;
	params.EntryText = EntryText;
	params.EntryIconBrush = EntryIconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestInfo_BulletList.QuestInfo_BulletList_C.InitDesignView
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestInfo_BulletList_C::InitDesignView()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_BulletList.QuestInfo_BulletList_C.InitDesignView");

	UQuestInfo_BulletList_C_InitDesignView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestInfo_BulletList.QuestInfo_BulletList_C.AddEntry
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   EntryText                      (CPF_Parm)

void UQuestInfo_BulletList_C::AddEntry(const struct FText& EntryText)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_BulletList.QuestInfo_BulletList_C.AddEntry");

	UQuestInfo_BulletList_C_AddEntry_Params params;
	params.EntryText = EntryText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestInfo_BulletList.QuestInfo_BulletList_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestInfo_BulletList_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_BulletList.QuestInfo_BulletList_C.PreConstruct");

	UQuestInfo_BulletList_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestInfo_BulletList.QuestInfo_BulletList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuestInfo_BulletList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_BulletList.QuestInfo_BulletList_C.Construct");

	UQuestInfo_BulletList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestInfo_BulletList.QuestInfo_BulletList_C.ExecuteUbergraph_QuestInfo_BulletList
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestInfo_BulletList_C::ExecuteUbergraph_QuestInfo_BulletList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_BulletList.QuestInfo_BulletList_C.ExecuteUbergraph_QuestInfo_BulletList");

	UQuestInfo_BulletList_C_ExecuteUbergraph_QuestInfo_BulletList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
