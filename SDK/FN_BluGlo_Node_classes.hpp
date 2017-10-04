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

// BlueprintGeneratedClass BluGlo_Node.BluGlo_Node_C
// 0x00D8 (0x1098 - 0x0FC0)
class ABluGlo_Node_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FC0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UPointLightComponent*                        bluLight;                                                 // 0x0FC8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    IdleParticles;                                            // 0x0FD0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        bluglomesh;                                               // 0x0FD8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             Fort_BluGlo_loop_AudioComponent;                          // 0x0FE0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortMiniMapComponent*                       FortMiniMap;                                              // 0x0FE8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    BluGloSpawnparticle;                                      // 0x0FF0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Trail_HorizontalMovement_EEEFB2FD467DE31D5FDEDEA006F5C10F;// 0x0FF8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Trail_VerticalMovement_EEEFB2FD467DE31D5FDEDEA006F5C10F;  // 0x0FFC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Trail__Direction_EEEFB2FD467DE31D5FDEDEA006F5C10F;        // 0x1000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1001(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Trail;                                                    // 0x1008(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ActivateEffects : 1;                                      // 0x1010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DeActivateEffects : 1;                                    // 0x1011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      CanInteract : 1;                                          // 0x1012(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x1013(0x0005) MISSED OFFSET
	struct FText                                       BluGloQuantity;                                           // 0x1018(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance)
	class AFortPawn*                                   NewVar;                                                   // 0x1030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x1038(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x1044(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    TrailEffect;                                              // 0x1048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_BluGloLoop;                                         // 0x1050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    RandomSpawnRotation;                                      // 0x1058(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x1064(0x0004) MISSED OFFSET
	class ABluGlow_MorphAnimation_C*                   BlugloRef;                                                // 0x1068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UForceFeedbackEffect*                        PickupForceFeedback;                                      // 0x1070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UFortWorldItemDefinition*                    BlugloItemDef;                                            // 0x1078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       CollectText;                                              // 0x1080(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BluGlo_Node.BluGlo_Node_C");
		return ptr;
	}


	struct FText BlueprintGetInteractionString(class AFortPawn** InteractingPawn);
	void OnRep_CanInteract();
	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	void OnRep_DeActivateEffects();
	void OnRep_ActivateEffects();
	void UserConstructionScript();
	void Trail__FinishedFunc();
	void Trail__UpdateFunc();
	void ReceiveBeginPlay();
	void BlueprintOnInteract(class AFortPawn** InteractingPawn);
	void HandleMissionEvent_LocateBluGlo(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void ShowSpawnTrail(const struct FVector& StartLocation, float AnimDelay);
	void ExecuteUbergraph_BluGlo_Node(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
