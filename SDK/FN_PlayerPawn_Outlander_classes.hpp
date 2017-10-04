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

// BlueprintGeneratedClass PlayerPawn_Outlander.PlayerPawn_Outlander_C
// 0x0448 (0x2060 - 0x1C18)
class APlayerPawn_Outlander_C : public APlayerPawn_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1C18(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UBoxComponent*                               AntiMaterialHitBox;                                       // 0x1C20(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_Outlander_Teleport_01;                                  // 0x1C28(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USphereComponent*                            KeenEyesRadius;                                           // 0x1C30(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_Outlander_PhaseShift_Impact_01;                         // 0x1C38(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      Effect_HeadSkeletalMesh;                                  // 0x1C40(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      Effect_BodySkeletalMesh;                                  // 0x1C48(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Teleport_PP_TL_PP_AC5FCC484D689B95F59DF9B01327BE09;       // 0x1C50(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Teleport_PP_TL__Direction_AC5FCC484D689B95F59DF9B01327BE09;// 0x1C54(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1C55(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Teleport_PP_TL;                                           // 0x1C58(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Phase_Shift_Activation_Timeline_Sweep_6D72A2BD427987D65B765788F442228C;// 0x1C60(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Phase_Shift_Activation_Timeline_Opacity_6D72A2BD427987D65B765788F442228C;// 0x1C64(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Phase_Shift_Activation_Timeline__Direction_6D72A2BD427987D65B765788F442228C;// 0x1C68(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1C69(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Phase_Shift_Activation_Timeline;                          // 0x1C70(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PhaseShiftHitSweep_Sweep_81A0178F416D1106B841D9A9B7E8C737;// 0x1C78(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PhaseShiftHitSweep__Direction_81A0178F416D1106B841D9A9B7E8C737;// 0x1C7C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1C7D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PhaseShiftHitSweep;                                       // 0x1C80(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystem*                             P_FragmentActivation;                                     // 0x1C88(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Core_Index_1;                                             // 0x1C90(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Core_Index_2;                                             // 0x1C98(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Core_Index_3;                                             // 0x1CA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Diamond_Index3;                                           // 0x1CA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Diamond_Index4;                                           // 0x1CB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Diamond_Index5;                                           // 0x1CB8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Sparkles_Index8;                                          // 0x1CC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Smoke_Index7;                                             // 0x1CC8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Diamond_Index6;                                           // 0x1CD0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Sparkles_Index9;                                          // 0x1CD8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                OffensiveColor1;                                          // 0x1CE0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                OffensiveColor2;                                          // 0x1CF0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                DefensiveColor1;                                          // 0x1D00(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                DefensiveColor2;                                          // 0x1D10(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                SpecialtyColor1;                                          // 0x1D20(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                SpecialtyColor2;                                          // 0x1D30(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       TC_SpecialityBuff;                                        // 0x1D40(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_DefensiveBuff;                                         // 0x1D60(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_OffensiveBuff;                                         // 0x1D80(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TEnumAsByte<E_Outlander_FragmentTypes>             FragType;                                                 // 0x1DA0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x1DA1(0x0007) MISSED OFFSET
	class UParticleSystem*                             P_FragmentOffense;                                        // 0x1DA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             P_FragmentDefense;                                        // 0x1DB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             P_FragmentSpeciality;                                     // 0x1DB8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             P_InTheZone_Activate;                                     // 0x1DC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      OnPlayerBuiltFloor : 1;                                   // 0x1DC8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x1DC9(0x0007) MISSED OFFSET
	struct FGameplayEventData                          EventData;                                                // 0x1DD0(0x00A8) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                EventNeedRoadsActivate;                                   // 0x1E78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                EventNeedRoadsDeactivate;                                 // 0x1E80(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_WhereWereGoingWeNeedRoads_1;                           // 0x1E88(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UParticleSystem*                             P_Fragment;                                               // 0x1EA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             P_Specialty;                                              // 0x1EB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             P_Defensive;                                              // 0x1EB8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             P_Offensive;                                              // 0x1EC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFortFeedbackHandle                         Feedback_ShardGet;                                        // 0x1EC8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FFortFeedbackHandle                         Feedback_OffensiveShard;                                  // 0x1EE0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FFortFeedbackHandle                         Feedback_DefensiveShard;                                  // 0x1EF8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FFortFeedbackHandle                         Feedback_SpecialtyShard;                                  // 0x1F10(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class USoundBase*                                  Sound_Frg_Offensive_Start;                                // 0x1F28(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_Frg_Defensive_Start;                                // 0x1F30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_Frg_Resource_Start;                                 // 0x1F38(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_Frg_Stop;                                           // 0x1F40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_Frg_Collect;                                        // 0x1F48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             P_InTheZone_Running;                                      // 0x1F50(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             P_InTheZone_Hit;                                          // 0x1F58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Spawn_Color;                                              // 0x1F60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Head_Effect_Mesh_Materials;                               // 0x1F68(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Body_Effect_Mesh_Materials;                               // 0x1F78(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UMaterialInterface*                          Phase_Shift_Material_;                                    // 0x1F88(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             PhaseShiftActivateParticles;                              // 0x1F90(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bPhaseShiftActive_ : 1;                                   // 0x1F98(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x1F99(0x0007) MISSED OFFSET
	class UParticleSystem*                             KnockKnockFX;                                             // 0x1FA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             P_Handtrail;                                              // 0x1FA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             P_AMCDustKickup;                                          // 0x1FB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             P_AMCShockwave;                                           // 0x1FB8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_Handtrail_Active;                                       // 0x1FC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             P_ArmThruster;                                            // 0x1FC8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_Arm_Thuster_Active;                                     // 0x1FD0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  ChargeUpSoundCue;                                         // 0x1FD8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAudioComponent*                             ChargeUpAudioComp;                                        // 0x1FE0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ChargeUpCameraShake;                                      // 0x1FE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundCue*                                   AMCImpactEnemySound;                                      // 0x1FF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundCue*                                   AMCImpactBuildingSound;                                   // 0x1FF8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      AMCImpactCameraShake;                                     // 0x2000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Teleport_Particles;                                       // 0x2008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             TeleportActivateParticles;                                // 0x2010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ABP_SplineVolumeTrail_v1b_C*                 Teleport_Spline_BP;                                       // 0x2018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Current_Index;                                            // 0x2020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x2024(0x0004) MISSED OFFSET
	TArray<struct FName>                               TeleportDustEmitters;                                     // 0x2028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class USkeletalMeshComponent*                      GuantletReference;                                        // 0x2038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_SpawnedHandTrail;                                       // 0x2040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      ChargeTrailIsVisible : 1;                                 // 0x2048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x2049(0x0007) MISSED OFFSET
	class UParticleSystem*                             P_HitBurst;                                               // 0x2050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UPostProcessComponent*                       TeleportPP;                                               // 0x2058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Outlander.PlayerPawn_Outlander_C");
		return ptr;
	}


	void StopTeleportSplinesIfValid();
	void OnRep_OnPlayerBuiltFloor();
	void UserConstructionScript();
	void PhaseShiftHitSweep__FinishedFunc();
	void PhaseShiftHitSweep__UpdateFunc();
	void Phase_Shift_Activation_Timeline__FinishedFunc();
	void Phase_Shift_Activation_Timeline__UpdateFunc();
	void Teleport_PP_TL__FinishedFunc();
	void Teleport_PP_TL__UpdateFunc();
	void GameplayCue_Explorer_Fragment(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Outlander_InTheZone_FX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ReceivePossessed(class AController** NewController);
	void GameplayCue_Explorer_Fragment_Offense_PickupFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Explorer_Fragment_Defense_PickupFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Explorer_Fragment_Specialty_PickupFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void WithinReachOfTreasure(const struct FLinearColor& VSpawnColor, bool Activate);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void GameplayCue_Outlander_Phaseshift_AppliedFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void RefreshIcons();
	void OnCharacterPartsReinitialized();
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void EventOnDamagePlayFX();
	void GameplayCue_Outlander_KnockKnock(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialCharge(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeThruster(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeChargeUp(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeImpact(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void SetTeleportEffects(bool On);
	void ForceQuickbarUpdate();
	void ReceiveBeginPlay();
	void PlayGauntletMontage(class UAnimMontage* MontageName);
	void SetMenuScreenClassName();
	void ChargedUp();
	void PlayChargeCommonFX();
	void Deactivate_Phaseshift_Materials(float Timeline_Duration);
	void Activate_Phaseshift_Materials(float Timeline_Duration);
	void Deactivate_Teleport_PP(float Timeline_Duration);
	void Activate_Teleport_PP(float Timeline_Duration);
	void ExecuteUbergraph_PlayerPawn_Outlander(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
