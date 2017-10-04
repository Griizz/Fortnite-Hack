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

// Function ItemInspectScreen.ItemInspectScreen_C.SetTabButtonStyle
struct UItemInspectScreen_C_SetTabButtonStyle_Params
{
	class UObject*                                     Object;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.ShowPreviewHeader
struct UItemInspectScreen_C_ShowPreviewHeader_Params
{
	bool                                               ShowPreviewLabel;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.Handle3DView
struct UItemInspectScreen_C_Handle3DView_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.RefreshCallout
struct UItemInspectScreen_C_RefreshCallout_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.RefreshActionHandlers
struct UItemInspectScreen_C_RefreshActionHandlers_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionComplete
struct UItemInspectScreen_C_HandleEvolutionComplete_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       ResultingItems;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function ItemInspectScreen.ItemInspectScreen_C.RefreshOnUpgrade
struct UItemInspectScreen_C_RefreshOnUpgrade_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleCursorModeChanging
struct UItemInspectScreen_C_HandleCursorModeChanging_Params
{
	bool                                               IsEnabled;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.OpenItemInspect (Function)
struct UItemInspectScreen_C_OpenItemInspect__Function__Params
{
	class UFortItem*                                   ItemToInspect;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShouldAllowUpgrading;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShouldAllowEvolution;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShouldAllowFavoriting;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShouldShowPreviewDisplay;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.ResetDetailsPanel
struct UItemInspectScreen_C_ResetDetailsPanel_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.SetupActionHandlers
struct UItemInspectScreen_C_SetupActionHandlers_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.GetFirstEvolutionOption
struct UItemInspectScreen_C_GetFirstEvolutionOption_Params
{
	class UFortItem*                                   EvolutionItem;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceSelected
struct UItemInspectScreen_C_HandleEvolutionChoiceSelected_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RecipeIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceUnhovered
struct UItemInspectScreen_C_HandleEvolutionChoiceUnhovered_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceHovered
struct UItemInspectScreen_C_HandleEvolutionChoiceHovered_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.SetInspectMode
struct UItemInspectScreen_C_SetInspectMode_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleUpgrade
struct UItemInspectScreen_C_HandleUpgrade_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolution
struct UItemInspectScreen_C_HandleEvolution_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleView
struct UItemInspectScreen_C_HandleView_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleFavorite
struct UItemInspectScreen_C_HandleFavorite_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleBack
struct UItemInspectScreen_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.SetItemToRepresent
struct UItemInspectScreen_C_SetItemToRepresent_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203
struct UItemInspectScreen_C_OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature
struct UItemInspectScreen_C_BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature
struct UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature
struct UItemInspectScreen_C_BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature
struct UItemInspectScreen_C_BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature_Params
{
	bool                                               bItemChanged;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAmmoChanged;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIngredientsChanged;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature
struct UItemInspectScreen_C_BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.Construct
struct UItemInspectScreen_C_Construct_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_0_OnEvolutionOptionHovered__DelegateSignature
struct UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_0_OnEvolutionOptionHovered__DelegateSignature_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_1_OnEvolutionOptionUnhovered__DelegateSignature
struct UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_1_OnEvolutionOptionUnhovered__DelegateSignature_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature
struct UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RecipeIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature
struct UItemInspectScreen_C_BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.OnActivated
struct UItemInspectScreen_C_OnActivated_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.OpenItemInspect
struct UItemInspectScreen_C_OpenItemInspect_Params
{
	class UFortItem**                                  ItemToInspect;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              ShouldAllowUpgrading;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              ShouldAllowEvolution;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              ShouldAllowFavorite;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              IsTemporaryItem;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.Destruct
struct UItemInspectScreen_C_Destruct_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.OnDeactivated
struct UItemInspectScreen_C_OnDeactivated_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__DetailPanelTabList-PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature
struct UItemInspectScreen_C_BndEvt__DetailPanelTabList_PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.ExecuteUbergraph_ItemInspectScreen
struct UItemInspectScreen_C_ExecuteUbergraph_ItemInspectScreen_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
