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

// WidgetBlueprintGeneratedClass OptionsMenuRowSelector.OptionsMenuRowSelector_C
// 0x0058 (0x0288 - 0x0230)
class UOptionsMenuRowSelector_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UCommonTextBlock*                            RowSelectorText;                                          // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              SelectorButtonsBox;                                       // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    Selector_Button_Selected;                                 // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	TArray<struct FText>                               Hover_Texts;                                              // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UCommonButtonGroup*                          Selector_Buttons;                                         // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Common_Button_Group_Type;                                 // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCommonTextBlock*                            Tab_Tooltip_Text;                                         // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ButtonStyle;                                              // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsMenuRowSelector.OptionsMenuRowSelector_C");
		return ptr;
	}


	void Button_Hovered(class UCommonButton* Button_Hovered);
	void Deselect_All_Rows();
	void Update_Row_Selector(int Tab_Number);
	void Initialize_Row_Selector(const struct FText& Row_Text, bool Require_Selection, class UCommonTextBlock* Tab_Tooltip, TArray<struct FText>* Buttons, TArray<struct FText>* Hover_Texts);
	void Construct();
	void OnSelectedButtonChanged_Event_1(class UCommonButton* AssociatedButton, int ButtonIndex);
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void Destruct();
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_OptionsMenuRowSelector(int EntryPoint);
	void Selector_Button_Selected__DelegateSignature(int Tab_Id);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
