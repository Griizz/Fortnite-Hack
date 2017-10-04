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

// Function OptionsMenuInput.OptionsMenuInput_C.DoesItemHaveChildren
struct UOptionsMenuInput_C_DoesItemHaveChildren_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.GetIndentLevel
struct UOptionsMenuInput_C_GetIndentLevel_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.IsItemExpanded
struct UOptionsMenuInput_C_IsItemExpanded_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.GetData
struct UOptionsMenuInput_C_GetData_Params
{
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.Change Key
struct UOptionsMenuInput_C_Change_Key_Params
{
	bool                                               Primary_Key;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Key_To_Sets;                                              // (CPF_Parm)
};

// Function OptionsMenuInput.OptionsMenuInput_C.Center on Widget
struct UOptionsMenuInput_C_Center_on_Widget_Params
{
};

// Function OptionsMenuInput.OptionsMenuInput_C.OnAcquireFromPool
struct UOptionsMenuInput_C_OnAcquireFromPool_Params
{
};

// Function OptionsMenuInput.OptionsMenuInput_C.OnReleaseToPool
struct UOptionsMenuInput_C_OnReleaseToPool_Params
{
};

// Function OptionsMenuInput.OptionsMenuInput_C.Private_OnExpanderArrowShiftClicked
struct UOptionsMenuInput_C_Private_OnExpanderArrowShiftClicked_Params
{
};

// Function OptionsMenuInput.OptionsMenuInput_C.RegisterOnClicked
struct UOptionsMenuInput_C_RegisterOnClicked_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function OptionsMenuInput.OptionsMenuInput_C.SetExpanded
struct UOptionsMenuInput_C_SetExpanded_Params
{
	bool                                               bExpanded;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.SetIndexInList
struct UOptionsMenuInput_C_SetIndexInList_Params
{
	int                                                InIndexInList;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.SetSelected
struct UOptionsMenuInput_C_SetSelected_Params
{
	bool                                               bSelected;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.ToggleExpansion
struct UOptionsMenuInput_C_ToggleExpansion_Params
{
};

// Function OptionsMenuInput.OptionsMenuInput_C.Reset
struct UOptionsMenuInput_C_Reset_Params
{
};

// Function OptionsMenuInput.OptionsMenuInput_C.BndEvt__PrimaryInput_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature
struct UOptionsMenuInput_C_BndEvt__PrimaryInput_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.BndEvt__SecondaryInput_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
struct UOptionsMenuInput_C_BndEvt__SecondaryInput_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.SetData
struct UOptionsMenuInput_C_SetData_Params
{
	class UObject*                                     InData;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonListView*                             OwningList;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.OnMouseLeave
struct UOptionsMenuInput_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function OptionsMenuInput.OptionsMenuInput_C.OnMouseEnter
struct UOptionsMenuInput_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function OptionsMenuInput.OptionsMenuInput_C.ExecuteUbergraph_OptionsMenuInput
struct UOptionsMenuInput_C_ExecuteUbergraph_OptionsMenuInput_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.Input Clicked__DelegateSignature
struct UOptionsMenuInput_C_Input_Clicked__DelegateSignature_Params
{
	int                                                Number_In_List;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Is_Primary_Button;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
