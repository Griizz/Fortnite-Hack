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

// Function RotatorSelector.RotatorSelector_C.Update Options
struct URotatorSelector_C_Update_Options_Params
{
	TArray<struct FText>                               NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function RotatorSelector.RotatorSelector_C.Center on Widget
struct URotatorSelector_C_Center_on_Widget_Params
{
};

// Function RotatorSelector.RotatorSelector_C.Initialize
struct URotatorSelector_C_Initialize_Params
{
	struct FText                                       Display_Text;                                             // (CPF_Parm)
	TArray<struct FText>                               Options;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FText                                       Hover_Text;                                               // (CPF_Parm)
	class UCommonTextBlock*                            Tab_Tooltip;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RotatorSelector.RotatorSelector_C.Update Row Selector
struct URotatorSelector_C_Update_Row_Selector_Params
{
	int                                                Currently_Selected;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RotatorSelector.RotatorSelector_C.Construct
struct URotatorSelector_C_Construct_Params
{
};

// Function RotatorSelector.RotatorSelector_C.OnMouseLeave
struct URotatorSelector_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function RotatorSelector.RotatorSelector_C.OnMouseEnter
struct URotatorSelector_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function RotatorSelector.RotatorSelector_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature
struct URotatorSelector_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature_Params
{
	int                                                Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RotatorSelector.RotatorSelector_C.ExecuteUbergraph_RotatorSelector
struct URotatorSelector_C_ExecuteUbergraph_RotatorSelector_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RotatorSelector.RotatorSelector_C.Selection Changed__DelegateSignature
struct URotatorSelector_C_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
