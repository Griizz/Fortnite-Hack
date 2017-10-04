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

// BlueprintGeneratedClass GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C
// 0x0098 (0x0B08 - 0x0A70)
class UGA_DefaultPlayer_Stunned_C : public UGAB_GenericStunned_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A70(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UAnimMontage*                                TakerSoulSuckVictimMontage;                               // 0x0A78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTag                                TC_GT_NPCAbilityAttackMeleeSoulSuck;                      // 0x0A80(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                TC_NPCAbilityAttackMeleeSoulSuckRelease;                  // 0x0A88(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NPCAbilityAttackMeleeSoulSuck;                         // 0x0A90(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class AFortPawn*                                   PlayerPawn;                                               // 0x0AB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       SoulSuckMontageSection;                                   // 0x0AB8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       SoulSuckCurrentMontageSection;                            // 0x0AC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SoulSuckGoalActorNormalizedHealth;                        // 0x0AC8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0ACC(0x0004) MISSED OFFSET
	struct FFortFeedbackHandle                         StunFeedbackEvent;                                        // 0x0AD0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UClass*                                      SoulSuckCameraShake;                                      // 0x0AE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCameraAnimInst*                             SoulSuckCameraAnimInst;                                   // 0x0AF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class APlayerCameraManager*                        PlayerCameraManager;                                      // 0x0AF8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // 0x0B00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C");
		return ptr;
	}


	void Completed_3C8EA97E467ED88E163FF0B4F830736D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_3C8EA97E467ED88E163FF0B4F830736D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_3C8EA97E467ED88E163FF0B4F830736D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnInterrupted_F3FA8C4A4CF8BA1E44F6768A402E7D71();
	void OnComplete_F3FA8C4A4CF8BA1E44F6768A402E7D71();
	void OnCancelled_B4CDDE17442A807B7592E7A70F4F6DEF();
	void OnInterrupted_B4CDDE17442A807B7592E7A70F4F6DEF();
	void OnBlendOut_B4CDDE17442A807B7592E7A70F4F6DEF();
	void OnCompleted_B4CDDE17442A807B7592E7A70F4F6DEF();
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void ResetSoulSuckLift();
	void SoulSuckCheck();
	void ResetSoulSuckRelease();
	void SoulSuckEndCheck();
	void ExecuteUbergraph_GA_DefaultPlayer_Stunned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
