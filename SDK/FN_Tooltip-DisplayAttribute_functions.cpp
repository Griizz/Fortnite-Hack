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

// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.GetToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UTooltip_DisplayAttribute_C::GetToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.GetToolTipWidget");

	UTooltip_DisplayAttribute_C_GetToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.UpdateValueText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTooltip_DisplayAttribute_C::UpdateValueText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.UpdateValueText");

	UTooltip_DisplayAttribute_C_UpdateValueText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.Update Base & Buff Colors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTooltip_DisplayAttribute_C::Update_Base___Buff_Colors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.Update Base & Buff Colors");

	UTooltip_DisplayAttribute_C_Update_Base___Buff_Colors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTooltip_DisplayAttribute_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.Update");

	UTooltip_DisplayAttribute_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTooltip_DisplayAttribute_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.Construct");

	UTooltip_DisplayAttribute_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1026_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTooltip_DisplayAttribute_C::BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1026_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1026_OnButtonHoverEvent__DelegateSignature");

	UTooltip_DisplayAttribute_C_BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1026_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1037_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTooltip_DisplayAttribute_C::BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1037_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1037_OnButtonHoverEvent__DelegateSignature");

	UTooltip_DisplayAttribute_C_BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1037_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.DisplayAttributeChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTooltip_DisplayAttribute_C::DisplayAttributeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.DisplayAttributeChanged");

	UTooltip_DisplayAttribute_C_DisplayAttributeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.ValueChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         Delta                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTooltip_DisplayAttribute_C::ValueChanged(float* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.ValueChanged");

	UTooltip_DisplayAttribute_C_ValueChanged_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.PreviewStarted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTooltip_DisplayAttribute_C::PreviewStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.PreviewStarted");

	UTooltip_DisplayAttribute_C_PreviewStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.PreviewEnded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTooltip_DisplayAttribute_C::PreviewEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.PreviewEnded");

	UTooltip_DisplayAttribute_C_PreviewEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.ExecuteUbergraph_Tooltip-DisplayAttribute
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTooltip_DisplayAttribute_C::ExecuteUbergraph_Tooltip_DisplayAttribute(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-DisplayAttribute.Tooltip-DisplayAttribute_C.ExecuteUbergraph_Tooltip-DisplayAttribute");

	UTooltip_DisplayAttribute_C_ExecuteUbergraph_Tooltip_DisplayAttribute_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
