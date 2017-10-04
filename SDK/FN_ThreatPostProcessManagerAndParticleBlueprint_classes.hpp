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

// BlueprintGeneratedClass ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C
// 0x01B5 (0x0545 - 0x0390)
class AThreatPostProcessManagerAndParticleBlueprint_C : public AFortThreatParticleActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UAudioComponent*                             EnterTheStormSound;                                       // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBillboardComponent*                         Sprite1;                                                  // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Ramp_Up_down_values_on_death_NewTrack_0_1CA080D642E9F1C3CB297DBE1BD2C9A4;// 0x03A8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Ramp_Up_down_values_on_death__Direction_1CA080D642E9F1C3CB297DBE1BD2C9A4;// 0x03AC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Ramp_Up_down_values_on_death;                             // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Min_Cloud_Distance_from_player;                           // 0x03B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Localized_Particle_System_MID;                            // 0x03C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    NewEventDispatcher;                                       // 0x03C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    NewEventDispatcher0;                                      // 0x03D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	TArray<struct FVector>                             Array_of_Cloud_Positions;                                 // 0x03E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<float>                                      SkyParticleCloudDistances;                                // 0x03F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<int>                                        CloudDistanceToPlayerLookUpArray;                         // 0x0408(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FVector                                     Target_Cloud_Position;                                    // 0x0418(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                RecalculateTimer;                                         // 0x0424(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Is_Alive : 1;                                             // 0x0428(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsAliveJustChanged : 1;                                   // 0x0429(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsAlivePrevious : 1;                                      // 0x042A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x042B(0x0001) MISSED OFFSET
	int                                                Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_alive;// 0x042C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      CurrentCloudMesh : 1;                                     // 0x0430(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	int                                                Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_dead;// 0x0434(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class APostProcessVolume*                          Materialpost;                                             // 0x0438(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              post_process_volume_falloff__around_the_threat_volume;    // 0x0440(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ShowRainEffect : 1;                                       // 0x0444(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0445(0x0003) MISSED OFFSET
	TArray<class AActor*>                              FourClosestClouds;                                        // 0x0448(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	int                                                Number_Of_Volumes_to_check;                               // 0x0458(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeltaTime;                                                // 0x045C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PostProcessTargetWeight;                                  // 0x0460(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Current_Post_Process_Weight;                              // 0x0464(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Post_Process_Fade_in_speed;                               // 0x0468(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SoundIsActive : 1;                                        // 0x046C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      SoundWasPreviouslyActive : 1;                             // 0x046D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x046E(0x0002) MISSED OFFSET
	struct FTransform                                  PlayerTransform;                                          // 0x0470(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      is_On : 1;                                                // 0x04A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x04A1(0x0007) MISSED OFFSET
	class APostProcessVolume*                          MaterialEffectsPostProcess;                               // 0x04A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	struct FLinearColor                                ThreatFogPostProcessColor_Morning;                        // 0x04B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                ThreatFogPostProcessColor_Day;                            // 0x04C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                ThreatFogPostProcessColor_Evening;                        // 0x04D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                ThreatFogPostProcessColor_Night;                          // 0x04E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	TArray<struct FBox>                                Array_of_Cloud_Volumes;                                   // 0x04F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                ClosestCloudIndex;                                        // 0x0500(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ClosestCloudDistance;                                     // 0x0504(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PostProcessWeightModulation;                              // 0x0508(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Ramp_Up_And_Down_Anim_Values;                             // 0x050C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      ShowRainOnCameraLens : 1;                                 // 0x0510(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0511(0x0007) MISSED OFFSET
	class AEmitterCameraLensEffectBase*                Rain_Camera_Lens_Effect;                                  // 0x0518(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    LocalizedParticleSystem;                                  // 0x0520(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsWorldReady : 1;                                         // 0x0528(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	float                                              Rain_Trace_Timer;                                         // 0x052C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     RainTraceOffset;                                          // 0x0530(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RainMultiplierCurrent;                                    // 0x053C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Rain_Spawn_Rate_Exponent;                                 // 0x0540(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      TracePrevious : 1;                                        // 0x0544(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C");
		return ptr;
	}


	void CalculatePlayerPositionNearBox(const struct FVector& BoxMin, const struct FVector& BoxMax, float* VolumePlayerCoveragePercentage);
	void UserConstructionScript();
	void Ramp_Up_down_values_on_death__FinishedFunc();
	void Ramp_Up_down_values_on_death__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void OnThreatCloudsChanged(TArray<struct FThreatLocationInfo>* ThreatLocationInfo);
	void OnWorldReady();
	void VFX_RainTracePeriodic();
	void StartTraceTimer();
	void ForceUpdateLensEffect();
	void ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint(int EntryPoint);
	void NewEventDispatcher0__DelegateSignature();
	void NewEventDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
