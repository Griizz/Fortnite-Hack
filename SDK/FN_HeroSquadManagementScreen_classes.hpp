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

// WidgetBlueprintGeneratedClass HeroSquadManagementScreen.HeroSquadManagementScreen_C
// 0x0030 (0x0510 - 0x04E0)
class UHeroSquadManagementScreen_C : public UFortHeroSquadManagementScreen
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UCommonBorder*                               BorderSlotInfo;                                           // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            TextSlotBody;                                             // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            TextSlotHeader;                                           // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         InputBackAction;                                          // 0x0500(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeroSquadManagementScreen.HeroSquadManagementScreen_C");
		return ptr;
	}


	void UpdateSquadSlotInfoPanel(int SquadSlotIndex);
	void Update_Hero_Squad_Bonus_Highlight_State();
	void Update_Hero_Squad_Bonus_Tiles_SubIcon_Glow_State();
	void HideSlotInfo();
	void ShowSlotInfo(const struct FText& HeaderText, const struct FText& BodyText);
	void HandleClosePicker(bool* bPassThrough);
	void GetInZoneVisibility();
	void OnActivated();
	void Construct();
	void SetDefaultScroll();
	void OnDeactivated();
	void HandleSquadSlotPickerShown();
	void HandleSquadSlotPickerHidden();
	void BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature(int SquadSlotIndex);
	void ExecuteUbergraph_HeroSquadManagementScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
