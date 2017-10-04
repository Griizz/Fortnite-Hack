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

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.StopTeleportSplinesIfValid
struct APlayerPawn_Outlander_C_StopTeleportSplinesIfValid_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnRep_OnPlayerBuiltFloor
struct APlayerPawn_Outlander_C_OnRep_OnPlayerBuiltFloor_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.UserConstructionScript
struct APlayerPawn_Outlander_C_UserConstructionScript_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.PhaseShiftHitSweep__FinishedFunc
struct APlayerPawn_Outlander_C_PhaseShiftHitSweep__FinishedFunc_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.PhaseShiftHitSweep__UpdateFunc
struct APlayerPawn_Outlander_C_PhaseShiftHitSweep__UpdateFunc_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Phase Shift Activation Timeline__FinishedFunc
struct APlayerPawn_Outlander_C_Phase_Shift_Activation_Timeline__FinishedFunc_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Phase Shift Activation Timeline__UpdateFunc
struct APlayerPawn_Outlander_C_Phase_Shift_Activation_Timeline__UpdateFunc_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Teleport PP TL__FinishedFunc
struct APlayerPawn_Outlander_C_Teleport_PP_TL__FinishedFunc_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Teleport PP TL__UpdateFunc
struct APlayerPawn_Outlander_C_Teleport_PP_TL__UpdateFunc_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment
struct APlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Outlander.InTheZone.FX
struct APlayerPawn_Outlander_C_GameplayCue_Outlander_InTheZone_FX_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ReceivePossessed
struct APlayerPawn_Outlander_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment.Offense.PickupFX
struct APlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Offense_PickupFX_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment.Defense.PickupFX
struct APlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Defense_PickupFX_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment.Specialty.PickupFX
struct APlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Specialty_PickupFX_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.WithinReachOfTreasure
struct APlayerPawn_Outlander_C_WithinReachOfTreasure_Params
{
	struct FLinearColor                                VSpawnColor;                                              // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               Activate;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
struct APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params
{
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
struct APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params
{
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Outlander.Phaseshift.AppliedFX
struct APlayerPawn_Outlander_C_GameplayCue_Outlander_Phaseshift_AppliedFX_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.RefreshIcons
struct APlayerPawn_Outlander_C_RefreshIcons_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnCharacterPartsReinitialized
struct APlayerPawn_Outlander_C_OnCharacterPartsReinitialized_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnDamagePlayEffects
struct APlayerPawn_Outlander_C_OnDamagePlayEffects_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.EventOnDamagePlayFX
struct APlayerPawn_Outlander_C_EventOnDamagePlayFX_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Outlander.KnockKnock
struct APlayerPawn_Outlander_C_GameplayCue_Outlander_KnockKnock_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialCharge
struct APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialCharge_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeThruster
struct APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeThruster_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeChargeUp
struct APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeChargeUp_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeImpact
struct APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeImpact_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.SetTeleportEffects
struct APlayerPawn_Outlander_C_SetTeleportEffects_Params
{
	bool                                               On;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ForceQuickbarUpdate
struct APlayerPawn_Outlander_C_ForceQuickbarUpdate_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ReceiveBeginPlay
struct APlayerPawn_Outlander_C_ReceiveBeginPlay_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.PlayGauntletMontage
struct APlayerPawn_Outlander_C_PlayGauntletMontage_Params
{
	class UAnimMontage*                                MontageName;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.SetMenuScreenClassName
struct APlayerPawn_Outlander_C_SetMenuScreenClassName_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ChargedUp
struct APlayerPawn_Outlander_C_ChargedUp_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.PlayChargeCommonFX
struct APlayerPawn_Outlander_C_PlayChargeCommonFX_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Deactivate Phaseshift Materials
struct APlayerPawn_Outlander_C_Deactivate_Phaseshift_Materials_Params
{
	float                                              Timeline_Duration;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Activate Phaseshift Materials
struct APlayerPawn_Outlander_C_Activate_Phaseshift_Materials_Params
{
	float                                              Timeline_Duration;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Deactivate Teleport PP
struct APlayerPawn_Outlander_C_Deactivate_Teleport_PP_Params
{
	float                                              Timeline_Duration;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Activate Teleport PP
struct APlayerPawn_Outlander_C_Activate_Teleport_PP_Params
{
	float                                              Timeline_Duration;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ExecuteUbergraph_PlayerPawn_Outlander
struct APlayerPawn_Outlander_C_ExecuteUbergraph_PlayerPawn_Outlander_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
