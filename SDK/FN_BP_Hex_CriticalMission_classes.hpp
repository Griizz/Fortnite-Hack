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

// BlueprintGeneratedClass BP_Hex_CriticalMission.BP_Hex_CriticalMission_C
// 0x00C8 (0x07EC - 0x0724)
class ABP_Hex_CriticalMission_C : public ABP_Hex_PARENT_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0724(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0728(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    P_QuickplaySmoke;                                         // 0x0730(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    Particle03;                                               // 0x0738(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    Particle01;                                               // 0x0740(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_HexCloudRadar_Wire;                                     // 0x0748(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_HexCloudRadar_02;                                       // 0x0750(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_HexCloudRadar_01;                                       // 0x0758(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_HexCloudRadar_03;                                       // 0x0760(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        SM_CriticalMission_Rotate01;                              // 0x0768(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_HexCloudCircle_04;                                      // 0x0770(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_HexCloudCircle_03;                                      // 0x0778(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_HexCloudCircle_02;                                      // 0x0780(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CloudRotateDummy;                                         // 0x0788(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        S_HexRadarFalloffMesh;                                    // 0x0790(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Rotate_MPCRotation_0011687F41B08479D913F5901B8B4F9D;      // 0x0798(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Rotate_MeshRotation_0011687F41B08479D913F5901B8B4F9D;     // 0x079C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Rotate__Direction_0011687F41B08479D913F5901B8B4F9D;       // 0x07A0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x07A1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Rotate;                                                   // 0x07A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class ABP_Hex_PARENT_C*>                    ActiveTilesArray;                                         // 0x07B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    RadarWireMID;                                             // 0x07C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CloudHeightZ;                                             // 0x07C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x07CC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DM_Cloud01;                                               // 0x07D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    DM_Cloud02;                                               // 0x07D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     CloudLightVector;                                         // 0x07E0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hex_CriticalMission.BP_Hex_CriticalMission_C");
		return ptr;
	}


	void UserConstructionScript();
	void Rotate__FinishedFunc();
	void Rotate__UpdateFunc();
	void DeactivateCriticalMission();
	void ActivateCriticalMission();
	void ExecuteUbergraph_BP_Hex_CriticalMission(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
