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

// WidgetBlueprintGeneratedClass FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C
// 0x0011 (0x05C9 - 0x05B8)
class UFortHeroSupportPerkWidget_Overview_C : public UFortHeroSupportPerkWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05B8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UCommonTextBlock*                            TypeText;                                                 // 0x05C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TEnumAsByte<EFortBrushSize>                        IconSize;                                                 // 0x05C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C");
		return ptr;
	}


	void OnHeroUpdated();
	void OnSupportTypeUpdated();
	void ExecuteUbergraph_FortHeroSupportPerkWidget_Overview(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
