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

// Function BluGloManager.BluGloManager_C.IssueBluGloRequestForMission
struct ABluGloManager_C_IssueBluGloRequestForMission_Params
{
	class AFortMission*                                Mission;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      ActorToSpawnBluGloFrom;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.StartSpawnFXAndAudio
struct ABluGloManager_C_StartSpawnFXAndAudio_Params
{
	struct FVector                                     SpawnCenter;                                              // (CPF_Parm, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    SpawnFXEmitter;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.SpawnBluGloGroup
struct ABluGloManager_C_SpawnBluGloGroup_Params
{
	class AActor*                                      ActorToSpawnFrom;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LocationToSpawnFromIfActorInvalid;                        // (CPF_Parm, CPF_IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumBluGloToSpawn;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.ChooseSpawnCenter
struct ABluGloManager_C_ChooseSpawnCenter_Params
{
	class AActor*                                      ActorToSpawnFrom;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LocationToSpawnFrom;                                      // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     SpawnCenter;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.BuildSpawnLocationsRandomly
struct ABluGloManager_C_BuildSpawnLocationsRandomly_Params
{
	struct FVector                                     LocationToSpawnFrom;                                      // (CPF_Parm, CPF_IsPlainOldData)
	int                                                NumBluGloToSpawn;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FVector>                             LocationsForSpawningBluGlo;                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function BluGloManager.BluGloManager_C.BuildSpawnLocationsFromQueryLocations
struct ABluGloManager_C_BuildSpawnLocationsFromQueryLocations_Params
{
	int                                                NumBluGloToSpawn;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FVector>                             QueryResultLocations;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<struct FVector>                             LocationsForSpawningBluGlo;                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function BluGloManager.BluGloManager_C.BuildSpawnLocations
struct ABluGloManager_C_BuildSpawnLocations_Params
{
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumBluGloToSpawn;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SpawnCenter;                                              // (CPF_Parm, CPF_IsPlainOldData)
	TArray<struct FVector>                             LocationsForSpawningBluGlo;                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function BluGloManager.BluGloManager_C.IssueBluGloRequest
struct ABluGloManager_C_IssueBluGloRequest_Params
{
	int                                                NumBluGloToSpawn;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      ActorToSpawnFrom;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LocationToSpawnFromIfActorInvalid;                        // (CPF_Parm, CPF_IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.SpawnBluGlo
struct ABluGloManager_C_SpawnBluGlo_Params
{
	struct FVector                                     SpawnLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     SpawnFromLocation;                                        // (CPF_Parm, CPF_IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.RemoveOccupiedNodes
struct ABluGloManager_C_RemoveOccupiedNodes_Params
{
};

// Function BluGloManager.BluGloManager_C.RequestedBluGo
struct ABluGloManager_C_RequestedBluGo_Params
{
	class AFortMission*                                Mission;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     EQS_Start_Location;                                       // (CPF_Parm, CPF_IsPlainOldData)
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.UserConstructionScript
struct ABluGloManager_C_UserConstructionScript_Params
{
};

// Function BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseActor
struct ABluGloManager_C_HandleMissionEvent_RequestBluGloSpawnUseActor_Params
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

// Function BluGloManager.BluGloManager_C.StopSpawnFX
struct ABluGloManager_C_StopSpawnFX_Params
{
	bool                                               off;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.OnBluGloQueryFinished
struct ABluGloManager_C_OnBluGloQueryFinished_Params
{
	class AActor*                                      ActorToSpawnFrom;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LocationToSpawnFromIfActorInvalid;                        // (CPF_Parm, CPF_IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumBluGloToSpawn;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.SpawnFXComplete
struct ABluGloManager_C_SpawnFXComplete_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.SpawnBluGloGroupEvent
struct ABluGloManager_C_SpawnBluGloGroupEvent_Params
{
	struct FVector                                     SpawnCenter;                                              // (CPF_Parm, CPF_IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.AddMoreBluGloInWorld
struct ABluGloManager_C_AddMoreBluGloInWorld_Params
{
	class AFortMission*                                Mission;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseEQS
struct ABluGloManager_C_HandleMissionEvent_RequestBluGloSpawnUseEQS_Params
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

// Function BluGloManager.BluGloManager_C.ExecuteUbergraph_BluGloManager
struct ABluGloManager_C_ExecuteUbergraph_BluGloManager_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
