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

// Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.GetDisplayName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   DisplayName                    (CPF_Parm, CPF_OutParm)

void UItemDetailsHeaderItemDisplayText_C::GetDisplayName(struct FText* DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.GetDisplayName");

	UItemDetailsHeaderItemDisplayText_C_GetDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;
}


// Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.HandlePostDifferentItemToCompareWithSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemDetailsHeaderItemDisplayText_C::HandlePostDifferentItemToCompareWithSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.HandlePostDifferentItemToCompareWithSet");

	UItemDetailsHeaderItemDisplayText_C_HandlePostDifferentItemToCompareWithSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.HandlePostDifferentItemToDetailSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemDetailsHeaderItemDisplayText_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.HandlePostDifferentItemToDetailSet");

	UItemDetailsHeaderItemDisplayText_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.ExecuteUbergraph_ItemDetailsHeaderItemDisplayText
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemDetailsHeaderItemDisplayText_C::ExecuteUbergraph_ItemDetailsHeaderItemDisplayText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.ExecuteUbergraph_ItemDetailsHeaderItemDisplayText");

	UItemDetailsHeaderItemDisplayText_C_ExecuteUbergraph_ItemDetailsHeaderItemDisplayText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
