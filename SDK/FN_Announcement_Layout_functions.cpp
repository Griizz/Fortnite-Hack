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

// Function Announcement_Layout.Announcement_Layout_C.CreateAnnouncementWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  NewWidgetClass                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ForceCreateUI                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortAnnouncementWidget* NewWidget                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_Layout_C::CreateAnnouncementWidget(class UClass* NewWidgetClass, bool ForceCreateUI, class UFortAnnouncementWidget** NewWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Layout.Announcement_Layout_C.CreateAnnouncementWidget");

	UAnnouncement_Layout_C_CreateAnnouncementWidget_Params params;
	params.NewWidgetClass = NewWidgetClass;
	params.ForceCreateUI = ForceCreateUI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewWidget != nullptr)
		*NewWidget = params.NewWidget;
}


// Function Announcement_Layout.Announcement_Layout_C.SwapAnnouncementUIContent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement* NewAnnouncement                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_Layout_C::SwapAnnouncementUIContent(class AFortClientAnnouncement* NewAnnouncement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Layout.Announcement_Layout_C.SwapAnnouncementUIContent");

	UAnnouncement_Layout_C_SwapAnnouncementUIContent_Params params;
	params.NewAnnouncement = NewAnnouncement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Layout.Announcement_Layout_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAnnouncement_Layout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Layout.Announcement_Layout_C.Construct");

	UAnnouncement_Layout_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Layout.Announcement_Layout_C.OnStartNewAnnouncement
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement* NewAnnouncement                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_Layout_C::OnStartNewAnnouncement(class AFortClientAnnouncement* NewAnnouncement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Layout.Announcement_Layout_C.OnStartNewAnnouncement");

	UAnnouncement_Layout_C_OnStartNewAnnouncement_Params params;
	params.NewAnnouncement = NewAnnouncement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Layout.Announcement_Layout_C.ExecuteUbergraph_Announcement_Layout
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_Layout_C::ExecuteUbergraph_Announcement_Layout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Layout.Announcement_Layout_C.ExecuteUbergraph_Announcement_Layout");

	UAnnouncement_Layout_C_ExecuteUbergraph_Announcement_Layout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
