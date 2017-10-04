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

// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Find First Valid Player Controller
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AFortPlayerController*   FoundPC1                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACheckExpeditionRewardsAction_C::Find_First_Valid_Player_Controller(class AFortPlayerController** FoundPC1)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Find First Valid Player Controller");

	ACheckExpeditionRewardsAction_C_Find_First_Valid_Player_Controller_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundPC1 != nullptr)
		*FoundPC1 = params.FoundPC1;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Is FrontEndRewards Running
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bRunning                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACheckExpeditionRewardsAction_C::Is_FrontEndRewards_Running(bool* bRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Is FrontEndRewards Running");

	ACheckExpeditionRewardsAction_C_Is_FrontEndRewards_Running_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRunning != nullptr)
		*bRunning = params.bRunning;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.HandleRewardsClaimError
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C* RewardsWidget                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACheckExpeditionRewardsAction_C::HandleRewardsClaimError(class UFrontEndRewards_Widget_C* RewardsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.HandleRewardsClaimError");

	ACheckExpeditionRewardsAction_C_HandleRewardsClaimError_Params params;
	params.RewardsWidget = RewardsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Clear
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckExpeditionRewardsAction_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Clear");

	ACheckExpeditionRewardsAction_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.HandleRewardsClaimed
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C* RewardsWidget                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACheckExpeditionRewardsAction_C::HandleRewardsClaimed(class UFrontEndRewards_Widget_C* RewardsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.HandleRewardsClaimed");

	ACheckExpeditionRewardsAction_C_HandleRewardsClaimed_Params params;
	params.RewardsWidget = RewardsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.PopulateExpeditionRewards
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckExpeditionRewardsAction_C::PopulateExpeditionRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.PopulateExpeditionRewards");

	ACheckExpeditionRewardsAction_C_PopulateExpeditionRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.PopulateRewards
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckExpeditionRewardsAction_C::PopulateRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.PopulateRewards");

	ACheckExpeditionRewardsAction_C_PopulateRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.OpenFrontEndRewards
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckExpeditionRewardsAction_C::OpenFrontEndRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.OpenFrontEndRewards");

	ACheckExpeditionRewardsAction_C_OpenFrontEndRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.PopulateCompletedQuests
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckExpeditionRewardsAction_C::PopulateCompletedQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.PopulateCompletedQuests");

	ACheckExpeditionRewardsAction_C_PopulateCompletedQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.GetCompletedQuests
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>  Completed_Quests               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ACheckExpeditionRewardsAction_C::GetCompletedQuests(TArray<class UFortQuestItem*>* Completed_Quests)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.GetCompletedQuests");

	ACheckExpeditionRewardsAction_C_GetCompletedQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Completed_Quests != nullptr)
		*Completed_Quests = params.Completed_Quests;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.CompleteRewardsAction
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckExpeditionRewardsAction_C::CompleteRewardsAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.CompleteRewardsAction");

	ACheckExpeditionRewardsAction_C_CompleteRewardsAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckExpeditionRewardsAction_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.UserConstructionScript");

	ACheckExpeditionRewardsAction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Execute
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams* Params                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ACheckExpeditionRewardsAction_C::Execute(struct FFortScriptedActionParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Execute");

	ACheckExpeditionRewardsAction_C_Execute_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Handle Rewards Running
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckExpeditionRewardsAction_C::Handle_Rewards_Running()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Handle Rewards Running");

	ACheckExpeditionRewardsAction_C_Handle_Rewards_Running_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.ExecuteUbergraph_CheckExpeditionRewardsAction
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACheckExpeditionRewardsAction_C::ExecuteUbergraph_CheckExpeditionRewardsAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.ExecuteUbergraph_CheckExpeditionRewardsAction");

	ACheckExpeditionRewardsAction_C_ExecuteUbergraph_CheckExpeditionRewardsAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
