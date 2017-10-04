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

// BlueprintGeneratedClass GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C
// 0x0049 (0x04B1 - 0x0468)
class AGCN_TakerMarkedForDeath_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0468(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    OverHeadEffect;                                           // 0x0470(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortMiniMapComponent*                       MiniMapCrosshair;                                         // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortMiniMapComponent*                       MiniMapIconBackground;                                    // 0x0480(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortFeedbackHandle                         TakerFeedbackEvent;                                       // 0x0488(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              TakerFeedbackRepeatDelay;                                 // 0x04A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TakerFeedbackInitialDelay;                                // 0x04A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTag                                TC_GameplayStatusStun;                                    // 0x04A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      PlayerIsStunned : 1;                                      // 0x04B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SoulSuckCheck();
	void ExecuteUbergraph_GCN_TakerMarkedForDeath(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
