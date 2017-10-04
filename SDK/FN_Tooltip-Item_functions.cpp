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

// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Text Visibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)

void UTooltip_Item_C::Get_Tooltip_Header_Text_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Text Visibility");

	UTooltip_Item_C_Get_Tooltip_Header_Text_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Icon Visibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)

void UTooltip_Item_C::Get_Tooltip_Header_Icon_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Icon Visibility");

	UTooltip_Item_C_Get_Tooltip_Header_Icon_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Visibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)

void UTooltip_Item_C::Get_Tooltip_Header_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Visibility");

	UTooltip_Item_C_Get_Tooltip_Header_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-Item.Tooltip-Item_C.Get Theme Color [Normal]
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UTooltip_Item_C::Get_Theme_Color__Normal_()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Get Theme Color [Normal]");

	UTooltip_Item_C_Get_Theme_Color__Normal__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tooltip-Item.Tooltip-Item_C.Get Icon Brush
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UTooltip_Item_C::Get_Icon_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Get Icon Brush");

	UTooltip_Item_C_Get_Icon_Brush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tooltip-Item.Tooltip-Item_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTooltip_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Construct");

	UTooltip_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-Item.Tooltip-Item_C.ExecuteUbergraph_Tooltip-Item
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTooltip_Item_C::ExecuteUbergraph_Tooltip_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.ExecuteUbergraph_Tooltip-Item");

	UTooltip_Item_C_ExecuteUbergraph_Tooltip_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
