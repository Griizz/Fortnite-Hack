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

// WidgetBlueprintGeneratedClass MissionTrackerEntry.MissionTrackerEntry_C
// 0x0018 (0x02F8 - 0x02E0)
class UMissionTrackerEntry_C : public UFortMissionTrackerEntry
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FScriptMulticastDelegate                    WidgetVisibilityChanged;                                  // 0x02E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionTrackerEntry.MissionTrackerEntry_C");
		return ptr;
	}


	void Construct();
	void OnMissionSet();
	void ExecuteUbergraph_MissionTrackerEntry(int EntryPoint);
	void WidgetVisibilityChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
