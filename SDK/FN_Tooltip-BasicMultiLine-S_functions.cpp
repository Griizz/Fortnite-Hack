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

// Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Get Icon Brush
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UTooltip_BasicMultiLine_S_C::Get_Icon_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Get Icon Brush");

	UTooltip_BasicMultiLine_S_C_Get_Icon_Brush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Get Header Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UTooltip_BasicMultiLine_S_C::Get_Header_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Get Header Text");

	UTooltip_BasicMultiLine_S_C_Get_Header_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Get Body Text
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTooltip_BasicMultiLine_S_C::Get_Body_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Get Body Text");

	UTooltip_BasicMultiLine_S_C_Get_Body_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTooltip_BasicMultiLine_S_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Construct");

	UTooltip_BasicMultiLine_S_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.ExecuteUbergraph_Tooltip-BasicMultiLine-S
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTooltip_BasicMultiLine_S_C::ExecuteUbergraph_Tooltip_BasicMultiLine_S(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.ExecuteUbergraph_Tooltip-BasicMultiLine-S");

	UTooltip_BasicMultiLine_S_C_ExecuteUbergraph_Tooltip_BasicMultiLine_S_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
