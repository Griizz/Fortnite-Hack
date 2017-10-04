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

// WidgetBlueprintGeneratedClass AthenaTabsScreen.AthenaTabsScreen_C
// 0x0028 (0x0468 - 0x0440)
class UAthenaTabsScreen_C : public UFortAthenaTabsScreenBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UCommonWidgetSwitcher*                       TopTabContentWidgetSwitcher;                              // 0x0448(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FName                                       LastActiveTabId;                                          // 0x0450(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              UnclaimedResearchBangThreshold;                           // 0x0458(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	struct FTimerHandle                                UnclaimedResearchPointsHandle;                            // 0x0460(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaTabsScreen.AthenaTabsScreen_C");
		return ptr;
	}


	void HandleTabSelected(const struct FName& TabName);
	void HandleTabCreated(const struct FName& TabId, class UCommonButton* TabButton);
	void OnActivated();
	void Construct();
	void BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton);
	void BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(const struct FName& TabId);
	void OnDeactivated();
	void ExecuteUbergraph_AthenaTabsScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
