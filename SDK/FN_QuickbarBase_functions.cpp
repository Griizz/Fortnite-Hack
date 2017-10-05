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

// Function QuickbarBase.QuickbarBase_C.RefreshQuickbar
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarBase_C::RefreshQuickbar()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarBase.QuickbarBase_C.RefreshQuickbar");

	UQuickbarBase_C_RefreshQuickbar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarBase.QuickbarBase_C.HandleKeybindsChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarBase_C::HandleKeybindsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarBase.QuickbarBase_C.HandleKeybindsChanged");

	UQuickbarBase_C_HandleKeybindsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarBase.QuickbarBase_C.Minimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarBase_C::Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarBase.QuickbarBase_C.Minimize");

	UQuickbarBase_C_Minimize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarBase.QuickbarBase_C.Maximize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarBase_C::Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarBase.QuickbarBase_C.Maximize");

	UQuickbarBase_C_Maximize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarBase.QuickbarBase_C.Is Valid Slot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Is_Valid                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Array_Index                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarBase_C::Is_Valid_Slot(int Slot, bool* Is_Valid, int* Array_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarBase.QuickbarBase_C.Is Valid Slot");

	UQuickbarBase_C_Is_Valid_Slot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Valid != nullptr)
		*Is_Valid = params.Is_Valid;
	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;
}


// Function QuickbarBase.QuickbarBase_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuickbarBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarBase.QuickbarBase_C.Construct");

	UQuickbarBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarBase.QuickbarBase_C.OnWorldItemListChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>  ItemsAdded                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class UFortWorldItem*>  ItemsRemoved                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UQuickbarBase_C::OnWorldItemListChanged(TArray<class UFortWorldItem*> ItemsAdded, TArray<class UFortWorldItem*> ItemsRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarBase.QuickbarBase_C.OnWorldItemListChanged");

	UQuickbarBase_C_OnWorldItemListChanged_Params params;
	params.ItemsAdded = ItemsAdded;
	params.ItemsRemoved = ItemsRemoved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarBase.QuickbarBase_C.OnQuickbarSlotFocusChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortQuickBars                 QuickbarIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarBase_C::OnQuickbarSlotFocusChanged(EFortQuickBars QuickbarIndex, int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarBase.QuickbarBase_C.OnQuickbarSlotFocusChanged");

	UQuickbarBase_C_OnQuickbarSlotFocusChanged_Params params;
	params.QuickbarIndex = QuickbarIndex;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarBase.QuickbarBase_C.OnQuickbarContentsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortQuickBars                 QuickbarIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarBase_C::OnQuickbarContentsChanged(EFortQuickBars QuickbarIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarBase.QuickbarBase_C.OnQuickbarContentsChanged");

	UQuickbarBase_C_OnQuickbarContentsChanged_Params params;
	params.QuickbarIndex = QuickbarIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarBase.QuickbarBase_C.OnQuickbarForceFullUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortQuickBars                 QuickbarIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarBase_C::OnQuickbarForceFullUpdate(EFortQuickBars QuickbarIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarBase.QuickbarBase_C.OnQuickbarForceFullUpdate");

	UQuickbarBase_C_OnQuickbarForceFullUpdate_Params params;
	params.QuickbarIndex = QuickbarIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarBase.QuickbarBase_C.OnQuickbarSecondarySlotFocusChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortQuickBars                 QuickbarIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarBase_C::OnQuickbarSecondarySlotFocusChanged_Event_1(EFortQuickBars QuickbarIndex, int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarBase.QuickbarBase_C.OnQuickbarSecondarySlotFocusChanged_Event_1");

	UQuickbarBase_C_OnQuickbarSecondarySlotFocusChanged_Event_1_Params params;
	params.QuickbarIndex = QuickbarIndex;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarBase.QuickbarBase_C.OnLocalPlayerDied
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport  DeathReport                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UQuickbarBase_C::OnLocalPlayerDied(const struct FFortPlayerDeathReport& DeathReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarBase.QuickbarBase_C.OnLocalPlayerDied");

	UQuickbarBase_C_OnLocalPlayerDied_Params params;
	params.DeathReport = DeathReport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarBase.QuickbarBase_C.OnLocalPlayerRevived
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarBase_C::OnLocalPlayerRevived()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarBase.QuickbarBase_C.OnLocalPlayerRevived");

	UQuickbarBase_C_OnLocalPlayerRevived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarBase.QuickbarBase_C.OnLocalPlayerSpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarBase_C::OnLocalPlayerSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarBase.QuickbarBase_C.OnLocalPlayerSpawned");

	UQuickbarBase_C_OnLocalPlayerSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarBase.QuickbarBase_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuickbarBase_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarBase.QuickbarBase_C.Destruct");

	UQuickbarBase_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarBase.QuickbarBase_C.ExecuteUbergraph_QuickbarBase
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarBase_C::ExecuteUbergraph_QuickbarBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarBase.QuickbarBase_C.ExecuteUbergraph_QuickbarBase");

	UQuickbarBase_C_ExecuteUbergraph_QuickbarBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
