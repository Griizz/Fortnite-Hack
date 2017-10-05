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

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.GetIngredients
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FFortItemQuantityPair> ReturnIngredients              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UItemCraftingIngredientList_C::GetIngredients(class UObject* Item, TArray<struct FFortItemQuantityPair>* ReturnIngredients)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.GetIngredients");

	UItemCraftingIngredientList_C_GetIngredients_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnIngredients != nullptr)
		*ReturnIngredients = params.ReturnIngredients;
}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.SetItemToCompare
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               ItemToCompare                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemCraftingIngredientList_C::SetItemToCompare(class UFortItem* ItemToCompare)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.SetItemToCompare");

	UItemCraftingIngredientList_C_SetItemToCompare_Params params;
	params.ItemToCompare = ItemToCompare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.ItemNeedsInventoryTracking
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           NeedsTracking                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemCraftingIngredientList_C::ItemNeedsInventoryTracking(class UFortItem* Item, bool* NeedsTracking)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.ItemNeedsInventoryTracking");

	UItemCraftingIngredientList_C_ItemNeedsInventoryTracking_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NeedsTracking != nullptr)
		*NeedsTracking = params.NeedsTracking;
}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleItemChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ItemChanged                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           AmmoChanged                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IngredientsChanged             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemCraftingIngredientList_C::HandleItemChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleItemChanged");

	UItemCraftingIngredientList_C_HandleItemChanged_Params params;
	params.ItemChanged = ItemChanged;
	params.AmmoChanged = AmmoChanged;
	params.IngredientsChanged = IngredientsChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.RefreshInventoryTracking
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemCraftingIngredientList_C::RefreshInventoryTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.RefreshInventoryTracking");

	UItemCraftingIngredientList_C_RefreshInventoryTracking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleWorldItemsChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemCraftingIngredientList_C::HandleWorldItemsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleWorldItemsChanged");

	UItemCraftingIngredientList_C_HandleWorldItemsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleWorldItemListChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>  ItemsAdded                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class UFortWorldItem*>  ItemsRemoved                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UItemCraftingIngredientList_C::HandleWorldItemListChanged(TArray<class UFortWorldItem*>* ItemsAdded, TArray<class UFortWorldItem*>* ItemsRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleWorldItemListChanged");

	UItemCraftingIngredientList_C_HandleWorldItemListChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemsAdded != nullptr)
		*ItemsAdded = params.ItemsAdded;
	if (ItemsRemoved != nullptr)
		*ItemsRemoved = params.ItemsRemoved;
}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.Refresh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemCraftingIngredientList_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.Refresh");

	UItemCraftingIngredientList_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.SetItemToRepresent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemCraftingIngredientList_C::SetItemToRepresent(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.SetItemToRepresent");

	UItemCraftingIngredientList_C_SetItemToRepresent_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.DoDesignTimeRandomization
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemCraftingIngredientList_C::DoDesignTimeRandomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.DoDesignTimeRandomization");

	UItemCraftingIngredientList_C_DoDesignTimeRandomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemCraftingIngredientList_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.PreConstruct");

	UItemCraftingIngredientList_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.AddListEntry
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UFortItemQuantityListEntryBase** ListEntry                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemCraftingIngredientList_C::AddListEntry(class UFortItemQuantityListEntryBase** ListEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.AddListEntry");

	UItemCraftingIngredientList_C_AddListEntry_Params params;
	params.ListEntry = ListEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.ExecuteUbergraph_ItemCraftingIngredientList
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemCraftingIngredientList_C::ExecuteUbergraph_ItemCraftingIngredientList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.ExecuteUbergraph_ItemCraftingIngredientList");

	UItemCraftingIngredientList_C_ExecuteUbergraph_ItemCraftingIngredientList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
