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

// Function Announcement_Tutorial.Announcement_Tutorial_C.ContinueTutorial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAnnouncement_Tutorial_C::ContinueTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.ContinueTutorial");

	UAnnouncement_Tutorial_C_ContinueTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.CheckContinueTutorial
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortClientAnnouncementData_Tutorial TutorialData                   (CPF_Parm)

void UAnnouncement_Tutorial_C::CheckContinueTutorial(const struct FFortClientAnnouncementData_Tutorial& TutorialData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.CheckContinueTutorial");

	UAnnouncement_Tutorial_C_CheckContinueTutorial_Params params;
	params.TutorialData = TutorialData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.GetLightboxVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FFortClientAnnouncementData_Tutorial FortClientAnnouncementData_Tutorial (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAnnouncement_Tutorial_C::GetLightboxVisibility(const struct FFortClientAnnouncementData_Tutorial& FortClientAnnouncementData_Tutorial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.GetLightboxVisibility");

	UAnnouncement_Tutorial_C_GetLightboxVisibility_Params params;
	params.FortClientAnnouncementData_Tutorial = FortClientAnnouncementData_Tutorial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.RefreshTextLines
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAnnouncement_Tutorial_C::RefreshTextLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.RefreshTextLines");

	UAnnouncement_Tutorial_C_RefreshTextLines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.UpdateTutorialData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortClientAnnouncementData_Tutorial TutorialData                   (CPF_Parm)

void UAnnouncement_Tutorial_C::UpdateTutorialData(const struct FFortClientAnnouncementData_Tutorial& TutorialData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.UpdateTutorialData");

	UAnnouncement_Tutorial_C_UpdateTutorialData_Params params;
	params.TutorialData = TutorialData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.AddTextLine
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_Parm)
// bool                           Transparent                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_Tutorial_C::AddTextLine(const struct FText& Text, bool Transparent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.AddTextLine");

	UAnnouncement_Tutorial_C_AddTextLine_Params params;
	params.Text = Text;
	params.Transparent = Transparent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.HandleUpdateTutorial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortClientAnnouncementData_Tutorial TutorialData                   (CPF_Parm)
// bool                           bShow                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_Tutorial_C::HandleUpdateTutorial(const struct FFortClientAnnouncementData_Tutorial& TutorialData, bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.HandleUpdateTutorial");

	UAnnouncement_Tutorial_C_HandleUpdateTutorial_Params params;
	params.TutorialData = TutorialData;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAnnouncement_Tutorial_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.Construct");

	UAnnouncement_Tutorial_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.HandleClientEvent_OnboardingShowUI
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 EventFocus                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAnnouncement_Tutorial_C::HandleClientEvent_OnboardingShowUI(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.HandleClientEvent_OnboardingShowUI");

	UAnnouncement_Tutorial_C_HandleClientEvent_OnboardingShowUI_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.HandleClientEvent_OnboardingHideUI
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 EventFocus                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAnnouncement_Tutorial_C::HandleClientEvent_OnboardingHideUI(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.HandleClientEvent_OnboardingHideUI");

	UAnnouncement_Tutorial_C_HandleClientEvent_OnboardingHideUI_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.ResetTutorialAnnoucementWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAnnouncement_Tutorial_C::ResetTutorialAnnoucementWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.ResetTutorialAnnoucementWidget");

	UAnnouncement_Tutorial_C_ResetTutorialAnnoucementWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.ExecuteUbergraph_Announcement_Tutorial
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_Tutorial_C::ExecuteUbergraph_Announcement_Tutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.ExecuteUbergraph_Announcement_Tutorial");

	UAnnouncement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
