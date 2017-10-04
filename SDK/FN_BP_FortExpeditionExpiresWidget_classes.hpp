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

// WidgetBlueprintGeneratedClass BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C
// 0x0018 (0x0260 - 0x0248)
class UBP_FortExpeditionExpiresWidget_C : public UFortExpeditionExpiresWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UCommonTextBlock*                            ExpeditionExpires;                                        // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UClass*                                      Style;                                                    // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C");
		return ptr;
	}


	struct FTimespan Get_Utc_Now_Offset();
	void Refresh_Expiration_Timer(class UFortExpeditionItem* Item);
	void SetData(class UFortExpeditionItem** InItem);
	void OnExpeditionExpirationUpdated();
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_BP_FortExpeditionExpiresWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
