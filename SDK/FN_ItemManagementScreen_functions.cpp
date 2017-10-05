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

// Function ItemManagementScreen.ItemManagementScreen_C.ShowCraftError
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortCraftFailCause            FailCause                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementScreen_C::ShowCraftError(EFortCraftFailCause FailCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.ShowCraftError");

	UItemManagementScreen_C_ShowCraftError_Params params;
	params.FailCause = FailCause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.CraftAndSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortSchematicItem*      SchematicItem                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementScreen_C::CraftAndSlot(class UFortSchematicItem* SchematicItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.CraftAndSlot");

	UItemManagementScreen_C_CraftAndSlot_Params params;
	params.SchematicItem = SchematicItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleEquip
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               ItemToEquip                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementScreen_C::HandleEquip(class UFortItem* ItemToEquip, bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleEquip");

	UItemManagementScreen_C_HandleEquip_Params params;
	params.ItemToEquip = ItemToEquip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemManagementScreen.ItemManagementScreen_C.SizeInventoryPanel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManagementScreen_C::SizeInventoryPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.SizeInventoryPanel");

	UItemManagementScreen_C_SizeInventoryPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.OnDrop
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (CPF_Parm)
// class UDragDropOperation**     Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UItemManagementScreen_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.OnDrop");

	UItemManagementScreen_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemManagementScreen.ItemManagementScreen_C.GetDescriptionText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ItemDescription                (CPF_Parm, CPF_OutParm)

void UItemManagementScreen_C::GetDescriptionText(struct FText* ItemDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.GetDescriptionText");

	UItemManagementScreen_C_GetDescriptionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemDescription != nullptr)
		*ItemDescription = params.ItemDescription;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleInspect
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               ItemToInspect                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           PassThrough                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementScreen_C::HandleInspect(class UFortItem* ItemToInspect, bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleInspect");

	UItemManagementScreen_C_HandleInspect_Params params;
	params.ItemToInspect = ItemToInspect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleClose
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManagementScreen_C::HandleClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleClose");

	UItemManagementScreen_C_HandleClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementScreen_C::DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40");

	UItemManagementScreen_C_DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManagementScreen_C::OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA");

	UItemManagementScreen_C_OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleDifferentItemManagementModeSetBP
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemManagementScreen_C::HandleDifferentItemManagementModeSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleDifferentItemManagementModeSetBP");

	UItemManagementScreen_C_HandleDifferentItemManagementModeSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleEquipItemBP
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem**              Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementScreen_C::HandleEquipItemBP(class UFortItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleEquipItemBP");

	UItemManagementScreen_C_HandleEquipItemBP_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleCraftItemBP
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UFortSchematicItem**     SchematicItem                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementScreen_C::HandleCraftItemBP(class UFortSchematicItem** SchematicItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleCraftItemBP");

	UItemManagementScreen_C_HandleCraftItemBP_Params params;
	params.SchematicItem = SchematicItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.CraftabilityRefresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManagementScreen_C::CraftabilityRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.CraftabilityRefresh");

	UItemManagementScreen_C_CraftabilityRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleConsumeItemBP
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UFortConsumableAccountItem** ConsumableItem                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementScreen_C::HandleConsumeItemBP(class UFortConsumableAccountItem** ConsumableItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleConsumeItemBP");

	UItemManagementScreen_C_HandleConsumeItemBP_Params params;
	params.ConsumableItem = ConsumableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManagementScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.OnActivated");

	UItemManagementScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleInspectItemBP
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem**              Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementScreen_C::HandleInspectItemBP(class UFortItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleInspectItemBP");

	UItemManagementScreen_C_HandleInspectItemBP_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.ExecuteUbergraph_ItemManagementScreen
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementScreen_C::ExecuteUbergraph_ItemManagementScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.ExecuteUbergraph_ItemManagementScreen");

	UItemManagementScreen_C_ExecuteUbergraph_ItemManagementScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
