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

// Function QuestUpdatesLog.QuestUpdatesLog_C.CanDisplayAnotherObjective
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestUpdatesLog_C::CanDisplayAnotherObjective(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.CanDisplayAnotherObjective");

	UQuestUpdatesLog_C_CanDisplayAnotherObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function QuestUpdatesLog.QuestUpdatesLog_C.GetTotalDisplayedObjectives
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            NumObjectives                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestUpdatesLog_C::GetTotalDisplayedObjectives(int* NumObjectives)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.GetTotalDisplayedObjectives");

	UQuestUpdatesLog_C_GetTotalDisplayedObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumObjectives != nullptr)
		*NumObjectives = params.NumObjectives;
}


// Function QuestUpdatesLog.QuestUpdatesLog_C.CreateAnnouncementUpdate
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDynamicQuestUpdateInfo UpdateInfo                     (CPF_Parm)

void UQuestUpdatesLog_C::CreateAnnouncementUpdate(const struct FDynamicQuestUpdateInfo& UpdateInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.CreateAnnouncementUpdate");

	UQuestUpdatesLog_C_CreateAnnouncementUpdate_Params params;
	params.UpdateInfo = UpdateInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdatesLog.QuestUpdatesLog_C.HandleQuestUpdateWidgetFinished
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UQuestUpdateEntry_C*     UpdateWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestUpdatesLog_C::HandleQuestUpdateWidgetFinished(class UQuestUpdateEntry_C* UpdateWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.HandleQuestUpdateWidgetFinished");

	UQuestUpdatesLog_C_HandleQuestUpdateWidgetFinished_Params params;
	params.UpdateWidget = UpdateWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdatesLog.QuestUpdatesLog_C.GetAvailableQuestUpdateWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDynamicQuestUpdateInfo UpdateInfo                     (CPF_Parm)
// class UQuestUpdateEntry_C*     AvailableWIdget                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestUpdatesLog_C::GetAvailableQuestUpdateWidget(const struct FDynamicQuestUpdateInfo& UpdateInfo, class UQuestUpdateEntry_C** AvailableWIdget)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.GetAvailableQuestUpdateWidget");

	UQuestUpdatesLog_C_GetAvailableQuestUpdateWidget_Params params;
	params.UpdateInfo = UpdateInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableWIdget != nullptr)
		*AvailableWIdget = params.AvailableWIdget;
}


// Function QuestUpdatesLog.QuestUpdatesLog_C.TryDisplayDynamicQuestStatusUpdate
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestUpdatesLog_C::TryDisplayDynamicQuestStatusUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.TryDisplayDynamicQuestStatusUpdate");

	UQuestUpdatesLog_C_TryDisplayDynamicQuestStatusUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdatesLog.QuestUpdatesLog_C.CreateQuestUpdateWIdgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestUpdatesLog_C::CreateQuestUpdateWIdgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.CreateQuestUpdateWIdgets");

	UQuestUpdatesLog_C_CreateQuestUpdateWIdgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdatesLog.QuestUpdatesLog_C.HandleDisplayDynamicQuestUpdate
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo* QuestObjective                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDisplayStatusUpdate           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDisplayAnnouncementUpdate     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestUpdatesLog_C::HandleDisplayDynamicQuestUpdate(class UFortQuestObjectiveInfo* QuestObjective, bool bDisplayStatusUpdate, bool bDisplayAnnouncementUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.HandleDisplayDynamicQuestUpdate");

	UQuestUpdatesLog_C_HandleDisplayDynamicQuestUpdate_Params params;
	params.QuestObjective = QuestObjective;
	params.bDisplayStatusUpdate = bDisplayStatusUpdate;
	params.bDisplayAnnouncementUpdate = bDisplayAnnouncementUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdatesLog.QuestUpdatesLog_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuestUpdatesLog_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.Construct");

	UQuestUpdatesLog_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdatesLog.QuestUpdatesLog_C.ExecuteUbergraph_QuestUpdatesLog
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestUpdatesLog_C::ExecuteUbergraph_QuestUpdatesLog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.ExecuteUbergraph_QuestUpdatesLog");

	UQuestUpdatesLog_C_ExecuteUbergraph_QuestUpdatesLog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
