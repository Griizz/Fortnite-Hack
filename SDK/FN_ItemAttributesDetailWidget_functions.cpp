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

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.UpdateItemsForWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemAttributesDetailWidget_C::UpdateItemsForWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.UpdateItemsForWidgets");

	UItemAttributesDetailWidget_C_UpdateItemsForWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePostDifferentItemToDetailSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemAttributesDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePostDifferentItemToDetailSet");

	UItemAttributesDetailWidget_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePostDifferentItemToCompareWithSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemAttributesDetailWidget_C::HandlePostDifferentItemToCompareWithSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePostDifferentItemToCompareWithSet");

	UItemAttributesDetailWidget_C_HandlePostDifferentItemToCompareWithSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleShouldPreviewUpgradingItemChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemAttributesDetailWidget_C::HandleShouldPreviewUpgradingItemChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleShouldPreviewUpgradingItemChanged");

	UItemAttributesDetailWidget_C_HandleShouldPreviewUpgradingItemChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePreDifferentItemToDetailSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemAttributesDetailWidget_C::HandlePreDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePreDifferentItemToDetailSet");

	UItemAttributesDetailWidget_C_HandlePreDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePreDifferentItemToCompareWithSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemAttributesDetailWidget_C::HandlePreDifferentItemToCompareWithSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePreDifferentItemToCompareWithSet");

	UItemAttributesDetailWidget_C_HandlePreDifferentItemToCompareWithSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleItemToDetailChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bItemChanged                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAmmoChanged                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIngredientsChanged            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemAttributesDetailWidget_C::HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleItemToDetailChanged");

	UItemAttributesDetailWidget_C_HandleItemToDetailChanged_Params params;
	params.bItemChanged = bItemChanged;
	params.bAmmoChanged = bAmmoChanged;
	params.bIngredientsChanged = bIngredientsChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleItemToCompareWithChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bItemChanged                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAmmoChanged                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIngredientsChanged            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemAttributesDetailWidget_C::HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleItemToCompareWithChanged");

	UItemAttributesDetailWidget_C_HandleItemToCompareWithChanged_Params params;
	params.bItemChanged = bItemChanged;
	params.bAmmoChanged = bAmmoChanged;
	params.bIngredientsChanged = bIngredientsChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.ExecuteUbergraph_ItemAttributesDetailWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemAttributesDetailWidget_C::ExecuteUbergraph_ItemAttributesDetailWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.ExecuteUbergraph_ItemAttributesDetailWidget");

	UItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
