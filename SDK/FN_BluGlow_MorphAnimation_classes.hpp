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

// BlueprintGeneratedClass BluGlow_MorphAnimation.BluGlow_MorphAnimation_C
// 0x0070 (0x03F8 - 0x0388)
class ABluGlow_MorphAnimation_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    NewParticleSystem;                                        // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        BluGlowModel;                                             // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeline_0_Additional_Texture_Rotation_Rate_4CFA454F41B86B7BE42429BB2A905B1E;// 0x03B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeline_0_Scale_4CFA454F41B86B7BE42429BB2A905B1E;        // 0x03B4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeline_0_Morph_4CFA454F41B86B7BE42429BB2A905B1E;        // 0x03B8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeline_0_Glow_4CFA454F41B86B7BE42429BB2A905B1E;         // 0x03BC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_4CFA454F41B86B7BE42429BB2A905B1E;   // 0x03C0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x03D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                IntCounter;                                               // 0x03D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Initial_Sphere_Scale;                                     // 0x03DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Additional_Texture_Rotation_Rate;                         // 0x03E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x03E4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Number_of_Morph_Targets;                                  // 0x03F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                NumberOfMorphTargets;                                     // 0x03F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BluGlow_MorphAnimation.BluGlow_MorphAnimation_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__ChangeTargetFrame__EventFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BluGlow_MorphAnimation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
