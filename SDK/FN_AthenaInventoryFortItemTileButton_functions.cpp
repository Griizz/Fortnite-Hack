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

// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnDrop
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (CPF_Parm)
// class UDragDropOperation**     Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAthenaInventoryFortItemTileButton_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnDrop");

	UAthenaInventoryFortItemTileButton_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UAthenaInventoryFortItemTileButton_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnFocusReceived");

	UAthenaInventoryFortItemTileButton_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.On_ItemWidgetHolder_MouseButtonDown
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UAthenaInventoryFortItemTileButton_C::On_ItemWidgetHolder_MouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.On_ItemWidgetHolder_MouseButtonDown");

	UAthenaInventoryFortItemTileButton_C_On_ItemWidgetHolder_MouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.UpdateInteractionWidgetVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaInventoryFortItemTileButton_C::UpdateInteractionWidgetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.UpdateInteractionWidgetVisibility");

	UAthenaInventoryFortItemTileButton_C_UpdateInteractionWidgetVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.SetEquipSlotOverlay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            EquipSlot                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaInventoryFortItemTileButton_C::SetEquipSlotOverlay(int EquipSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.SetEquipSlotOverlay");

	UAthenaInventoryFortItemTileButton_C_SetEquipSlotOverlay_Params params;
	params.EquipSlot = EquipSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnDragDetected
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation*      Operation                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaInventoryFortItemTileButton_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnDragDetected");

	UAthenaInventoryFortItemTileButton_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.UpdateStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaInventoryFortItemTileButton_C::UpdateStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.UpdateStyle");

	UAthenaInventoryFortItemTileButton_C_UpdateStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.HandleEquipSlotChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int*                           EquipSlot                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaInventoryFortItemTileButton_C::HandleEquipSlotChanged(int* EquipSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.HandleEquipSlotChanged");

	UAthenaInventoryFortItemTileButton_C_HandleEquipSlotChanged_Params params;
	params.EquipSlot = EquipSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnInventoryItemSelected_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaInventoryFortItemTileButton_C::OnInventoryItemSelected_Event_1(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnInventoryItemSelected_Event_1");

	UAthenaInventoryFortItemTileButton_C_OnInventoryItemSelected_Event_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaInventoryFortItemTileButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.Construct");

	UAthenaInventoryFortItemTileButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaInventoryFortItemTileButton_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.Destruct");

	UAthenaInventoryFortItemTileButton_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAthenaInventoryFortItemTileButton_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.OnSelected");

	UAthenaInventoryFortItemTileButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.ExecuteUbergraph_AthenaInventoryFortItemTileButton
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaInventoryFortItemTileButton_C::ExecuteUbergraph_AthenaInventoryFortItemTileButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C.ExecuteUbergraph_AthenaInventoryFortItemTileButton");

	UAthenaInventoryFortItemTileButton_C_ExecuteUbergraph_AthenaInventoryFortItemTileButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
