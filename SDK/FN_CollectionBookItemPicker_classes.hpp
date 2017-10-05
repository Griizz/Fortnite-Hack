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

// WidgetBlueprintGeneratedClass CollectionBookItemPicker.CollectionBookItemPicker_C
// 0x0060 (0x0310 - 0x02B0)
class UCollectionBookItemPicker_C : public UFortCollectionBookPicker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         BackInputActionName;                                      // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       ConfirmSlotItemTitle;                                     // 0x02C8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       ConfirmSlotItemMessage;                                   // 0x02E0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         ConfirmInputActionName;                                   // 0x02F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UCollectionBookRecycleSlotResultsWidget_C*   RecycleSlotItemWidget;                                    // 0x0308(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CollectionBookItemPicker.CollectionBookItemPicker_C");
		return ptr;
	}


	void Get_Type_Text(class UFortItem* Item, struct FText* Type);
	void HandleCommitAction(bool* PassThrough);
	void HandleItemSelected(class UObject* ItemSelected, bool IsSelected);
	void DialogResult_C897FB8741239C9DAE2430AD3D91A030(EFortDialogResult Result, const struct FName& ResultName, bool bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle);
	void Construct();
	void ShowSlotItemConfirmation(class UFortItem* SelectedItem);
	void ExecuteUbergraph_CollectionBookItemPicker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
