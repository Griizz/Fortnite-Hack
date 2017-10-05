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

// WidgetBlueprintGeneratedClass OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C
// 0x0030 (0x0410 - 0x03E0)
class UOutpostScreenStormShieldPermissions_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UOutpostScreenCanEditPanel_C*                OutpostScreenCanEditPanel;                                // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	bool                                               GetHelp;                                                  // 0x03F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    CloseOutpostScreen;                                       // 0x03F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	class UOutpostScreenStormShield_C*                 ParentReference;                                          // 0x0408(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C");
		return ptr;
	}


	void CenterWidget();
	void SetParent(class UOutpostScreenStormShield_C* ParentWidget);
	void HandleBack(bool* PassThrough);
	void AddInputHandlers();
	bool IsOwningPlayerOutpostOwner();
	void UpdatePrivilages();
	void isPlayerAlone(bool* isAlone);
	void Construct();
	void UpdatePrivilagesEvent_1(const struct FFortTeamMemberInfo& NewTeamMemberInfo);
	void UpdatePrivilagesEvent_2(int PlayerIndex);
	void OnActivated();
	void ExecuteUbergraph_OutpostScreenStormShieldPermissions(int EntryPoint);
	void CloseOutpostScreen__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
