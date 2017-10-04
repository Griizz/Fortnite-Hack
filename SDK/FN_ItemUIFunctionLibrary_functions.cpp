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

// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Truncate Integer Value
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Min_Fractional_Digits          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Max_Fractional_Digits          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Formatted_Value                (CPF_Parm, CPF_OutParm)

void UItemUIFunctionLibrary_C::STATIC_Truncate_Integer_Value(int Value, int Min_Fractional_Digits, int Max_Fractional_Digits, class UObject* __WorldContext, struct FText* Formatted_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Truncate Integer Value");

	UItemUIFunctionLibrary_C_Truncate_Integer_Value_Params params;
	params.Value = Value;
	params.Min_Fractional_Digits = Min_Fractional_Digits;
	params.Max_Fractional_Digits = Max_Fractional_Digits;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Formatted_Value != nullptr)
		*Formatted_Value = params.Formatted_Value;
}


// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Convert Tier To Integer
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<EFortItemTier>     Tier                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Numeric_Tier                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemUIFunctionLibrary_C::STATIC_Convert_Tier_To_Integer(TEnumAsByte<EFortItemTier> Tier, class UObject* __WorldContext, int* Numeric_Tier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Convert Tier To Integer");

	UItemUIFunctionLibrary_C_Convert_Tier_To_Integer_Params params;
	params.Tier = Tier;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Numeric_Tier != nullptr)
		*Numeric_Tier = params.Numeric_Tier;
}


// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.ParseLevelRequiredFromString
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 inString                       (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            outInt                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemUIFunctionLibrary_C::STATIC_ParseLevelRequiredFromString(const struct FString& inString, class UObject* __WorldContext, int* outInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.ParseLevelRequiredFromString");

	UItemUIFunctionLibrary_C_ParseLevelRequiredFromString_Params params;
	params.inString = inString;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outInt != nullptr)
		*outInt = params.outInt;
}


// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Add Alteration Widgets
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UVerticalBox*            Host_Widget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            PreviewLevel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ShowInVaultDetails             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemUIFunctionLibrary_C::STATIC_Add_Alteration_Widgets(class UVerticalBox* Host_Widget, class UFortItem* Item, int PreviewLevel, bool ShowInVaultDetails, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Add Alteration Widgets");

	UItemUIFunctionLibrary_C_Add_Alteration_Widgets_Params params;
	params.Host_Widget = Host_Widget;
	params.Item = Item;
	params.PreviewLevel = PreviewLevel;
	params.ShowInVaultDetails = ShowInVaultDetails;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
