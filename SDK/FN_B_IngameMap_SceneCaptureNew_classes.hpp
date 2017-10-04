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

// BlueprintGeneratedClass B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C
// 0x0010 (0x03B0 - 0x03A0)
class AB_IngameMap_SceneCaptureNew_C : public ASceneCapture2D
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        PostProcessPlane;                                         // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_IngameMap_SceneCaptureNew(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
