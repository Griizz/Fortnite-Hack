// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnInspectItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           AllowItemModifications         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsTemporaryItem                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookSectionPanel_C::OnInspectItem(class UFortItem* Item, bool AllowItemModifications, bool IsTemporaryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnInspectItem");

	UCollectionBookSectionPanel_C_OnInspectItem_Params params;
	params.Item = Item;
	params.AllowItemModifications = AllowItemModifications;
	params.IsTemporaryItem = IsTemporaryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnSlotItemConfirm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               ItemToSlot                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookSectionPanel_C::OnSlotItemConfirm(class UFortItem* ItemToSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnSlotItemConfirm");

	UCollectionBookSectionPanel_C_OnSlotItemConfirm_Params params;
	params.ItemToSlot = ItemToSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.ShowItemDetail
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               SelectedItem                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookSectionPanel_C::ShowItemDetail(class UFortItem* SelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.ShowItemDetail");

	UCollectionBookSectionPanel_C_ShowItemDetail_Params params;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCollectionBookSectionPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.Construct");

	UCollectionBookSectionPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnSectionChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UFortCollectionBookSection** Section                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookSectionPanel_C::OnSectionChanged(class UFortCollectionBookSection** Section)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnSectionChanged");

	UCollectionBookSectionPanel_C_OnSectionChanged_Params params;
	params.Section = Section;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCollectionBookSectionPanel_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnActivated");

	UCollectionBookSectionPanel_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.ExecuteUbergraph_CollectionBookSectionPanel
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookSectionPanel_C::ExecuteUbergraph_CollectionBookSectionPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.ExecuteUbergraph_CollectionBookSectionPanel");

	UCollectionBookSectionPanel_C_ExecuteUbergraph_CollectionBookSectionPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
