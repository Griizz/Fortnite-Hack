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

// BlueprintGeneratedClass Frontend.FrontEnd_C
// 0x0010 (0x03B0 - 0x03A0)
class AFrontEnd_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class AHBOnboardingFlow_C*                         HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty;   // 0x03A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Frontend.FrontEnd_C");
		return ptr;
	}


	void EnableTutorial();
	void OnMatchStarted();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_FrontEnd(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
