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

// BlueprintGeneratedClass AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C
// 0x0001 (0x0031 - 0x0030)
class UAnimNotifyState_HolsterWeapon_C : public UAnimNotifyState
{
public:
	unsigned char                                      PlayEquipAnim : 1;                                        // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C");
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
