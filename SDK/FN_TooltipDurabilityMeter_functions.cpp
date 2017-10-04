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

// Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.Draw
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Normalized                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortDisplayAttribute   Display_Attribute              (CPF_Parm)

void UTooltipDurabilityMeter_C::Draw(float Normalized, const struct FFortDisplayAttribute& Display_Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.Draw");

	UTooltipDurabilityMeter_C_Draw_Params params;
	params.Normalized = Normalized;
	params.Display_Attribute = Display_Attribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTooltipDurabilityMeter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.Construct");

	UTooltipDurabilityMeter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.ExecuteUbergraph_TooltipDurabilityMeter
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTooltipDurabilityMeter_C::ExecuteUbergraph_TooltipDurabilityMeter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.ExecuteUbergraph_TooltipDurabilityMeter");

	UTooltipDurabilityMeter_C_ExecuteUbergraph_TooltipDurabilityMeter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
