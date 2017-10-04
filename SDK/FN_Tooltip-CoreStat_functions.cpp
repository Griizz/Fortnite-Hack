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

// Function Tooltip-CoreStat.Tooltip-CoreStat_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHeroCoreStat           Data                           (CPF_Parm)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTooltip_CoreStat_C::Update(const struct FHeroCoreStat& Data, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-CoreStat.Tooltip-CoreStat_C.Update");

	UTooltip_CoreStat_C_Update_Params params;
	params.Data = Data;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-CoreStat.Tooltip-CoreStat_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTooltip_CoreStat_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-CoreStat.Tooltip-CoreStat_C.Construct");

	UTooltip_CoreStat_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-CoreStat.Tooltip-CoreStat_C.ExecuteUbergraph_Tooltip-CoreStat
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTooltip_CoreStat_C::ExecuteUbergraph_Tooltip_CoreStat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-CoreStat.Tooltip-CoreStat_C.ExecuteUbergraph_Tooltip-CoreStat");

	UTooltip_CoreStat_C_ExecuteUbergraph_Tooltip_CoreStat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
