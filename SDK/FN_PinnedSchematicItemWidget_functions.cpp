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

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleCursorModeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CursorModeEnabled              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUserWidget*             CursorModeContentWidget        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPinnedSchematicItemWidget_C::HandleCursorModeChanged(bool CursorModeEnabled, const struct FName& ActionName, class UUserWidget* CursorModeContentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleCursorModeChanged");

	UPinnedSchematicItemWidget_C_HandleCursorModeChanged_Params params;
	params.CursorModeEnabled = CursorModeEnabled;
	params.ActionName = ActionName;
	params.CursorModeContentWidget = CursorModeContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.UnbindDelegates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPinnedSchematicItemWidget_C::UnbindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.UnbindDelegates");

	UPinnedSchematicItemWidget_C_UnbindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.ClearPinnedSchematic
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPinnedSchematicItemWidget_C::ClearPinnedSchematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.ClearPinnedSchematic");

	UPinnedSchematicItemWidget_C_ClearPinnedSchematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleItemChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ItemChanged                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           AmmoChanged                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IngredientsChanged             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPinnedSchematicItemWidget_C::HandleItemChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleItemChanged");

	UPinnedSchematicItemWidget_C_HandleItemChanged_Params params;
	params.ItemChanged = ItemChanged;
	params.AmmoChanged = AmmoChanged;
	params.IngredientsChanged = IngredientsChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.SetupIngredients
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPinnedSchematicItemWidget_C::SetupIngredients()
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.SetupIngredients");

	UPinnedSchematicItemWidget_C_SetupIngredients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleWorldItemListChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>  ItemsAdded                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class UFortWorldItem*>  ItemsRemoved                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UPinnedSchematicItemWidget_C::HandleWorldItemListChanged(TArray<class UFortWorldItem*>* ItemsAdded, TArray<class UFortWorldItem*>* ItemsRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleWorldItemListChanged");

	UPinnedSchematicItemWidget_C_HandleWorldItemListChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemsAdded != nullptr)
		*ItemsAdded = params.ItemsAdded;
	if (ItemsRemoved != nullptr)
		*ItemsRemoved = params.ItemsRemoved;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleOnSchematicUnlocked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortSchematicItem*      Schematic                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPinnedSchematicItemWidget_C::HandleOnSchematicUnlocked(class UFortSchematicItem* Schematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleOnSchematicUnlocked");

	UPinnedSchematicItemWidget_C_HandleOnSchematicUnlocked_Params params;
	params.Schematic = Schematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.BindDelegates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPinnedSchematicItemWidget_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.BindDelegates");

	UPinnedSchematicItemWidget_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.SetPinnedSchematic
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortSchematicItem*      NewPinnedSchematic             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPinnedSchematicItemWidget_C::SetPinnedSchematic(class UFortSchematicItem* NewPinnedSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.SetPinnedSchematic");

	UPinnedSchematicItemWidget_C_SetPinnedSchematic_Params params;
	params.NewPinnedSchematic = NewPinnedSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.Refresh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPinnedSchematicItemWidget_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.Refresh");

	UPinnedSchematicItemWidget_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.PinButton_Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortBaseButton*         NewParam                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPinnedSchematicItemWidget_C::PinButton_Clicked(class UFortBaseButton* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.PinButton_Clicked");

	UPinnedSchematicItemWidget_C_PinButton_Clicked_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.ExecuteUbergraph_PinnedSchematicItemWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPinnedSchematicItemWidget_C::ExecuteUbergraph_PinnedSchematicItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.ExecuteUbergraph_PinnedSchematicItemWidget");

	UPinnedSchematicItemWidget_C_ExecuteUbergraph_PinnedSchematicItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
