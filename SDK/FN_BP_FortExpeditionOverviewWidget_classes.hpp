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

// WidgetBlueprintGeneratedClass BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C
// 0x00A1 (0x0301 - 0x0260)
class UBP_FortExpeditionOverviewWidget_C : public UFortExpeditionOverviewWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UBP_FortExpeditionDetailsWidget_C*           BP_FortExpeditionDetailsWidget;                           // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UCommonWidgetSwitcher*                       CommonWidgetSwitcher_1;                                   // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            NoExpeditionsText;                                        // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_1;                                               // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            SelectedTabName;                                          // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnCollectCompletedExpedition;                             // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FDataTableRowHandle                         BuildExpeditionAction;                                    // 0x02A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         AbandonExpeditionAction;                                  // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         CollectExpeditionAction;                                  // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         SortInputAction;                                          // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UBP_FortExpeditionMasterWidget_C*            ParentWidget;                                             // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CurrentTabId;                                             // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UBP_FortExpeditionIconTabButton_C*>   TabButtons;                                               // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      bIgnoreBuildExpeditionAction : 1;                         // 0x0300(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C");
		return ptr;
	}


	struct FTimespan Get_Utc_Now_Offset();
	void Set_List_Sort_Type();
	void Should_Disable_Build_Expedition_Action(class UFortExpeditionItem* Expedition, bool* Disable);
	void Try_to_Build_Expedition(class UFortExpeditionItem* Expedition);
	void Try_to_Abandon_Expedition(class UFortExpeditionItem* Expedition);
	void Update_Active_Input_For_Selected_Item(class UFortExpeditionItem* InputObject);
	void Update_Details_Visibility();
	void Update_List_View_Area();
	void HandleCollectExpeditionAction(bool* PassThrough);
	void HandleAbandonExpeditionAction(bool* PassThrough);
	void HandleBuildExpeditionAction(bool* PassThrough);
	void Determine_Active_Input_Action(class UFortExpeditionItem* InItem);
	void Hide_All_Input_Actions();
	void Set_Current_Tab_Name(const struct FName& TabId);
	void On_Widget_Activated();
	void FireCollectCompletedExpedition();
	void Setup_Expedition_Details_Widget(class UFortExpeditionItem* Item);
	void Construct();
	void OnExpeditionTabSelected(struct FName* TabNameID);
	void HandleAbandonExpedition();
	void BndEvt__ExpeditionTabList_K2Node_ComponentBoundEvent_10_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton);
	void Destruct();
	void OnExpeditionOverviewRefresh();
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_3_OnExpeditionListItemSelected__DelegateSignature(class UFortExpeditionItem* Item);
	void HandleOnListViewRefreshed();
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_12_OnItemClicked__DelegateSignature(class UObject* Item);
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_38_OnItemHovered__DelegateSignature(class UObject* Item);
	void ExecuteUbergraph_BP_FortExpeditionOverviewWidget(int EntryPoint);
	void OnCollectCompletedExpedition__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
