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

// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.OnRep_bIsRiftArcsActive?
struct AB_DtB_FloatingRift_C_OnRep_bIsRiftArcsActive__Params
{
};

// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.UserConstructionScript
struct AB_DtB_FloatingRift_C_UserConstructionScript_Params
{
};

// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AB_DtB_FloatingRift_C_BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct AB_DtB_FloatingRift_C_BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.ReceiveBeginPlay
struct AB_DtB_FloatingRift_C_ReceiveBeginPlay_Params
{
};

// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.BndEvt__KillVolume_K2Node_ComponentBoundEvent_84_ComponentBeginOverlapSignature__DelegateSignature
struct AB_DtB_FloatingRift_C_BndEvt__KillVolume_K2Node_ComponentBoundEvent_84_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.HandleMissionEvent_NewPlayer
struct AB_DtB_FloatingRift_C_HandleMissionEvent_NewPlayer_Params
{
	struct FGuid                                       MissionGuid;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (CPF_Parm)
	class UFortMissionEventParams*                     Params;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GenericInt;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GenericFloat;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       GenericText;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (CPF_Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.BndEvt__DispatcherCallOutVolume_K2Node_ComponentBoundEvent_70_ComponentBeginOverlapSignature__DelegateSignature
struct AB_DtB_FloatingRift_C_BndEvt__DispatcherCallOutVolume_K2Node_ComponentBoundEvent_70_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.BndEvt__P_DtBRiftCore_K2Node_ComponentBoundEvent_12_ParticleBurstSignature__DelegateSignature
struct AB_DtB_FloatingRift_C_BndEvt__P_DtBRiftCore_K2Node_ComponentBoundEvent_12_ParticleBurstSignature__DelegateSignature_Params
{
	struct FName                                       EventName;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EmitterTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ParticleCount;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.ExecuteUbergraph_B_DtB_FloatingRift
struct AB_DtB_FloatingRift_C_ExecuteUbergraph_B_DtB_FloatingRift_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.CallOutVolumeOverlap__DelegateSignature
struct AB_DtB_FloatingRift_C_CallOutVolumeOverlap__DelegateSignature_Params
{
	class AFortPlayerPawn*                             FortPlayerPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_DtB_FloatingRift.B_DtB_FloatingRift_C.RiftLocated__DelegateSignature
struct AB_DtB_FloatingRift_C_RiftLocated__DelegateSignature_Params
{
	class AFortPlayerPawn*                             FortPlayPawn;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
