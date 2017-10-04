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

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.DoesItemHaveChildren
struct UOptionsMenuHudRotator_C_DoesItemHaveChildren_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.GetIndentLevel
struct UOptionsMenuHudRotator_C_GetIndentLevel_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.IsItemExpanded
struct UOptionsMenuHudRotator_C_IsItemExpanded_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.GetData
struct UOptionsMenuHudRotator_C_GetData_Params
{
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnFocusReceived
struct UOptionsMenuHudRotator_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Update Options
struct UOptionsMenuHudRotator_C_Update_Options_Params
{
	TArray<struct FText>                               NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Center on Widget
struct UOptionsMenuHudRotator_C_Center_on_Widget_Params
{
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Update Row Selector
struct UOptionsMenuHudRotator_C_Update_Row_Selector_Params
{
	int                                                Currently_Selected;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnAcquireFromPool
struct UOptionsMenuHudRotator_C_OnAcquireFromPool_Params
{
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnReleaseToPool
struct UOptionsMenuHudRotator_C_OnReleaseToPool_Params
{
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Private_OnExpanderArrowShiftClicked
struct UOptionsMenuHudRotator_C_Private_OnExpanderArrowShiftClicked_Params
{
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.RegisterOnClicked
struct UOptionsMenuHudRotator_C_RegisterOnClicked_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetExpanded
struct UOptionsMenuHudRotator_C_SetExpanded_Params
{
	bool                                               bExpanded;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetIndexInList
struct UOptionsMenuHudRotator_C_SetIndexInList_Params
{
	int                                                InIndexInList;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetSelected
struct UOptionsMenuHudRotator_C_SetSelected_Params
{
	bool                                               bSelected;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.ToggleExpansion
struct UOptionsMenuHudRotator_C_ToggleExpansion_Params
{
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Reset
struct UOptionsMenuHudRotator_C_Reset_Params
{
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Construct
struct UOptionsMenuHudRotator_C_Construct_Params
{
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnMouseLeave
struct UOptionsMenuHudRotator_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnMouseEnter
struct UOptionsMenuHudRotator_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature
struct UOptionsMenuHudRotator_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature_Params
{
	int                                                Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetData
struct UOptionsMenuHudRotator_C_SetData_Params
{
	class UObject*                                     InData;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonListView*                             OwningList;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.ExecuteUbergraph_OptionsMenuHudRotator
struct UOptionsMenuHudRotator_C_ExecuteUbergraph_OptionsMenuHudRotator_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Selection Changed__DelegateSignature
struct UOptionsMenuHudRotator_C_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTag                                Gameplay_Tag;                                             // (CPF_Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
