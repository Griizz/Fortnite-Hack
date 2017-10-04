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

// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.HandleBack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementCompareModeBox_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.HandleBack");

	UItemManagementCompareModeBox_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.UpdateFocusedItems
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManagementCompareModeBox_C::UpdateFocusedItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.UpdateFocusedItems");

	UItemManagementCompareModeBox_C_UpdateFocusedItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.HandleDifferentItemToDetailSetBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManagementCompareModeBox_C::HandleDifferentItemToDetailSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.HandleDifferentItemToDetailSetBP");

	UItemManagementCompareModeBox_C_HandleDifferentItemToDetailSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.HandleDifferentItemToCompareSetBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManagementCompareModeBox_C::HandleDifferentItemToCompareSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.HandleDifferentItemToCompareSetBP");

	UItemManagementCompareModeBox_C_HandleDifferentItemToCompareSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemManagementCompareModeBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.Construct");

	UItemManagementCompareModeBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManagementCompareModeBox_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.OnActivated");

	UItemManagementCompareModeBox_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.OnDeactivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManagementCompareModeBox_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.OnDeactivated");

	UItemManagementCompareModeBox_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.ExecuteUbergraph_ItemManagementCompareModeBox
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementCompareModeBox_C::ExecuteUbergraph_ItemManagementCompareModeBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.ExecuteUbergraph_ItemManagementCompareModeBox");

	UItemManagementCompareModeBox_C_ExecuteUbergraph_ItemManagementCompareModeBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
