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

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleDropItemConfirmationCallback
struct UAthenaInventoryPanel_C_HandleDropItemConfirmationCallback_Params
{
	int                                                ChosenQuantity;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.DestroyQuantitySelectorWidget
struct UAthenaInventoryPanel_C_DestroyQuantitySelectorWidget_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.CreateQuantitySelectorWidget
struct UAthenaInventoryPanel_C_CreateQuantitySelectorWidget_Params
{
	class UFortWorldItem*                              Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ConfirmationText;                                         // (CPF_Parm)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RefocusOnInventory
struct UAthenaInventoryPanel_C_RefocusOnInventory_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.DropItem
struct UAthenaInventoryPanel_C_DropItem_Params
{
	class UFortWorldItem*                              Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Quantity;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleDrop
struct UAthenaInventoryPanel_C_HandleDrop_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterDrop
struct UAthenaInventoryPanel_C_RegisterDrop_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.PerformEquip
struct UAthenaInventoryPanel_C_PerformEquip_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterLeaveInventory
struct UAthenaInventoryPanel_C_RegisterLeaveInventory_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.TrySetupInputHandling
struct UAthenaInventoryPanel_C_TrySetupInputHandling_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleEquip
struct UAthenaInventoryPanel_C_HandleEquip_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterEquip
struct UAthenaInventoryPanel_C_RegisterEquip_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterBack
struct UAthenaInventoryPanel_C_RegisterBack_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleClose
struct UAthenaInventoryPanel_C_HandleClose_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.GetSelectedEquipSlot
struct UAthenaInventoryPanel_C_GetSelectedEquipSlot_Params
{
	int                                                Slot;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.ProcessSlotAction
struct UAthenaInventoryPanel_C_ProcessSlotAction_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.UpdateEquipSlots
struct UAthenaInventoryPanel_C_UpdateEquipSlots_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleQuickBarChangedBP
struct UAthenaInventoryPanel_C_HandleQuickBarChangedBP_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnActivated
struct UAthenaInventoryPanel_C_OnActivated_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnDeactivated
struct UAthenaInventoryPanel_C_OnDeactivated_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RequestEquip
struct UAthenaInventoryPanel_C_RequestEquip_Params
{
	class UFortItem**                                  Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnInventoryItemSelected
struct UAthenaInventoryPanel_C_OnInventoryItemSelected_Params
{
	class UFortItem**                                  Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot1_K2Node_ComponentBoundEvent_1_OnEquipRequested__DelegateSignature
struct UAthenaInventoryPanel_C_BndEvt__EquipSlot1_K2Node_ComponentBoundEvent_1_OnEquipRequested__DelegateSignature_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot2_K2Node_ComponentBoundEvent_3_OnEquipRequested__DelegateSignature
struct UAthenaInventoryPanel_C_BndEvt__EquipSlot2_K2Node_ComponentBoundEvent_3_OnEquipRequested__DelegateSignature_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot3_K2Node_ComponentBoundEvent_6_OnEquipRequested__DelegateSignature
struct UAthenaInventoryPanel_C_BndEvt__EquipSlot3_K2Node_ComponentBoundEvent_6_OnEquipRequested__DelegateSignature_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot4_K2Node_ComponentBoundEvent_10_OnEquipRequested__DelegateSignature
struct UAthenaInventoryPanel_C_BndEvt__EquipSlot4_K2Node_ComponentBoundEvent_10_OnEquipRequested__DelegateSignature_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.BndEvt__EquipSlot5_K2Node_ComponentBoundEvent_15_OnEquipRequested__DelegateSignature
struct UAthenaInventoryPanel_C_BndEvt__EquipSlot5_K2Node_ComponentBoundEvent_15_OnEquipRequested__DelegateSignature_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.ExecuteUbergraph_AthenaInventoryPanel
struct UAthenaInventoryPanel_C_ExecuteUbergraph_AthenaInventoryPanel_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
