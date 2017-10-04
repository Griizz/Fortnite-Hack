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

// WidgetBlueprintGeneratedClass ItemManagementScreen.ItemManagementScreen_C
// 0x0020 (0x0730 - 0x0710)
class UItemManagementScreen_C : public UFortItemManagementScreen
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0710(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USizeBox*                                    SizeBox_Inventory;                                        // 0x0718(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      ItemDragEnabled : 1;                                      // 0x0720(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0721(0x0007) MISSED OFFSET
	class UFortItemManagementItemTileButton*           SelectedSchematicTileButton;                              // 0x0728(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemManagementScreen.ItemManagementScreen_C");
		return ptr;
	}


	void ShowCraftError();
	void CraftAndSlot(class UFortSchematicItem* SchematicItem);
	void HandleEquip(class UFortItem* ItemToEquip, bool* PassThrough);
	void SizeInventoryPanel();
	bool OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void GetDescriptionText(struct FText* ItemDescription);
	void HandleInspect(class UFortItem* ItemToInspect, bool* PassThrough);
	void HandleClose();
	void OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA();
	void DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40(const struct FName& ResultName);
	void OnActivated();
	void HandleInspectItemBP(class UFortItem** Item);
	void HandleConsumeItemBP(class UFortConsumableAccountItem** ConsumableItem);
	void HandleDifferentItemManagementModeSetBP();
	void HandleEquipItemBP(class UFortItem** Item);
	void HandleCraftItemBP(class UFortSchematicItem** SchematicItem);
	void CraftabilityRefresh();
	void ExecuteUbergraph_ItemManagementScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
