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

// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.HandleTransitionInComplete
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Expedition_C::HandleTransitionInComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.HandleTransitionInComplete");

	UFrontEndRewards_Expedition_C_HandleTransitionInComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ContinueSuccess
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Expedition_C::ContinueSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ContinueSuccess");

	UFrontEndRewards_Expedition_C_ContinueSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ContinueFail
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Expedition_C::ContinueFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ContinueFail");

	UFrontEndRewards_Expedition_C_ContinueFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.Check
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Expedition_C::Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.Check");

	UFrontEndRewards_Expedition_C_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetSuccessChanceFromExpedition
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Expedition_C::SetSuccessChanceFromExpedition()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetSuccessChanceFromExpedition");

	UFrontEndRewards_Expedition_C_SetSuccessChanceFromExpedition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetTitleFromExpedition
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Expedition_C::SetTitleFromExpedition()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetTitleFromExpedition");

	UFrontEndRewards_Expedition_C_SetTitleFromExpedition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetBrushFromExpedition
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Expedition_C::SetBrushFromExpedition()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetBrushFromExpedition");

	UFrontEndRewards_Expedition_C_SetBrushFromExpedition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.PopulateFromExpedition
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Expedition_C::PopulateFromExpedition(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.PopulateFromExpedition");

	UFrontEndRewards_Expedition_C_PopulateFromExpedition_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.TransitionInBegin
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UFrontEndRewards_Expedition_C::TransitionInBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.TransitionInBegin");

	UFrontEndRewards_Expedition_C_TransitionInBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.TransitionOutBegin
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UFrontEndRewards_Expedition_C::TransitionOutBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.TransitionOutBegin");

	UFrontEndRewards_Expedition_C_TransitionOutBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnCollectExpeditionCompleted
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem**    Expedition                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool*                          bSucceeded                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FFortItemInstanceQuantityPair>* Rewards                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UFrontEndRewards_Expedition_C::OnCollectExpeditionCompleted(class UFortExpeditionItem** Expedition, bool* bSucceeded, TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnCollectExpeditionCompleted");

	UFrontEndRewards_Expedition_C_OnCollectExpeditionCompleted_Params params;
	params.Expedition = Expedition;
	params.bSucceeded = bSucceeded;
	params.Rewards = Rewards;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnPrimaryAction
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFrontEndRewards_Expedition_C::OnPrimaryAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnPrimaryAction");

	UFrontEndRewards_Expedition_C_OnPrimaryAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFrontEndRewards_Expedition_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.Construct");

	UFrontEndRewards_Expedition_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ExecuteUbergraph_FrontEndRewards_Expedition
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFrontEndRewards_Expedition_C::ExecuteUbergraph_FrontEndRewards_Expedition(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ExecuteUbergraph_FrontEndRewards_Expedition");

	UFrontEndRewards_Expedition_C_ExecuteUbergraph_FrontEndRewards_Expedition_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnExpeditionCompleted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Succeeded                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UFrontEndRewards_Expedition_C::OnExpeditionCompleted__DelegateSignature(bool Succeeded, TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnExpeditionCompleted__DelegateSignature");

	UFrontEndRewards_Expedition_C_OnExpeditionCompleted__DelegateSignature_Params params;
	params.Succeeded = Succeeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
