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

// Function ToastWidget.ToastWidget_C.GetOpenButtonVisibility
struct UToastWidget_C_GetOpenButtonVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ToastWidget.ToastWidget_C.StartIntro
struct UToastWidget_C_StartIntro_Params
{
};

// Function ToastWidget.ToastWidget_C.ShowText
struct UToastWidget_C_ShowText_Params
{
	struct FText                                       Text;                                                     // (CPF_Parm)
	class UCommonTextBlock*                            TextBlock;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ToastWidget.ToastWidget_C.SetToast
struct UToastWidget_C_SetToast_Params
{
	class UFortUINotification*                         Toast;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ToastWidget.ToastWidget_C.Construct
struct UToastWidget_C_Construct_Params
{
};

// Function ToastWidget.ToastWidget_C.HandleIntroFinished
struct UToastWidget_C_HandleIntroFinished_Params
{
};

// Function ToastWidget.ToastWidget_C.HandleOutroFinished
struct UToastWidget_C_HandleOutroFinished_Params
{
};

// Function ToastWidget.ToastWidget_C.HandleAnimationDelay
struct UToastWidget_C_HandleAnimationDelay_Params
{
};

// Function ToastWidget.ToastWidget_C.OnMouseEnter
struct UToastWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function ToastWidget.ToastWidget_C.OnMouseLeave
struct UToastWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function ToastWidget.ToastWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct UToastWidget_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ToastWidget.ToastWidget_C.ExecuteUbergraph_ToastWidget
struct UToastWidget_C_ExecuteUbergraph_ToastWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ToastWidget.ToastWidget_C.OnFinishedToast__DelegateSignature
struct UToastWidget_C_OnFinishedToast__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
