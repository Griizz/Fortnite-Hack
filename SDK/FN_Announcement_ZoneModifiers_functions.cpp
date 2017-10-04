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

// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.UpdateWidgetData
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement** Announcement                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_ZoneModifiers_C::UpdateWidgetData(class AFortClientAnnouncement** Announcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.UpdateWidgetData");

	UAnnouncement_ZoneModifiers_C_UpdateWidgetData_Params params;
	params.Announcement = Announcement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnDisplayTimerFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAnnouncement_ZoneModifiers_C::OnDisplayTimerFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnDisplayTimerFinished");

	UAnnouncement_ZoneModifiers_C_OnDisplayTimerFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnConversationDelayFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAnnouncement_ZoneModifiers_C::OnConversationDelayFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnConversationDelayFinished");

	UAnnouncement_ZoneModifiers_C_OnConversationDelayFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.WidgetCachingHack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAnnouncement_ZoneModifiers_C::WidgetCachingHack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.WidgetCachingHack");

	UAnnouncement_ZoneModifiers_C_WidgetCachingHack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.ExecuteUbergraph_Announcement_ZoneModifiers
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_ZoneModifiers_C::ExecuteUbergraph_Announcement_ZoneModifiers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.ExecuteUbergraph_Announcement_ZoneModifiers");

	UAnnouncement_ZoneModifiers_C_ExecuteUbergraph_Announcement_ZoneModifiers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
