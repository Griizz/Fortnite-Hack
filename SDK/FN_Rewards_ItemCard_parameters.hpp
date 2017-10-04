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

// Function Rewards_ItemCard.Rewards_ItemCard_C.SetOutpostInventoryNotification
struct URewards_ItemCard_C_SetOutpostInventoryNotification_Params
{
	bool                                               ShouldShow;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.SetOpaque
struct URewards_ItemCard_C_SetOpaque_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.SkipPopInAnimation
struct URewards_ItemCard_C_SkipPopInAnimation_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.SetTransparent
struct URewards_ItemCard_C_SetTransparent_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.PlaySecondaryPopInAnimation
struct URewards_ItemCard_C_PlaySecondaryPopInAnimation_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.PlayPrimaryPopInAnimation
struct URewards_ItemCard_C_PlayPrimaryPopInAnimation_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.GetDropShadowDepth
struct URewards_ItemCard_C_GetDropShadowDepth_Params
{
	float                                              DropShadowDepth;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.InitDropShadow
struct URewards_ItemCard_C_InitDropShadow_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.SetDropShadowSize
struct URewards_ItemCard_C_SetDropShadowSize_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.SetDropShadowDepth
struct URewards_ItemCard_C_SetDropShadowDepth_Params
{
	float                                              ShadowDepth;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.HideDropShadow
struct URewards_ItemCard_C_HideDropShadow_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.ShowDropShadow
struct URewards_ItemCard_C_ShowDropShadow_Params
{
	float                                              ShadowDepth;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.StartResizeAnimation
struct URewards_ItemCard_C_StartResizeAnimation_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.SizeUp
struct URewards_ItemCard_C_SizeUp_Params
{
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Delay;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DropShadowDepth;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.TickResizeAnimation
struct URewards_ItemCard_C_TickResizeAnimation_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.SizeDown
struct URewards_ItemCard_C_SizeDown_Params
{
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Delay;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DropShadowDepth;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.GetCardSize
struct URewards_ItemCard_C_GetCardSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.GetItemToRepresent
struct URewards_ItemCard_C_GetItemToRepresent_Params
{
	class UFortItem*                                   ItemToRepresent;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.HandlePopInAnimationFinished
struct URewards_ItemCard_C_HandlePopInAnimationFinished_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.SetInspectAction
struct URewards_ItemCard_C_SetInspectAction_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.TickScaleAnimation
struct URewards_ItemCard_C_TickScaleAnimation_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.PlayScaleAnimation
struct URewards_ItemCard_C_PlayScaleAnimation_Params
{
	float                                              TargetScale;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DropShadowDepth;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.StartSlideAnimation
struct URewards_ItemCard_C_StartSlideAnimation_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.EndSlideAnimation
struct URewards_ItemCard_C_EndSlideAnimation_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.PlaySlideAnimation
struct URewards_ItemCard_C_PlaySlideAnimation_Params
{
	struct FVector2D                                   TargetAlignment;                                          // (CPF_Parm, CPF_IsPlainOldData)
	struct FAnchors                                    TargetAnchors;                                            // (CPF_Parm)
	float                                              TargetScale;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TargetOffset;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TargetAngle;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StaggerDelay;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   TargetTranslation;                                        // (CPF_Parm, CPF_IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.TickSlideAnimation
struct URewards_ItemCard_C_TickSlideAnimation_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.SetItemToRepresent
struct URewards_ItemCard_C_SetItemToRepresent_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.InitDesignView
struct URewards_ItemCard_C_InitDesignView_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.PreConstruct
struct URewards_ItemCard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.BndEvt__ButtonInspect_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct URewards_ItemCard_C_BndEvt__ButtonInspect_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.Construct
struct URewards_ItemCard_C_Construct_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.ExecuteUbergraph_Rewards_ItemCard
struct URewards_ItemCard_C_ExecuteUbergraph_Rewards_ItemCard_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.OnPopInAnimationFinished__DelegateSignature
struct URewards_ItemCard_C_OnPopInAnimationFinished__DelegateSignature_Params
{
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.OnResizeAnimationFinished__DelegateSignature
struct URewards_ItemCard_C_OnResizeAnimationFinished__DelegateSignature_Params
{
	class URewards_ItemCard_C*                         RewardsItemCard;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.OnInspectClicked__DelegateSignature
struct URewards_ItemCard_C_OnInspectClicked__DelegateSignature_Params
{
	class URewards_ItemCard_C*                         Card;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Rewards_ItemCard.Rewards_ItemCard_C.OnSlideAnimationFinished__DelegateSignature
struct URewards_ItemCard_C_OnSlideAnimationFinished__DelegateSignature_Params
{
	class URewards_ItemCard_C*                         RewardsItemCard;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
