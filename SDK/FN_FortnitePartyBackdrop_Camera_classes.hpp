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

// BlueprintGeneratedClass FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C
// 0x0040 (0x0900 - 0x08C0)
class AFortnitePartyBackdrop_Camera_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x08C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDirectionalLightComponent*                  DirectionalLight;                                         // 0x08D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UExponentialHeightFogComponent*              ExponentialHeightFog1;                                    // 0x08D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkyLightComponent*                          SkyLight;                                                 // 0x08E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCameraComponent*                            CameraActor_1;                                            // 0x08E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      FortEntryMusic;                                           // 0x08F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AFort_Entry_Music_Controller_BP_C*           Fort_Entry_Music_Controller;                              // 0x08F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDeactivated();
	void OnActivated();
	void ExecuteUbergraph_FortnitePartyBackdrop_Camera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
