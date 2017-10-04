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

// Function BluGlo_Node.BluGlo_Node_C.BlueprintGetInteractionString
struct ABluGlo_Node_C_BlueprintGetInteractionString_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function BluGlo_Node.BluGlo_Node_C.OnRep_CanInteract
struct ABluGlo_Node_C_OnRep_CanInteract_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.BlueprintCanInteract
struct ABluGlo_Node_C_BlueprintCanInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BluGlo_Node.BluGlo_Node_C.OnRep_DeActivateEffects
struct ABluGlo_Node_C_OnRep_DeActivateEffects_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.OnRep_ActivateEffects
struct ABluGlo_Node_C_OnRep_ActivateEffects_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.UserConstructionScript
struct ABluGlo_Node_C_UserConstructionScript_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.Trail__FinishedFunc
struct ABluGlo_Node_C_Trail__FinishedFunc_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.Trail__UpdateFunc
struct ABluGlo_Node_C_Trail__UpdateFunc_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.ReceiveBeginPlay
struct ABluGlo_Node_C_ReceiveBeginPlay_Params
{
};

// Function BluGlo_Node.BluGlo_Node_C.BlueprintOnInteract
struct ABluGlo_Node_C_BlueprintOnInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BluGlo_Node.BluGlo_Node_C.HandleMissionEvent_LocateBluGlo
struct ABluGlo_Node_C_HandleMissionEvent_LocateBluGlo_Params
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

// Function BluGlo_Node.BluGlo_Node_C.ShowSpawnTrail
struct ABluGlo_Node_C_ShowSpawnTrail_Params
{
	struct FVector                                     StartLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	float                                              AnimDelay;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BluGlo_Node.BluGlo_Node_C.ExecuteUbergraph_BluGlo_Node
struct ABluGlo_Node_C_ExecuteUbergraph_BluGlo_Node_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
