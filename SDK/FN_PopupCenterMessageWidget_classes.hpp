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

// WidgetBlueprintGeneratedClass PopupCenterMessageWidget.PopupCenterMessageWidget_C
// 0x0018 (0x0280 - 0x0268)
class UPopupCenterMessageWidget_C : public UFortHUDCenterPopupMessageWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UPopupCenterMessageModalPanel_C*             CenterPopupModal;                                         // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTimerHandle                                UpdateStateTimer;                                         // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PopupCenterMessageWidget.PopupCenterMessageWidget_C");
		return ptr;
	}


	void OnModalDisplayed(class UCommonActivatablePanel** ModalPopup);
	void Construct();
	void UpdateStateEvent();
	void Destruct();
	void ExecuteUbergraph_PopupCenterMessageWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
