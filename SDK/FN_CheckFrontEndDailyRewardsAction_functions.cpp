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

// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.IsFrontEndRewards Running
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsRunning                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACheckFrontEndDailyRewardsAction_C::IsFrontEndRewards_Running(bool* IsRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.IsFrontEndRewards Running");

	ACheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsRunning != nullptr)
		*IsRunning = params.IsRunning;
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.Daily Rewards Open
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bRunning                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACheckFrontEndDailyRewardsAction_C::Daily_Rewards_Open(bool* bRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.Daily Rewards Open");

	ACheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRunning != nullptr)
		*bRunning = params.bRunning;
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.CompleteDailyRewardAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckFrontEndDailyRewardsAction_C::CompleteDailyRewardAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.CompleteDailyRewardAction");

	ACheckFrontEndDailyRewardsAction_C_CompleteDailyRewardAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.ShowDailyRewards
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckFrontEndDailyRewardsAction_C::ShowDailyRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.ShowDailyRewards");

	ACheckFrontEndDailyRewardsAction_C_ShowDailyRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckFrontEndDailyRewardsAction_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.UserConstructionScript");

	ACheckFrontEndDailyRewardsAction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.Execute
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams* Params                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ACheckFrontEndDailyRewardsAction_C::Execute(struct FFortScriptedActionParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.Execute");

	ACheckFrontEndDailyRewardsAction_C_Execute_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.HandleClientEvent_FinishedModalQueue
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 EventFocus                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ACheckFrontEndDailyRewardsAction_C::HandleClientEvent_FinishedModalQueue(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.HandleClientEvent_FinishedModalQueue");

	ACheckFrontEndDailyRewardsAction_C_HandleClientEvent_FinishedModalQueue_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.ExecuteUbergraph_CheckFrontEndDailyRewardsAction
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACheckFrontEndDailyRewardsAction_C::ExecuteUbergraph_CheckFrontEndDailyRewardsAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.ExecuteUbergraph_CheckFrontEndDailyRewardsAction");

	ACheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
