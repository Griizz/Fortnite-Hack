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

// WidgetBlueprintGeneratedClass OptionsMenuHudRotator.OptionsMenuHudRotator_C
// 0x0058 (0x0290 - 0x0238)
class UOptionsMenuHudRotator_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UCommonTextBlock*                            DisplayText;                                              // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UTextRotator_C*                              TextRotator;                                              // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	int                                                SelectedIndex;                                            // 0x0250(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
	struct FText                                       HoverText;                                                // 0x0258(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FScriptMulticastDelegate                    Selection_Changed;                                        // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	class UCommonTextBlock*                            Tab_Tooltip_Text;                                         // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTag                                Gameplay_Tag;                                             // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsMenuHudRotator.OptionsMenuHudRotator_C");
		return ptr;
	}


	int DoesItemHaveChildren();
	int GetIndentLevel();
	bool IsItemExpanded();
	class UObject* GetData();
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	void Update_Options(TArray<struct FText>* NewParam);
	void Center_on_Widget();
	void Update_Row_Selector(int Currently_Selected);
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
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature(int Value);
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void ExecuteUbergraph_OptionsMenuHudRotator(int EntryPoint);
	void Selection_Changed__DelegateSignature(int Selected_Index, const struct FGameplayTag& Gameplay_Tag);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
