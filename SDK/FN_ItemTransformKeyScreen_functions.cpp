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

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Determine Tab List Title
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   TabNameID                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UItemTransformKeyScreen_C::Determine_Tab_List_Title(const struct FName& TabNameID, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Determine Tab List Title");

	UItemTransformKeyScreen_C_Determine_Tab_List_Title_Params params;
	params.TabNameID = TabNameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Determine Key Types to See
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabNameID                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EConversionControlKeyRequest   RequestType                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformKeyScreen_C::Determine_Key_Types_to_See(const struct FName& TabNameID, EConversionControlKeyRequest* RequestType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Determine Key Types to See");

	UItemTransformKeyScreen_C_Determine_Key_Types_to_See_Params params;
	params.TabNameID = TabNameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RequestType != nullptr)
		*RequestType = params.RequestType;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.NavigateToFirstItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformKeyScreen_C::NavigateToFirstItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.NavigateToFirstItem");

	UItemTransformKeyScreen_C_NavigateToFirstItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.NavigateToSelectedItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               InItem                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformKeyScreen_C::NavigateToSelectedItem(class UFortItem* InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.NavigateToSelectedItem");

	UItemTransformKeyScreen_C_NavigateToSelectedItem_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Get Selected Item
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               SelectedKey                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformKeyScreen_C::Get_Selected_Item(class UFortItem** SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Get Selected Item");

	UItemTransformKeyScreen_C_Get_Selected_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedKey != nullptr)
		*SelectedKey = params.SelectedKey;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.ResetScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformKeyScreen_C::ResetScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.ResetScreen");

	UItemTransformKeyScreen_C_ResetScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HandleItemSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformKeyScreen_C::HandleItemSelected(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HandleItemSelected");

	UItemTransformKeyScreen_C_HandleItemSelected_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.SetupKeyList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformKeyScreen_C::SetupKeyList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.SetupKeyList");

	UItemTransformKeyScreen_C_SetupKeyList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.RebuildKeyList
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EConversionControlKeyRequest   RequestType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformKeyScreen_C::RebuildKeyList(EConversionControlKeyRequest RequestType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.RebuildKeyList");

	UItemTransformKeyScreen_C_RebuildKeyList_Params params;
	params.RequestType = RequestType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemTransformKeyScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Construct");

	UItemTransformKeyScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               SelectedItem                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformKeyScreen_C::BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature");

	UItemTransformKeyScreen_C_BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformKeyScreen_C::BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature(const struct FName& TabId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature");

	UItemTransformKeyScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HandleHomebaseInventoryChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformKeyScreen_C::HandleHomebaseInventoryChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HandleHomebaseInventoryChanged");

	UItemTransformKeyScreen_C_HandleHomebaseInventoryChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.ExecuteUbergraph_ItemTransformKeyScreen
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformKeyScreen_C::ExecuteUbergraph_ItemTransformKeyScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.ExecuteUbergraph_ItemTransformKeyScreen");

	UItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.OnKeyConfirmed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformKeyScreen_C::OnKeyConfirmed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.OnKeyConfirmed__DelegateSignature");

	UItemTransformKeyScreen_C_OnKeyConfirmed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.OnKeySelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformKeyScreen_C::OnKeySelected__DelegateSignature(class UFortItem* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.OnKeySelected__DelegateSignature");

	UItemTransformKeyScreen_C_OnKeySelected__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
