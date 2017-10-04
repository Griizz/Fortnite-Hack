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

// WidgetBlueprintGeneratedClass InfoEntry.InfoEntry_C
// 0x0028 (0x0260 - 0x0238)
class UInfoEntry_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UIconTextButton_C*                           IconTextButton;                                           // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UFortItemDefinition*                         Item_Definition;                                          // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    Entry_Selected;                                           // 0x0250(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InfoEntry.InfoEntry_C");
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
	void Construct();
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_InfoEntry(int EntryPoint);
	void Entry_Selected__DelegateSignature(class UFortItemDefinition* Entry_Item_Definition);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
