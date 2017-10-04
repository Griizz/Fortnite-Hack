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

// BlueprintGeneratedClass FrontendCamera_Inspect.FrontendCamera_Inspect_C
// 0x0010 (0x08D0 - 0x08C0)
class AFrontendCamera_Inspect_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UCameraComponent*                            LoginCamera_1;                                            // 0x08C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FrontendCamera_Inspect.FrontendCamera_Inspect_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_FrontendCamera_Inspect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
