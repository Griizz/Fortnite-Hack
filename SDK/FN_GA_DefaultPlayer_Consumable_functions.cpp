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

// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Completed_A3A081314405D22C4EED5CB989DC8CB1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (CPF_Parm)

void UGA_DefaultPlayer_Consumable_C::Completed_A3A081314405D22C4EED5CB989DC8CB1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Completed_A3A081314405D22C4EED5CB989DC8CB1");

	UGA_DefaultPlayer_Consumable_C_Completed_A3A081314405D22C4EED5CB989DC8CB1_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Cancelled_A3A081314405D22C4EED5CB989DC8CB1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (CPF_Parm)

void UGA_DefaultPlayer_Consumable_C::Cancelled_A3A081314405D22C4EED5CB989DC8CB1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Cancelled_A3A081314405D22C4EED5CB989DC8CB1");

	UGA_DefaultPlayer_Consumable_C_Cancelled_A3A081314405D22C4EED5CB989DC8CB1_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Triggered_A3A081314405D22C4EED5CB989DC8CB1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (CPF_Parm)

void UGA_DefaultPlayer_Consumable_C::Triggered_A3A081314405D22C4EED5CB989DC8CB1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Triggered_A3A081314405D22C4EED5CB989DC8CB1");

	UGA_DefaultPlayer_Consumable_C_Triggered_A3A081314405D22C4EED5CB989DC8CB1_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.K2_ActivateAbilityFromEvent
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UGA_DefaultPlayer_Consumable_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.K2_ActivateAbilityFromEvent");

	UGA_DefaultPlayer_Consumable_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.ExecuteUbergraph_GA_DefaultPlayer_Consumable
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGA_DefaultPlayer_Consumable_C::ExecuteUbergraph_GA_DefaultPlayer_Consumable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.ExecuteUbergraph_GA_DefaultPlayer_Consumable");

	UGA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
