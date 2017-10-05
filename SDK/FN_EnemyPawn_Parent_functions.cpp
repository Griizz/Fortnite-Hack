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

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.CharacterSpawnInSafetyCheck
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::CharacterSpawnInSafetyCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.CharacterSpawnInSafetyCheck");

	AEnemyPawn_Parent_C_CharacterSpawnInSafetyCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterEyeColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Eye_Color_Inner                (CPF_Parm, CPF_IsPlainOldData)
// struct FLinearColor            Eye_Color_Outer                (CPF_Parm, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::SetCharacterEyeColors(const struct FLinearColor& Eye_Color_Inner, const struct FLinearColor& Eye_Color_Outer)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterEyeColors");

	AEnemyPawn_Parent_C_SetCharacterEyeColors_Params params;
	params.Eye_Color_Inner = Eye_Color_Inner;
	params.Eye_Color_Outer = Eye_Color_Outer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterFresnelGlowColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Inner_Color                    (CPF_Parm, CPF_IsPlainOldData)
// struct FLinearColor            Outer_Color                    (CPF_Parm, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::SetCharacterFresnelGlowColors(const struct FLinearColor& Inner_Color, const struct FLinearColor& Outer_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterFresnelGlowColors");

	AEnemyPawn_Parent_C_SetCharacterFresnelGlowColors_Params params;
	params.Inner_Color = Inner_Color;
	params.Outer_Color = Outer_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnParticleSystemAttachedToCharacterMesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParticleSystem*         Particle_System                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Attach_Point_Name              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                Rotation                       (CPF_Parm, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::SpawnParticleSystemAttachedToCharacterMesh(class UParticleSystem* Particle_System, const struct FName& Attach_Point_Name, const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnParticleSystemAttachedToCharacterMesh");

	AEnemyPawn_Parent_C_SpawnParticleSystemAttachedToCharacterMesh_Params params;
	params.Particle_System = Particle_System;
	params.Attach_Point_Name = Attach_Point_Name;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverridePhysicalMaterialOnCharacterMesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*       Physical_Material_Override     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::OverridePhysicalMaterialOnCharacterMesh(class UPhysicalMaterial* Physical_Material_Override)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverridePhysicalMaterialOnCharacterMesh");

	AEnemyPawn_Parent_C_OverridePhysicalMaterialOnCharacterMesh_Params params;
	params.Physical_Material_Override = Physical_Material_Override;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DestroyAwokenSkeletalMesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::DestroyAwokenSkeletalMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.DestroyAwokenSkeletalMesh");

	AEnemyPawn_Parent_C_DestroyAwokenSkeletalMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverrideMaterialAndCopyParametersOnCharacterMesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterial*               New_Material_To_Apply          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::OverrideMaterialAndCopyParametersOnCharacterMesh(class UMaterial* New_Material_To_Apply)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverrideMaterialAndCopyParametersOnCharacterMesh");

	AEnemyPawn_Parent_C_OverrideMaterialAndCopyParametersOnCharacterMesh_Params params;
	params.New_Material_To_Apply = New_Material_To_Apply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnRep_PumpkinHeadActiveGE
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::OnRep_PumpkinHeadActiveGE()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnRep_PumpkinHeadActiveGE");

	AEnemyPawn_Parent_C_OnRep_PumpkinHeadActiveGE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PlayAdditiveHitReacts
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Hit_Direction                  (CPF_Parm, CPF_IsPlainOldData)
// class UAnimMontage*            Anim_Montage                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::PlayAdditiveHitReacts(const struct FVector& Hit_Direction, class UAnimMontage* Anim_Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.PlayAdditiveHitReacts");

	AEnemyPawn_Parent_C_PlayAdditiveHitReacts_Params params;
	params.Hit_Direction = Hit_Direction;
	params.Anim_Montage = Anim_Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetActiveElementalAmbientParticles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Reset                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::SetActiveElementalAmbientParticles(bool Active, bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetActiveElementalAmbientParticles");

	AEnemyPawn_Parent_C_SetActiveElementalAmbientParticles_Params params;
	params.Active = Active;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetScalarParameterOnAllMIDs
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Parameter_Name                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Scalar_Value                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::SetScalarParameterOnAllMIDs(const struct FName& Parameter_Name, float Scalar_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetScalarParameterOnAllMIDs");

	AEnemyPawn_Parent_C_SetScalarParameterOnAllMIDs_Params params;
	params.Parameter_Name = Parameter_Name;
	params.Scalar_Value = Scalar_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetVectorParameterOnAllMIDs
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Parameter_Name                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Linear_Color                   (CPF_Parm, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::SetVectorParameterOnAllMIDs(const struct FName& Parameter_Name, const struct FLinearColor& Linear_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetVectorParameterOnAllMIDs");

	AEnemyPawn_Parent_C_SetVectorParameterOnAllMIDs_Params params;
	params.Parameter_Name = Parameter_Name;
	params.Linear_Color = Linear_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PickColorFromAnArrayOfColors
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FLinearColor>    ArrayOfColors                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::PickColorFromAnArrayOfColors(TArray<struct FLinearColor>* ArrayOfColors, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.PickColorFromAnArrayOfColors");

	AEnemyPawn_Parent_C_PickColorFromAnArrayOfColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArrayOfColors != nullptr)
		*ArrayOfColors = params.ArrayOfColors;
	if (Color != nullptr)
		*Color = params.Color;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.StopDeathFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::StopDeathFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.StopDeathFX");

	AEnemyPawn_Parent_C_StopDeathFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.StopMaterialTimeline
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::StopMaterialTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.StopMaterialTimeline");

	AEnemyPawn_Parent_C_StopMaterialTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemyDeathVisuals
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HQ                             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::EnemyDeathVisuals(bool* HQ)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemyDeathVisuals");

	AEnemyPawn_Parent_C_EnemyDeathVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HQ != nullptr)
		*HQ = params.HQ;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.UserConstructionScript");

	AEnemyPawn_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeathMaterialParamsTL__FinishedFunc
// (FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::DeathMaterialParamsTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeathMaterialParamsTL__FinishedFunc");

	AEnemyPawn_Parent_C_DeathMaterialParamsTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeathMaterialParamsTL__UpdateFunc
// (FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::DeathMaterialParamsTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeathMaterialParamsTL__UpdateFunc");

	AEnemyPawn_Parent_C_DeathMaterialParamsTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::Enemy_Spawn_Out_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__FinishedFunc");

	AEnemyPawn_Parent_C_Enemy_Spawn_Out_TL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::Enemy_Spawn_Out_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__UpdateFunc");

	AEnemyPawn_Parent_C_Enemy_Spawn_Out_TL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__FinishedFunc
// (FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::EnemySpawnInTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__FinishedFunc");

	AEnemyPawn_Parent_C_EnemySpawnInTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__UpdateFunc
// (FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::EnemySpawnInTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__UpdateFunc");

	AEnemyPawn_Parent_C_EnemySpawnInTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__Spawn__EventFunc
// (FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::EnemySpawnInTL__Spawn__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__Spawn__EventFunc");

	AEnemyPawn_Parent_C_EnemySpawnInTL__Spawn__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.ReceiveBeginPlay");

	AEnemyPawn_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDeathPlayEffects
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// float*                         Damage                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector*                Momentum                       (CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult*             HitInfo                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor**                 DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (CPF_Parm)

void AEnemyPawn_Parent_C::OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDeathPlayEffects");

	AEnemyPawn_Parent_C_OnDeathPlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.BeginDeathFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::BeginDeathFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.BeginDeathFX");

	AEnemyPawn_Parent_C_BeginDeathFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeactivateEffectsPreDespawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::DeactivateEffectsPreDespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeactivateEffectsPreDespawn");

	AEnemyPawn_Parent_C_DeactivateEffectsPreDespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ActivateEffectsPostSpawnIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::ActivateEffectsPostSpawnIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.ActivateEffectsPostSpawnIn");

	AEnemyPawn_Parent_C_ActivateEffectsPostSpawnIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DespawnEnemy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 RiftLocationWS                 (CPF_Parm, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::DespawnEnemy(const struct FVector& RiftLocationWS)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.DespawnEnemy");

	AEnemyPawn_Parent_C_DespawnEnemy_Params params;
	params.RiftLocationWS = RiftLocationWS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DebugEnemySpawnIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::DebugEnemySpawnIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.DebugEnemySpawnIn");

	AEnemyPawn_Parent_C_DebugEnemySpawnIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnFinishedEncounterSpawn
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::OnFinishedEncounterSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnFinishedEncounterSpawn");

	AEnemyPawn_Parent_C_OnFinishedEncounterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnStartedEncounterSpawn
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::OnStartedEncounterSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnStartedEncounterSpawn");

	AEnemyPawn_Parent_C_OnStartedEncounterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PawnUniqueIDSet
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::PawnUniqueIDSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.PawnUniqueIDSet");

	AEnemyPawn_Parent_C_PawnUniqueIDSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDamagePlayEffects
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// float*                         Damage                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector*                Momentum                       (CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult*             HitInfo                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor**                 DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (CPF_Parm)

void AEnemyPawn_Parent_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDamagePlayEffects");

	AEnemyPawn_Parent_C_OnDamagePlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.AdditiveHitReactDelay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::AdditiveHitReactDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.AdditiveHitReactDelay");

	AEnemyPawn_Parent_C_AdditiveHitReactDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnBeginSleepEffects
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::OnBeginSleepEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnBeginSleepEffects");

	AEnemyPawn_Parent_C_OnBeginSleepEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnEndSleepEffects
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AEnemyPawn_Parent_C::OnEndSleepEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnEndSleepEffects");

	AEnemyPawn_Parent_C_OnEndSleepEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ExecuteUbergraph_EnemyPawn_Parent
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AEnemyPawn_Parent_C::ExecuteUbergraph_EnemyPawn_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.ExecuteUbergraph_EnemyPawn_Parent");

	AEnemyPawn_Parent_C_ExecuteUbergraph_EnemyPawn_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
