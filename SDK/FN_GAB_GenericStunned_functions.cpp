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

// Function GAB_GenericStunned.GAB_GenericStunned_C.K2_OnEndAbility
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UGAB_GenericStunned_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericStunned.GAB_GenericStunned_C.K2_OnEndAbility");

	UGAB_GenericStunned_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericStunned.GAB_GenericStunned_C.K2_ActivateAbilityFromEvent
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UGAB_GenericStunned_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericStunned.GAB_GenericStunned_C.K2_ActivateAbilityFromEvent");

	UGAB_GenericStunned_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericStunned.GAB_GenericStunned_C.ExecuteUbergraph_GAB_GenericStunned
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGAB_GenericStunned_C::ExecuteUbergraph_GAB_GenericStunned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericStunned.GAB_GenericStunned_C.ExecuteUbergraph_GAB_GenericStunned");

	UGAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
