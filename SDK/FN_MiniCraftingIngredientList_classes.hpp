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

// WidgetBlueprintGeneratedClass MiniCraftingIngredientList.MiniCraftingIngredientList_C
// 0x0010 (0x02C0 - 0x02B0)
class UMiniCraftingIngredientList_C : public UFortItemQuantityListBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UWrapBox*                                    EntriesWrapBox;                                           // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MiniCraftingIngredientList.MiniCraftingIngredientList_C");
		return ptr;
	}


	void AddListEntry(class UFortItemQuantityListEntryBase** ListEntry);
	void ExecuteUbergraph_MiniCraftingIngredientList(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
