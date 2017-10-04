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

// Function AthenaPickupManager.AthenaPickupManager_C.UpdateKeybinds
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaPickupManager_C::UpdateKeybinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupManager.AthenaPickupManager_C.UpdateKeybinds");

	UAthenaPickupManager_C_UpdateKeybinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupManager.AthenaPickupManager_C.RefreshCounts
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaPickupManager_C::RefreshCounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupManager.AthenaPickupManager_C.RefreshCounts");

	UAthenaPickupManager_C_RefreshCounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupManager.AthenaPickupManager_C.HandleItemPickedUp
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortWorldItem*          NewItem                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Count                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaPickupManager_C::HandleItemPickedUp(class UFortWorldItem* NewItem, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupManager.AthenaPickupManager_C.HandleItemPickedUp");

	UAthenaPickupManager_C_HandleItemPickedUp_Params params;
	params.NewItem = NewItem;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupManager.AthenaPickupManager_C.HandleMessageExpired
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortUIMessageItemWidget* Message_Item                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaPickupManager_C::HandleMessageExpired(class UFortUIMessageItemWidget* Message_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupManager.AthenaPickupManager_C.HandleMessageExpired");

	UAthenaPickupManager_C_HandleMessageExpired_Params params;
	params.Message_Item = Message_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupManager.AthenaPickupManager_C.TryGetNextItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaPickupManager_C::TryGetNextItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupManager.AthenaPickupManager_C.TryGetNextItem");

	UAthenaPickupManager_C_TryGetNextItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupManager.AthenaPickupManager_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaPickupManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupManager.AthenaPickupManager_C.Construct");

	UAthenaPickupManager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupManager.AthenaPickupManager_C.HandleWorldItemsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaPickupManager_C::HandleWorldItemsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupManager.AthenaPickupManager_C.HandleWorldItemsChanged");

	UAthenaPickupManager_C_HandleWorldItemsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupManager.AthenaPickupManager_C.HandleWorldItemListChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>  ItemsAdded                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class UFortWorldItem*>  ItemsRemoved                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UAthenaPickupManager_C::HandleWorldItemListChanged(TArray<class UFortWorldItem*> ItemsAdded, TArray<class UFortWorldItem*> ItemsRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupManager.AthenaPickupManager_C.HandleWorldItemListChanged");

	UAthenaPickupManager_C_HandleWorldItemListChanged_Params params;
	params.ItemsAdded = ItemsAdded;
	params.ItemsRemoved = ItemsRemoved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupManager.AthenaPickupManager_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaPickupManager_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupManager.AthenaPickupManager_C.Destruct");

	UAthenaPickupManager_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupManager.AthenaPickupManager_C.ExecuteUbergraph_AthenaPickupManager
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaPickupManager_C::ExecuteUbergraph_AthenaPickupManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupManager.AthenaPickupManager_C.ExecuteUbergraph_AthenaPickupManager");

	UAthenaPickupManager_C_ExecuteUbergraph_AthenaPickupManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
