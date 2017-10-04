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

// Function QuickbarPrimary.QuickbarPrimary_C.HasOneNonHarvestWeapon
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           HasNonHarvestWeapon            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarPrimary_C::HasOneNonHarvestWeapon(bool* HasNonHarvestWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarPrimary.QuickbarPrimary_C.HasOneNonHarvestWeapon");

	UQuickbarPrimary_C_HasOneNonHarvestWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasNonHarvestWeapon != nullptr)
		*HasNonHarvestWeapon = params.HasNonHarvestWeapon;
}


// Function QuickbarPrimary.QuickbarPrimary_C.Show Primary Quickbar Rail
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarPrimary_C::Show_Primary_Quickbar_Rail(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarPrimary.QuickbarPrimary_C.Show Primary Quickbar Rail");

	UQuickbarPrimary_C_Show_Primary_Quickbar_Rail_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarPrimary.QuickbarPrimary_C.HandleKeybindsChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarPrimary_C::HandleKeybindsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarPrimary.QuickbarPrimary_C.HandleKeybindsChanged");

	UQuickbarPrimary_C_HandleKeybindsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarPrimary.QuickbarPrimary_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuickbarPrimary_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarPrimary.QuickbarPrimary_C.Construct");

	UQuickbarPrimary_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarPrimary.QuickbarPrimary_C.HandleInputMethodChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarPrimary_C::HandleInputMethodChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarPrimary.QuickbarPrimary_C.HandleInputMethodChanged");

	UQuickbarPrimary_C_HandleInputMethodChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarPrimary.QuickbarPrimary_C.RefreshQuickbar
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarPrimary_C::RefreshQuickbar()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarPrimary.QuickbarPrimary_C.RefreshQuickbar");

	UQuickbarPrimary_C_RefreshQuickbar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarPrimary.QuickbarPrimary_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuickbarPrimary_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarPrimary.QuickbarPrimary_C.Destruct");

	UQuickbarPrimary_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarPrimary.QuickbarPrimary_C.ExecuteUbergraph_QuickbarPrimary
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarPrimary_C::ExecuteUbergraph_QuickbarPrimary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarPrimary.QuickbarPrimary_C.ExecuteUbergraph_QuickbarPrimary");

	UQuickbarPrimary_C_ExecuteUbergraph_QuickbarPrimary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
