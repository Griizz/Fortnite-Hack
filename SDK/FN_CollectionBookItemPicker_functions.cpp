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

// Function CollectionBookItemPicker.CollectionBookItemPicker_C.Get Type Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Type                           (CPF_Parm, CPF_OutParm)

void UCollectionBookItemPicker_C::Get_Type_Text(class UFortItem* Item, struct FText* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookItemPicker.CollectionBookItemPicker_C.Get Type Text");

	UCollectionBookItemPicker_C_Get_Type_Text_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function CollectionBookItemPicker.CollectionBookItemPicker_C.HandleCommitAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookItemPicker_C::HandleCommitAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookItemPicker.CollectionBookItemPicker_C.HandleCommitAction");

	UCollectionBookItemPicker_C_HandleCommitAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function CollectionBookItemPicker.CollectionBookItemPicker_C.HandleItemSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ItemSelected                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsSelected                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookItemPicker_C::HandleItemSelected(class UObject* ItemSelected, bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookItemPicker.CollectionBookItemPicker_C.HandleItemSelected");

	UCollectionBookItemPicker_C_HandleItemSelected_Params params;
	params.ItemSelected = ItemSelected;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookItemPicker.CollectionBookItemPicker_C.DialogResult_C897FB8741239C9DAE2430AD3D91A030
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bWaitingForLatentActionCompletion (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortDialogExternalLatentActionHandle WaitingDialogHandle            (CPF_Parm)

void UCollectionBookItemPicker_C::DialogResult_C897FB8741239C9DAE2430AD3D91A030(const struct FName& ResultName, bool bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookItemPicker.CollectionBookItemPicker_C.DialogResult_C897FB8741239C9DAE2430AD3D91A030");

	UCollectionBookItemPicker_C_DialogResult_C897FB8741239C9DAE2430AD3D91A030_Params params;
	params.ResultName = ResultName;
	params.bWaitingForLatentActionCompletion = bWaitingForLatentActionCompletion;
	params.WaitingDialogHandle = WaitingDialogHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookItemPicker.CollectionBookItemPicker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCollectionBookItemPicker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookItemPicker.CollectionBookItemPicker_C.Construct");

	UCollectionBookItemPicker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookItemPicker.CollectionBookItemPicker_C.ShowSlotItemConfirmation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               SelectedItem                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookItemPicker_C::ShowSlotItemConfirmation(class UFortItem* SelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookItemPicker.CollectionBookItemPicker_C.ShowSlotItemConfirmation");

	UCollectionBookItemPicker_C_ShowSlotItemConfirmation_Params params;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookItemPicker.CollectionBookItemPicker_C.ExecuteUbergraph_CollectionBookItemPicker
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookItemPicker_C::ExecuteUbergraph_CollectionBookItemPicker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookItemPicker.CollectionBookItemPicker_C.ExecuteUbergraph_CollectionBookItemPicker");

	UCollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
