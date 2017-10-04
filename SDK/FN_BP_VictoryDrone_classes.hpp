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

// BlueprintGeneratedClass BP_VictoryDrone.BP_VictoryDrone_C
// 0x0048 (0x0430 - 0x03E8)
class ABP_VictoryDrone_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    PlayerTeleportEffect;                                     // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    SpawnEffect;                                              // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    SpawnOutAnimEndedDispatcher;                              // 0x0410(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	float                                              AnimPlayRate;                                             // 0x0420(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    StaticMeshMID;                                            // 0x0428(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VictoryDrone.BP_VictoryDrone_C");
		return ptr;
	}


	void NotifyTeleportFinishedTriggered();
	void PlaySpawnOutAnim();
	void InitDrone();
	void TriggerPlayerSpawnEffects();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnSpawnOutAnimEnded(class UAnimMontage* Montage, bool bInterrupted);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_VictoryDrone(int EntryPoint);
	void SpawnOutAnimEndedDispatcher__DelegateSignature(class ABP_VictoryDrone_C* Drone);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
