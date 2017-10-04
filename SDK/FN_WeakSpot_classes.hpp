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

// BlueprintGeneratedClass WeakSpot.WeakSpot_C
// 0x00DC (0x052C - 0x0450)
class AWeakSpot_C : public AFortCrackEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    AnimatedBackgroundRingsParticleEffect;                    // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        SphereHitLocator;                                         // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCapsuleComponent*                           CollisionComponent;                                       // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    DamageEffect;                                             // 0x0470(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScaleDownParticleTL_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E;// 0x0478(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleDownParticleTL__Direction_544AE05F40294D09C3C361AB7BCF6C4E;// 0x047C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x047D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleDownParticleTL;                                      // 0x0480(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundBase*                                  Impact_Sound;                                             // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundBase*                                  SpawnSound;                                               // 0x0490(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Particle_Location;                                        // 0x0498(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	class USoundBase*                                  SoundCrack_Level_01;                                      // 0x04A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  SoundCrack_Level_02;                                      // 0x04B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  SoundCrack_Level_03;                                      // 0x04B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  SoundCrack_Level_04;                                      // 0x04C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  SoundCrack_Level_05;                                      // 0x04C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  SoundCrack_Level_06;                                      // 0x04D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  SoundCrack_Level_07;                                      // 0x04D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class USoundBase*>                          Crack_sounds;                                             // 0x04E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class USoundBase*                                  SoundCrack_Level_08;                                      // 0x04F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  SoundCrack_Level_09;                                      // 0x04F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ConnectTheDotsWidth;                                      // 0x0500(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        ConnectTheDotsMesh;                                       // 0x0508(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ConnectTheDotsDuration;                                   // 0x0510(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ConnectTheDotsTimeoutFromPreviousHit;                     // 0x0514(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ConnectTheDotsDurationScale;                              // 0x0518(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ConnectTheDotsMaxDuration;                                // 0x051C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ConnectTheDotsTileScale;                                  // 0x0520(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ConnectTheDotsMinLength;                                  // 0x0524(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ConnectTheDotsMaxLength;                                  // 0x0528(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeakSpot.WeakSpot_C");
		return ptr;
	}


	void UserConstructionScript();
	void ScaleDownParticleTL__FinishedFunc();
	void ScaleDownParticleTL__UpdateFunc();
	void OnStartDirectionEffect();
	void OnHitCrack();
	void OnFadeOut();
	void HideMesh();
	void ExecuteUbergraph_WeakSpot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
