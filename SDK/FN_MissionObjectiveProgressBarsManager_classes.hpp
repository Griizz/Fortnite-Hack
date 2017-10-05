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

// WidgetBlueprintGeneratedClass MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C
// 0x0011 (0x0249 - 0x0238)
class UMissionObjectiveProgressBarsManager_C : public UCommonUserWidget
{
public:
	class UVerticalBox*                                ProgressBarBox;                                           // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class AFortObjectiveBase*                          TrackedObjective;                                         // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bConfigureAsHUD;                                          // 0x0248(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C");
		return ptr;
	}


	void GetHeightEstimate(float* Height);
	void HandleUpdate(class AFortMissionState* Objective);
	void HandleObjectiveVisibilityChanged(class AFortObjectiveBase* Objective, bool New_Visibility);
	void HandleObjectiveStatusChanged(class AFortObjectiveBase* Objective, EFortObjectiveStatus New_Status);
	void CreateProgressBarWidget(int Index);
	void Setup(class AFortObjectiveBase* TrackedObjective, bool bInConfigureAsHUD);
	void UpdateObjectiveProgressBars();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
