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

// Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadEnd
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTalkingHeadWidget_C::HandleTalkingHeadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadEnd");

	UTalkingHeadWidget_C_HandleTalkingHeadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadBegin
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Title                          (CPF_Parm)
// struct FText                   Subtitle                       (CPF_Parm)
// EFortAnnouncementDisplayPreference DisplayPreference              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTalkingHeadWidget_C::HandleTalkingHeadBegin(class UTexture2D* Image, const struct FText& Title, const struct FText& Subtitle, EFortAnnouncementDisplayPreference DisplayPreference)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadBegin");

	UTalkingHeadWidget_C_HandleTalkingHeadBegin_Params params;
	params.Image = Image;
	params.Title = Title;
	params.Subtitle = Subtitle;
	params.DisplayPreference = DisplayPreference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadSubtitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Subtitle                       (CPF_Parm)

void UTalkingHeadWidget_C::SetTalkingHeadSubtitle(const struct FText& Subtitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadSubtitle");

	UTalkingHeadWidget_C_SetTalkingHeadSubtitle_Params params;
	params.Subtitle = Subtitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_Parm)

void UTalkingHeadWidget_C::SetTalkingHeadName(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadName");

	UTalkingHeadWidget_C_SetTalkingHeadName_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadImage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTalkingHeadWidget_C::SetTalkingHeadImage(class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadImage");

	UTalkingHeadWidget_C_SetTalkingHeadImage_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkingHeadWidget.TalkingHeadWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTalkingHeadWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkingHeadWidget.TalkingHeadWidget_C.Construct");

	UTalkingHeadWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkingHeadWidget.TalkingHeadWidget_C.ExecuteUbergraph_TalkingHeadWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTalkingHeadWidget_C::ExecuteUbergraph_TalkingHeadWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkingHeadWidget.TalkingHeadWidget_C.ExecuteUbergraph_TalkingHeadWidget");

	UTalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
