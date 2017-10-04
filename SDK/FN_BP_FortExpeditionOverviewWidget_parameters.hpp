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

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Get Utc Now Offset
struct UBP_FortExpeditionOverviewWidget_C_Get_Utc_Now_Offset_Params
{
	struct FTimespan                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Set List Sort Type
struct UBP_FortExpeditionOverviewWidget_C_Set_List_Sort_Type_Params
{
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Should Disable Build Expedition Action
struct UBP_FortExpeditionOverviewWidget_C_Should_Disable_Build_Expedition_Action_Params
{
	class UFortExpeditionItem*                         Expedition;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Disable;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Try to Build Expedition
struct UBP_FortExpeditionOverviewWidget_C_Try_to_Build_Expedition_Params
{
	class UFortExpeditionItem*                         Expedition;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Try to Abandon Expedition
struct UBP_FortExpeditionOverviewWidget_C_Try_to_Abandon_Expedition_Params
{
	class UFortExpeditionItem*                         Expedition;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Update Active Input For Selected Item
struct UBP_FortExpeditionOverviewWidget_C_Update_Active_Input_For_Selected_Item_Params
{
	class UFortExpeditionItem*                         InputObject;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Update Details Visibility
struct UBP_FortExpeditionOverviewWidget_C_Update_Details_Visibility_Params
{
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Update List View Area
struct UBP_FortExpeditionOverviewWidget_C_Update_List_View_Area_Params
{
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleCollectExpeditionAction
struct UBP_FortExpeditionOverviewWidget_C_HandleCollectExpeditionAction_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleAbandonExpeditionAction
struct UBP_FortExpeditionOverviewWidget_C_HandleAbandonExpeditionAction_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleBuildExpeditionAction
struct UBP_FortExpeditionOverviewWidget_C_HandleBuildExpeditionAction_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Determine Active Input Action
struct UBP_FortExpeditionOverviewWidget_C_Determine_Active_Input_Action_Params
{
	class UFortExpeditionItem*                         InItem;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Hide All Input Actions
struct UBP_FortExpeditionOverviewWidget_C_Hide_All_Input_Actions_Params
{
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Set Current Tab Name
struct UBP_FortExpeditionOverviewWidget_C_Set_Current_Tab_Name_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.On Widget Activated
struct UBP_FortExpeditionOverviewWidget_C_On_Widget_Activated_Params
{
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.FireCollectCompletedExpedition
struct UBP_FortExpeditionOverviewWidget_C_FireCollectCompletedExpedition_Params
{
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Setup Expedition Details Widget
struct UBP_FortExpeditionOverviewWidget_C_Setup_Expedition_Details_Widget_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Construct
struct UBP_FortExpeditionOverviewWidget_C_Construct_Params
{
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.OnExpeditionTabSelected
struct UBP_FortExpeditionOverviewWidget_C_OnExpeditionTabSelected_Params
{
	struct FName*                                      TabNameID;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleAbandonExpedition
struct UBP_FortExpeditionOverviewWidget_C_HandleAbandonExpedition_Params
{
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.BndEvt__ExpeditionTabList_K2Node_ComponentBoundEvent_10_OnTabButtonCreated__DelegateSignature
struct UBP_FortExpeditionOverviewWidget_C_BndEvt__ExpeditionTabList_K2Node_ComponentBoundEvent_10_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.Destruct
struct UBP_FortExpeditionOverviewWidget_C_Destruct_Params
{
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.OnExpeditionOverviewRefresh
struct UBP_FortExpeditionOverviewWidget_C_OnExpeditionOverviewRefresh_Params
{
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_3_OnExpeditionListItemSelected__DelegateSignature
struct UBP_FortExpeditionOverviewWidget_C_BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_3_OnExpeditionListItemSelected__DelegateSignature_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.HandleOnListViewRefreshed
struct UBP_FortExpeditionOverviewWidget_C_HandleOnListViewRefreshed_Params
{
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_12_OnItemClicked__DelegateSignature
struct UBP_FortExpeditionOverviewWidget_C_BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_12_OnItemClicked__DelegateSignature_Params
{
	class UObject*                                     Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_38_OnItemHovered__DelegateSignature
struct UBP_FortExpeditionOverviewWidget_C_BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_38_OnItemHovered__DelegateSignature_Params
{
	class UObject*                                     Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.ExecuteUbergraph_BP_FortExpeditionOverviewWidget
struct UBP_FortExpeditionOverviewWidget_C_ExecuteUbergraph_BP_FortExpeditionOverviewWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.OnCollectCompletedExpedition__DelegateSignature
struct UBP_FortExpeditionOverviewWidget_C_OnCollectCompletedExpedition__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
