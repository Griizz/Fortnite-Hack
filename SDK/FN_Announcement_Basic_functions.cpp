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

// Function Announcement_Basic.Announcement_Basic_C.UpdateWidgetData
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement** Announcement                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_Basic_C::UpdateWidgetData(class AFortClientAnnouncement** Announcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Basic.Announcement_Basic_C.UpdateWidgetData");

	UAnnouncement_Basic_C_UpdateWidgetData_Params params;
	params.Announcement = Announcement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Basic.Announcement_Basic_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAnnouncement_Basic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Basic.Announcement_Basic_C.Construct");

	UAnnouncement_Basic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Basic.Announcement_Basic_C.AnnouncementStopped
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement** Announcement                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_Basic_C::AnnouncementStopped(class AFortClientAnnouncement** Announcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Basic.Announcement_Basic_C.AnnouncementStopped");

	UAnnouncement_Basic_C_AnnouncementStopped_Params params;
	params.Announcement = Announcement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Basic.Announcement_Basic_C.ExecuteUbergraph_Announcement_Basic
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_Basic_C::ExecuteUbergraph_Announcement_Basic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Basic.Announcement_Basic_C.ExecuteUbergraph_Announcement_Basic");

	UAnnouncement_Basic_C_ExecuteUbergraph_Announcement_Basic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
