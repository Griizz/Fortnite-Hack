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

// Function QuestUpdateEntry.QuestUpdateEntry_C.GetNumDisplayedObjectives
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            NumObjectives                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestUpdateEntry_C::GetNumDisplayedObjectives(int* NumObjectives)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.GetNumDisplayedObjectives");

	UQuestUpdateEntry_C_GetNumDisplayedObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumObjectives != nullptr)
		*NumObjectives = params.NumObjectives;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.CreateObjectiveEntryWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo* Objective                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            LastAchievedCount              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestUpdateEntry_C::CreateObjectiveEntryWidget(class UFortQuestObjectiveInfo* Objective, int LastAchievedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.CreateObjectiveEntryWidget");

	UQuestUpdateEntry_C_CreateObjectiveEntryWidget_Params params;
	params.Objective = Objective;
	params.LastAchievedCount = LastAchievedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.OnDisappearAnimationFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestUpdateEntry_C::OnDisappearAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.OnDisappearAnimationFinished");

	UQuestUpdateEntry_C_OnDisappearAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.OnPostUpdatesDelayFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestUpdateEntry_C::OnPostUpdatesDelayFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.OnPostUpdatesDelayFinished");

	UQuestUpdateEntry_C_OnPostUpdatesDelayFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.HaveAllUpdatesFinished
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestUpdateEntry_C::HaveAllUpdatesFinished(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.HaveAllUpdatesFinished");

	UQuestUpdateEntry_C_HaveAllUpdatesFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.IsUpdateActive
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDynamicQuestUpdateInfo Update                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestUpdateEntry_C::IsUpdateActive(struct FDynamicQuestUpdateInfo* Update, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.IsUpdateActive");

	UQuestUpdateEntry_C_IsUpdateActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Update != nullptr)
		*Update = params.Update;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.GetObjectiveWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo* QuestObjective                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UQuestObjectiveEntry_C*  ObjectiveWidget                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestUpdateEntry_C::GetObjectiveWidget(class UFortQuestObjectiveInfo* QuestObjective, class UQuestObjectiveEntry_C** ObjectiveWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.GetObjectiveWidget");

	UQuestUpdateEntry_C_GetObjectiveWidget_Params params;
	params.QuestObjective = QuestObjective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObjectiveWidget != nullptr)
		*ObjectiveWidget = params.ObjectiveWidget;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.HasUpdateStarted
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDynamicQuestUpdateInfo Update                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestUpdateEntry_C::HasUpdateStarted(struct FDynamicQuestUpdateInfo* Update, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.HasUpdateStarted");

	UQuestUpdateEntry_C_HasUpdateStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Update != nullptr)
		*Update = params.Update;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.OnUpdateFinished
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestUpdateEntry_C::OnUpdateFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.OnUpdateFinished");

	UQuestUpdateEntry_C_OnUpdateFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.HasUpdateFinished
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDynamicQuestUpdateInfo Update                         (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestUpdateEntry_C::HasUpdateFinished(struct FDynamicQuestUpdateInfo* Update, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.HasUpdateFinished");

	UQuestUpdateEntry_C_HasUpdateFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Update != nullptr)
		*Update = params.Update;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.CanStartUpdate
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            UpdateIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestUpdateEntry_C::CanStartUpdate(int UpdateIndex, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.CanStartUpdate");

	UQuestUpdateEntry_C_CanStartUpdate_Params params;
	params.UpdateIndex = UpdateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.TryStartUpdates
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestUpdateEntry_C::TryStartUpdates()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.TryStartUpdates");

	UQuestUpdateEntry_C_TryStartUpdates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.OnAppearAnimationFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuestUpdateEntry_C::OnAppearAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.OnAppearAnimationFinished");

	UQuestUpdateEntry_C_OnAppearAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.CanAddUpdate
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDynamicQuestUpdateInfo UpdateToAdd                    (CPF_Parm)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestUpdateEntry_C::CanAddUpdate(const struct FDynamicQuestUpdateInfo& UpdateToAdd, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.CanAddUpdate");

	UQuestUpdateEntry_C_CanAddUpdate_Params params;
	params.UpdateToAdd = UpdateToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.OnReceiveQuestUpdate
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDynamicQuestUpdateInfo QuestUpdateInfo                (CPF_Parm)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestUpdateEntry_C::OnReceiveQuestUpdate(const struct FDynamicQuestUpdateInfo& QuestUpdateInfo, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.OnReceiveQuestUpdate");

	UQuestUpdateEntry_C_OnReceiveQuestUpdate_Params params;
	params.QuestUpdateInfo = QuestUpdateInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestUpdateEntry_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.Tick");

	UQuestUpdateEntry_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuestUpdateEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.Construct");

	UQuestUpdateEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.ExecuteUbergraph_QuestUpdateEntry
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestUpdateEntry_C::ExecuteUbergraph_QuestUpdateEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.ExecuteUbergraph_QuestUpdateEntry");

	UQuestUpdateEntry_C_ExecuteUbergraph_QuestUpdateEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.AllQuestUpdatesFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UQuestUpdateEntry_C*     UpdateWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuestUpdateEntry_C::AllQuestUpdatesFinished__DelegateSignature(class UQuestUpdateEntry_C* UpdateWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.AllQuestUpdatesFinished__DelegateSignature");

	UQuestUpdateEntry_C_AllQuestUpdatesFinished__DelegateSignature_Params params;
	params.UpdateWidget = UpdateWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
