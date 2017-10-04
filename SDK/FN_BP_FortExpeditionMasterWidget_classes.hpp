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

// WidgetBlueprintGeneratedClass BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C
// 0x00CB (0x052B - 0x0460)
class UBP_FortExpeditionMasterWidget_C : public UFortExpeditionMasterWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UBP_FortExpeditionOverviewWidget_C*          BP_FortExpeditionOverviewWidget;                          // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         BackInputAction;                                          // 0x0470(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         BuildExpeditionAction;                                    // 0x0480(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         AbandonExpeditionAction;                                  // 0x0490(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         CollectExpeditionAction;                                  // 0x04A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         SortInputAction;                                          // 0x04B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      bRewardsShowing : 1;                                      // 0x04C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
	class UFrontEndRewards_Widget_C*                   RewardsWidget;                                            // 0x04C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UFortExpeditionItem*>                 CompletedExpeditions;                                     // 0x04D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FFrontEndRewards_Definition                 RewardsDefinition;                                        // 0x04E0(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0528(0x0001) UNKNOWN PROPERTY: EnumProperty BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.ExpeditionListSortType
	unsigned char                                      UnknownData02[0x1];                                       // 0x0529(0x0001) UNKNOWN PROPERTY: EnumProperty BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.ExpeditionListSortBegin
	unsigned char                                      UnknownData03[0x1];                                       // 0x052A(0x0001) UNKNOWN PROPERTY: EnumProperty BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.ExpeditionListSortEnd

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C");
		return ptr;
	}


	void HandleSortExpeditionListAction(bool* PassThrough);
	void Disable_Input_Action(const struct FDataTableRowHandle& InputActionRow);
	void HandleCollectExpeditionAction(bool* PassThrough);
	void HandleAbandonExpeditionAction(bool* PassThrough);
	void HandleBuildExpeditionAction(bool* PassThrough);
	void Present_Reward_UI();
	void Show_Input_Action(const struct FDataTableRowHandle& InputActionRow);
	void Hide_Input_Action(const struct FDataTableRowHandle& InputActionRow);
	void Update_Master_Widget();
	void Setup_Bindings();
	void Setup_Input_Action_Handlers();
	void Handle_Back(bool* PassThrough);
	void Construct();
	void Destruct();
	void HandleAllCompletedExpeditionsCollected();
	void HACK_OnActivate_UpdateMasterWidget();
	void OnActivated();
	void ExecuteUbergraph_BP_FortExpeditionMasterWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
