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

// Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.RefreshWorldInventoryStatus
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaInventoryLimitStatusIndicator_C::RefreshWorldInventoryStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.RefreshWorldInventoryStatus");

	UAthenaInventoryLimitStatusIndicator_C_RefreshWorldInventoryStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.TrackWorldInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaInventoryLimitStatusIndicator_C::TrackWorldInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.TrackWorldInventory");

	UAthenaInventoryLimitStatusIndicator_C_TrackWorldInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaInventoryLimitStatusIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.Construct");

	UAthenaInventoryLimitStatusIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaInventoryLimitStatusIndicator_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.Destruct");

	UAthenaInventoryLimitStatusIndicator_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.HandleWorldItemListChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>  ItemsAdded                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class UFortWorldItem*>  ItemsRemoved                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UAthenaInventoryLimitStatusIndicator_C::HandleWorldItemListChanged(TArray<class UFortWorldItem*> ItemsAdded, TArray<class UFortWorldItem*> ItemsRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.HandleWorldItemListChanged");

	UAthenaInventoryLimitStatusIndicator_C_HandleWorldItemListChanged_Params params;
	params.ItemsAdded = ItemsAdded;
	params.ItemsRemoved = ItemsRemoved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.ExecuteUbergraph_AthenaInventoryLimitStatusIndicator
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaInventoryLimitStatusIndicator_C::ExecuteUbergraph_AthenaInventoryLimitStatusIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryLimitStatusIndicator.AthenaInventoryLimitStatusIndicator_C.ExecuteUbergraph_AthenaInventoryLimitStatusIndicator");

	UAthenaInventoryLimitStatusIndicator_C_ExecuteUbergraph_AthenaInventoryLimitStatusIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
