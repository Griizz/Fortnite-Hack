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

// BlueprintGeneratedClass GA_DefaultPlayer_HarvestBuff.GA_DefaultPlayer_HarvestBuff_C
// 0x00D0 (0x0B10 - 0x0A40)
class UGA_DefaultPlayer_HarvestBuff_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FGameplayEventData                          EventData;                                                // 0x0A48(0x00A8) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                EventActivation;                                          // 0x0AF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                HitThreshold;                                             // 0x0AF8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AFC(0x0004) MISSED OFFSET
	class UClass*                                      GE_HarvestBuffHit;                                        // 0x0B00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0B08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_HarvestBuff.GA_DefaultPlayer_HarvestBuff_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GA_DefaultPlayer_HarvestBuff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
