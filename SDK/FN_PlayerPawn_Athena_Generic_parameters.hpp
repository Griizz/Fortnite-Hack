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

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Melee_Effect_Color
struct APlayerPawn_Athena_Generic_C_Melee_Effect_Color_Params
{
	struct FVector                                     Melee_Color_Set;                                          // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Are the wind and water RTT passes enabled
struct APlayerPawn_Athena_Generic_C_Are_the_wind_and_water_RTT_passes_enabled_Params
{
	bool                                               NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.DisableWaterLevelTick
struct APlayerPawn_Athena_Generic_C_DisableWaterLevelTick_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SetAdrenalineRushVisibility
struct APlayerPawn_Athena_Generic_C_SetAdrenalineRushVisibility_Params
{
	bool                                               Visible;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnRep_On_Player_Built_Floor
struct APlayerPawn_Athena_Generic_C_OnRep_On_Player_Built_Floor_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Setup FX Mesh Duplicates
struct APlayerPawn_Athena_Generic_C_Setup_FX_Mesh_Duplicates_Params
{
	class UMaterialInterface*                          Material_to_Apply;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Charm_MID_Array;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	class USkeletalMeshComponent*                      Charm_Mesh;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Head_MID_Array;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	class USkeletalMeshComponent*                      Head_Mesh;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Body_MID_Array;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	class USkeletalMeshComponent*                      Body_Mesh;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	int                                                Translucent_Sort_Order;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Transfer_Material_Parameters;                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh
struct APlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh_Params
{
	TEnumAsByte<EFortCustomPartType>                   BodyType;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          Material_to_Apply;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Empty_MID_Array;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	int                                                TranslucentSortPriority;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPoseableMeshComponent*                      PoseableMesh;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ToggleShieldVisibility
struct APlayerPawn_Athena_Generic_C_ToggleShieldVisibility_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SlaveAMeshToTheBody
struct APlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      Master;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SetShieldMids_InternalLoop
struct APlayerPawn_Athena_Generic_C_SetShieldMids_InternalLoop_Params
{
	float                                              Highlight_Cracks;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Set_Highlight_Cracks;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Push;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Set_Push;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            NewParam1;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SetShieldMids
struct APlayerPawn_Athena_Generic_C_SetShieldMids_Params
{
	float                                              Highlight_Cracks;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Set_Highlight_Cracks;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Push;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Set_Push;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FindShieldOpacity
struct APlayerPawn_Athena_Generic_C_FindShieldOpacity_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent
struct APlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent_Params
{
	TEnumAsByte<EFortCustomPartType>                   BodyType;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      DuplicatedSkeletalMeshComponent;                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	class UMaterialInterface*                          Material_to_Apply;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Empty_MID_Array;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	int                                                TranslucentSortPriority;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.UserConstructionScript
struct APlayerPawn_Athena_Generic_C_UserConstructionScript_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.CapsuleFadeTL__FinishedFunc
struct APlayerPawn_Athena_Generic_C_CapsuleFadeTL__FinishedFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.CapsuleFadeTL__UpdateFunc
struct APlayerPawn_Athena_Generic_C_CapsuleFadeTL__UpdateFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.HealthSweep__FinishedFunc
struct APlayerPawn_Athena_Generic_C_HealthSweep__FinishedFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.HealthSweep__UpdateFunc
struct APlayerPawn_Athena_Generic_C_HealthSweep__UpdateFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Shield Regen Timeline__FinishedFunc
struct APlayerPawn_Athena_Generic_C_Shield_Regen_Timeline__FinishedFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Shield Regen Timeline__UpdateFunc
struct APlayerPawn_Athena_Generic_C_Shield_Regen_Timeline__UpdateFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Shield_ShatterTimeline__FinishedFunc
struct APlayerPawn_Athena_Generic_C_Shield_ShatterTimeline__FinishedFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Shield_ShatterTimeline__UpdateFunc
struct APlayerPawn_Athena_Generic_C_Shield_ShatterTimeline__UpdateFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Shield_DamageTimeline__FinishedFunc
struct APlayerPawn_Athena_Generic_C_Shield_DamageTimeline__FinishedFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Shield_DamageTimeline__UpdateFunc
struct APlayerPawn_Athena_Generic_C_Shield_DamageTimeline__UpdateFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Full Shield Health__FinishedFunc
struct APlayerPawn_Athena_Generic_C_Full_Shield_Health__FinishedFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Full Shield Health__UpdateFunc
struct APlayerPawn_Athena_Generic_C_Full_Shield_Health__UpdateFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingRight
struct APlayerPawn_Athena_Generic_C_MeleeSwingRight_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingLeft
struct APlayerPawn_Athena_Generic_C_MeleeSwingLeft_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDamagePlayEffects
struct APlayerPawn_Athena_Generic_C_OnDamagePlayEffects_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnLanded
struct APlayerPawn_Athena_Generic_C_OnLanded_Params
{
	struct FHitResult*                                 Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDeathPlayEffects
struct APlayerPawn_Athena_Generic_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnWeaponEquipped
struct APlayerPawn_Athena_Generic_C_OnWeaponEquipped_Params
{
	class AFortWeapon**                                NewWeapon;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortWeapon**                                PrevWeapon;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReceiveTick
struct APlayerPawn_Athena_Generic_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepLeft
struct APlayerPawn_Athena_Generic_C_FootStepLeft_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepRight
struct APlayerPawn_Athena_Generic_C_FootStepRight_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnCharacterPartsReinitialized
struct APlayerPawn_Athena_Generic_C_OnCharacterPartsReinitialized_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
struct APlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
struct APlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SetFirstPersonCamera
struct APlayerPawn_Athena_Generic_C_SetFirstPersonCamera_Params
{
	bool*                                              bNewUseFirstPersonCamera;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.GravitySphere
struct APlayerPawn_Athena_Generic_C_GameplayCue_GravitySphere_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.InternalSetFirstPersonCamera
struct APlayerPawn_Athena_Generic_C_InternalSetFirstPersonCamera_Params
{
	bool                                               NewUseFirstPersonCamera;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.DBNOResurrect
struct APlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_DBNOResurrect_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnBaseChanged
struct APlayerPawn_Athena_Generic_C_OnBaseChanged_Params
{
	class AActor**                                     NewBase;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReceivePossessed
struct APlayerPawn_Athena_Generic_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.CleanupGravitySphereFootEffects
struct APlayerPawn_Athena_Generic_C_CleanupGravitySphereFootEffects_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReceiveDestroyed
struct APlayerPawn_Athena_Generic_C_ReceiveDestroyed_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ClientBindWeaponSwap
struct APlayerPawn_Athena_Generic_C_ClientBindWeaponSwap_Params
{
	class AFortWeapon*                                 NewWeapon;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortWeapon*                                 PrevWeapon;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.BindWeaponSwap
struct APlayerPawn_Athena_Generic_C_BindWeaponSwap_Params
{
	float                                              InDuration;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MultiSwapWeapon
struct APlayerPawn_Athena_Generic_C_MultiSwapWeapon_Params
{
	class AFortWeapon*                                 New;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortWeapon*                                 Prev;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.UnBindWeaponSwap
struct APlayerPawn_Athena_Generic_C_UnBindWeaponSwap_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MultiEndSwap
struct APlayerPawn_Athena_Generic_C_MultiEndSwap_Params
{
	class AFortWeapon*                                 CurrentWeapon;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Clean up DBNO fx
struct APlayerPawn_Athena_Generic_C_Clean_up_DBNO_fx_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDeathServer
struct APlayerPawn_Athena_Generic_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SetupAnimTrails
struct APlayerPawn_Athena_Generic_C_SetupAnimTrails_Params
{
	class UParticleSystem*                             Particle_System_Reference;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       First_Socket_Name;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Second_Socket_Name;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Width;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsCE
struct APlayerPawn_Athena_Generic_C_AnimTrailsCE_Params
{
	bool                                               Active;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.DisableAnimTrails
struct APlayerPawn_Athena_Generic_C_DisableAnimTrails_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Entered WaterVolume
struct APlayerPawn_Athena_Generic_C_Entered_WaterVolume_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.CharacterDestroyed
struct APlayerPawn_Athena_Generic_C_CharacterDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.BindOnDestroyed
struct APlayerPawn_Athena_Generic_C_BindOnDestroyed_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FadeOutCapsuleShadow
struct APlayerPawn_Athena_Generic_C_FadeOutCapsuleShadow_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnLand_CE
struct APlayerPawn_Athena_Generic_C_OnLand_CE_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Test Adrenaline Rush
struct APlayerPawn_Athena_Generic_C_Test_Adrenaline_Rush_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Generic.AdrenalineRush.PeriodicHeal
struct APlayerPawn_Athena_Generic_C_GameplayCue_Generic_AdrenalineRush_PeriodicHeal_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Generic.AdrenalineRush.DirectHeal
struct APlayerPawn_Athena_Generic_C_GameplayCue_Generic_AdrenalineRush_DirectHeal_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Damage.Shielded
struct APlayerPawn_Athena_Generic_C_GameplayCue_Damage_Shielded_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Destroyed
struct APlayerPawn_Athena_Generic_C_GameplayCue_Shield_Destroyed_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.FullyCharged
struct APlayerPawn_Athena_Generic_C_GameplayCue_Shield_FullyCharged_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Reapplied
struct APlayerPawn_Athena_Generic_C_GameplayCue_Shield_Reapplied_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ExecuteUbergraph_PlayerPawn_Athena_Generic
struct APlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
