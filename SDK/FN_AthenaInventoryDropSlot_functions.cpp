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

// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.OnDrop
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (CPF_Parm)
// class UDragDropOperation**     Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAthenaInventoryDropSlot_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.OnDrop");

	UAthenaInventoryDropSlot_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaInventoryDropSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.Construct");

	UAthenaInventoryDropSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.OnFocusLost
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)

void UAthenaInventoryDropSlot_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.OnFocusLost");

	UAthenaInventoryDropSlot_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaInventoryDropSlot_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.Tick");

	UAthenaInventoryDropSlot_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.ExecuteUbergraph_AthenaInventoryDropSlot
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaInventoryDropSlot_C::ExecuteUbergraph_AthenaInventoryDropSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.ExecuteUbergraph_AthenaInventoryDropSlot");

	UAthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.OnEquipRequested__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaInventoryDropSlot_C::OnEquipRequested__DelegateSignature(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.OnEquipRequested__DelegateSignature");

	UAthenaInventoryDropSlot_C_OnEquipRequested__DelegateSignature_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
