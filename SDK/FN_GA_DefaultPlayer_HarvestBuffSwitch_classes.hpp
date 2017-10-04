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

// BlueprintGeneratedClass GA_DefaultPlayer_HarvestBuffSwitch.GA_DefaultPlayer_HarvestBuffSwitch_C
// 0x00D0 (0x0B10 - 0x0A40)
class UGA_DefaultPlayer_HarvestBuffSwitch_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FGameplayTagContainer                       TC_ImpactWeapon;                                          // 0x0A48(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HarvestBuff_T1;                                        // 0x0A68(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_LaserFocus;                                            // 0x0A88(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UClass*                                      GE_LaserFocus;                                            // 0x0AA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       TC_ImpactWeapon_Stick;                                    // 0x0AB0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_ImpactWeapon_Pickaxe;                                  // 0x0AD0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HarvestBuff_T2;                                        // 0x0AF0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_HarvestBuffSwitch.GA_DefaultPlayer_HarvestBuffSwitch_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GA_DefaultPlayer_HarvestBuffSwitch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
