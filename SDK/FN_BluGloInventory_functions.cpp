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

// Function BluGloInventory.BluGloInventory_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBluGloInventory_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloInventory.BluGloInventory_C.Update");

	UBluGloInventory_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloInventory.BluGloInventory_C.HandleOnWorldItemListChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>  Items_Added                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class UFortWorldItem*>  Items_Removed                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UBluGloInventory_C::HandleOnWorldItemListChanged(TArray<class UFortWorldItem*>* Items_Added, TArray<class UFortWorldItem*>* Items_Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloInventory.BluGloInventory_C.HandleOnWorldItemListChanged");

	UBluGloInventory_C_HandleOnWorldItemListChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items_Added != nullptr)
		*Items_Added = params.Items_Added;
	if (Items_Removed != nullptr)
		*Items_Removed = params.Items_Removed;
}


// Function BluGloInventory.BluGloInventory_C.HandleWorldItemsChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBluGloInventory_C::HandleWorldItemsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloInventory.BluGloInventory_C.HandleWorldItemsChanged");

	UBluGloInventory_C_HandleWorldItemsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloInventory.BluGloInventory_C.HandleItemPickedUp
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortWorldItem*          New_Item                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Count                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBluGloInventory_C::HandleItemPickedUp(class UFortWorldItem* New_Item, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloInventory.BluGloInventory_C.HandleItemPickedUp");

	UBluGloInventory_C_HandleItemPickedUp_Params params;
	params.New_Item = New_Item;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloInventory.BluGloInventory_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBluGloInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloInventory.BluGloInventory_C.Construct");

	UBluGloInventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloInventory.BluGloInventory_C.ExecuteUbergraph_BluGloInventory
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBluGloInventory_C::ExecuteUbergraph_BluGloInventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloInventory.BluGloInventory_C.ExecuteUbergraph_BluGloInventory");

	UBluGloInventory_C_ExecuteUbergraph_BluGloInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
