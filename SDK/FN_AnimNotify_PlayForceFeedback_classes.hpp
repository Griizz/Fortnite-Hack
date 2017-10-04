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

// BlueprintGeneratedClass AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C
// 0x001C (0x0054 - 0x0038)
class UAnimNotify_PlayForceFeedback_C : public UAnimNotify
{
public:
	class UForceFeedbackEffect*                        ForceFeedbackTemplate;                                    // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UForceFeedbackEffect*                        ForceFeedbackFarTemplate;                                 // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bPlayAtWorldLocation : 1;                                 // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              InnerRadius;                                              // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
