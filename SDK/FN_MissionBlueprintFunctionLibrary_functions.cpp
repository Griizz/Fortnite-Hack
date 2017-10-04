// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetCurrentDifficulty
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Difficulty                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_GetCurrentDifficulty(class UObject* __WorldContext, float* Difficulty, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetCurrentDifficulty");

	UMissionBlueprintFunctionLibrary_C_GetCurrentDifficulty_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difficulty != nullptr)
		*Difficulty = params.Difficulty;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ApplyDifficultyOffset
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BaseDifficulty                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_ApplyDifficultyOffset(const struct FName& RowName, float BaseDifficulty, class UObject* __WorldContext, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ApplyDifficultyOffset");

	UMissionBlueprintFunctionLibrary_C_ApplyDifficultyOffset_Params params;
	params.RowName = RowName;
	params.BaseDifficulty = BaseDifficulty;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DistanceBetweenTwoVectors
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Vector1                        (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Vector2                        (CPF_Parm, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Distance                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_DistanceBetweenTwoVectors(const struct FVector& Vector1, const struct FVector& Vector2, class UObject* __WorldContext, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DistanceBetweenTwoVectors");

	UMissionBlueprintFunctionLibrary_C_DistanceBetweenTwoVectors_Params params;
	params.Vector1 = Vector1;
	params.Vector2 = Vector2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuest
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortPlayerController*   PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortQuestItemDefinition* QuestReference                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   QuestBackendName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFortPlayerController*   PlayerControllerOut            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           CompletedQuest                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_HasPlayerCompletedQuest(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, const struct FName& QuestBackendName, class UObject* __WorldContext, class AFortPlayerController** PlayerControllerOut, bool* CompletedQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuest");

	UMissionBlueprintFunctionLibrary_C_HasPlayerCompletedQuest_Params params;
	params.PlayerController = PlayerController;
	params.QuestReference = QuestReference;
	params.QuestBackendName = QuestBackendName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerControllerOut != nullptr)
		*PlayerControllerOut = params.PlayerControllerOut;
	if (CompletedQuest != nullptr)
		*CompletedQuest = params.CompletedQuest;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.SeperatePlayersWhoNeedQuest
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition* QuestItemReference             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   QuestObjectiveBackendName      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AFortPlayerController*> PlayersWhoNeedQuest            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<class AFortPlayerController*> PlayersWhoDoNotNeedQuest       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UMissionBlueprintFunctionLibrary_C::STATIC_SeperatePlayersWhoNeedQuest(class UFortQuestItemDefinition* QuestItemReference, const struct FName& QuestObjectiveBackendName, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayersWhoNeedQuest, TArray<class AFortPlayerController*>* PlayersWhoDoNotNeedQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.SeperatePlayersWhoNeedQuest");

	UMissionBlueprintFunctionLibrary_C_SeperatePlayersWhoNeedQuest_Params params;
	params.QuestItemReference = QuestItemReference;
	params.QuestObjectiveBackendName = QuestObjectiveBackendName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayersWhoNeedQuest != nullptr)
		*PlayersWhoNeedQuest = params.PlayersWhoNeedQuest;
	if (PlayersWhoDoNotNeedQuest != nullptr)
		*PlayersWhoDoNotNeedQuest = params.PlayersWhoDoNotNeedQuest;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.BasicBuildingItemDrop
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EnumEventWorldItemDrop> Item_Drop_Level                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 LootDropLocation               (CPF_Parm, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_BasicBuildingItemDrop(TEnumAsByte<EnumEventWorldItemDrop> Item_Drop_Level, const struct FVector& LootDropLocation, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.BasicBuildingItemDrop");

	UMissionBlueprintFunctionLibrary_C_BasicBuildingItemDrop_Params params;
	params.Item_Drop_Level = Item_Drop_Level;
	params.LootDropLocation = LootDropLocation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GrantSurvivorBadge
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            LootLevelIn                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ESurvivorBadgeTypes> BadgeType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_GrantSurvivorBadge(int LootLevelIn, TEnumAsByte<ESurvivorBadgeTypes> BadgeType, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GrantSurvivorBadge");

	UMissionBlueprintFunctionLibrary_C_GrantSurvivorBadge_Params params;
	params.LootLevelIn = LootLevelIn;
	params.BadgeType = BadgeType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetBuildingRecommendation
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            BuildingCount                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           RowFound                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_GetBuildingRecommendation(const struct FName& RowName, class UObject* __WorldContext, int* BuildingCount, bool* RowFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetBuildingRecommendation");

	UMissionBlueprintFunctionLibrary_C_GetBuildingRecommendation_Params params;
	params.RowName = RowName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuildingCount != nullptr)
		*BuildingCount = params.BuildingCount;
	if (RowFound != nullptr)
		*RowFound = params.RowFound;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.Random_360_VectorInRange
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          MinDistance                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxDistance                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Random_Vector_Result_          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_Random_360_VectorInRange(float MinDistance, float MaxDistance, class UObject* __WorldContext, struct FVector* Random_Vector_Result_)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.Random_360_VectorInRange");

	UMissionBlueprintFunctionLibrary_C_Random_360_VectorInRange_Params params;
	params.MinDistance = MinDistance;
	params.MaxDistance = MaxDistance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Random_Vector_Result_ != nullptr)
		*Random_Vector_Result_ = params.Random_Vector_Result_;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPawnNearActor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DistanceToCheck                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsPawnNearActor                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AFortPawn*>       PawnsNearActor                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UMissionBlueprintFunctionLibrary_C::STATIC_AnyPawnNearActor(float DistanceToCheck, class AActor* Actor, class UObject* __WorldContext, bool* IsPawnNearActor, TArray<class AFortPawn*>* PawnsNearActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPawnNearActor");

	UMissionBlueprintFunctionLibrary_C_AnyPawnNearActor_Params params;
	params.DistanceToCheck = DistanceToCheck;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPawnNearActor != nullptr)
		*IsPawnNearActor = params.IsPawnNearActor;
	if (PawnsNearActor != nullptr)
		*PawnsNearActor = params.PawnsNearActor;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GiveQuestUpdateToPlayers
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition* Quest_Reference                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Quest_Objective_Backend_Name   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDataTableRowHandle     ObjectiveStatEvent             (CPF_Parm)
// TArray<class AFortPlayerController*> PlayerControllersForUpdate     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_GiveQuestUpdateToPlayers(class UFortQuestItemDefinition* Quest_Reference, const struct FName& Quest_Objective_Backend_Name, const struct FDataTableRowHandle& ObjectiveStatEvent, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayerControllersForUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GiveQuestUpdateToPlayers");

	UMissionBlueprintFunctionLibrary_C_GiveQuestUpdateToPlayers_Params params;
	params.Quest_Reference = Quest_Reference;
	params.Quest_Objective_Backend_Name = Quest_Objective_Backend_Name;
	params.ObjectiveStatEvent = ObjectiveStatEvent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerControllersForUpdate != nullptr)
		*PlayerControllersForUpdate = params.PlayerControllersForUpdate;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DropChance
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DropPercentChance              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           DropResult                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_DropChance(float DropPercentChance, class UObject* __WorldContext, bool* DropResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DropChance");

	UMissionBlueprintFunctionLibrary_C_DropChance_Params params;
	params.DropPercentChance = DropPercentChance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DropResult != nullptr)
		*DropResult = params.DropResult;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPlayerNearActor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DistanceToCheck                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsPlayerNearActor              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AFortPlayerPawn*> PlayersNearActor               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UMissionBlueprintFunctionLibrary_C::STATIC_AnyPlayerNearActor(float DistanceToCheck, class AActor* Actor, class UObject* __WorldContext, bool* IsPlayerNearActor, TArray<class AFortPlayerPawn*>* PlayersNearActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPlayerNearActor");

	UMissionBlueprintFunctionLibrary_C_AnyPlayerNearActor_Params params;
	params.DistanceToCheck = DistanceToCheck;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlayerNearActor != nullptr)
		*IsPlayerNearActor = params.IsPlayerNearActor;
	if (PlayersNearActor != nullptr)
		*PlayersNearActor = params.PlayersNearActor;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.FlashObjectiveUI
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective_Reference            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_FlashObjectiveUI(class AFortObjectiveBase* Objective_Reference, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.FlashObjectiveUI");

	UMissionBlueprintFunctionLibrary_C_FlashObjectiveUI_Params params;
	params.Objective_Reference = Objective_Reference;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStopRescue
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Instigator                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_NPC_DroneStopRescue(class AActor* Actor, class AActor* Instigator, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStopRescue");

	UMissionBlueprintFunctionLibrary_C_NPC_DroneStopRescue_Params params;
	params.Actor = Actor;
	params.Instigator = Instigator;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStartRescue
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Instigator                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_NPC_DroneStartRescue(class AActor* Actor, class AActor* Instigator, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStartRescue");

	UMissionBlueprintFunctionLibrary_C_NPC_DroneStartRescue_Params params;
	params.Actor = Actor;
	params.Instigator = Instigator;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ListPlayersWhoNeedQuest
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition* Quest_Reference                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Quest_Backend_Name             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AFortPlayerController*> Player_Controllers_Who_Require_The_Quest (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           DoesAnyoneRequireTheQuest      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_ListPlayersWhoNeedQuest(class UFortQuestItemDefinition* Quest_Reference, const struct FName& Quest_Backend_Name, class UObject* __WorldContext, TArray<class AFortPlayerController*>* Player_Controllers_Who_Require_The_Quest, bool* DoesAnyoneRequireTheQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ListPlayersWhoNeedQuest");

	UMissionBlueprintFunctionLibrary_C_ListPlayersWhoNeedQuest_Params params;
	params.Quest_Reference = Quest_Reference;
	params.Quest_Backend_Name = Quest_Backend_Name;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_Controllers_Who_Require_The_Quest != nullptr)
		*Player_Controllers_Who_Require_The_Quest = params.Player_Controllers_Who_Require_The_Quest;
	if (DoesAnyoneRequireTheQuest != nullptr)
		*DoesAnyoneRequireTheQuest = params.DoesAnyoneRequireTheQuest;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesAnyoneRequireQuest
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition* QuestReference                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Quest_Backend_Name             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           SomePlayerNeedsTheQuest        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_DoesAnyoneRequireQuest(class UFortQuestItemDefinition* QuestReference, const struct FName& Quest_Backend_Name, class UObject* __WorldContext, bool* SomePlayerNeedsTheQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesAnyoneRequireQuest");

	UMissionBlueprintFunctionLibrary_C_DoesAnyoneRequireQuest_Params params;
	params.QuestReference = QuestReference;
	params.Quest_Backend_Name = Quest_Backend_Name;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SomePlayerNeedsTheQuest != nullptr)
		*SomePlayerNeedsTheQuest = params.SomePlayerNeedsTheQuest;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.WhatQuestCountIsPlayerAt
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortPlayerController*   PlayerControllerReference      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortQuestItemDefinition* Quest_Item_Reference           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Quest_Item_Backend_Objective_Name (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Quest_Stage                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Quest_RequiredStages           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           SuccessfullyFoundStage         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_WhatQuestCountIsPlayerAt(class AFortPlayerController* PlayerControllerReference, class UFortQuestItemDefinition* Quest_Item_Reference, const struct FName& Quest_Item_Backend_Objective_Name, class UObject* __WorldContext, int* Quest_Stage, int* Quest_RequiredStages, bool* SuccessfullyFoundStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.WhatQuestCountIsPlayerAt");

	UMissionBlueprintFunctionLibrary_C_WhatQuestCountIsPlayerAt_Params params;
	params.PlayerControllerReference = PlayerControllerReference;
	params.Quest_Item_Reference = Quest_Item_Reference;
	params.Quest_Item_Backend_Objective_Name = Quest_Item_Backend_Objective_Name;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Quest_Stage != nullptr)
		*Quest_Stage = params.Quest_Stage;
	if (Quest_RequiredStages != nullptr)
		*Quest_RequiredStages = params.Quest_RequiredStages;
	if (SuccessfullyFoundStage != nullptr)
		*SuccessfullyFoundStage = params.SuccessfullyFoundStage;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HighlightQuestActor
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ActorToHighlight               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           HighlightEnabled               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_HighlightQuestActor(class AActor* ActorToHighlight, bool HighlightEnabled, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HighlightQuestActor");

	UMissionBlueprintFunctionLibrary_C_HighlightQuestActor_Params params;
	params.ActorToHighlight = ActorToHighlight;
	params.HighlightEnabled = HighlightEnabled;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesPlayerHaveQuest
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortPlayerController*   PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortQuestItemDefinition* Quest_Item_Reference           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Quest_Item_Objective_Backend_Name (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           QuestValid                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFortPlayerController*   PlayerControllerRef            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_DoesPlayerHaveQuest(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* Quest_Item_Reference, const struct FName& Quest_Item_Objective_Backend_Name, class UObject* __WorldContext, bool* QuestValid, class AFortPlayerController** PlayerControllerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesPlayerHaveQuest");

	UMissionBlueprintFunctionLibrary_C_DoesPlayerHaveQuest_Params params;
	params.PlayerController = PlayerController;
	params.Quest_Item_Reference = Quest_Item_Reference;
	params.Quest_Item_Objective_Backend_Name = Quest_Item_Objective_Backend_Name;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestValid != nullptr)
		*QuestValid = params.QuestValid;
	if (PlayerControllerRef != nullptr)
		*PlayerControllerRef = params.PlayerControllerRef;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetObjectiveBadgeIconBrush
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTag            RewardTag                      (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSlateBrush             IconBrush                      (CPF_Parm, CPF_OutParm)

void UMissionBlueprintFunctionLibrary_C::STATIC_GetObjectiveBadgeIconBrush(class AFortObjectiveBase* Objective, const struct FGameplayTag& RewardTag, class UObject* __WorldContext, struct FSlateBrush* IconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetObjectiveBadgeIconBrush");

	UMissionBlueprintFunctionLibrary_C_GetObjectiveBadgeIconBrush_Params params;
	params.Objective = Objective;
	params.RewardTag = RewardTag;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconBrush != nullptr)
		*IconBrush = params.IconBrush;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.UnRegisterUI UpdatesWithDamageEvents
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ActorToUnRegisterWith          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFortMissionState*       MissionState                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_UnRegisterUI_UpdatesWithDamageEvents(class AActor* ActorToUnRegisterWith, class AFortMissionState* MissionState, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.UnRegisterUI UpdatesWithDamageEvents");

	UMissionBlueprintFunctionLibrary_C_UnRegisterUI_UpdatesWithDamageEvents_Params params;
	params.ActorToUnRegisterWith = ActorToUnRegisterWith;
	params.MissionState = MissionState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.RegisterUI UpdatesWithDamageEvents
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ActorToRegisterWith            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFortMissionState*       MissionState                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionBlueprintFunctionLibrary_C::STATIC_RegisterUI_UpdatesWithDamageEvents(class AActor* ActorToRegisterWith, class AFortMissionState* MissionState, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.RegisterUI UpdatesWithDamageEvents");

	UMissionBlueprintFunctionLibrary_C_RegisterUI_UpdatesWithDamageEvents_Params params;
	params.ActorToRegisterWith = ActorToRegisterWith;
	params.MissionState = MissionState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
