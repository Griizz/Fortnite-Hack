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

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleUpdatingBannerMesh
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USceneComponent*         Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortQuestItemDefinition* CompletedQuest                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInstanceDynamic* Material_Instance_Dynamic      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Hex_PARENT_C::HandleUpdatingBannerMesh(class USceneComponent* Target, class UFortQuestItemDefinition* CompletedQuest, class UMaterialInstanceDynamic* Material_Instance_Dynamic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleUpdatingBannerMesh");

	ABP_Hex_PARENT_C_HandleUpdatingBannerMesh_Params params;
	params.Target = Target;
	params.CompletedQuest = CompletedQuest;
	params.Material_Instance_Dynamic = Material_Instance_Dynamic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleMissionAlert
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::HandleMissionAlert()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleMissionAlert");

	ABP_Hex_PARENT_C_HandleMissionAlert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.GroundSliceSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* SourceMaterial                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              TileTypeA                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              TileTypeB                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TileIsSameRegionA              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TileIsSameRegionB              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TileIsHiddenA                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TileIsHiddenB                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TileExistsA                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TileExistsB                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Hex_PARENT_C::GroundSliceSettings(class UMaterialInstanceDynamic* SourceMaterial, class UTexture2D* TileTypeA, class UTexture2D* TileTypeB, float TileIsSameRegionA, float TileIsSameRegionB, float TileIsHiddenA, float TileIsHiddenB, float TileExistsA, float TileExistsB)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.GroundSliceSettings");

	ABP_Hex_PARENT_C_GroundSliceSettings_Params params;
	params.SourceMaterial = SourceMaterial;
	params.TileTypeA = TileTypeA;
	params.TileTypeB = TileTypeB;
	params.TileIsSameRegionA = TileIsSameRegionA;
	params.TileIsSameRegionB = TileIsSameRegionB;
	params.TileIsHiddenA = TileIsHiddenA;
	params.TileIsHiddenB = TileIsHiddenB;
	params.TileExistsA = TileExistsA;
	params.TileExistsB = TileExistsB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.UserConstructionScript");

	ABP_Hex_PARENT_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::Timeline_11__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__FinishedFunc");

	ABP_Hex_PARENT_C_Timeline_11__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::Timeline_11__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__UpdateFunc");

	ABP_Hex_PARENT_C_Timeline_11__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::Timeline_12__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__FinishedFunc");

	ABP_Hex_PARENT_C_Timeline_12__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::Timeline_12__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__UpdateFunc");

	ABP_Hex_PARENT_C_Timeline_12__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleTeamPowerChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TeamPower                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            PersonalPower                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Hex_PARENT_C::HandleTeamPowerChanged(int TeamPower, int PersonalPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleTeamPowerChanged");

	ABP_Hex_PARENT_C_HandleTeamPowerChanged_Params params;
	params.TeamPower = TeamPower;
	params.PersonalPower = PersonalPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.FireLightningA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::FireLightningA()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.FireLightningA");

	ABP_Hex_PARENT_C_FireLightningA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnInitializeTile
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::OnInitializeTile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnInitializeTile");

	ABP_Hex_PARENT_C_OnInitializeTile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleFrontendCameraChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFrontEndCamera                NewCamera                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFrontEndCamera                OldCamera                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Hex_PARENT_C::HandleFrontendCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleFrontendCameraChanged");

	ABP_Hex_PARENT_C_HandleFrontendCameraChanged_Params params;
	params.NewCamera = NewCamera;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMarkedQuestChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::OnMarkedQuestChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMarkedQuestChanged");

	ABP_Hex_PARENT_C_OnMarkedQuestChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckIfQuestShouldBePinned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::CheckIfQuestShouldBePinned()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckIfQuestShouldBePinned");

	ABP_Hex_PARENT_C_CheckIfQuestShouldBePinned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckFocus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::CheckFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckFocus");

	ABP_Hex_PARENT_C_CheckFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ForceDefocus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::ForceDefocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.ForceDefocus");

	ABP_Hex_PARENT_C_ForceDefocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMissionDataUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::OnMissionDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMissionDataUpdated");

	ABP_Hex_PARENT_C_OnMissionDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckForPinnedInLevel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::CheckForPinnedInLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckForPinnedInLevel");

	ABP_Hex_PARENT_C_CheckForPinnedInLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnDefocus
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::OnDefocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnDefocus");

	ABP_Hex_PARENT_C_OnDefocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.RetryTileInitialized
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::RetryTileInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.RetryTileInitialized");

	ABP_Hex_PARENT_C_RetryTileInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.RetryUpdatesPaused
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::RetryUpdatesPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.RetryUpdatesPaused");

	ABP_Hex_PARENT_C_RetryUpdatesPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnFocus
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::OnFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnFocus");

	ABP_Hex_PARENT_C_OnFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostDeselect
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::OnHostDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostDeselect");

	ABP_Hex_PARENT_C_OnHostDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostSelect
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::OnHostSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostSelect");

	ABP_Hex_PARENT_C_OnHostSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.SetMissionPowerLevelDependencies
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::SetMissionPowerLevelDependencies()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.SetMissionPowerLevelDependencies");

	ABP_Hex_PARENT_C_SetMissionPowerLevelDependencies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientDeselect
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::OnClientDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientDeselect");

	ABP_Hex_PARENT_C_OnClientDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientSelect
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::OnClientSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientSelect");

	ABP_Hex_PARENT_C_OnClientSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Hex_PARENT_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.ReceiveBeginPlay");

	ABP_Hex_PARENT_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EmitterTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Velocity                       (CPF_Parm, CPF_IsPlainOldData)

void ABP_Hex_PARENT_C::MissionLightning(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightning");

	ABP_Hex_PARENT_C_MissionLightning_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightningOff
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EmitterTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ParticleTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Velocity                       (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Direction                      (CPF_Parm, CPF_IsPlainOldData)

void ABP_Hex_PARENT_C::MissionLightningOff(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightningOff");

	ABP_Hex_PARENT_C_MissionLightningOff_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ExecuteUbergraph_BP_Hex_PARENT
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Hex_PARENT_C::ExecuteUbergraph_BP_Hex_PARENT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.ExecuteUbergraph_BP_Hex_PARENT");

	ABP_Hex_PARENT_C_ExecuteUbergraph_BP_Hex_PARENT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
