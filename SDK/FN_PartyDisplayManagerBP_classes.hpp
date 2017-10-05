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

// BlueprintGeneratedClass PartyDisplayManagerBP.PartyDisplayManagerBP_C
// 0x00B9 (0x04E9 - 0x0430)
class APartyDisplayManagerBP_C : public APartyDisplayManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0438(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0440(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        ScalePivot;                                               // 0x0448(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        PivotHolder;                                              // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    CelebratoryFX;                                            // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScaleAnimEvolve_Scaling_6D0D09564D54A0DEA88CCC96FA6653CC; // 0x0468(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleAnimEvolve__Direction_6D0D09564D54A0DEA88CCC96FA6653CC;// 0x046C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x046D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleAnimEvolve;                                          // 0x0470(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScaleAnimLevel_Scaling_CC68128E49202D0C982B7A945E41AF43;  // 0x0478(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleAnimLevel__Direction_CC68128E49202D0C982B7A945E41AF43;// 0x047C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x047D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleAnimLevel;                                           // 0x0480(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTimerHandle                                TimerHandle;                                              // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              Rotation;                                                 // 0x0490(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	class UFortItem*                                   ItemToRepresent;                                          // 0x0498(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               PreviewRotation;                                          // 0x04A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04A1(0x0007) MISSED OFFSET
	class UCurveFloat*                                 RotationAnimation;                                        // 0x04A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             LevelUpFX;                                                // 0x04B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             EvolveUpFX;                                               // 0x04B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     FXTargetLocation;                                         // 0x04C0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsCharacter;                                              // 0x04CC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsEvolve;                                                 // 0x04CD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x04CE(0x0002) MISSED OFFSET
	class UParticleSystem*                             CharLevelUpFX;                                            // 0x04D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             CharEvolveUpFX;                                           // 0x04D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    UIoverrideMID;                                            // 0x04E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               HasResetVisuals;                                          // 0x04E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PartyDisplayManagerBP.PartyDisplayManagerBP_C");
		return ptr;
	}


	void GetItemDefinitionToShow(class UFortItemDefinition** ItemDefinition);
	void SetUIOverrideVisuals(class UTexture2D* Large_Texture, class UFortItemDefinition* Item, EFortRarity Rarity);
	struct FTransform GetWeaponPlacementTransform();
	void UpdatePreviewMeshTransforms();
	struct FTransform GetItemPreviewOffset(class UFortItemDefinition* ItemDefinition);
	struct FTransform GetPreviewMeshWorldTransform();
	void SetupStaticMeshVisuals(class UStaticMesh* NewMesh);
	void SetupSkeletalMeshVisuals(class USkeletalMesh* NewMesh);
	void ResetVisuals();
	void UserConstructionScript();
	void ScaleAnimLevel__FinishedFunc();
	void ScaleAnimLevel__UpdateFunc();
	void ScaleAnimEvolve__FinishedFunc();
	void ScaleAnimEvolve__UpdateFunc();
	void ShowLoading();
	void HideLoading();
	void ShowItem(class UFortItem** ItemToView);
	void PlayLevelUpEffect();
	void PlayEvolutionEffect();
	void CelebrateWithFX();
	void PerformScaleMeshFX();
	void HandleLoadingAssetsForItemCompleted(class UFortItemDefinition** ItemWhoseAssetsWereLoaded, TArray<class UObject*>* LoadedAssets);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_PartyDisplayManagerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
