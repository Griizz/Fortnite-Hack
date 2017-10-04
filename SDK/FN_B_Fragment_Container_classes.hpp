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

// BlueprintGeneratedClass B_Fragment_Container.B_Fragment_Container_C
// 0x0360 (0x1310 - 0x0FB0)
class AB_Fragment_Container_C : public ABuildingSMActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FB0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    P_LightOn;                                                // 0x0FB8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Orb_Mesh;                                                 // 0x0FC0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_ResOut;                                                 // 0x0FC8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_Orb_PickupEffect;                                       // 0x0FD0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCapsuleComponent*                           BlockingCollision;                                        // 0x0FD8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      Container_SK;                                             // 0x0FE0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             RotationRoot;                                             // 0x0FE8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             VerticalMovement;                                         // 0x0FF0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBoxComponent*                               Awaken_Collision;                                         // 0x0FF8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USphereComponent*                            MiniMapCollision;                                         // 0x1000(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortMiniMapComponent*                       MiniMapLoc;                                               // 0x1008(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VerticalMovementTimeline_Z_Offset_E77B23F44312E9BD5DA6EF9ACE127DE4;// 0x1010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    VerticalMovementTimeline__Direction_E77B23F44312E9BD5DA6EF9ACE127DE4;// 0x1014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1015(0x0003) MISSED OFFSET
	class UTimelineComponent*                          VerticalMovementTimeline;                                 // 0x1018(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       TC_HasFragmentAbility;                                    // 0x1020(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_LlamaFragment;                                         // 0x1040(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_SaveGame)
	struct FGameplayTagContainer                       TC_ChargeFragmentTag;                                     // 0x1060(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_LlamaFragmentTag;                                      // 0x1080(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                Event_FragmentCollected;                                  // 0x10A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayEventData                          SentFragment;                                             // 0x10A8(0x00A8) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TEnumAsByte<E_OutlanderFragmentTypes>              FragmentType;                                             // 0x1150(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1151(0x0003) MISSED OFFSET
	struct FLinearColor                                ChargeFragmentColor;                                      // 0x1154(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_SaveGame, CPF_IsPlainOldData)
	struct FLinearColor                                LlamaFragmentColor;                                       // 0x1164(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x1174(0x0004) MISSED OFFSET
	class UFortAmmoItemDefinition*                     FragmentAmmoData;                                         // 0x1178(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AActor*                                      Current_Outlander;                                        // 0x1180(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AFortPlayerPawn*                             InteractingPlayerPawn;                                    // 0x1188(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GE_Outlander_LlamaFragment;                               // 0x1190(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GE_ClearFragmentCooldown;                                 // 0x1198(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GE_Outlander_FragmentTeamSpeedBost;                       // 0x11A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FortPawnFilter;                                           // 0x11A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LlamaFragmentPercent;                                     // 0x11B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              RotateToPlayerSpeed;                                      // 0x11B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LastInteractStartTime;                                    // 0x11B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DelayedDestroyTime;                                       // 0x11BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                NumberOfTimeToPingMap;                                    // 0x11C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                NumberOfMapPings;                                         // 0x11C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsAnyOutlanderStillAround : 1;                            // 0x11C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      CanInteract : 1;                                          // 0x11C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      IsAwake : 1;                                              // 0x11CA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      HasLoot : 1;                                              // 0x11CB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsOpen : 1;                                               // 0x11CC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsUP : 1;                                                // 0x11CD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsOn : 1;                                                 // 0x11CE(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x11CF(0x0001) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Container_Base_Mat;                                       // 0x11D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Container_Screen_mat;                                     // 0x11D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Container_Light_mat;                                      // 0x11E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Orb_Mat;                                                  // 0x11E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Orb_Turn_On_Sound;                                        // 0x11F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Orb_Hello_Sound;                                          // 0x11F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Orb_Hover_Sound;                                          // 0x1200(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Orb_Goodbye_Sound;                                        // 0x1208(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Orb_Thanks_Sound;                                         // 0x1210(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       InteractLlamaFragment;                                    // 0x1218(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       InteractChargeFragment;                                   // 0x1230(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       InteractNonOutlander;                                     // 0x1248(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       PickupLlamaFragment;                                      // 0x1260(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       PickupChargeFragment;                                     // 0x1278(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UAudioComponent*                             OrbAudioComponent;                                        // 0x1290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsOrbTaken : 1;                                           // 0x1298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x1299(0x0007) MISSED OFFSET
	struct FText                                       FailedOutlanderOnlyOneLlama;                              // 0x12A0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       FailedOutlanderMaxFragHeldDefault;                        // 0x12B8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       FailedOutlanderActivatedButDoesNotYetPossessFragmentAbility;// 0x12D0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       FailedNonOutlanderActivated;                              // 0x12E8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UForceFeedbackEffect*                        FF_Interact;                                              // 0x1300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UForceFeedbackEffect*                        FFInteractSoft;                                           // 0x1308(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Fragment_Container.B_Fragment_Container_C");
		return ptr;
	}


	void ForceFeedbackInteract(bool Soft);
	void OnRep_IsOrbTaken();
	void OnRep_IsOn();
	void SetOutlander(class AActor* NewOutlander);
	void SetAwake(bool NewAwake);
	void UpdateShouldTick();
	struct FText BlueprintGetFailedInteractionString(class AFortPawn** InteractingPawn);
	void OnRep_IsOpen();
	void DelayedDestroy();
	void OnRep_BuffType();
	struct FText BlueprintGetInteractionString(class AFortPawn** InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	void UserConstructionScript();
	void VerticalMovementTimeline__FinishedFunc();
	void VerticalMovementTimeline__UpdateFunc();
	void VerticalMovementTimeline__Up__EventFunc();
	void VerticalMovementTimeline__down__EventFunc();
	void ReceiveBeginPlay();
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void BlueprintOnInteract(class AFortPawn** InteractingPawn);
	void ActivateFX();
	void BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveTick(float* DeltaSeconds);
	void MoveUp();
	void PowerDown();
	void MoveDown();
	void ShowOnMiniMap();
	void StartHide();
	void Reset_Activation();
	void BlueprintOnBeginInteract();
	void MultiFeedback();
	void SoftFeedback();
	void ExecuteUbergraph_B_Fragment_Container(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
