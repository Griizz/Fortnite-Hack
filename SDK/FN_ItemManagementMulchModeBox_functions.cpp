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

// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleLeaveInventory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementMulchModeBox_C::HandleLeaveInventory(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleLeaveInventory");

	UItemManagementMulchModeBox_C_HandleLeaveInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleCursorModeChanging
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementMulchModeBox_C::HandleCursorModeChanging(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleCursorModeChanging");

	UItemManagementMulchModeBox_C_HandleCursorModeChanging_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleMulchListChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManagementMulchModeBox_C::HandleMulchListChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleMulchListChanged");

	UItemManagementMulchModeBox_C_HandleMulchListChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Pass_Through                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementMulchModeBox_C::HandleInfo(bool* Pass_Through)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleInfo");

	UItemManagementMulchModeBox_C_HandleInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pass_Through != nullptr)
		*Pass_Through = params.Pass_Through;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleBack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementMulchModeBox_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleBack");

	UItemManagementMulchModeBox_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleDifferentItemToDetailSetBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManagementMulchModeBox_C::HandleDifferentItemToDetailSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleDifferentItemToDetailSetBP");

	UItemManagementMulchModeBox_C_HandleDifferentItemToDetailSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemManagementMulchModeBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.Construct");

	UItemManagementMulchModeBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManagementMulchModeBox_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.OnActivated");

	UItemManagementMulchModeBox_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemManagementMulchModeBox_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.Destruct");

	UItemManagementMulchModeBox_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.ExecuteUbergraph_ItemManagementMulchModeBox
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementMulchModeBox_C::ExecuteUbergraph_ItemManagementMulchModeBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.ExecuteUbergraph_ItemManagementMulchModeBox");

	UItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
