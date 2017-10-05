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

// WidgetBlueprintGeneratedClass LeaveButton.LeaveButton_C
// 0x0060 (0x0298 - 0x0238)
class ULeaveButton_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UIconTextButton_C*                           Leave;                                                    // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    Update_Visibility;                                        // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	class UClass*                                      ButtonStyleOverride;                                      // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ControllerStyleOverride;                                  // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseButtoneStyleOverride;                                  // 0x0278(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideButtonText;                                       // 0x0279(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x027A(0x0006) MISSED OFFSET
	struct FText                                       ButtonTextOverride;                                       // 0x0280(0x0018) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LeaveButton.LeaveButton_C");
		return ptr;
	}


	void IsInNeighborhood(bool* bIsInNeighborhood);
	void Update_Style_State();
	void SetText(const struct FText& TextOverride);
	void GetButton(class UIconTextButton_C** Leave);
	void HasUnsavedQuestProgress(bool* HasUnsavedQuestProgress);
	void LeaveParty();
	void UpdateState();
	void IsConsideredInGame(bool* InGame);
	void GetLeaveActionText(struct FText* Text);
	void DialogResult_1E39F47546648367BB2F218F69311220(EFortDialogResult Result, const struct FName& ResultName);
	void DialogResult_F5AF58094777CFEEC0BF28BEA620800C(EFortDialogResult Result, const struct FName& ResultName);
	void DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B(EFortDialogResult Result, const struct FName& ResultName);
	void DialogResult_A0D25F7F4E82D325BF226E811F1D79AF(EFortDialogResult Result, const struct FName& ResultName);
	void HandleTeamMemberRemoved(int PlayerIndex);
	void HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewTeamMemberInfo);
	void HandleLobbyEvents();
	void Construct();
	void BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_LeaveButton(int EntryPoint);
	void Update_Visibility__DelegateSignature(bool Visibility);
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
