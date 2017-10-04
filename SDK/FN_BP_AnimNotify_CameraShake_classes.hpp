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

// BlueprintGeneratedClass BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C
// 0x000D (0x0045 - 0x0038)
class UBP_AnimNotify_CameraShake_C : public UAnimNotify
{
public:
	class UClass*                                      Shake_BP;                                                 // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Shake_Scale;                                              // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECameraAnimPlaySpace>                  Shake_Space;                                              // 0x0044(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
