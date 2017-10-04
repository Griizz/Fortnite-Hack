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

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Button Hovered
struct UOptionsMenuRowSelector_C_Button_Hovered_Params
{
	class UCommonButton*                               Button_Hovered;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Deselect All Rows
struct UOptionsMenuRowSelector_C_Deselect_All_Rows_Params
{
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Update Row Selector
struct UOptionsMenuRowSelector_C_Update_Row_Selector_Params
{
	int                                                Tab_Number;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Initialize Row Selector
struct UOptionsMenuRowSelector_C_Initialize_Row_Selector_Params
{
	struct FText                                       Row_Text;                                                 // (CPF_Parm)
	TArray<struct FText>                               Buttons;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<struct FText>                               Hover_Texts;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	bool                                               Require_Selection;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonTextBlock*                            Tab_Tooltip;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Construct
struct UOptionsMenuRowSelector_C_Construct_Params
{
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnSelectedButtonChanged_Event_1
struct UOptionsMenuRowSelector_C_OnSelectedButtonChanged_Event_1_Params
{
	class UCommonButton*                               AssociatedButton;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ButtonIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnMouseLeave
struct UOptionsMenuRowSelector_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Destruct
struct UOptionsMenuRowSelector_C_Destruct_Params
{
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.PreConstruct
struct UOptionsMenuRowSelector_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.ExecuteUbergraph_OptionsMenuRowSelector
struct UOptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Selector Button Selected__DelegateSignature
struct UOptionsMenuRowSelector_C_Selector_Button_Selected__DelegateSignature_Params
{
	int                                                Tab_Id;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
