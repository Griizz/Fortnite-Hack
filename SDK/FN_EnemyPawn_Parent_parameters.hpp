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

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.CharacterSpawnInSafetyCheck
struct AEnemyPawn_Parent_C_CharacterSpawnInSafetyCheck_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterEyeColors
struct AEnemyPawn_Parent_C_SetCharacterEyeColors_Params
{
	struct FLinearColor                                Eye_Color_Inner;                                          // (CPF_Parm, CPF_IsPlainOldData)
	struct FLinearColor                                Eye_Color_Outer;                                          // (CPF_Parm, CPF_IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterFresnelGlowColors
struct AEnemyPawn_Parent_C_SetCharacterFresnelGlowColors_Params
{
	struct FLinearColor                                Inner_Color;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FLinearColor                                Outer_Color;                                              // (CPF_Parm, CPF_IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnParticleSystemAttachedToCharacterMesh
struct AEnemyPawn_Parent_C_SpawnParticleSystemAttachedToCharacterMesh_Params
{
	class UParticleSystem*                             Particle_System;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Attach_Point_Name;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (CPF_Parm, CPF_IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverridePhysicalMaterialOnCharacterMesh
struct AEnemyPawn_Parent_C_OverridePhysicalMaterialOnCharacterMesh_Params
{
	class UPhysicalMaterial*                           Physical_Material_Override;                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DestroyAwokenSkeletalMesh
struct AEnemyPawn_Parent_C_DestroyAwokenSkeletalMesh_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverrideMaterialAndCopyParametersOnCharacterMesh
struct AEnemyPawn_Parent_C_OverrideMaterialAndCopyParametersOnCharacterMesh_Params
{
	class UMaterial*                                   New_Material_To_Apply;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnRep_PumpkinHeadActiveGE
struct AEnemyPawn_Parent_C_OnRep_PumpkinHeadActiveGE_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PlayAdditiveHitReacts
struct AEnemyPawn_Parent_C_PlayAdditiveHitReacts_Params
{
	struct FVector                                     Hit_Direction;                                            // (CPF_Parm, CPF_IsPlainOldData)
	class UAnimMontage*                                Anim_Montage;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetActiveElementalAmbientParticles
struct AEnemyPawn_Parent_C_SetActiveElementalAmbientParticles_Params
{
	bool                                               Active;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Reset;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetScalarParameterOnAllMIDs
struct AEnemyPawn_Parent_C_SetScalarParameterOnAllMIDs_Params
{
	struct FName                                       Parameter_Name;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scalar_Value;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetVectorParameterOnAllMIDs
struct AEnemyPawn_Parent_C_SetVectorParameterOnAllMIDs_Params
{
	struct FName                                       Parameter_Name;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Linear_Color;                                             // (CPF_Parm, CPF_IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PickColorFromAnArrayOfColors
struct AEnemyPawn_Parent_C_PickColorFromAnArrayOfColors_Params
{
	TArray<struct FLinearColor>                        ArrayOfColors;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.StopDeathFX
struct AEnemyPawn_Parent_C_StopDeathFX_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.StopMaterialTimeline
struct AEnemyPawn_Parent_C_StopMaterialTimeline_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemyDeathVisuals
struct AEnemyPawn_Parent_C_EnemyDeathVisuals_Params
{
	bool                                               HQ;                                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.UserConstructionScript
struct AEnemyPawn_Parent_C_UserConstructionScript_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeathMaterialParamsTL__FinishedFunc
struct AEnemyPawn_Parent_C_DeathMaterialParamsTL__FinishedFunc_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeathMaterialParamsTL__UpdateFunc
struct AEnemyPawn_Parent_C_DeathMaterialParamsTL__UpdateFunc_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__FinishedFunc
struct AEnemyPawn_Parent_C_Enemy_Spawn_Out_TL__FinishedFunc_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__UpdateFunc
struct AEnemyPawn_Parent_C_Enemy_Spawn_Out_TL__UpdateFunc_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__FinishedFunc
struct AEnemyPawn_Parent_C_EnemySpawnInTL__FinishedFunc_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__UpdateFunc
struct AEnemyPawn_Parent_C_EnemySpawnInTL__UpdateFunc_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__Spawn__EventFunc
struct AEnemyPawn_Parent_C_EnemySpawnInTL__Spawn__EventFunc_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ReceiveBeginPlay
struct AEnemyPawn_Parent_C_ReceiveBeginPlay_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDeathPlayEffects
struct AEnemyPawn_Parent_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.BeginDeathFX
struct AEnemyPawn_Parent_C_BeginDeathFX_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeactivateEffectsPreDespawn
struct AEnemyPawn_Parent_C_DeactivateEffectsPreDespawn_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ActivateEffectsPostSpawnIn
struct AEnemyPawn_Parent_C_ActivateEffectsPostSpawnIn_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DespawnEnemy
struct AEnemyPawn_Parent_C_DespawnEnemy_Params
{
	struct FVector                                     RiftLocationWS;                                           // (CPF_Parm, CPF_IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DebugEnemySpawnIn
struct AEnemyPawn_Parent_C_DebugEnemySpawnIn_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnFinishedEncounterSpawn
struct AEnemyPawn_Parent_C_OnFinishedEncounterSpawn_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnStartedEncounterSpawn
struct AEnemyPawn_Parent_C_OnStartedEncounterSpawn_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PawnUniqueIDSet
struct AEnemyPawn_Parent_C_PawnUniqueIDSet_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDamagePlayEffects
struct AEnemyPawn_Parent_C_OnDamagePlayEffects_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.AdditiveHitReactDelay
struct AEnemyPawn_Parent_C_AdditiveHitReactDelay_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnBeginSleepEffects
struct AEnemyPawn_Parent_C_OnBeginSleepEffects_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnEndSleepEffects
struct AEnemyPawn_Parent_C_OnEndSleepEffects_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ExecuteUbergraph_EnemyPawn_Parent
struct AEnemyPawn_Parent_C_ExecuteUbergraph_EnemyPawn_Parent_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
