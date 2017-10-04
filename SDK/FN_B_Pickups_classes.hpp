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

// BlueprintGeneratedClass B_Pickups.B_Pickups_C
// 0x01E1 (0x05A9 - 0x03C8)
class AB_Pickups_C : public AFortPickupEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Pivot_Offset;                                             // 0x03E0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    Rotation_Bias;                                            // 0x03EC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Static_Mesh_Pickup;                                       // 0x03F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      Skeletal_Mesh_Pickup;                                     // 0x0400(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsSkeletalMesh : 1;                                       // 0x0408(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Is_a_Backpack : 1;                                        // 0x0409(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x040A(0x0006) MISSED OFFSET
	TArray<class UMaterialInterface*>                  ListOfMaterialsExemptFromReparenting;                     // 0x0410(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UPrimitiveComponent*                         SkeletalOrStaticMeshAssetPrimitive;                       // 0x0420(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                CurrentElementIndex;                                      // 0x0428(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            MIDArray;                                                 // 0x0430(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UMaterialInterface*                          CurrentMaterial;                                          // 0x0440(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInterface*                          CurrentParentMaterial;                                    // 0x0448(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      MaterialParentIsValid : 1;                                // 0x0450(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	TArray<class UMaterialInterface*>                  ListOfParentMaterialsExemptFromReparenting;               // 0x0458(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UParticleSystem*                             BackpackParticleSystem;                                   // 0x0468(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Tick_Accumulation;                                        // 0x0470(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Speed_After_Being_picked_up;                              // 0x0474(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 ShrinkParticleWhenPickedUpCurve;                          // 0x0478(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Tossed : 1;                                               // 0x0480(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Activate_Rarity_Particle_Systems : 1;                     // 0x0481(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0482(0x0006) MISSED OFFSET
	class USkeletalMeshComponent*                      Skeletal_Mesh_Pickup_Hologram;                            // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Hologram_MIDs;                                            // 0x0490(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UTexture*>                            NormalMaps;                                               // 0x04A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FLinearColor                                Rarity_Color;                                             // 0x04B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Rarity_Level;                                             // 0x04C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Current_MID;                                              // 0x04C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<float>                                      Sweep_Brightness;                                         // 0x04D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<float>                                      Sweep_Speed;                                              // 0x04E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              Component_Radius__Scaled_;                                // 0x04F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Component_Radius_Multiplier;                              // 0x04F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture*                                    Empty_Normal;                                             // 0x04F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Static_Mesh_Pickup_Hologram;                              // 0x0500(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         SkeletalOrStaticMeshHologramAssetPrimitive;               // 0x0508(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<float>                                      Sparkle_Spawn_Rate__Ground_;                              // 0x0510(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FLinearColor>                        Outline_Rarity_Colors;                                    // 0x0520(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              Sphere_Radius;                                            // 0x0530(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Picked_Up_Delay_Before_Glow;                              // 0x0534(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Picked_Up_Fade_In_Time;                                   // 0x0538(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Picked_Up_Hold_Time;                                      // 0x053C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Picked_Up_Fade_Out_Time;                                  // 0x0540(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Picked_Up_Sweep_Speed;                                    // 0x0544(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsBluglo : 1;                                             // 0x0548(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0549(0x0007) MISSED OFFSET
	class UParticleSystem*                             BlugloParticleSystem;                                     // 0x0550(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Picked_Up_Trail_PS;                                       // 0x0558(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<float>                                      Sparkle_Spawn_Rate__Picked_Up_;                           // 0x0560(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<float>                                      Lifetime__Picked_Up_;                                     // 0x0570(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UMaterialInterface*                          Hologram_Material;                                        // 0x0580(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsLootGiftForOthers : 1;                                  // 0x0588(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0589(0x0007) MISSED OFFSET
	class UForceFeedbackEffect*                        PickupForceFeedback;                                      // 0x0590(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    Violentium_Particle;                                      // 0x0598(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             ViolentiumParticleSystem;                                 // 0x05A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Is_Violentium : 1;                                        // 0x05A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Pickups.B_Pickups_C");
		return ptr;
	}


	void CreateHologramMIDs();
	void SetHologramPickedUpParams(bool Tier_0_or_1);
	void SpawnPickedUpTrailPS();
	void SetRarityColor();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void OnAboutToEnterBackpack(class AFortPawn** PickupTarget);
	void OnTossed();
	void OnPickedUp();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Pickups(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
