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

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.IsSelected
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementEquipSlot_C::IsSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.IsSelected");

	UItemManagementEquipSlot_C_IsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selected != nullptr)
		*Selected = params.Selected;
}


// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UItemManagementEquipSlot_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnFocusReceived");

	UItemManagementEquipSlot_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.SetSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementEquipSlot_C::SetSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.SetSelected");

	UItemManagementEquipSlot_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnDragDetected
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation*      Operation                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementEquipSlot_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnDragDetected");

	UItemManagementEquipSlot_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UItemManagementEquipSlot_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnMouseButtonDown");

	UItemManagementEquipSlot_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnDrop
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (CPF_Parm)
// class UDragDropOperation**     Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UItemManagementEquipSlot_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnDrop");

	UItemManagementEquipSlot_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.RefreshItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManagementEquipSlot_C::RefreshItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.RefreshItem");

	UItemManagementEquipSlot_C_RefreshItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemManagementEquipSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.Construct");

	UItemManagementEquipSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnFocusLost
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)

void UItemManagementEquipSlot_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnFocusLost");

	UItemManagementEquipSlot_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_6_OnInputMethodChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementEquipSlot_C::BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_6_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_6_OnInputMethodChanged__DelegateSignature");

	UItemManagementEquipSlot_C_BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_6_OnInputMethodChanged__DelegateSignature_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnDragCancelled
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation**     Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementEquipSlot_C::OnDragCancelled(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnDragCancelled");

	UItemManagementEquipSlot_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.ExecuteUbergraph_ItemManagementEquipSlot
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementEquipSlot_C::ExecuteUbergraph_ItemManagementEquipSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.ExecuteUbergraph_ItemManagementEquipSlot");

	UItemManagementEquipSlot_C_ExecuteUbergraph_ItemManagementEquipSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
