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

// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.UpdateWidgetData
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement** Announcement                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_QuestUpdate_C::UpdateWidgetData(class AFortClientAnnouncement** Announcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.UpdateWidgetData");

	UAnnouncement_QuestUpdate_C_UpdateWidgetData_Params params;
	params.Announcement = Announcement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.AllUpdatesFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UQuestUpdateEntry_C*     UpdateWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_QuestUpdate_C::AllUpdatesFinished(class UQuestUpdateEntry_C* UpdateWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.AllUpdatesFinished");

	UAnnouncement_QuestUpdate_C_AllUpdatesFinished_Params params;
	params.UpdateWidget = UpdateWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.ExecuteUbergraph_Announcement_QuestUpdate
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_QuestUpdate_C::ExecuteUbergraph_Announcement_QuestUpdate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.ExecuteUbergraph_Announcement_QuestUpdate");

	UAnnouncement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
