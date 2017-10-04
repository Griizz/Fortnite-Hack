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

// Function TooltipStatWrapper.TooltipStatWrapper_C.ShowUpgradeArrow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTooltipStatWrapper_C::ShowUpgradeArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipStatWrapper.TooltipStatWrapper_C.ShowUpgradeArrow");

	UTooltipStatWrapper_C_ShowUpgradeArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipStatWrapper.TooltipStatWrapper_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTooltipStatWrapper_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipStatWrapper.TooltipStatWrapper_C.Construct");

	UTooltipStatWrapper_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipStatWrapper.TooltipStatWrapper_C.ExecuteUbergraph_TooltipStatWrapper
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTooltipStatWrapper_C::ExecuteUbergraph_TooltipStatWrapper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipStatWrapper.TooltipStatWrapper_C.ExecuteUbergraph_TooltipStatWrapper");

	UTooltipStatWrapper_C_ExecuteUbergraph_TooltipStatWrapper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
