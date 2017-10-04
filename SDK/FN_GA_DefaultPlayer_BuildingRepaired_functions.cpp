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

// Function GA_DefaultPlayer_BuildingRepaired.GA_DefaultPlayer_BuildingRepaired_C.K2_ActivateAbilityFromEvent
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UGA_DefaultPlayer_BuildingRepaired_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_BuildingRepaired.GA_DefaultPlayer_BuildingRepaired_C.K2_ActivateAbilityFromEvent");

	UGA_DefaultPlayer_BuildingRepaired_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_BuildingRepaired.GA_DefaultPlayer_BuildingRepaired_C.ExecuteUbergraph_GA_DefaultPlayer_BuildingRepaired
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGA_DefaultPlayer_BuildingRepaired_C::ExecuteUbergraph_GA_DefaultPlayer_BuildingRepaired(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_BuildingRepaired.GA_DefaultPlayer_BuildingRepaired_C.ExecuteUbergraph_GA_DefaultPlayer_BuildingRepaired");

	UGA_DefaultPlayer_BuildingRepaired_C_ExecuteUbergraph_GA_DefaultPlayer_BuildingRepaired_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
