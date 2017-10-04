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

// WidgetBlueprintGeneratedClass ItemEntry.ItemEntry_C
// 0x0020 (0x08C0 - 0x08A0)
class UItemEntry_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UCommonTextBlock*                            Name;                                                     // 0x08A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    Entry_Selected;                                           // 0x08B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemEntry.ItemEntry_C");
		return ptr;
	}


	int DoesItemHaveChildren();
	int GetIndentLevel();
	bool IsItemExpanded();
	class UObject* GetData();
	void OnAcquireFromPool();
	void OnReleaseToPool();
	void Private_OnExpanderArrowShiftClicked();
	void RegisterOnClicked(const struct FScriptDelegate& Callback);
	void SetExpanded(bool bExpanded);
	void SetIndexInList(int InIndexInList);
	void SetSelected(bool bSelected);
	void ToggleExpansion();
	void Reset();
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void Construct();
	void ExecuteUbergraph_ItemEntry(int EntryPoint);
	void Entry_Selected__DelegateSignature(class UFortItemDefinition* Items_Definition);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
