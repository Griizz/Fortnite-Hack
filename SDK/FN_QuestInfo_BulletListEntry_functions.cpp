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

// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.ShowBorder
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestInfo_BulletListEntry_C::ShowBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.ShowBorder");

	UQuestInfo_BulletListEntry_C_ShowBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.CalcBrushSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               InImageSize                    (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UQuestInfo_BulletListEntry_C::CalcBrushSize(const struct FVector2D& InImageSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.CalcBrushSize");

	UQuestInfo_BulletListEntry_C_CalcBrushSize_Params params;
	params.InImageSize = InImageSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.InitBrush
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   EntryText                      (CPF_Parm)
// struct FSlateBrush             EntryIconBrush                 (CPF_Parm)

void UQuestInfo_BulletListEntry_C::InitBrush(const struct FText& EntryText, const struct FSlateBrush& EntryIconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.InitBrush");

	UQuestInfo_BulletListEntry_C_InitBrush_Params params;
	params.EntryText = EntryText;
	params.EntryIconBrush = EntryIconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.InitBullet
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   EntryText                      (CPF_Parm)

void UQuestInfo_BulletListEntry_C::InitBullet(const struct FText& EntryText)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.InitBullet");

	UQuestInfo_BulletListEntry_C_InitBullet_Params params;
	params.EntryText = EntryText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
