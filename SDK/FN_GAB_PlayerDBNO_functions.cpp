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

// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.InitializeDeathHitDirection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventHitData                   (CPF_Parm)

void UGAB_PlayerDBNO_C::InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.InitializeDeathHitDirection");

	UGAB_PlayerDBNO_C_InitializeDeathHitDirection_Params params;
	params.EventHitData = EventHitData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnCancelled_4B0F8658452931EE3B297A9E70C9C496
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGAB_PlayerDBNO_C::OnCancelled_4B0F8658452931EE3B297A9E70C9C496()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnCancelled_4B0F8658452931EE3B297A9E70C9C496");

	UGAB_PlayerDBNO_C_OnCancelled_4B0F8658452931EE3B297A9E70C9C496_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnInterrupted_4B0F8658452931EE3B297A9E70C9C496
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGAB_PlayerDBNO_C::OnInterrupted_4B0F8658452931EE3B297A9E70C9C496()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnInterrupted_4B0F8658452931EE3B297A9E70C9C496");

	UGAB_PlayerDBNO_C_OnInterrupted_4B0F8658452931EE3B297A9E70C9C496_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnBlendOut_4B0F8658452931EE3B297A9E70C9C496
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGAB_PlayerDBNO_C::OnBlendOut_4B0F8658452931EE3B297A9E70C9C496()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnBlendOut_4B0F8658452931EE3B297A9E70C9C496");

	UGAB_PlayerDBNO_C_OnBlendOut_4B0F8658452931EE3B297A9E70C9C496_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnCompleted_4B0F8658452931EE3B297A9E70C9C496
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGAB_PlayerDBNO_C::OnCompleted_4B0F8658452931EE3B297A9E70C9C496()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnCompleted_4B0F8658452931EE3B297A9E70C9C496");

	UGAB_PlayerDBNO_C_OnCompleted_4B0F8658452931EE3B297A9E70C9C496_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.K2_ActivateAbilityFromEvent
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UGAB_PlayerDBNO_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.K2_ActivateAbilityFromEvent");

	UGAB_PlayerDBNO_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.ExecuteUbergraph_GAB_PlayerDBNO
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGAB_PlayerDBNO_C::ExecuteUbergraph_GAB_PlayerDBNO(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.ExecuteUbergraph_GAB_PlayerDBNO");

	UGAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
