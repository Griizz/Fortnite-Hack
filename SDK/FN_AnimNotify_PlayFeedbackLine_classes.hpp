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

// BlueprintGeneratedClass AnimNotify_PlayFeedbackLine.AnimNotify_PlayFeedbackLine_C
// 0x0019 (0x0051 - 0x0038)
class UAnimNotify_PlayFeedbackLine_C : public UAnimNotify
{
public:
	struct FFortFeedbackHandle                         Event;                                                    // 0x0038(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bAllowReplication : 1;                                    // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_PlayFeedbackLine.AnimNotify_PlayFeedbackLine_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
