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

// Function QuickbarSlot.QuickbarSlot_C.UpdateItemCardsVisibility
struct UQuickbarSlot_C_UpdateItemCardsVisibility_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStopped
struct UQuickbarSlot_C_OnCooldownStopped_Params
{
	EFortItemCooldownType                              CooldownType;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStarted
struct UQuickbarSlot_C_OnCooldownStarted_Params
{
	EFortItemCooldownType                              CooldownType;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.InitializeCooldowns
struct UQuickbarSlot_C_InitializeCooldowns_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction_Gamepad
struct UQuickbarSlot_C_GetKeyBindingAction_Gamepad_Params
{
	struct FName                                       KeyBindingAction;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction_Keyboard
struct UQuickbarSlot_C_GetKeyBindingAction_Keyboard_Params
{
	struct FName                                       Key_Binding_Action;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction
struct UQuickbarSlot_C_GetKeyBindingAction_Params
{
	struct FName                                       KeyBindingAction;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.UpdateKeyBindingVisibility
struct UQuickbarSlot_C_UpdateKeyBindingVisibility_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.UpdateKeyBindingText
struct UQuickbarSlot_C_UpdateKeyBindingText_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.Resize
struct UQuickbarSlot_C_Resize_Params
{
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.Maximize
struct UQuickbarSlot_C_Maximize_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.Minimize
struct UQuickbarSlot_C_Minimize_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.SetSelected
struct UQuickbarSlot_C_SetSelected_Params
{
	bool                                               Selected;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.RefreshItem
struct UQuickbarSlot_C_RefreshItem_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.PreConstruct
struct UQuickbarSlot_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuickbarSlot.QuickbarSlot_C.Construct
struct UQuickbarSlot_C_Construct_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeStarted
struct UQuickbarSlot_C_HandleMaximizeStarted_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeFinished
struct UQuickbarSlot_C_HandleMinimizeFinished_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeFinished
struct UQuickbarSlot_C_HandleMaximizeFinished_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeStarted
struct UQuickbarSlot_C_HandleMinimizeStarted_Params
{
};

// Function QuickbarSlot.QuickbarSlot_C.ExecuteUbergraph_QuickbarSlot
struct UQuickbarSlot_C_ExecuteUbergraph_QuickbarSlot_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
