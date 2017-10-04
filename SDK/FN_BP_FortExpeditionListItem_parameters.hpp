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

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Update Bang State
struct UBP_FortExpeditionListItem_C_Update_Bang_State_Params
{
	class UFortAccountItem*                            Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Success Chance
struct UBP_FortExpeditionListItem_C_Set_Success_Chance_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Vehicle Icon
struct UBP_FortExpeditionListItem_C_Set_Vehicle_Icon_Params
{
	class UFortExpeditionItem*                         Expedition;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Expedition Returns Data
struct UBP_FortExpeditionListItem_C_Set_Expedition_Returns_Data_Params
{
	class UFortExpeditionItem*                         InputPin;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set In Progress State
struct UBP_FortExpeditionListItem_C_Set_In_Progress_State_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Remaining Expiration Time
struct UBP_FortExpeditionListItem_C_Set_Remaining_Expiration_Time_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rarity
struct UBP_FortExpeditionListItem_C_Set_Rarity_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rating
struct UBP_FortExpeditionListItem_C_Set_Rating_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rewards
struct UBP_FortExpeditionListItem_C_Set_Rewards_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Get Expedition Item Definition
struct UBP_FortExpeditionListItem_C_Get_Expedition_Item_Definition_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortExpeditionItemDefinition*               Item_Def;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Name
struct UBP_FortExpeditionListItem_C_Set_Name_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Setup Base Item Data
struct UBP_FortExpeditionListItem_C_Setup_Base_Item_Data_Params
{
	class UFortExpeditionItem*                         Expedition;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.SetData
struct UBP_FortExpeditionListItem_C_SetData_Params
{
	class UObject**                                    InData;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonListView**                            OwningList;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnSelected
struct UBP_FortExpeditionListItem_C_OnSelected_Params
{
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnItemChanged
struct UBP_FortExpeditionListItem_C_OnItemChanged_Params
{
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnDeselected
struct UBP_FortExpeditionListItem_C_OnDeselected_Params
{
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature
struct UBP_FortExpeditionListItem_C_BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature_Params
{
	class UWidget*                                     ActiveWidget;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnHovered
struct UBP_FortExpeditionListItem_C_OnHovered_Params
{
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.ExecuteUbergraph_BP_FortExpeditionListItem
struct UBP_FortExpeditionListItem_C_ExecuteUbergraph_BP_FortExpeditionListItem_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
