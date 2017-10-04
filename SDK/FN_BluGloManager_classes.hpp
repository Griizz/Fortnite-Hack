#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BluGloManager.BluGloManager_C
// 0x0060 (0x0480 - 0x0420)
class ABluGloManager_C : public AFortBluGloManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class ATiered_BluGlo_Parent_C*>             PossibleSpawnLocationsArray;                              // 0x0430(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<class ATiered_BluGlo_Parent_C*>             OccupiedNodes;                                            // 0x0440(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	int                                                AmountOfBluGloToSpawn;                                    // 0x0450(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	class AActor*                                      QueryActor;                                               // 0x0458(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      _1stRequestArraySet : 1;                                  // 0x0460(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	float                                              BluGloNavigablePointRadius;                               // 0x0464(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Reward_Start_Sound;                                       // 0x0468(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Reward_Appear_Sound;                                      // 0x0470(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                LocationLength;                                           // 0x0478(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BluGloSpawnAnimationTime;                                 // 0x047C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BluGloManager.BluGloManager_C");
		return ptr;
	}


	void IssueBluGloRequestForMission(class AFortMission* Mission, class AActor* ActorToSpawnBluGloFrom);
	void StartSpawnFXAndAudio(const struct FVector& SpawnCenter, class UParticleSystemComponent** SpawnFXEmitter);
	void SpawnBluGloGroup(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, TEnumAsByte<EEnvQueryStatus> QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int NumBluGloToSpawn);
	void ChooseSpawnCenter(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFrom, struct FVector* SpawnCenter);
	void BuildSpawnLocationsRandomly(const struct FVector& LocationToSpawnFrom, int NumBluGloToSpawn, TArray<struct FVector>* LocationsForSpawningBluGlo);
	void BuildSpawnLocationsFromQueryLocations(int NumBluGloToSpawn, TArray<struct FVector>* QueryResultLocations, TArray<struct FVector>* LocationsForSpawningBluGlo);
	void BuildSpawnLocations(TEnumAsByte<EEnvQueryStatus> QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int NumBluGloToSpawn, const struct FVector& SpawnCenter, TArray<struct FVector>* LocationsForSpawningBluGlo);
	void IssueBluGloRequest(int NumBluGloToSpawn, class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid);
	void SpawnBluGlo(const struct FVector& SpawnLocation, const struct FVector& SpawnFromLocation);
	void RemoveOccupiedNodes();
	void RequestedBluGo(class AFortMission* Mission, const struct FVector& EQS_Start_Location, class AActor* Actor);
	void UserConstructionScript();
	void HandleMissionEvent_RequestBluGloSpawnUseActor(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void StopSpawnFX(bool off);
	void OnBluGloQueryFinished(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, TEnumAsByte<EEnvQueryStatus> QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int NumBluGloToSpawn);
	void SpawnFXComplete(class UParticleSystemComponent* PSystem);
	void SpawnBluGloGroupEvent(const struct FVector& SpawnCenter);
	void AddMoreBluGloInWorld(class AFortMission* Mission);
	void HandleMissionEvent_RequestBluGloSpawnUseEQS(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void ExecuteUbergraph_BluGloManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
