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

// Function QuickbarSlot.QuickbarSlot_C.UpdateItemCardsVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::UpdateItemCardsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.UpdateItemCardsVisibility");

	UQuickbarSlot_C_UpdateItemCardsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStopped
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortItemCooldownType          CooldownType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::OnCooldownStopped(EFortItemCooldownType CooldownType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.OnCooldownStopped");

	UQuickbarSlot_C_OnCooldownStopped_Params params;
	params.CooldownType = CooldownType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStarted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortItemCooldownType          CooldownType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::OnCooldownStarted(EFortItemCooldownType CooldownType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.OnCooldownStarted");

	UQuickbarSlot_C_OnCooldownStarted_Params params;
	params.CooldownType = CooldownType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.InitializeCooldowns
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::InitializeCooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.InitializeCooldowns");

	UQuickbarSlot_C_InitializeCooldowns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction_Gamepad
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   KeyBindingAction               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::GetKeyBindingAction_Gamepad(struct FName* KeyBindingAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction_Gamepad");

	UQuickbarSlot_C_GetKeyBindingAction_Gamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KeyBindingAction != nullptr)
		*KeyBindingAction = params.KeyBindingAction;
}


// Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction_Keyboard
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   Key_Binding_Action             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::GetKeyBindingAction_Keyboard(struct FName* Key_Binding_Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction_Keyboard");

	UQuickbarSlot_C_GetKeyBindingAction_Keyboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key_Binding_Action != nullptr)
		*Key_Binding_Action = params.Key_Binding_Action;
}


// Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   KeyBindingAction               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::GetKeyBindingAction(struct FName* KeyBindingAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.GetKeyBindingAction");

	UQuickbarSlot_C_GetKeyBindingAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KeyBindingAction != nullptr)
		*KeyBindingAction = params.KeyBindingAction;
}


// Function QuickbarSlot.QuickbarSlot_C.UpdateKeyBindingVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::UpdateKeyBindingVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.UpdateKeyBindingVisibility");

	UQuickbarSlot_C_UpdateKeyBindingVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.UpdateKeyBindingText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::UpdateKeyBindingText()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.UpdateKeyBindingText");

	UQuickbarSlot_C_UpdateKeyBindingText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.Resize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortBrushSize>    Brush_Size                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::Resize(TEnumAsByte<EFortBrushSize> Brush_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.Resize");

	UQuickbarSlot_C_Resize_Params params;
	params.Brush_Size = Brush_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.Maximize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.Maximize");

	UQuickbarSlot_C_Maximize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.Minimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.Minimize");

	UQuickbarSlot_C_Minimize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.SetSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::SetSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.SetSelected");

	UQuickbarSlot_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.RefreshItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::RefreshItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.RefreshItem");

	UQuickbarSlot_C_RefreshItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.PreConstruct");

	UQuickbarSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UQuickbarSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.Construct");

	UQuickbarSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::HandleMaximizeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeStarted");

	UQuickbarSlot_C_HandleMaximizeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::HandleMinimizeFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeFinished");

	UQuickbarSlot_C_HandleMinimizeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::HandleMaximizeFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeFinished");

	UQuickbarSlot_C_HandleMaximizeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UQuickbarSlot_C::HandleMinimizeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeStarted");

	UQuickbarSlot_C_HandleMinimizeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.ExecuteUbergraph_QuickbarSlot
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQuickbarSlot_C::ExecuteUbergraph_QuickbarSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.ExecuteUbergraph_QuickbarSlot");

	UQuickbarSlot_C_ExecuteUbergraph_QuickbarSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
