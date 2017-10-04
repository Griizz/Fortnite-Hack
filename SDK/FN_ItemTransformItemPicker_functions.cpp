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

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.Return Item to Detail
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               InItem                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortItem*               OutItem                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformItemPicker_C::Return_Item_to_Detail(class UFortItem* InItem, class UFortItem** OutItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformItemPicker.ItemTransformItemPicker_C.Return Item to Detail");

	UItemTransformItemPicker_C_Return_Item_to_Detail_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItem != nullptr)
		*OutItem = params.OutItem;
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.OpenInspectionScreen
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThru                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformItemPicker_C::OpenInspectionScreen(bool* PassThru)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformItemPicker.ItemTransformItemPicker_C.OpenInspectionScreen");

	UItemTransformItemPicker_C_OpenInspectionScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThru != nullptr)
		*PassThru = params.PassThru;
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.CommitSelectedItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThru                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformItemPicker_C::CommitSelectedItem(bool* PassThru)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformItemPicker.ItemTransformItemPicker_C.CommitSelectedItem");

	UItemTransformItemPicker_C_CommitSelectedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThru != nullptr)
		*PassThru = params.PassThru;
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.OpenPicker
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>       SacrificeItems                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            SelectedSlot                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformItemPicker_C::OpenPicker(int SelectedSlot, TArray<class UFortItem*>* SacrificeItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformItemPicker.ItemTransformItemPicker_C.OpenPicker");

	UItemTransformItemPicker_C_OpenPicker_Params params;
	params.SelectedSlot = SelectedSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SacrificeItems != nullptr)
		*SacrificeItems = params.SacrificeItems;
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.SetFilter
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FilterName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformItemPicker_C::SetFilter(const struct FName& FilterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformItemPicker.ItemTransformItemPicker_C.SetFilter");

	UItemTransformItemPicker_C_SetFilter_Params params;
	params.FilterName = FilterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.SetupFilterTabList
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformItemPicker_C::SetupFilterTabList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformItemPicker.ItemTransformItemPicker_C.SetupFilterTabList");

	UItemTransformItemPicker_C_SetupFilterTabList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.HandleItemCommitted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformItemPicker_C::HandleItemCommitted(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformItemPicker.ItemTransformItemPicker_C.HandleItemCommitted");

	UItemTransformItemPicker_C_HandleItemCommitted_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.RemoveInvalidItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortAccountItem*> UnrefinedItems                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class UFortItem*>       CurrentSacrificeItems          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class UFortAccountItem*> RefinedItems                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UItemTransformItemPicker_C::RemoveInvalidItems(TArray<class UFortAccountItem*>* UnrefinedItems, TArray<class UFortItem*>* CurrentSacrificeItems, TArray<class UFortAccountItem*>* RefinedItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformItemPicker.ItemTransformItemPicker_C.RemoveInvalidItems");

	UItemTransformItemPicker_C_RemoveInvalidItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UnrefinedItems != nullptr)
		*UnrefinedItems = params.UnrefinedItems;
	if (CurrentSacrificeItems != nullptr)
		*CurrentSacrificeItems = params.CurrentSacrificeItems;
	if (RefinedItems != nullptr)
		*RefinedItems = params.RefinedItems;
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.HandleItemSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformItemPicker_C::HandleItemSelected(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformItemPicker.ItemTransformItemPicker_C.HandleItemSelected");

	UItemTransformItemPicker_C_HandleItemSelected_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.SetupItemPicker
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformItemPicker_C::SetupItemPicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformItemPicker.ItemTransformItemPicker_C.SetupItemPicker");

	UItemTransformItemPicker_C_SetupItemPicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemTransformItemPicker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformItemPicker.ItemTransformItemPicker_C.Construct");

	UItemTransformItemPicker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformItemPicker_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformItemPicker.ItemTransformItemPicker_C.PreConstruct");

	UItemTransformItemPicker_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.BndEvt__FilterTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformItemPicker_C::BndEvt__FilterTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(const struct FName& TabId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformItemPicker.ItemTransformItemPicker_C.BndEvt__FilterTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature");

	UItemTransformItemPicker_C_BndEvt__FilterTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.ExecuteUbergraph_ItemTransformItemPicker
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformItemPicker_C::ExecuteUbergraph_ItemTransformItemPicker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformItemPicker.ItemTransformItemPicker_C.ExecuteUbergraph_ItemTransformItemPicker");

	UItemTransformItemPicker_C_ExecuteUbergraph_ItemTransformItemPicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.OnItemSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               SelectedItem                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformItemPicker_C::OnItemSelected__DelegateSignature(class UFortItem* SelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformItemPicker.ItemTransformItemPicker_C.OnItemSelected__DelegateSignature");

	UItemTransformItemPicker_C_OnItemSelected__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
