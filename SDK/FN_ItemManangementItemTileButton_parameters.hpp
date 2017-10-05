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

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleSlottedSurvivor
struct UItemManangementItemTileButton_C_HandleSlottedSurvivor_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateQuantityProduced
struct UItemManangementItemTileButton_C_UpdateQuantityProduced_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateBangState
struct UItemManangementItemTileButton_C_UpdateBangState_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateInteractionWidgetVisibility
struct UItemManangementItemTileButton_C_UpdateInteractionWidgetVisibility_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.SetEquipSlotOverlay
struct UItemManangementItemTileButton_C_SetEquipSlotOverlay_Params
{
	int                                                EquipSlot;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnDragDetected
struct UItemManangementItemTileButton_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.On_ItemWidgetHolder_MouseButtonDown
struct UItemManangementItemTileButton_C_On_ItemWidgetHolder_MouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateStyle
struct UItemManangementItemTileButton_C_UpdateStyle_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateMulchStateBox
struct UItemManangementItemTileButton_C_UpdateMulchStateBox_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleDifferentItemManagementModeSetBP
struct UItemManangementItemTileButton_C_HandleDifferentItemManagementModeSetBP_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnHovered
struct UItemManangementItemTileButton_C_OnHovered_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnUnhovered
struct UItemManangementItemTileButton_C_OnUnhovered_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleHasItemToDetailChanged
struct UItemManangementItemTileButton_C_HandleHasItemToDetailChanged_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleHasItemToCompareDetailsWithChanged
struct UItemManangementItemTileButton_C_HandleHasItemToCompareDetailsWithChanged_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleItemMulchStateChanged
struct UItemManangementItemTileButton_C_HandleItemMulchStateChanged_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleEquipSlotChanged
struct UItemManangementItemTileButton_C_HandleEquipSlotChanged_Params
{
	int*                                               EquipSlot;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnDragCancelled
struct UItemManangementItemTileButton_C_OnDragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UDragDropOperation**                         Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnSelected
struct UItemManangementItemTileButton_C_OnSelected_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.Construct
struct UItemManangementItemTileButton_C_Construct_Params
{
};

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.ExecuteUbergraph_ItemManangementItemTileButton
struct UItemManangementItemTileButton_C_ExecuteUbergraph_ItemManangementItemTileButton_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
