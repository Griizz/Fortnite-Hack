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

// Function ItemManagementScreen.ItemManagementScreen_C.ShowCraftError
struct UItemManagementScreen_C_ShowCraftError_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.CraftAndSlot
struct UItemManagementScreen_C_CraftAndSlot_Params
{
	class UFortSchematicItem*                          SchematicItem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleEquip
struct UItemManagementScreen_C_HandleEquip_Params
{
	class UFortItem*                                   ItemToEquip;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.SizeInventoryPanel
struct UItemManagementScreen_C_SizeInventoryPanel_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.OnDrop
struct UItemManagementScreen_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (CPF_Parm)
	class UDragDropOperation**                         Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.GetDescriptionText
struct UItemManagementScreen_C_GetDescriptionText_Params
{
	struct FText                                       ItemDescription;                                          // (CPF_Parm, CPF_OutParm)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleInspect
struct UItemManagementScreen_C_HandleInspect_Params
{
	class UFortItem*                                   ItemToInspect;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleClose
struct UItemManagementScreen_C_HandleClose_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA
struct UItemManagementScreen_C_OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40
struct UItemManagementScreen_C_DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40_Params
{
	struct FName                                       ResultName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.OnActivated
struct UItemManagementScreen_C_OnActivated_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleInspectItemBP
struct UItemManagementScreen_C_HandleInspectItemBP_Params
{
	class UFortItem**                                  Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleConsumeItemBP
struct UItemManagementScreen_C_HandleConsumeItemBP_Params
{
	class UFortConsumableAccountItem**                 ConsumableItem;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleDifferentItemManagementModeSetBP
struct UItemManagementScreen_C_HandleDifferentItemManagementModeSetBP_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleEquipItemBP
struct UItemManagementScreen_C_HandleEquipItemBP_Params
{
	class UFortItem**                                  Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleCraftItemBP
struct UItemManagementScreen_C_HandleCraftItemBP_Params
{
	class UFortSchematicItem**                         SchematicItem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.CraftabilityRefresh
struct UItemManagementScreen_C_CraftabilityRefresh_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.ExecuteUbergraph_ItemManagementScreen
struct UItemManagementScreen_C_ExecuteUbergraph_ItemManagementScreen_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
