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

// BlueprintGeneratedClass TODM_Disabled.TODM_Disabled_C
// 0x0180 (0x0F2C - 0x0DAC)
class ATODM_Disabled_C : public ATODM_A_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0DAC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DB0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	float                                              WindSpeed_1;                                              // 0x0DB8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RandomWeatherWaitTime_1;                                  // 0x0DBC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CurrentAmountOfRandomWeatherTimeLeft_1;                   // 0x0DC0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              NewWeatherLerpAmount_1;                                   // 0x0DC4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WindStrength_1;                                           // 0x0DC8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FutureWindStrength_1;                                     // 0x0DCC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FutureWindSpeed_1;                                        // 0x0DD0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bPickNewWindConditions_1 : 1;                             // 0x0DD4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0DD5(0x0003) MISSED OFFSET
	float                                              LightningStrength_1;                                      // 0x0DD8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ThreatCloudStormAmount_1;                                 // 0x0DDC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UseRainWithStorms_1 : 1;                                  // 0x0DE0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Play_a_Particle_Effect_Near_the_players_Feet_1 : 1;       // 0x0DE1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      WindEffects_Should_be_Active_1 : 1;                       // 0x0DE2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0DE3(0x0005) MISSED OFFSET
	class UParticleSystemComponent*                    Storm_Foot_Particle_Outdoor_1;                            // 0x0DE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Storm_Foot_Particle_While_on_Terrain_1;                   // 0x0DF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    Storm_Foot_Particle_Indoor_1;                             // 0x0DF8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Storm_Foot_Particle_While_NOT_on_Terrain_1;               // 0x0E00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Storm_Wind_Strength_1;                                    // 0x0E08(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Generate_Foliage_Wind_Gusts_1 : 1;                        // 0x0E0C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0E0D(0x0003) MISSED OFFSET
	struct FTimerHandle                                LightningStrikeTimerHandle_1;                             // 0x0E10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FLinearColor                                PreviousDirectionalLightColor_1;                          // 0x0E18(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                Lightning_Flash_Color_1;                                  // 0x0E28(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              Lightning_Flash_Timeline_Min_1;                           // 0x0E38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Lightning_Flash_Timeline_Max_1;                           // 0x0E3C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ShootingStarParticleSystem_1;                             // 0x0E40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Spawn_Shooting_Stars_1 : 1;                               // 0x0E48(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0E49(0x0003) MISSED OFFSET
	struct FLinearColor                                SkyboxFogMorningColor_1;                                  // 0x0E4C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                SkyboxFogMorningLitColor_1;                               // 0x0E5C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogMorningDistance_1;                               // 0x0E6C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogMorningDiffuseAmount_1;                          // 0x0E70(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogMorningEmissiveAmount_1;                         // 0x0E74(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogMorningLitLength_1;                              // 0x0E78(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogMorningLitRotation_1;                            // 0x0E7C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogMorningLitOffset_1;                              // 0x0E80(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                SkyboxFogDayColor_1;                                      // 0x0E84(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                SkyboxFogDayLitColor_1;                                   // 0x0E94(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogDayDistance_1;                                   // 0x0EA4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogDayDiffuseAmount_1;                              // 0x0EA8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogDayEmissiveAmount_1;                             // 0x0EAC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogDayLitLength_1;                                  // 0x0EB0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogDayLitRotation_1;                                // 0x0EB4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogDayLitOffset_1;                                  // 0x0EB8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                SkyboxFogEveningColor_1;                                  // 0x0EBC(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                SkyboxFogEveningLitColor_1;                               // 0x0ECC(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogEveningDistance_1;                               // 0x0EDC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogEveningDiffuseAmount_1;                          // 0x0EE0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogEveningEmissiveAmount_1;                         // 0x0EE4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogEveningLitLength_1;                              // 0x0EE8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogEveningLitRotation_1;                            // 0x0EEC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogEveningLitOffset_1;                              // 0x0EF0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                SkyboxFogNightColor_1;                                    // 0x0EF4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                SkyboxFogNightLitColor_1;                                 // 0x0F04(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogNightDistance_1;                                 // 0x0F14(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogNightDiffuseAmount_1;                            // 0x0F18(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogNightEmissiveAmount_1;                           // 0x0F1C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogNightLitLength_1;                                // 0x0F20(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogNightLitRotation_1;                              // 0x0F24(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SkyboxFogNightLitOffset_1;                                // 0x0F28(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TODM_Disabled.TODM_Disabled_C");
		return ptr;
	}


	void UserConstructionScript();
	void DisableLightAndFog(bool* Enable);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TODM_Disabled(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
