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

// BlueprintGeneratedClass StoreWeaponMaster_BP.StoreWeaponMaster_BP_C
// 0x0154 (0x04DC - 0x0388)
class AStoreWeaponMaster_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        WeaponHiddenLocation;                                     // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      SKMeleeWeapon;                                            // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        MeleeWeaponDefaultPosition;                               // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        WeaponRoot;                                               // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             PinataSceneRoot;                                          // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     MeleeWeaponEquipLoc;                                      // 0x03B8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     SKMeleeLocation;                                          // 0x03C4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    SKMeleeRotation;                                          // 0x03D0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     MeleeWeaponDownLoc;                                       // 0x03DC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    MeleeWeaponEquipRot;                                      // 0x03E8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	TAssetPtr<class USoundBase>                        SoundWeaponReady;                                         // 0x03F8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	class USoundBase*                                  SoundCurrentWeaponReady;                                  // 0x0418(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class USoundBase>                        SoundWeaponSwing;                                         // 0x0420(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	class USoundBase*                                  SoundCurrentWeaponSwing;                                  // 0x0440(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class USoundBase>                        SoundWeaponImpact;                                        // 0x0448(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	class USoundBase*                                  SoundCurrentWeaponImpact;                                 // 0x0468(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class USoundBase>                        SoundWeaponGreet;                                         // 0x0470(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class USoundBase*                                  SoundCurrentWeaponGreet;                                  // 0x0490(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponObject;                                             // 0x0498(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class USkeletalMesh>                     WeaponAssetID;                                            // 0x04A0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      Debug : 1;                                                // 0x04C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04C1(0x0003) MISSED OFFSET
	struct FVector                                     WeaponOffsetLoc;                                          // 0x04C4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    WeaponOffsetRot;                                          // 0x04D0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StoreWeaponMaster_BP.StoreWeaponMaster_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_StoreWeaponMaster_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
