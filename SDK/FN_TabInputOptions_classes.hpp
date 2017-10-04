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

// WidgetBlueprintGeneratedClass TabInputOptions.TabInputOptions_C
// 0x0050 (0x02D0 - 0x0280)
class UTabInputOptions_C : public UFortInputOptions
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UCommonBorder*                               OverlayBorder;                                            // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	int                                                Currently_Selected_Input;                                 // 0x0290(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Is_Currently_Primary : 1;                                 // 0x0294(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0295(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    Enable_Overlay;                                           // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    Disable_Overlay;                                          // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	unsigned char                                      Using_Gamepad : 1;                                        // 0x02B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    Gamepad_Changed;                                          // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TabInputOptions.TabInputOptions_C");
		return ptr;
	}


	void NewFunction_1();
	void Set_Input_Enabled();
	void Overlay_Key_Pressed(const struct FKey& NewKey);
	void Construct();
	void Input_Clicked(int Number_In_List, bool Is_Primary_Button);
	void CenterOnTab();
	void UpdateOptionsTab();
	void BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void HandleUsingGamepadChanged(bool* bUsingGamepad);
	void ExecuteUbergraph_TabInputOptions(int EntryPoint);
	void Gamepad_Changed__DelegateSignature(bool Gamepad_Enabled);
	void Disable_Overlay__DelegateSignature();
	void Enable_Overlay__DelegateSignature(bool Accept_Input, const struct FText& Overlay_Text);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
