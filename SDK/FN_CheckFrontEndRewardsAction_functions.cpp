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

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.CanShowFrontendRewards
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ACheckFrontEndRewardsAction_C::CanShowFrontendRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.CanShowFrontendRewards");

	ACheckFrontEndRewardsAction_C_CanShowFrontendRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Is FrontEndRewards Running
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bRunning                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACheckFrontEndRewardsAction_C::Is_FrontEndRewards_Running(bool* bRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Is FrontEndRewards Running");

	ACheckFrontEndRewardsAction_C_Is_FrontEndRewards_Running_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRunning != nullptr)
		*bRunning = params.bRunning;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateMissionAlertRewards
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckFrontEndRewardsAction_C::PopulateMissionAlertRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateMissionAlertRewards");

	ACheckFrontEndRewardsAction_C_PopulateMissionAlertRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsClaimError
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C* RewardsWidget                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACheckFrontEndRewardsAction_C::HandleRewardsClaimError(class UFrontEndRewards_Widget_C* RewardsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsClaimError");

	ACheckFrontEndRewardsAction_C_HandleRewardsClaimError_Params params;
	params.RewardsWidget = RewardsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Clear
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckFrontEndRewardsAction_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Clear");

	ACheckFrontEndRewardsAction_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsClaimed
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C* RewardsWidget                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACheckFrontEndRewardsAction_C::HandleRewardsClaimed(class UFrontEndRewards_Widget_C* RewardsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsClaimed");

	ACheckFrontEndRewardsAction_C_HandleRewardsClaimed_Params params;
	params.RewardsWidget = RewardsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateCollectionBookRewards
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckFrontEndRewardsAction_C::PopulateCollectionBookRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateCollectionBookRewards");

	ACheckFrontEndRewardsAction_C_PopulateCollectionBookRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateRewards
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckFrontEndRewardsAction_C::PopulateRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateRewards");

	ACheckFrontEndRewardsAction_C_PopulateRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.OpenFrontEndRewards
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckFrontEndRewardsAction_C::OpenFrontEndRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.OpenFrontEndRewards");

	ACheckFrontEndRewardsAction_C_OpenFrontEndRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateUnseenQuests
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckFrontEndRewardsAction_C::PopulateUnseenQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateUnseenQuests");

	ACheckFrontEndRewardsAction_C_PopulateUnseenQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.GetCompletedQuests
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>  Completed_Quests               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ACheckFrontEndRewardsAction_C::GetCompletedQuests(TArray<class UFortQuestItem*>* Completed_Quests)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.GetCompletedQuests");

	ACheckFrontEndRewardsAction_C_GetCompletedQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Completed_Quests != nullptr)
		*Completed_Quests = params.Completed_Quests;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateNewQuests
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckFrontEndRewardsAction_C::PopulateNewQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateNewQuests");

	ACheckFrontEndRewardsAction_C_PopulateNewQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateQuestRewards
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckFrontEndRewardsAction_C::PopulateQuestRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateQuestRewards");

	ACheckFrontEndRewardsAction_C_PopulateQuestRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateMissionRewards
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckFrontEndRewardsAction_C::PopulateMissionRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateMissionRewards");

	ACheckFrontEndRewardsAction_C_PopulateMissionRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.CompleteRewardsAction
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckFrontEndRewardsAction_C::CompleteRewardsAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.CompleteRewardsAction");

	ACheckFrontEndRewardsAction_C_CompleteRewardsAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckFrontEndRewardsAction_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.UserConstructionScript");

	ACheckFrontEndRewardsAction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Execute
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams* Params                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ACheckFrontEndRewardsAction_C::Execute(struct FFortScriptedActionParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Execute");

	ACheckFrontEndRewardsAction_C_Execute_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.ExecuteUbergraph_CheckFrontEndRewardsAction
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACheckFrontEndRewardsAction_C::ExecuteUbergraph_CheckFrontEndRewardsAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.ExecuteUbergraph_CheckFrontEndRewardsAction");

	ACheckFrontEndRewardsAction_C_ExecuteUbergraph_CheckFrontEndRewardsAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
