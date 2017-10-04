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

// Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.NavigateToFirstItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformKeyPicker_C::NavigateToFirstItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.NavigateToFirstItem");

	UItemTransformKeyPicker_C_NavigateToFirstItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.NavigateToSelectedItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               InItem                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformKeyPicker_C::NavigateToSelectedItem(class UFortItem* InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.NavigateToSelectedItem");

	UItemTransformKeyPicker_C_NavigateToSelectedItem_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.GetSelectedKey
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               SelectedKey                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformKeyPicker_C::GetSelectedKey(class UFortItem** SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.GetSelectedKey");

	UItemTransformKeyPicker_C_GetSelectedKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedKey != nullptr)
		*SelectedKey = params.SelectedKey;
}


// Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.SetSelectedKey
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortAccountItem*        AccountKey                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformKeyPicker_C::SetSelectedKey(class UFortAccountItem* AccountKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPicker.ItemTransformKeyPicker_C.SetSelectedKey");

	UItemTransformKeyPicker_C_SetSelectedKey_Params params;
	params.AccountKey = AccountKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
