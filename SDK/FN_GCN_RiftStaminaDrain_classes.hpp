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

// BlueprintGeneratedClass GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C
// 0x0030 (0x0498 - 0x0468)
class AGCN_RiftStaminaDrain_C : public AFortGameplayCueNotify_Looping
{
public:
	class UStaticMeshComponent*                        SM_DtB_StaminaDrainPlayer;                                // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    DrainMeshMaterial;                                        // 0x0470(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    DrainBeamMaterial;                                        // 0x0478(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     DrainLocationOffset;                                      // 0x0480(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x048C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C");
		return ptr;
	}


	void OnWhileActiveParticleSystemDeactivate(class UParticleSystemComponent** WhileActiveParticleSysComponent, struct FGameplayCueParameters* Parameters);
	void OnWhileActiveParticleSystemActivate(class UParticleSystemComponent** WhileActiveParticleSysComponent, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
