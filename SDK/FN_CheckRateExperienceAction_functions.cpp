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

// Function CheckRateExperienceAction.CheckRateExperienceAction_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACheckRateExperienceAction_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckRateExperienceAction.CheckRateExperienceAction_C.UserConstructionScript");

	ACheckRateExperienceAction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckRateExperienceAction.CheckRateExperienceAction_C.HandleClientEvent_FinishedModalQueue
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 EventFocus                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ACheckRateExperienceAction_C::HandleClientEvent_FinishedModalQueue(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckRateExperienceAction.CheckRateExperienceAction_C.HandleClientEvent_FinishedModalQueue");

	ACheckRateExperienceAction_C_HandleClientEvent_FinishedModalQueue_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckRateExperienceAction.CheckRateExperienceAction_C.Execute
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams* Params                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ACheckRateExperienceAction_C::Execute(struct FFortScriptedActionParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckRateExperienceAction.CheckRateExperienceAction_C.Execute");

	ACheckRateExperienceAction_C_Execute_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckRateExperienceAction.CheckRateExperienceAction_C.ExecuteUbergraph_CheckRateExperienceAction
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACheckRateExperienceAction_C::ExecuteUbergraph_CheckRateExperienceAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckRateExperienceAction.CheckRateExperienceAction_C.ExecuteUbergraph_CheckRateExperienceAction");

	ACheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
