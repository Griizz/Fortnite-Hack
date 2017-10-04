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

// WidgetBlueprintGeneratedClass MissionTracker.MissionTracker_C
// 0x0010 (0x02A0 - 0x0290)
class UMissionTracker_C : public UFortMissionTracker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USizeBox*                                    AdditionalEntriesSizeBox;                                 // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionTracker.MissionTracker_C");
		return ptr;
	}


	void HandlePinnedQuestsChanged();
	bool HasVisibleMission();
	void UpdateVisibility();
	void HandleQuestsUpdated();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_MissionTracker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
