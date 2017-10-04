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

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Get Item Description
struct UFrontEndRewards_ListRewards_C_Get_Item_Description_Params
{
	class UFortItem*                                   Object;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       OutDescription;                                           // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Set DisplayName and Description Widget
struct UFrontEndRewards_ListRewards_C_Set_DisplayName_and_Description_Widget_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Description;                                              // (CPF_Parm)
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Clear DisplayName and Description Widgets
struct UFrontEndRewards_ListRewards_C_Clear_DisplayName_and_Description_Widgets_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SkipTransitionIn
struct UFrontEndRewards_ListRewards_C_SkipTransitionIn_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.TickTransitionIn
struct UFrontEndRewards_ListRewards_C_TickTransitionIn_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.BindEvents
struct UFrontEndRewards_ListRewards_C_BindEvents_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleTransitionInComplete
struct UFrontEndRewards_ListRewards_C_HandleTransitionInComplete_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Reset
struct UFrontEndRewards_ListRewards_C_Reset_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.AddInputActions
struct UFrontEndRewards_ListRewards_C_AddInputActions_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.DisableInputActions
struct UFrontEndRewards_ListRewards_C_DisableInputActions_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.EnableInputActions
struct UFrontEndRewards_ListRewards_C_EnableInputActions_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.PopulateFromCardsList
struct UFrontEndRewards_ListRewards_C_PopulateFromCardsList_Params
{
	TArray<class URewards_ItemCard_C*>                 Cards;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleInspectAction
struct UFrontEndRewards_ListRewards_C_HandleInspectAction_Params
{
	bool                                               Committed;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleScrollAction
struct UFrontEndRewards_ListRewards_C_HandleScrollAction_Params
{
	bool                                               Committed;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleCollectAllAction
struct UFrontEndRewards_ListRewards_C_HandleCollectAllAction_Params
{
	bool                                               Committed;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetArrowVisibility
struct UFrontEndRewards_ListRewards_C_SetArrowVisibility_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleLastPopInFinished
struct UFrontEndRewards_ListRewards_C_HandleLastPopInFinished_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleOutroAnimFinished
struct UFrontEndRewards_ListRewards_C_HandleOutroAnimFinished_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SelectCard
struct UFrontEndRewards_ListRewards_C_SelectCard_Params
{
	int                                                InNewIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetCardSelected
struct UFrontEndRewards_ListRewards_C_SetCardSelected_Params
{
	class URewards_ItemCard_C*                         Card;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleCardClicked
struct UFrontEndRewards_ListRewards_C_HandleCardClicked_Params
{
	class URewards_ItemCard_C*                         Card;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.ClearCards
struct UFrontEndRewards_ListRewards_C_ClearCards_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.PlayCardSlide
struct UFrontEndRewards_ListRewards_C_PlayCardSlide_Params
{
	class URewards_ItemCard_C*                         RewardsItemCard;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StaggerDelay;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetItemDescription
struct UFrontEndRewards_ListRewards_C_SetItemDescription_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SetCardAlignment
struct UFrontEndRewards_ListRewards_C_SetCardAlignment_Params
{
	class UWidget*                                     CardWidget;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SelectionIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SelectPreviousCard
struct UFrontEndRewards_ListRewards_C_SelectPreviousCard_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.HandleLastSlideAnimFinished
struct UFrontEndRewards_ListRewards_C_HandleLastSlideAnimFinished_Params
{
	class URewards_ItemCard_C*                         RewardsItemCard;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.GetCardAlignment
struct UFrontEndRewards_ListRewards_C_GetCardAlignment_Params
{
	int                                                CardQueueIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CardListIndex;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   Alignment;                                                // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FAnchors                                    Anchors;                                                  // (CPF_Parm, CPF_OutParm)
	float                                              Scale;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Offset;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Angle;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   Translation;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	float                                              DropShadowDepth;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.SelectNextCard
struct UFrontEndRewards_ListRewards_C_SelectNextCard_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.AddCard
struct UFrontEndRewards_ListRewards_C_AddCard_Params
{
	class URewards_ItemCard_C*                         Card;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.InitDesignView
struct UFrontEndRewards_ListRewards_C_InitDesignView_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.PreConstruct
struct UFrontEndRewards_ListRewards_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.DelayedCheckScroll
struct UFrontEndRewards_ListRewards_C_DelayedCheckScroll_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.Construct
struct UFrontEndRewards_ListRewards_C_Construct_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.TransitionInBegin
struct UFrontEndRewards_ListRewards_C_TransitionInBegin_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.TransitionOutBegin
struct UFrontEndRewards_ListRewards_C_TransitionOutBegin_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnNavigationLeft
struct UFrontEndRewards_ListRewards_C_OnNavigationLeft_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnNavigationRight
struct UFrontEndRewards_ListRewards_C_OnNavigationRight_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnActivated
struct UFrontEndRewards_ListRewards_C_OnActivated_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnDeactivated
struct UFrontEndRewards_ListRewards_C_OnDeactivated_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.OnPrimaryAction
struct UFrontEndRewards_ListRewards_C_OnPrimaryAction_Params
{
};

// Function FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C.ExecuteUbergraph_FrontEndRewards_ListRewards
struct UFrontEndRewards_ListRewards_C_ExecuteUbergraph_FrontEndRewards_ListRewards_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
