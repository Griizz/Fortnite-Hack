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

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Fort PC
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AFortPlayerController*   FortPC                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformKeyPickerTileButton_C::Get_Fort_PC(class AFortPlayerController** FortPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Fort PC");

	UItemTransformKeyPickerTileButton_C_Get_Fort_PC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FortPC != nullptr)
		*FortPC = params.FortPC;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key Catalysts
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayTagContainer UItemTransformKeyPickerTileButton_C::Get_Transform_Key_Catalysts()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key Catalysts");

	UItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Mark Item as Seen
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformKeyPickerTileButton_C::Mark_Item_as_Seen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Mark Item as Seen");

	UItemTransformKeyPickerTileButton_C_Mark_Item_as_Seen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Is Transform Key Consumable
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bConsumedOnConversion          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformKeyPickerTileButton_C::Is_Transform_Key_Consumable(bool* bConsumedOnConversion)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Is Transform Key Consumable");

	UItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bConsumedOnConversion != nullptr)
		*bConsumedOnConversion = params.bConsumedOnConversion;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UFortAccountItem*        AsFort_Account_Item            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformKeyPickerTileButton_C::Get_Transform_Key(class UFortAccountItem** AsFort_Account_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key");

	UItemTransformKeyPickerTileButton_C_Get_Transform_Key_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsFort_Account_Item != nullptr)
		*AsFort_Account_Item = params.AsFort_Account_Item;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Update Bang State
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemTransformKeyPickerTileButton_C::Update_Bang_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Update Bang State");

	UItemTransformKeyPickerTileButton_C_Update_Bang_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.SetData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject**                InData                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonListView**        OwningList                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformKeyPickerTileButton_C::SetData(class UObject** InData, class UCommonListView** OwningList)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.SetData");

	UItemTransformKeyPickerTileButton_C_SetData_Params params;
	params.InData = InData;
	params.OwningList = OwningList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.OnSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemTransformKeyPickerTileButton_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.OnSelected");

	UItemTransformKeyPickerTileButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.OnHovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemTransformKeyPickerTileButton_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.OnHovered");

	UItemTransformKeyPickerTileButton_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.ExecuteUbergraph_ItemTransformKeyPickerTileButton
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemTransformKeyPickerTileButton_C::ExecuteUbergraph_ItemTransformKeyPickerTileButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.ExecuteUbergraph_ItemTransformKeyPickerTileButton");

	UItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
