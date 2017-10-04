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

// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.Center on Widget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenuSlider_Light_C::Center_on_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.Center on Widget");

	UOptionsMenuSlider_Light_C_Center_on_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.Update Slider
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Slider_Text                    (CPF_Parm)
// float                          Slider_Value                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Hover_Text                     (CPF_Parm)
// class UCommonTextBlock*        Tooltip_Text_Block             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuSlider_Light_C::Update_Slider(const struct FText& Slider_Text, float Slider_Value, const struct FText& Hover_Text, class UCommonTextBlock* Tooltip_Text_Block)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.Update Slider");

	UOptionsMenuSlider_Light_C_Update_Slider_Params params;
	params.Slider_Text = Slider_Text;
	params.Slider_Value = Slider_Value;
	params.Hover_Text = Hover_Text;
	params.Tooltip_Text_Block = Tooltip_Text_Block;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptionsMenuSlider_Light_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.Construct");

	UOptionsMenuSlider_Light_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOptionsMenuSlider_Light_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.OnMouseLeave");

	UOptionsMenuSlider_Light_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOptionsMenuSlider_Light_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.OnMouseEnter");

	UOptionsMenuSlider_Light_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptionsMenuSlider_Light_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature");

	UOptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptionsMenuSlider_Light_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature");

	UOptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuSlider_Light_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature");

	UOptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuSlider_Light_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature");

	UOptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.ExecuteUbergraph_OptionsMenuSlider_Light
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuSlider_Light_C::ExecuteUbergraph_OptionsMenuSlider_Light(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.ExecuteUbergraph_OptionsMenuSlider_Light");

	UOptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.SliderChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Slider_Value                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuSlider_Light_C::SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.SliderChanged__DelegateSignature");

	UOptionsMenuSlider_Light_C_SliderChanged__DelegateSignature_Params params;
	params.Slider_Value = Slider_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
