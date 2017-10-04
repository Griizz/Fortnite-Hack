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

// BlueprintGeneratedClass B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C
// 0x0008 (0x03A8 - 0x03A0)
class AB_IngameMap_SceneCaptureBlurryNew_C : public ASceneCapture2D
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_IngameMap_SceneCaptureBlurryNew(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
