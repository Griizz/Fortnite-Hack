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

// BlueprintGeneratedClass GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C
// 0x0010 (0x0A50 - 0x0A40)
class UGA_DefaultPlayer_Consumable_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UAnimMontage*                                EatMontage;                                               // 0x0A48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C");
		return ptr;
	}


	void Completed_A3A081314405D22C4EED5CB989DC8CB1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_A3A081314405D22C4EED5CB989DC8CB1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_A3A081314405D22C4EED5CB989DC8CB1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GA_DefaultPlayer_Consumable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
