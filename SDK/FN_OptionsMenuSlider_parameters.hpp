#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OptionsMenuSlider.OptionsMenuSlider_C.Center on Widget
struct UOptionsMenuSlider_C_Center_on_Widget_Params
{
};

// Function OptionsMenuSlider.OptionsMenuSlider_C.Update Slider
struct UOptionsMenuSlider_C_Update_Slider_Params
{
	struct FText                                       Slider_Text;                                              // (CPF_Parm)
	float                                              Slider_Value;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Hover_Text;                                               // (CPF_Parm)
	class UCommonTextBlock*                            Tooltip_Text_Block;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuSlider.OptionsMenuSlider_C.Construct
struct UOptionsMenuSlider_C_Construct_Params
{
};

// Function OptionsMenuSlider.OptionsMenuSlider_C.OnMouseLeave
struct UOptionsMenuSlider_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function OptionsMenuSlider.OptionsMenuSlider_C.OnMouseEnter
struct UOptionsMenuSlider_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function OptionsMenuSlider.OptionsMenuSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuSlider.OptionsMenuSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuSlider.OptionsMenuSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuSlider.OptionsMenuSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuSlider.OptionsMenuSlider_C.ExecuteUbergraph_OptionsMenuSlider
struct UOptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuSlider.OptionsMenuSlider_C.SliderChanged__DelegateSignature
struct UOptionsMenuSlider_C_SliderChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
