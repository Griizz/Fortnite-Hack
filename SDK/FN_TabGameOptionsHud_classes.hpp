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

// WidgetBlueprintGeneratedClass TabGameOptionsHud.TabGameOptionsHud_C
// 0x0010 (0x02B8 - 0x02A8)
class UTabGameOptionsHud_C : public UTabGameOptions_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UCommonTextBlock*                            Tooltip_Display;                                          // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TabGameOptionsHud.TabGameOptionsHud_C");
		return ptr;
	}


	void Set_Settings_Tooltip(class UCommonTextBlock* Tooltip_To_Display);
	void Construct();
	void UpdateOptionsTab();
	void CenterOnTab();
	void BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_37_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void HUD_Changed(int Selected_Index, const struct FGameplayTag& Gameplay_Tag);
	void ExecuteUbergraph_TabGameOptionsHud(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
