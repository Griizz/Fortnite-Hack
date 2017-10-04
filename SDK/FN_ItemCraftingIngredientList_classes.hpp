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

// WidgetBlueprintGeneratedClass ItemCraftingIngredientList.ItemCraftingIngredientList_C
// 0x0019 (0x02C9 - 0x02B0)
class UItemCraftingIngredientList_C : public UFortItemQuantityListBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                IngredientsList;                                          // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UFortItem*                                   ItemRepresented;                                          // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        IconSize;                                                 // 0x02C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemCraftingIngredientList.ItemCraftingIngredientList_C");
		return ptr;
	}


	void ItemNeedsInventoryTracking(class UFortItem* Item, bool* NeedsTracking);
	void HandleItemChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged);
	void RefreshInventoryTracking();
	void HandleWorldItemsChanged();
	void HandleWorldItemListChanged(TArray<class UFortWorldItem*>* ItemsAdded, TArray<class UFortWorldItem*>* ItemsRemoved);
	void Refresh();
	void SetItemToRepresent(class UFortItem* Item);
	void DoDesignTimeRandomization();
	void PreConstruct(bool* IsDesignTime);
	void AddListEntry(class UFortItemQuantityListEntryBase** ListEntry);
	void ExecuteUbergraph_ItemCraftingIngredientList(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
