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

// Function BluGloManager.BluGloManager_C.IssueBluGloRequestForMission
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortMission*            Mission                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ActorToSpawnBluGloFrom         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABluGloManager_C::IssueBluGloRequestForMission(class AFortMission* Mission, class AActor* ActorToSpawnBluGloFrom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.IssueBluGloRequestForMission");

	ABluGloManager_C_IssueBluGloRequestForMission_Params params;
	params.Mission = Mission;
	params.ActorToSpawnBluGloFrom = ActorToSpawnBluGloFrom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.StartSpawnFXAndAudio
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 SpawnCenter                    (CPF_Parm, CPF_IsPlainOldData)
// class UParticleSystemComponent* SpawnFXEmitter                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABluGloManager_C::StartSpawnFXAndAudio(const struct FVector& SpawnCenter, class UParticleSystemComponent** SpawnFXEmitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.StartSpawnFXAndAudio");

	ABluGloManager_C_StartSpawnFXAndAudio_Params params;
	params.SpawnCenter = SpawnCenter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnFXEmitter != nullptr)
		*SpawnFXEmitter = params.SpawnFXEmitter;
}


// Function BluGloManager.BluGloManager_C.SpawnBluGloGroup
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ActorToSpawnFrom               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 LocationToSpawnFromIfActorInvalid (CPF_Parm, CPF_IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NumBluGloToSpawn               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABluGloManager_C::SpawnBluGloGroup(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, TEnumAsByte<EEnvQueryStatus> QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int NumBluGloToSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.SpawnBluGloGroup");

	ABluGloManager_C_SpawnBluGloGroup_Params params;
	params.ActorToSpawnFrom = ActorToSpawnFrom;
	params.LocationToSpawnFromIfActorInvalid = LocationToSpawnFromIfActorInvalid;
	params.QueryStatus = QueryStatus;
	params.QueryInstance = QueryInstance;
	params.NumBluGloToSpawn = NumBluGloToSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.ChooseSpawnCenter
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ActorToSpawnFrom               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 LocationToSpawnFrom            (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 SpawnCenter                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void ABluGloManager_C::ChooseSpawnCenter(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFrom, struct FVector* SpawnCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.ChooseSpawnCenter");

	ABluGloManager_C_ChooseSpawnCenter_Params params;
	params.ActorToSpawnFrom = ActorToSpawnFrom;
	params.LocationToSpawnFrom = LocationToSpawnFrom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnCenter != nullptr)
		*SpawnCenter = params.SpawnCenter;
}


// Function BluGloManager.BluGloManager_C.BuildSpawnLocationsRandomly
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 LocationToSpawnFrom            (CPF_Parm, CPF_IsPlainOldData)
// int                            NumBluGloToSpawn               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FVector>         LocationsForSpawningBluGlo     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ABluGloManager_C::BuildSpawnLocationsRandomly(const struct FVector& LocationToSpawnFrom, int NumBluGloToSpawn, TArray<struct FVector>* LocationsForSpawningBluGlo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.BuildSpawnLocationsRandomly");

	ABluGloManager_C_BuildSpawnLocationsRandomly_Params params;
	params.LocationToSpawnFrom = LocationToSpawnFrom;
	params.NumBluGloToSpawn = NumBluGloToSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationsForSpawningBluGlo != nullptr)
		*LocationsForSpawningBluGlo = params.LocationsForSpawningBluGlo;
}


// Function BluGloManager.BluGloManager_C.BuildSpawnLocationsFromQueryLocations
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NumBluGloToSpawn               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FVector>         QueryResultLocations           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector>         LocationsForSpawningBluGlo     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ABluGloManager_C::BuildSpawnLocationsFromQueryLocations(int NumBluGloToSpawn, TArray<struct FVector>* QueryResultLocations, TArray<struct FVector>* LocationsForSpawningBluGlo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.BuildSpawnLocationsFromQueryLocations");

	ABluGloManager_C_BuildSpawnLocationsFromQueryLocations_Params params;
	params.NumBluGloToSpawn = NumBluGloToSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QueryResultLocations != nullptr)
		*QueryResultLocations = params.QueryResultLocations;
	if (LocationsForSpawningBluGlo != nullptr)
		*LocationsForSpawningBluGlo = params.LocationsForSpawningBluGlo;
}


// Function BluGloManager.BluGloManager_C.BuildSpawnLocations
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NumBluGloToSpawn               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 SpawnCenter                    (CPF_Parm, CPF_IsPlainOldData)
// TArray<struct FVector>         LocationsForSpawningBluGlo     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ABluGloManager_C::BuildSpawnLocations(TEnumAsByte<EEnvQueryStatus> QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int NumBluGloToSpawn, const struct FVector& SpawnCenter, TArray<struct FVector>* LocationsForSpawningBluGlo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.BuildSpawnLocations");

	ABluGloManager_C_BuildSpawnLocations_Params params;
	params.QueryStatus = QueryStatus;
	params.QueryInstance = QueryInstance;
	params.NumBluGloToSpawn = NumBluGloToSpawn;
	params.SpawnCenter = SpawnCenter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationsForSpawningBluGlo != nullptr)
		*LocationsForSpawningBluGlo = params.LocationsForSpawningBluGlo;
}


