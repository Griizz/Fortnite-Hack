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

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.IsSelected
struct UAthenaInventoryEquipSlot_C_IsSelected_Params
{
	bool                                               Selected;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnFocusReceived
struct UAthenaInventoryEquipSlot_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.SetSelected
struct UAthenaInventoryEquipSlot_C_SetSelected_Params
{
	bool                                               Selected;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDragDetected
struct UAthenaInventoryEquipSlot_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnMouseButtonDown
struct UAthenaInventoryEquipSlot_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDrop
struct UAthenaInventoryEquipSlot_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_Parm)
	class UDragDropOperation**                         Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.RefreshItem
struct UAthenaInventoryEquipSlot_C_RefreshItem_Params
{
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.Construct
struct UAthenaInventoryEquipSlot_C_Construct_Params
{
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnFocusLost
struct UAthenaInventoryEquipSlot_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_6_OnInputMethodChanged__DelegateSignature
struct UAthenaInventoryEquipSlot_C_BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_6_OnInputMethodChanged__DelegateSignature_Params
{
	bool                                               bUsingGamepad;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.Tick
struct UAthenaInventoryEquipSlot_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnQuickbarContentsChanged_Event_1
struct UAthenaInventoryEquipSlot_C_OnQuickbarContentsChanged_Event_1_Params
{
	EFortQuickBars                                     QuickbarIndex;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.ExecuteUbergraph_AthenaInventoryEquipSlot
struct UAthenaInventoryEquipSlot_C_ExecuteUbergraph_AthenaInventoryEquipSlot_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnEquipRequested__DelegateSignature
struct UAthenaInventoryEquipSlot_C_OnEquipRequested__DelegateSignature_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
