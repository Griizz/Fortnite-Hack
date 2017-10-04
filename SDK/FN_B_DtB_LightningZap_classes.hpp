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

// BlueprintGeneratedClass B_DtB_LightningZap.B_DtB_LightningZap_C
// 0x002C (0x03B4 - 0x0388)
class AB_DtB_LightningZap_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    P_DtBRiftLightningZap;                                    // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     RiftLocation;                                             // 0x03A0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TickDuration;                                             // 0x03AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TickCounter;                                              // 0x03B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_DtB_LightningZap.B_DtB_LightningZap_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void FireLightning();
	void ExecuteUbergraph_B_DtB_LightningZap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
