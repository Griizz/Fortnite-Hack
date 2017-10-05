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

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetContributingControllersNearActor
struct UMissionBlueprintFunctionLibrary_C_GetContributingControllersNearActor_Params
{
	float                                              Distance;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AFortPlayerController*>               PlayerControllersNearby;                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	bool                                               SuccessfullyFoundPlayer;                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.PointLocationsBetweenTwoVectors
struct UMissionBlueprintFunctionLibrary_C_PointLocationsBetweenTwoVectors_Params
{
	struct FVector                                     Vector_1;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     Vector_2;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	int                                                HowManyPoints;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FVector>                             VectorPoints;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	bool                                               SuccessfullyFoundPoints;                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetCurrentDifficulty
struct UMissionBlueprintFunctionLibrary_C_GetCurrentDifficulty_Params
{
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Difficulty;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Success;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ApplyDifficultyOffset
struct UMissionBlueprintFunctionLibrary_C_ApplyDifficultyOffset_Params
{
	struct FName                                       RowName;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BaseDifficulty;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Success;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DistanceBetweenTwoVectors
struct UMissionBlueprintFunctionLibrary_C_DistanceBetweenTwoVectors_Params
{
	struct FVector                                     Vector1;                                                  // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     Vector2;                                                  // (CPF_Parm, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Distance;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuest
struct UMissionBlueprintFunctionLibrary_C_HasPlayerCompletedQuest_Params
{
	class AFortPlayerController*                       PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortQuestItemDefinition*                    QuestReference;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       QuestBackendName;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortPlayerController*                       PlayerControllerOut;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CompletedQuest;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.SeperatePlayersWhoNeedQuest
struct UMissionBlueprintFunctionLibrary_C_SeperatePlayersWhoNeedQuest_Params
{
	class UFortQuestItemDefinition*                    QuestItemReference;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       QuestObjectiveBackendName;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AFortPlayerController*>               PlayersWhoNeedQuest;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	TArray<class AFortPlayerController*>               PlayersWhoDoNotNeedQuest;                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.BasicBuildingItemDrop
struct UMissionBlueprintFunctionLibrary_C_BasicBuildingItemDrop_Params
{
	TEnumAsByte<EnumEventWorldItemDrop>                Item_Drop_Level;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LootDropLocation;                                         // (CPF_Parm, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GrantSurvivorBadge
struct UMissionBlueprintFunctionLibrary_C_GrantSurvivorBadge_Params
{
	int                                                LootLevelIn;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESurvivorBadgeTypes>                   BadgeType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetBuildingRecommendation
struct UMissionBlueprintFunctionLibrary_C_GetBuildingRecommendation_Params
{
	struct FName                                       RowName;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BuildingCount;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               RowFound;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.Random_360_VectorInRange
struct UMissionBlueprintFunctionLibrary_C_Random_360_VectorInRange_Params
{
	float                                              MinDistance;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDistance;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Random_Vector_Result_;                                    // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPawnNearActor
struct UMissionBlueprintFunctionLibrary_C_AnyPawnNearActor_Params
{
	float                                              DistanceToCheck;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsPawnNearActor;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AFortPawn*>                           PawnsNearActor;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GiveQuestUpdateToPlayers
struct UMissionBlueprintFunctionLibrary_C_GiveQuestUpdateToPlayers_Params
{
	class UFortQuestItemDefinition*                    Quest_Reference;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Quest_Objective_Backend_Name;                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDataTableRowHandle                         ObjectiveStatEvent;                                       // (CPF_Parm)
	TArray<class AFortPlayerController*>               PlayerControllersForUpdate;                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DropChance
struct UMissionBlueprintFunctionLibrary_C_DropChance_Params
{
	float                                              DropPercentChance;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DropResult;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPlayerNearActor
struct UMissionBlueprintFunctionLibrary_C_AnyPlayerNearActor_Params
{
	float                                              DistanceToCheck;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsPlayerNearActor;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AFortPlayerPawn*>                     PlayersNearActor;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.FlashObjectiveUI
struct UMissionBlueprintFunctionLibrary_C_FlashObjectiveUI_Params
{
	class AFortObjectiveBase*                          Objective_Reference;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStopRescue
struct UMissionBlueprintFunctionLibrary_C_NPC_DroneStopRescue_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Instigator;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStartRescue
struct UMissionBlueprintFunctionLibrary_C_NPC_DroneStartRescue_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Instigator;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ListPlayersWhoNeedQuest
struct UMissionBlueprintFunctionLibrary_C_ListPlayersWhoNeedQuest_Params
{
	class UFortQuestItemDefinition*                    Quest_Reference;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Quest_Backend_Name;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AFortPlayerController*>               Player_Controllers_Who_Require_The_Quest;                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	bool                                               DoesAnyoneRequireTheQuest;                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesAnyoneRequireQuest
struct UMissionBlueprintFunctionLibrary_C_DoesAnyoneRequireQuest_Params
{
	class UFortQuestItemDefinition*                    QuestReference;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Quest_Backend_Name;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               SomePlayerNeedsTheQuest;                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.QuestObjectiveCountAchieved
struct UMissionBlueprintFunctionLibrary_C_QuestObjectiveCountAchieved_Params
{
	class AFortPlayerController*                       PlayerControllerReference;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortQuestItemDefinition*                    Quest_Item_Reference;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDataTableRowHandle                         ObjectiveStatHandle;                                      // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Quest_Count_Achieved;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Quest_Count_Required;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               SuccessfullyFoundCount;                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HighlightQuestActor
struct UMissionBlueprintFunctionLibrary_C_HighlightQuestActor_Params
{
	class AActor*                                      ActorToHighlight;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HighlightEnabled;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesPlayerHaveQuest
struct UMissionBlueprintFunctionLibrary_C_DoesPlayerHaveQuest_Params
{
	class AFortPlayerController*                       PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortQuestItemDefinition*                    Quest_Item_Reference;                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Quest_Item_Objective_Backend_Name;                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               QuestValid;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortPlayerController*                       PlayerControllerRef;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetObjectiveBadgeIconBrush
struct UMissionBlueprintFunctionLibrary_C_GetObjectiveBadgeIconBrush_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTag                                RewardTag;                                                // (CPF_Parm)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSlateBrush                                 IconBrush;                                                // (CPF_Parm, CPF_OutParm)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.UnRegisterUI UpdatesWithDamageEvents
struct UMissionBlueprintFunctionLibrary_C_UnRegisterUI_UpdatesWithDamageEvents_Params
{
	class AActor*                                      ActorToUnRegisterWith;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortMissionState*                           MissionState;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.RegisterUI UpdatesWithDamageEvents
struct UMissionBlueprintFunctionLibrary_C_RegisterUI_UpdatesWithDamageEvents_Params
{
	class AActor*                                      ActorToRegisterWith;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortMissionState*                           MissionState;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
