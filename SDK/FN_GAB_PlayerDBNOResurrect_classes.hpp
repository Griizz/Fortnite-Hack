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

// BlueprintGeneratedClass GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C
// 0x0040 (0x0A80 - 0x0A40)
class UGAB_PlayerDBNOResurrect_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FGameplayTag                                EC_AppliedEffect;                                         // 0x0A48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0A50(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              KnockbackMagnitude;                                       // 0x0A58(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A5C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              HitActors;                                                // 0x0A60(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	class UClass*                                      KnockbackStunGE;                                          // 0x0A70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      BP_VictoryDrone;                                          // 0x0A78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C");
		return ptr;
	}


	void Completed_0B41E4DC44D3371D619734A714E9FE50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_0B41E4DC44D3371D619734A714E9FE50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_0B41E4DC44D3371D619734A714E9FE50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_8E1AEF7D40AE1D4CCBACC68EEB3D87D6(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_8E1AEF7D40AE1D4CCBACC68EEB3D87D6(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void K2_OnEndAbility();
	void ExecuteUbergraph_GAB_PlayerDBNOResurrect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
