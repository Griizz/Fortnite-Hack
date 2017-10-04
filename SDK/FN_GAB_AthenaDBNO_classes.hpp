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

// BlueprintGeneratedClass GAB_AthenaDBNO.GAB_AthenaDBNO_C
// 0x00E8 (0x0B28 - 0x0A40)
class UGAB_AthenaDBNO_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UAnimMontage*                                DeathMontage;                                             // 0x0A48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     DeathHitDirection;                                        // 0x0A50(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A5C(0x0004) MISSED OFFSET
	struct FHitResult                                  DeathHitResult;                                           // 0x0A60(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // 0x0AE8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       GameplayStatusAfflicted;                                  // 0x0B08(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_AthenaDBNO.GAB_AthenaDBNO_C");
		return ptr;
	}


	void GetInitialHealAmount(float* Health);
	void InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData);
	void OnCancelled_F0F6785443BD2E74F5591884CB19F35F();
	void OnInterrupted_F0F6785443BD2E74F5591884CB19F35F();
	void OnBlendOut_F0F6785443BD2E74F5591884CB19F35F();
	void OnCompleted_F0F6785443BD2E74F5591884CB19F35F();
	void OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6();
	void OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAB_AthenaDBNO(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
