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

// BlueprintGeneratedClass Car_Copper.Car_Copper_C
// 0x01CA (0x119A - 0x0FD0)
class ACar_Copper_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FD0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	float                                              Timeline_2_SirenLightMultiplier_0FF34BB7440D69B151AEB98B69DAACB9;// 0x0FD8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_0FF34BB7440D69B151AEB98B69DAACB9;   // 0x0FDC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0FDD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x0FE0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BounceCar_Vertical_Bounce_Component_05733C554001D77C015F47B548F45A12;// 0x0FE8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BounceCar__Direction_05733C554001D77C015F47B548F45A12;    // 0x0FEC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0FED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BounceCar;                                                // 0x0FF0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeline_0_AlarmLightMultiplier_0249B75D481A6B889F74E6BC52A3E21B;// 0x0FF8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_0249B75D481A6B889F74E6BC52A3E21B;   // 0x0FFC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0FFD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x1000(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverallAlarmCycleFinished;                                // 0x1008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x1009(0x0003) MISSED OFFSET
	struct FLinearColor                                InitialEmissiveMultiplier;                                // 0x100C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                InitialEmissiveMultiplier2;                               // 0x101C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	int                                                AlarmLightCounter;                                        // 0x102C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               SoundIsRetriggerable;                                     // 0x1030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               CurrentFlashAnimationCycleFinished;                       // 0x1031(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x1032(0x0002) MISSED OFFSET
	int                                                NumberOfTimesTheLightsFlashWhenHit;                       // 0x1034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SirenLightEmissiveMultiplier;                             // 0x1038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               SirenLightOn;                                             // 0x103C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x103D(0x0003) MISSED OFFSET
	struct FName                                       Emissive_Multiplier_2;                                    // 0x1040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Emissive_Multiplier;                                      // 0x1048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound___HitAlarm;                                         // 0x1050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Use_Emissive_2;                                           // 0x1058(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x1059(0x0007) MISSED OFFSET
	class USoundBase*                                  Sound___Jump_on_Car;                                      // 0x1060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspensionMovementAmount;                                 // 0x1068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ParticleEffectHas_NOT_AlreadyBeenTriggered;               // 0x106C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x106D(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    EngineSteamParticleEffect;                                // 0x1070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound___Hit_AutoBody;                                     // 0x1078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               canMakeJumpingNoiseAgain;                                 // 0x1080(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               CarAlarmIsCurrentlyMakingNoise;                           // 0x1081(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               CarAlarmEnabled;                                          // 0x1082(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               RandomlyDisableSomeCarAlarms;                             // 0x1083(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PercentageChanceOfCarAlarmsBeingDisabled;                 // 0x1084(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPointLightComponent*                        HLight1;                                                  // 0x1088(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     HLight1SocketLocation;                                    // 0x1090(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     HLight2SocketLocation;                                    // 0x109C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            AnimatingMIDArray;                                        // 0x10A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UAudioComponent*                             AudibleAlarmSound;                                        // 0x10B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               UseCarBounce;                                             // 0x10C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               UseCarAlarm;                                              // 0x10C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x10C2(0x0002) MISSED OFFSET
	float                                              Headlight_Emissive_Brightness;                            // 0x10C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsCarAlarmEnabledInitialized;                             // 0x10C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DebugWind;                                                // 0x10C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x10CA(0x0006) MISSED OFFSET
	TArray<class UMaterialInterface*>                  OriginalMaterials;                                        // 0x10D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  IntenseWindMaterialsForPreview;                           // 0x10E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    Debug_TempMaterial;                                       // 0x10F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Debug_Wind_Intensity;                                     // 0x10F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x10FC(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        Wind_Intensity_Debug_Mesh;                                // 0x1100(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               CanDropOilDecal;                                          // 0x1108(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x1109(0x0003) MISSED OFFSET
	float                                              Wind_Yaw_Rotation;                                        // 0x110C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UPointLightComponent*                        Taillight1;                                               // 0x1110(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UPointLightComponent*                        Taillight2;                                               // 0x1118(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TailLightBrightness;                                      // 0x1120(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               TailLightsExist;                                          // 0x1124(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               HeadLightsExist;                                          // 0x1125(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x1126(0x0002) MISSED OFFSET
	class USpotLightComponent*                         HLight2;                                                  // 0x1128(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HeadLightLightBrightness;                                 // 0x1130(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     TLight1SocketLocation;                                    // 0x1134(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     TLight2SocketLocation;                                    // 0x1140(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     Bounce_Offset;                                            // 0x114C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     hlight2___impact_bounce_light_location;                   // 0x1158(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     tlight2___impact_bounce_light_location;                   // 0x1164(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               Car_Currently_Bouncing_From_Jump;                         // 0x1170(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x1171(0x0003) MISSED OFFSET
	struct FVector                                     hlight1___impact_bounce_light_location;                   // 0x1174(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     tlight1___impact_bounce_light_location;                   // 0x1180(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               Randomly_start_with_some_cars_lights_on;                  // 0x118C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x118D(0x0003) MISSED OFFSET
	float                                              Percentage_chance_of_lights_being_left_off;               // 0x1190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Final_Random_Light_Intensity_Variance;                    // 0x1194(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               This_Car_s_Lights_Have_Been_Randomly_Enabled;             // 0x1198(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               TurnHeadLightsOn;                                         // 0x1199(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Car_Copper.Car_Copper_C");
		return ptr;
	}


	void toggle_light_visibility(bool bNewVisibility);
	void Randomize_the_target_brightness_levels();
	void Set_Light_Brightness(float _0_1_Intensity, bool Include_Second_Emissive_Channel);
	float MaterialEditorSine(float Look_up_value, float Period);
	float SetCarAlarmEnabledBasedOnLocation(const struct FVector& Location, bool* NewParam);
	void setcanmakebouncingnoisetrue();
	void StopCarAlarmFromPlaying();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BounceCar__FinishedFunc();
	void BounceCar__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_2__FireOffNoise__EventFunc();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void StartSirenLight();
	void FadeSirenLight();
	void TriggerLowHealthParticleEffect();
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void FireOffCarAlarm();
	void OnBounceAnimationUpdate(struct FFortBounceData* Data);
	void Hit_Bounce_Finished();
	void Player_jump_based_bounce_();
	void ExecuteUbergraph_Car_Copper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
