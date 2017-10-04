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

// Function ScrollingTextButton.ScrollingTextButton_C.SetInitialMouseKeyboardStyle
struct UScrollingTextButton_C_SetInitialMouseKeyboardStyle_Params
{
};

// Function ScrollingTextButton.ScrollingTextButton_C.UpdateTextStyle
struct UScrollingTextButton_C_UpdateTextStyle_Params
{
};

// Function ScrollingTextButton.ScrollingTextButton_C.SetContentAlignment
struct UScrollingTextButton_C_SetContentAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  ContentAlignment;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ScrollingTextButton.ScrollingTextButton_C.UpdateContentAlignment
struct UScrollingTextButton_C_UpdateContentAlignment_Params
{
};

// Function ScrollingTextButton.ScrollingTextButton_C.SetMouseKeyboardStyle
struct UScrollingTextButton_C_SetMouseKeyboardStyle_Params
{
	class UClass*                                      ControllerInputStyle;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ScrollingTextButton.ScrollingTextButton_C.UpdateStyle
struct UScrollingTextButton_C_UpdateStyle_Params
{
	bool                                               UsingGamepad;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ScrollingTextButton.ScrollingTextButton_C.UpdateText
struct UScrollingTextButton_C_UpdateText_Params
{
};

// Function ScrollingTextButton.ScrollingTextButton_C.SetControllerStyle
struct UScrollingTextButton_C_SetControllerStyle_Params
{
	class UClass*                                      ControllerInputStyle;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ScrollingTextButton.ScrollingTextButton_C.UpdateTextAndStyle
struct UScrollingTextButton_C_UpdateTextAndStyle_Params
{
	bool                                               bUsingGamepad;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ScrollingTextButton.ScrollingTextButton_C.InitializeButton
struct UScrollingTextButton_C_InitializeButton_Params
{
};

// Function ScrollingTextButton.ScrollingTextButton_C.Set Icon
struct UScrollingTextButton_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (CPF_Parm)
};

// Function ScrollingTextButton.ScrollingTextButton_C.Set Text
struct UScrollingTextButton_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (CPF_Parm)
};

// Function ScrollingTextButton.ScrollingTextButton_C.OnCurrentTextStyleChanged
struct UScrollingTextButton_C_OnCurrentTextStyleChanged_Params
{
};

// Function ScrollingTextButton.ScrollingTextButton_C.PreConstruct
struct UScrollingTextButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ScrollingTextButton.ScrollingTextButton_C.SetTabLabelInfo
struct UScrollingTextButton_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function ScrollingTextButton.ScrollingTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
struct UScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params
{
	bool                                               bUsingGamepad;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ScrollingTextButton.ScrollingTextButton_C.OnTriggeredInputActionChanged
struct UScrollingTextButton_C_OnTriggeredInputActionChanged_Params
{
	struct FDataTableRowHandle*                        NewTriggeredAction;                                       // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function ScrollingTextButton.ScrollingTextButton_C.OnActionProgress
struct UScrollingTextButton_C_OnActionProgress_Params
{
	float*                                             HeldPercent;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ScrollingTextButton.ScrollingTextButton_C.OnActionComplete
struct UScrollingTextButton_C_OnActionComplete_Params
{
};

// Function ScrollingTextButton.ScrollingTextButton_C.Construct
struct UScrollingTextButton_C_Construct_Params
{
};

// Function ScrollingTextButton.ScrollingTextButton_C.ExecuteUbergraph_ScrollingTextButton
struct UScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
