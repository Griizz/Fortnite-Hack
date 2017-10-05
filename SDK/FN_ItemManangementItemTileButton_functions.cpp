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

// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleSlottedSurvivor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManangementItemTileButton_C::HandleSlottedSurvivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleSlottedSurvivor");

	UItemManangementItemTileButton_C_HandleSlottedSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateQuantityProduced
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManangementItemTileButton_C::UpdateQuantityProduced()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateQuantityProduced");

	UItemManangementItemTileButton_C_UpdateQuantityProduced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateBangState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManangementItemTileButton_C::UpdateBangState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateBangState");

	UItemManangementItemTileButton_C_UpdateBangState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateInteractionWidgetVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManangementItemTileButton_C::UpdateInteractionWidgetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateInteractionWidgetVisibility");

	UItemManangementItemTileButton_C_UpdateInteractionWidgetVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.SetEquipSlotOverlay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            EquipSlot                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManangementItemTileButton_C::SetEquipSlotOverlay(int EquipSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.SetEquipSlotOverlay");

	UItemManangementItemTileButton_C_SetEquipSlotOverlay_Params params;
	params.EquipSlot = EquipSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnDragDetected
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation*      Operation                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManangementItemTileButton_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnDragDetected");

	UItemManangementItemTileButton_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.On_ItemWidgetHolder_MouseButtonDown
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UItemManangementItemTileButton_C::On_ItemWidgetHolder_MouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.On_ItemWidgetHolder_MouseButtonDown");

	UItemManangementItemTileButton_C_On_ItemWidgetHolder_MouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManangementItemTileButton_C::UpdateStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateStyle");

	UItemManangementItemTileButton_C_UpdateStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateMulchStateBox
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManangementItemTileButton_C::UpdateMulchStateBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateMulchStateBox");

	UItemManangementItemTileButton_C_UpdateMulchStateBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleDifferentItemManagementModeSetBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManangementItemTileButton_C::HandleDifferentItemManagementModeSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleDifferentItemManagementModeSetBP");

	UItemManangementItemTileButton_C_HandleDifferentItemManagementModeSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnHovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManangementItemTileButton_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnHovered");

	UItemManangementItemTileButton_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnUnhovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManangementItemTileButton_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnUnhovered");

	UItemManangementItemTileButton_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleHasItemToDetailChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManangementItemTileButton_C::HandleHasItemToDetailChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleHasItemToDetailChanged");

	UItemManangementItemTileButton_C_HandleHasItemToDetailChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleHasItemToCompareDetailsWithChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManangementItemTileButton_C::HandleHasItemToCompareDetailsWithChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleHasItemToCompareDetailsWithChanged");

	UItemManangementItemTileButton_C_HandleHasItemToCompareDetailsWithChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleItemMulchStateChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManangementItemTileButton_C::HandleItemMulchStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleItemMulchStateChanged");

	UItemManangementItemTileButton_C_HandleItemMulchStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleEquipSlotChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int*                           EquipSlot                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManangementItemTileButton_C::HandleEquipSlotChanged(int* EquipSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleEquipSlotChanged");

	UItemManangementItemTileButton_C_HandleEquipSlotChanged_Params params;
	params.EquipSlot = EquipSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnDragCancelled
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation**     Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManangementItemTileButton_C::OnDragCancelled(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnDragCancelled");

	UItemManangementItemTileButton_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManangementItemTileButton_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnSelected");

	UItemManangementItemTileButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemManangementItemTileButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.Construct");

	UItemManangementItemTileButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.ExecuteUbergraph_ItemManangementItemTileButton
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManangementItemTileButton_C::ExecuteUbergraph_ItemManangementItemTileButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.ExecuteUbergraph_ItemManangementItemTileButton");

	UItemManangementItemTileButton_C_ExecuteUbergraph_ItemManangementItemTileButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
