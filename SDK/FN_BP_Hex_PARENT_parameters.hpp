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

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleUpdatingBannerMesh
struct ABP_Hex_PARENT_C_HandleUpdatingBannerMesh_Params
{
	class USceneComponent*                             Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortQuestItemDefinition*                    CompletedQuest;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material_Instance_Dynamic;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleMissionAlert
struct ABP_Hex_PARENT_C_HandleMissionAlert_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.GroundSliceSettings
struct ABP_Hex_PARENT_C_GroundSliceSettings_Params
{
	class UMaterialInstanceDynamic*                    SourceMaterial;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  TileTypeA;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  TileTypeB;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TileIsSameRegionA;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TileIsSameRegionB;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TileIsHiddenA;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TileIsHiddenB;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TileExistsA;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TileExistsB;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.UserConstructionScript
struct ABP_Hex_PARENT_C_UserConstructionScript_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__FinishedFunc
struct ABP_Hex_PARENT_C_Timeline_11__FinishedFunc_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__UpdateFunc
struct ABP_Hex_PARENT_C_Timeline_11__UpdateFunc_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__FinishedFunc
struct ABP_Hex_PARENT_C_Timeline_12__FinishedFunc_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__UpdateFunc
struct ABP_Hex_PARENT_C_Timeline_12__UpdateFunc_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleTeamPowerChanged
struct ABP_Hex_PARENT_C_HandleTeamPowerChanged_Params
{
	int                                                TeamPower;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PersonalPower;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.FireLightningA
struct ABP_Hex_PARENT_C_FireLightningA_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnInitializeTile
struct ABP_Hex_PARENT_C_OnInitializeTile_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleFrontendCameraChanged
struct ABP_Hex_PARENT_C_HandleFrontendCameraChanged_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMarkedQuestChanged
struct ABP_Hex_PARENT_C_OnMarkedQuestChanged_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckIfQuestShouldBePinned
struct ABP_Hex_PARENT_C_CheckIfQuestShouldBePinned_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckFocus
struct ABP_Hex_PARENT_C_CheckFocus_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ForceDefocus
struct ABP_Hex_PARENT_C_ForceDefocus_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMissionDataUpdated
struct ABP_Hex_PARENT_C_OnMissionDataUpdated_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckForPinnedInLevel
struct ABP_Hex_PARENT_C_CheckForPinnedInLevel_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnDefocus
struct ABP_Hex_PARENT_C_OnDefocus_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.RetryTileInitialized
struct ABP_Hex_PARENT_C_RetryTileInitialized_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.RetryUpdatesPaused
struct ABP_Hex_PARENT_C_RetryUpdatesPaused_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnFocus
struct ABP_Hex_PARENT_C_OnFocus_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostDeselect
struct ABP_Hex_PARENT_C_OnHostDeselect_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostSelect
struct ABP_Hex_PARENT_C_OnHostSelect_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.SetMissionPowerLevelDependencies
struct ABP_Hex_PARENT_C_SetMissionPowerLevelDependencies_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientDeselect
struct ABP_Hex_PARENT_C_OnClientDeselect_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientSelect
struct ABP_Hex_PARENT_C_OnClientSelect_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ReceiveBeginPlay
struct ABP_Hex_PARENT_C_ReceiveBeginPlay_Params
{
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightning
struct ABP_Hex_PARENT_C_MissionLightning_Params
{
	struct FName                                       EventName;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EmitterTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (CPF_Parm, CPF_IsPlainOldData)
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightningOff
struct ABP_Hex_PARENT_C_MissionLightningOff_Params
{
	struct FName                                       EventName;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EmitterTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ParticleTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     Direction;                                                // (CPF_Parm, CPF_IsPlainOldData)
};

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ExecuteUbergraph_BP_Hex_PARENT
struct ABP_Hex_PARENT_C_ExecuteUbergraph_BP_Hex_PARENT_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
