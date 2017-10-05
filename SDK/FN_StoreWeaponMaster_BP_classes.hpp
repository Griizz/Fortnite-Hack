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
// 0x00B8 (0x0440 - 0x0388)
class AStoreWeaponMaster_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        WeaponHiddenLocation;                                     // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      SKMeleeWeapon;                                            // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        MeleeWeaponDefaultPosition;                               // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        WeaponRoot;                                               // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             PinataSceneRoot;                                          // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TAssetPtr<class USoundBase>                        SoundWeaponReady;                                         // 0x03B8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TAssetPtr<class USoundBase>                        SoundWeaponSwing;                                         // 0x03D8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TAssetPtr<class USoundBase>                        SoundWeaponImpact;                                        // 0x03F8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	class USkeletalMeshComponent*                      WeaponObject;                                             // 0x0418(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class USkeletalMesh>                     WeaponAssetID;                                            // 0x0420(0x0020) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StoreWeaponMaster_BP.StoreWeaponMaster_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoaded_F90E39F1410BE83EB4E318A6426EF786(class UObject* Loaded);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_StoreWeaponMaster_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