// Function BluGloManager.BluGloManager_C.IssueBluGloRequest
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NumBluGloToSpawn               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ActorToSpawnFrom               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 LocationToSpawnFromIfActorInvalid (CPF_Parm, CPF_IsPlainOldData)

void ABluGloManager_C::IssueBluGloRequest(int NumBluGloToSpawn, class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.IssueBluGloRequest");

	ABluGloManager_C_IssueBluGloRequest_Params params;
	params.NumBluGloToSpawn = NumBluGloToSpawn;
	params.ActorToSpawnFrom = ActorToSpawnFrom;
	params.LocationToSpawnFromIfActorInvalid = LocationToSpawnFromIfActorInvalid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.SpawnBluGlo
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 SpawnLocation                  (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 SpawnFromLocation              (CPF_Parm, CPF_IsPlainOldData)

void ABluGloManager_C::SpawnBluGlo(const struct FVector& SpawnLocation, const struct FVector& SpawnFromLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.SpawnBluGlo");

	ABluGloManager_C_SpawnBluGlo_Params params;
	params.SpawnLocation = SpawnLocation;
	params.SpawnFromLocation = SpawnFromLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.RemoveOccupiedNodes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABluGloManager_C::RemoveOccupiedNodes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.RemoveOccupiedNodes");

	ABluGloManager_C_RemoveOccupiedNodes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.RequestedBluGo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortMission*            Mission                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 EQS_Start_Location             (CPF_Parm, CPF_IsPlainOldData)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABluGloManager_C::RequestedBluGo(class AFortMission* Mission, const struct FVector& EQS_Start_Location, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.RequestedBluGo");

	ABluGloManager_C_RequestedBluGo_Params params;
	params.Mission = Mission;
	params.EQS_Start_Location = EQS_Start_Location;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABluGloManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.UserConstructionScript");

	ABluGloManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseActor
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (CPF_Parm, CPF_IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (CPF_Parm)
// class UFortMissionEventParams* Params                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 EventFocus                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDataAsset*              EventContent                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  EventInstigator                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            GenericInt                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          GenericFloat                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   GenericText                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (CPF_Parm)
// struct FFortMissionEvent       MissionEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABluGloManager_C::HandleMissionEvent_RequestBluGloSpawnUseActor(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseActor");

	ABluGloManager_C_HandleMissionEvent_RequestBluGloSpawnUseActor_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.StopSpawnFX
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           off                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABluGloManager_C::StopSpawnFX(bool off)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.StopSpawnFX");

	ABluGloManager_C_StopSpawnFX_Params params;
	params.off = off;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.OnBluGloQueryFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ActorToSpawnFrom               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 LocationToSpawnFromIfActorInvalid (CPF_Parm, CPF_IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NumBluGloToSpawn               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABluGloManager_C::OnBluGloQueryFinished(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, TEnumAsByte<EEnvQueryStatus> QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int NumBluGloToSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.OnBluGloQueryFinished");

	ABluGloManager_C_OnBluGloQueryFinished_Params params;
	params.ActorToSpawnFrom = ActorToSpawnFrom;
	params.LocationToSpawnFromIfActorInvalid = LocationToSpawnFromIfActorInvalid;
	params.QueryStatus = QueryStatus;
	params.QueryInstance = QueryInstance;
	params.NumBluGloToSpawn = NumBluGloToSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.SpawnFXComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABluGloManager_C::SpawnFXComplete(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.SpawnFXComplete");

	ABluGloManager_C_SpawnFXComplete_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.SpawnBluGloGroupEvent
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 SpawnCenter                    (CPF_Parm, CPF_IsPlainOldData)

void ABluGloManager_C::SpawnBluGloGroupEvent(const struct FVector& SpawnCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.SpawnBluGloGroupEvent");

	ABluGloManager_C_SpawnBluGloGroupEvent_Params params;
	params.SpawnCenter = SpawnCenter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.AddMoreBluGloInWorld
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortMission*            Mission                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABluGloManager_C::AddMoreBluGloInWorld(class AFortMission* Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.AddMoreBluGloInWorld");

	ABluGloManager_C_AddMoreBluGloInWorld_Params params;
	params.Mission = Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseEQS
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGuid                   MissionGuid                    (CPF_Parm, CPF_IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (CPF_Parm)
// class UFortMissionEventParams* Params                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 EventFocus                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDataAsset*              EventContent                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  EventInstigator                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            GenericInt                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          GenericFloat                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   GenericText                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (CPF_Parm)
// struct FFortMissionEvent       MissionEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABluGloManager_C::HandleMissionEvent_RequestBluGloSpawnUseEQS(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseEQS");

	ABluGloManager_C_HandleMissionEvent_RequestBluGloSpawnUseEQS_Params params;
	params.MissionGuid = MissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.ExecuteUbergraph_BluGloManager
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABluGloManager_C::ExecuteUbergraph_BluGloManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.ExecuteUbergraph_BluGloManager");

	ABluGloManager_C_ExecuteUbergraph_BluGloManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
