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

// Function PickupManager.PickupManager_C.UpdateKeybinds
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPickupManager_C::UpdateKeybinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupManager.PickupManager_C.UpdateKeybinds");

	UPickupManager_C_UpdateKeybinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupManager.PickupManager_C.RefreshCounts
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPickupManager_C::RefreshCounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupManager.PickupManager_C.RefreshCounts");

	UPickupManager_C_RefreshCounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupManager.PickupManager_C.HandleItemPickedUp
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortWorldItem*          NewItem                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Count                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPickupManager_C::HandleItemPickedUp(class UFortWorldItem* NewItem, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupManager.PickupManager_C.HandleItemPickedUp");

	UPickupManager_C_HandleItemPickedUp_Params params;
	params.NewItem = NewItem;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupManager.PickupManager_C.HandleMessageExpired
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortUIMessageItemWidget* Message_Item                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPickupManager_C::HandleMessageExpired(class UFortUIMessageItemWidget* Message_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupManager.PickupManager_C.HandleMessageExpired");

	UPickupManager_C_HandleMessageExpired_Params params;
	params.Message_Item = Message_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupManager.PickupManager_C.TryGetNextItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPickupManager_C::TryGetNextItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupManager.PickupManager_C.TryGetNextItem");

	UPickupManager_C_TryGetNextItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupManager.PickupManager_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPickupManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupManager.PickupManager_C.Construct");

	UPickupManager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupManager.PickupManager_C.HandleWorldItemsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPickupManager_C::HandleWorldItemsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupManager.PickupManager_C.HandleWorldItemsChanged");

	UPickupManager_C_HandleWorldItemsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupManager.PickupManager_C.HandleWorldItemListChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>  ItemsAdded                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class UFortWorldItem*>  ItemsRemoved                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UPickupManager_C::HandleWorldItemListChanged(TArray<class UFortWorldItem*> ItemsAdded, TArray<class UFortWorldItem*> ItemsRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupManager.PickupManager_C.HandleWorldItemListChanged");

	UPickupManager_C_HandleWorldItemListChanged_Params params;
	params.ItemsAdded = ItemsAdded;
	params.ItemsRemoved = ItemsRemoved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupManager.PickupManager_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPickupManager_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupManager.PickupManager_C.Destruct");

	UPickupManager_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupManager.PickupManager_C.ExecuteUbergraph_PickupManager
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPickupManager_C::ExecuteUbergraph_PickupManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupManager.PickupManager_C.ExecuteUbergraph_PickupManager");

	UPickupManager_C_ExecuteUbergraph_PickupManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
