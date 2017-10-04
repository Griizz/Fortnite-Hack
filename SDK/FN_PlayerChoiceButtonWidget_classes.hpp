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

// WidgetBlueprintGeneratedClass PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C
// 0x0020 (0x0888 - 0x0868)
class UPlayerChoiceButtonWidget_C : public UFortBaseButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0868(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class ULegacyButtonIconText_C*                     Button;                                                   // 0x0870(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	int                                                ChoiceID;                                                 // 0x0878(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x087C(0x0004) MISSED OFFSET
	class UPlayerChoiceWidget_C*                       Owner;                                                    // 0x0880(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C");
		return ptr;
	}


	void ConfigureChoice(const struct FChoiceDataEntry& Choice, int ChoiceID, class UPlayerChoiceWidget_C* Owner);
	void BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void ExecuteUbergraph_PlayerChoiceButtonWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
