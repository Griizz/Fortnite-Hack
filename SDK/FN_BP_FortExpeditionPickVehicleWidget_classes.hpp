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

// WidgetBlueprintGeneratedClass BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C
// 0x0050 (0x0430 - 0x03E0)
class UBP_FortExpeditionPickVehicleWidget_C : public UFortExpeditionPickVehicleWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UCommonTileView*                             CommonTileView_1;                                         // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UBP_ExpeditionSquadSlotsView_C*              ExpeditionSquadSlotsView;                                 // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_1;                                               // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         BackInputAction;                                          // 0x0400(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<class UObject*>                             SquadOjbects;                                             // 0x0410(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnVehicleSelected;                                        // 0x0420(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C");
		return ptr;
	}


	void Pre_Select_for_Console();
	void Determine_Available_Expedition_Squads(const struct FGameplayTagContainer& RequirementTags);
	void Get_Expedition_Item_Definition(class UFortItem* ItemDef, class UFortExpeditionItemDefinition** AsFort_Expedition_Item_Definition);
	void Setup_Input_Action_Handlers();
	void HandleBack(bool* PassThrough);
	void Construct();
	void SetData(class UFortExpeditionItem** InItem);
	void OnActivated();
	void BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void HandleVehicleSelected(const struct FName& SquadId);
	void HACK_GetMeOutOfSelectContext();
	void HandleVehicleButtonHovered(class UCommonButton* Button);
	void HandleVehcileButtonUnhovered(class UCommonButton* Button);
	void ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget(int EntryPoint);
	void OnVehicleSelected__DelegateSignature(const struct FName& SquadId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
