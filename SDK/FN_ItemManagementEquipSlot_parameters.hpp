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

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.IsSelected
struct UItemManagementEquipSlot_C_IsSelected_Params
{
	bool                                               Selected;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnFocusReceived
struct UItemManagementEquipSlot_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.SetSelected
struct UItemManagementEquipSlot_C_SetSelected_Params
{
	bool                                               Selected;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnDragDetected
struct UItemManagementEquipSlot_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnMouseButtonDown
struct UItemManagementEquipSlot_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnDrop
struct UItemManagementEquipSlot_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_Parm)
	class UDragDropOperation**                         Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.RefreshItem
struct UItemManagementEquipSlot_C_RefreshItem_Params
{
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.Construct
struct UItemManagementEquipSlot_C_Construct_Params
{
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnFocusLost
struct UItemManagementEquipSlot_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_6_OnInputMethodChanged__DelegateSignature
struct UItemManagementEquipSlot_C_BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_6_OnInputMethodChanged__DelegateSignature_Params
{
	bool                                               bUsingGamepad;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnDragCancelled
struct UItemManagementEquipSlot_C_OnDragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UDragDropOperation**                         Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.ExecuteUbergraph_ItemManagementEquipSlot
struct UItemManagementEquipSlot_C_ExecuteUbergraph_ItemManagementEquipSlot_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
