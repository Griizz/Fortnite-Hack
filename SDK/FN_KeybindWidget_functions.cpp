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

// Function KeybindWidget.KeybindWidget_C.ShowHoldBackPlate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeybindWidget_C::ShowHoldBackPlate()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeybindWidget.KeybindWidget_C.ShowHoldBackPlate");

	UKeybindWidget_C_ShowHoldBackPlate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeybindWidget.KeybindWidget_C.SetOpacity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InOpacity                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeybindWidget_C::SetOpacity(float InOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeybindWidget.KeybindWidget_C.SetOpacity");

	UKeybindWidget_C_SetOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeybindWidget.KeybindWidget_C.Get Bound Action
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Action                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeybindWidget_C::Get_Bound_Action(struct FName* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeybindWidget.KeybindWidget_C.Get Bound Action");

	UKeybindWidget_C_Get_Bound_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function KeybindWidget.KeybindWidget_C.Set Brush Size
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortBrushSize>    Brush_Size                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeybindWidget_C::Set_Brush_Size(TEnumAsByte<EFortBrushSize> Brush_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeybindWidget.KeybindWidget_C.Set Brush Size");

	UKeybindWidget_C_Set_Brush_Size_Params params;
	params.Brush_Size = Brush_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeybindWidget.KeybindWidget_C.Get Brush Size
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortBrushSize>    Brush_Size                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeybindWidget_C::Get_Brush_Size(TEnumAsByte<EFortBrushSize>* Brush_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeybindWidget.KeybindWidget_C.Get Brush Size");

	UKeybindWidget_C_Get_Brush_Size_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush_Size != nullptr)
		*Brush_Size = params.Brush_Size;
}


// Function KeybindWidget.KeybindWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKeybindWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeybindWidget.KeybindWidget_C.Construct");

	UKeybindWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeybindWidget.KeybindWidget_C.Update
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKeybindWidget_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeybindWidget.KeybindWidget_C.Update");

	UKeybindWidget_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeybindWidget.KeybindWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeybindWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeybindWidget.KeybindWidget_C.PreConstruct");

	UKeybindWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeybindWidget.KeybindWidget_C.UpdateFrameSize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKeybindWidget_C::UpdateFrameSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeybindWidget.KeybindWidget_C.UpdateFrameSize");

	UKeybindWidget_C_UpdateFrameSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeybindWidget.KeybindWidget_C.ExecuteUbergraph_KeybindWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeybindWidget_C::ExecuteUbergraph_KeybindWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeybindWidget.KeybindWidget_C.ExecuteUbergraph_KeybindWidget");

	UKeybindWidget_C_ExecuteUbergraph_KeybindWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
