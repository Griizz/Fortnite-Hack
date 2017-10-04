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

// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.UpdateVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestTalkingHeadWidget_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.UpdateVisibility");

	UQuestTalkingHeadWidget_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleShouldBlockSubtitlePortraitChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldBlockSubtitlePortrait    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestTalkingHeadWidget_C::HandleShouldBlockSubtitlePortraitChanged(bool ShouldBlockSubtitlePortrait)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleShouldBlockSubtitlePortraitChanged");

	UQuestTalkingHeadWidget_C_HandleShouldBlockSubtitlePortraitChanged_Params params;
	params.ShouldBlockSubtitlePortrait = ShouldBlockSubtitlePortrait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleTalkingHeadEnd
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestTalkingHeadWidget_C::HandleTalkingHeadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleTalkingHeadEnd");

	UQuestTalkingHeadWidget_C_HandleTalkingHeadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleTalkingHeadBegin
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Title                          (CPF_Parm)
// struct FText                   Subtitle                       (CPF_Parm)

void UQuestTalkingHeadWidget_C::HandleTalkingHeadBegin(class UTexture2D* Image, const struct FText& Title, const struct FText& Subtitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleTalkingHeadBegin");

	UQuestTalkingHeadWidget_C_HandleTalkingHeadBegin_Params params;
	params.Image = Image;
	params.Title = Title;
	params.Subtitle = Subtitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadSubtitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Subtitle                       (CPF_Parm)

void UQuestTalkingHeadWidget_C::SetTalkingHeadSubtitle(const struct FText& Subtitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadSubtitle");

	UQuestTalkingHeadWidget_C_SetTalkingHeadSubtitle_Params params;
	params.Subtitle = Subtitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_Parm)

void UQuestTalkingHeadWidget_C::SetTalkingHeadName(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadName");

	UQuestTalkingHeadWidget_C_SetTalkingHeadName_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadImage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestTalkingHeadWidget_C::SetTalkingHeadImage(class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadImage");

	UQuestTalkingHeadWidget_C_SetTalkingHeadImage_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuestTalkingHeadWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.Construct");

	UQuestTalkingHeadWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.ExecuteUbergraph_QuestTalkingHeadWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestTalkingHeadWidget_C::ExecuteUbergraph_QuestTalkingHeadWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.ExecuteUbergraph_QuestTalkingHeadWidget");

	UQuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
