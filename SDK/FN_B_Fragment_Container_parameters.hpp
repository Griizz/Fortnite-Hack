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

// Function B_Fragment_Container.B_Fragment_Container_C.ForceFeedbackInteract
struct AB_Fragment_Container_C_ForceFeedbackInteract_Params
{
	bool                                               Soft;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOrbTaken
struct AB_Fragment_Container_C_OnRep_IsOrbTaken_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOn
struct AB_Fragment_Container_C_OnRep_IsOn_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.SetOutlander
struct AB_Fragment_Container_C_SetOutlander_Params
{
	class AActor*                                      NewOutlander;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.SetAwake
struct AB_Fragment_Container_C_SetAwake_Params
{
	bool                                               NewAwake;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.UpdateShouldTick
struct AB_Fragment_Container_C_UpdateShouldTick_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintGetFailedInteractionString
struct AB_Fragment_Container_C_BlueprintGetFailedInteractionString_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOpen
struct AB_Fragment_Container_C_OnRep_IsOpen_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.DelayedDestroy
struct AB_Fragment_Container_C_DelayedDestroy_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_BuffType
struct AB_Fragment_Container_C_OnRep_BuffType_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintGetInteractionString
struct AB_Fragment_Container_C_BlueprintGetInteractionString_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintCanInteract
struct AB_Fragment_Container_C_BlueprintCanInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.UserConstructionScript
struct AB_Fragment_Container_C_UserConstructionScript_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__FinishedFunc
struct AB_Fragment_Container_C_VerticalMovementTimeline__FinishedFunc_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__UpdateFunc
struct AB_Fragment_Container_C_VerticalMovementTimeline__UpdateFunc_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__Up__EventFunc
struct AB_Fragment_Container_C_VerticalMovementTimeline__Up__EventFunc_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__down__EventFunc
struct AB_Fragment_Container_C_VerticalMovementTimeline__down__EventFunc_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.ReceiveBeginPlay
struct AB_Fragment_Container_C_ReceiveBeginPlay_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.OnDeathServer
struct AB_Fragment_Container_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintOnInteract
struct AB_Fragment_Container_C_BlueprintOnInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.ActivateFX
struct AB_Fragment_Container_C_ActivateFX_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature
struct AB_Fragment_Container_C_BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature
struct AB_Fragment_Container_C_BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.ReceiveTick
struct AB_Fragment_Container_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.MoveUp
struct AB_Fragment_Container_C_MoveUp_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.PowerDown
struct AB_Fragment_Container_C_PowerDown_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.MoveDown
struct AB_Fragment_Container_C_MoveDown_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.ShowOnMiniMap
struct AB_Fragment_Container_C_ShowOnMiniMap_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.StartHide
struct AB_Fragment_Container_C_StartHide_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.Reset_Activation
struct AB_Fragment_Container_C_Reset_Activation_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintOnBeginInteract
struct AB_Fragment_Container_C_BlueprintOnBeginInteract_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.MultiFeedback
struct AB_Fragment_Container_C_MultiFeedback_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.SoftFeedback
struct AB_Fragment_Container_C_SoftFeedback_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.ExecuteUbergraph_B_Fragment_Container
struct AB_Fragment_Container_C_ExecuteUbergraph_B_Fragment_Container_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
