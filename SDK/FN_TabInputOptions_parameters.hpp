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

// Function TabInputOptions.TabInputOptions_C.NewFunction_1
struct UTabInputOptions_C_NewFunction_1_Params
{
};

// Function TabInputOptions.TabInputOptions_C.Set Input Enabled
struct UTabInputOptions_C_Set_Input_Enabled_Params
{
};

// Function TabInputOptions.TabInputOptions_C.Overlay Key Pressed
struct UTabInputOptions_C_Overlay_Key_Pressed_Params
{
	struct FKey                                        NewKey;                                                   // (CPF_Parm)
};

// Function TabInputOptions.TabInputOptions_C.Construct
struct UTabInputOptions_C_Construct_Params
{
};

// Function TabInputOptions.TabInputOptions_C.Input Clicked
struct UTabInputOptions_C_Input_Clicked_Params
{
	int                                                Number_in_List;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Is_Primary_Button;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabInputOptions.TabInputOptions_C.CenterOnTab
struct UTabInputOptions_C_CenterOnTab_Params
{
};

// Function TabInputOptions.TabInputOptions_C.UpdateOptionsTab
struct UTabInputOptions_C_UpdateOptionsTab_Params
{
};

// Function TabInputOptions.TabInputOptions_C.BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature
struct UTabInputOptions_C_BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabInputOptions.TabInputOptions_C.HandleUsingGamepadChanged
struct UTabInputOptions_C_HandleUsingGamepadChanged_Params
{
	bool*                                              bUsingGamepad;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabInputOptions.TabInputOptions_C.UnbindClicked
struct UTabInputOptions_C_UnbindClicked_Params
{
	int                                                Number_in_List;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabInputOptions.TabInputOptions_C.ExecuteUbergraph_TabInputOptions
struct UTabInputOptions_C_ExecuteUbergraph_TabInputOptions_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabInputOptions.TabInputOptions_C.Gamepad Changed__DelegateSignature
struct UTabInputOptions_C_Gamepad_Changed__DelegateSignature_Params
{
	bool                                               Gamepad_Enabled;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabInputOptions.TabInputOptions_C.Disable Overlay__DelegateSignature
struct UTabInputOptions_C_Disable_Overlay__DelegateSignature_Params
{
};

// Function TabInputOptions.TabInputOptions_C.Enable Overlay__DelegateSignature
struct UTabInputOptions_C_Enable_Overlay__DelegateSignature_Params
{
	bool                                               Accept_Input;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Overlay_Text;                                             // (CPF_Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
