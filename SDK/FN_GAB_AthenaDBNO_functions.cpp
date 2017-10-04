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

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.GetInitialHealAmount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Health                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGAB_AthenaDBNO_C::GetInitialHealAmount(float* Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.GetInitialHealAmount");

	UGAB_AthenaDBNO_C_GetInitialHealAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Health != nullptr)
		*Health = params.Health;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.InitializeDeathHitDirection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventHitData                   (CPF_Parm)

void UGAB_AthenaDBNO_C::InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.InitializeDeathHitDirection");

	UGAB_AthenaDBNO_C_InitializeDeathHitDirection_Params params;
	params.EventHitData = EventHitData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCancelled_F0F6785443BD2E74F5591884CB19F35F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGAB_AthenaDBNO_C::OnCancelled_F0F6785443BD2E74F5591884CB19F35F()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCancelled_F0F6785443BD2E74F5591884CB19F35F");

	UGAB_AthenaDBNO_C_OnCancelled_F0F6785443BD2E74F5591884CB19F35F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnInterrupted_F0F6785443BD2E74F5591884CB19F35F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGAB_AthenaDBNO_C::OnInterrupted_F0F6785443BD2E74F5591884CB19F35F()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnInterrupted_F0F6785443BD2E74F5591884CB19F35F");

	UGAB_AthenaDBNO_C_OnInterrupted_F0F6785443BD2E74F5591884CB19F35F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnBlendOut_F0F6785443BD2E74F5591884CB19F35F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGAB_AthenaDBNO_C::OnBlendOut_F0F6785443BD2E74F5591884CB19F35F()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnBlendOut_F0F6785443BD2E74F5591884CB19F35F");

	UGAB_AthenaDBNO_C_OnBlendOut_F0F6785443BD2E74F5591884CB19F35F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCompleted_F0F6785443BD2E74F5591884CB19F35F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGAB_AthenaDBNO_C::OnCompleted_F0F6785443BD2E74F5591884CB19F35F()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCompleted_F0F6785443BD2E74F5591884CB19F35F");

	UGAB_AthenaDBNO_C_OnCompleted_F0F6785443BD2E74F5591884CB19F35F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGAB_AthenaDBNO_C::OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6");

	UGAB_AthenaDBNO_C_OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGAB_AthenaDBNO_C::OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6");

	UGAB_AthenaDBNO_C_OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_ActivateAbilityFromEvent
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UGAB_AthenaDBNO_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_ActivateAbilityFromEvent");

	UGAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.ExecuteUbergraph_GAB_AthenaDBNO
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGAB_AthenaDBNO_C::ExecuteUbergraph_GAB_AthenaDBNO(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.ExecuteUbergraph_GAB_AthenaDBNO");

	UGAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
