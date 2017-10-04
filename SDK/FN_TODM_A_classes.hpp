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

// BlueprintGeneratedClass TODM_A.TODM_A_C
// 0x01BC (0x0DAC - 0x0BF0)
class ATODM_A_C : public AFortTimeOfDayManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BF0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UPostProcessComponent*                       EditorPostProcessMaterial_HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime_;// 0x0BF8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              New_Storm_Timeline_Wind_Strength_A54B465A45C4FA058D4E33A79E94EB3C;// 0x0C00(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              New_Storm_Timeline_RainInt_A54B465A45C4FA058D4E33A79E94EB3C;// 0x0C04(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              New_Storm_Timeline_Lightning_Modulator_A54B465A45C4FA058D4E33A79E94EB3C;// 0x0C08(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              New_Storm_Timeline_Storm_Ramp_In_Value_A54B465A45C4FA058D4E33A79E94EB3C;// 0x0C0C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    New_Storm_Timeline__Direction_A54B465A45C4FA058D4E33A79E94EB3C;// 0x0C10(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C11(0x0007) MISSED OFFSET
	class UTimelineComponent*                          New_Storm_Timeline;                                       // 0x0C18(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FlashLightning_LightningColorLERP_2BD0C1B54C66FC6DE051729F8F094D6E;// 0x0C20(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FlashLightning_lightning_alpha_2BD0C1B54C66FC6DE051729F8F094D6E;// 0x0C24(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FlashLightning_Lightning_Intensity_2BD0C1B54C66FC6DE051729F8F094D6E;// 0x0C28(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FlashLightning__Direction_2BD0C1B54C66FC6DE051729F8F094D6E;// 0x0C2C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C2D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FlashLightning;                                           // 0x0C30(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WindSpeed;                                                // 0x0C38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RandomWeatherWaitTime;                                    // 0x0C3C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CurrentAmountOfRandomWeatherTimeLeft;                     // 0x0C40(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              NewWeatherLerpAmount;                                     // 0x0C44(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WindStrength;                                             // 0x0C48(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FutureWindStrength;                                       // 0x0C4C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FutureWindSpeed;                                          // 0x0C50(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bPickNewWindConditions : 1;                               // 0x0C54(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0C55(0x0003) MISSED OFFSET
	float                                              LightningStrength;                                        // 0x0C58(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ThreatCloudStormAmount;                                   // 0x0C5C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UseRainWithStorms : 1;                                    // 0x0C60(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Play_a_Particle_Effect_Near_the_players_Feet : 1;         // 0x0C61(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      WindEffects_Should_be_Active : 1;                         // 0x0C62(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0C63(0x0005) MISSED OFFSET
	class UParticleSystemComponent*                    Storm_Foot_Particle_Outdoor;                              // 0x0C68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Storm_Foot_Particle_While_on_Terrain;                     // 0x0C70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    Storm_Foot_Particle_Indoor;                               // 0x0C78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Storm_Foot_Particle_While_NOT_on_Terrain;                 // 0x0C80(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Storm_Wind_Strength;                                      // 0x0C88(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Generate_Foliage_Wind_Gusts : 1;                          // 0x0C8C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0C8D(0x0003) MISSED OFFSET
	struct FTimerHandle                                LightningStrikeTimerHandle;                               // 0x0C90(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FLinearColor                                PreviousDirectionalLightColor;                            // 0x0C98(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Lightning_Flash_Color;                                    // 0x0CA8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              Lightning_Flash_Timeline_Min;                             // 0x0CB8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Lightning_Flash_Timeline_Max;                             // 0x0CBC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ShootingStarParticleSystem;                               // 0x0CC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Spawn_Shooting_Stars : 1;                                 // 0x0CC8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0CC9(0x0003) MISSED OFFSET
	struct FLinearColor                                SkyboxFogMorningColor;                                    // 0x0CCC(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                SkyboxFogMorningLitColor;                                 // 0x0CDC(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogMorningDistance;                                 // 0x0CEC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogMorningDiffuseAmount;                            // 0x0CF0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogMorningEmissiveAmount;                           // 0x0CF4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogMorningLitLength;                                // 0x0CF8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogMorningLitRotation;                              // 0x0CFC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogMorningLitOffset;                                // 0x0D00(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                SkyboxFogDayColor;                                        // 0x0D04(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                SkyboxFogDayLitColor;                                     // 0x0D14(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogDayDistance;                                     // 0x0D24(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogDayDiffuseAmount;                                // 0x0D28(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogDayEmissiveAmount;                               // 0x0D2C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogDayLitLength;                                    // 0x0D30(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogDayLitRotation;                                  // 0x0D34(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogDayLitOffset;                                    // 0x0D38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                SkyboxFogEveningColor;                                    // 0x0D3C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                SkyboxFogEveningLitColor;                                 // 0x0D4C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogEveningDistance;                                 // 0x0D5C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogEveningDiffuseAmount;                            // 0x0D60(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogEveningEmissiveAmount;                           // 0x0D64(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogEveningLitLength;                                // 0x0D68(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogEveningLitRotation;                              // 0x0D6C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogEveningLitOffset;                                // 0x0D70(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                SkyboxFogNightColor;                                      // 0x0D74(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                SkyboxFogNightLitColor;                                   // 0x0D84(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogNightDistance;                                   // 0x0D94(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogNightDiffuseAmount;                              // 0x0D98(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogNightEmissiveAmount;                             // 0x0D9C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogNightLitLength;                                  // 0x0DA0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogNightLitRotation;                                // 0x0DA4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogNightLitOffset;                                  // 0x0DA8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TODM_A.TODM_A_C");
		return ptr;
	}


	void UserConstructionScript();
	void FlashLightning__FinishedFunc();
	void FlashLightning__UpdateFunc();
	void New_Storm_Timeline__FinishedFunc();
	void New_Storm_Timeline__UpdateFunc();
	void New_Storm_Timeline__FireOffRain__EventFunc();
	void StartStorm();
	void OnStormStart();
	void OnStormEnd();
	void LightningStrike();
	void ReceiveBeginPlay();
	void DisableLightAndFog(bool Enable);
	void EnableHDRRendering();
	void ExecuteUbergraph_TODM_A(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
