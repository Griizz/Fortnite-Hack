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

// Function RotatorSelector.RotatorSelector_C.Update Options
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void URotatorSelector_C::Update_Options(TArray<struct FText>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelector.RotatorSelector_C.Update Options");

	URotatorSelector_C_Update_Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function RotatorSelector.RotatorSelector_C.Center on Widget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URotatorSelector_C::Center_on_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelector.RotatorSelector_C.Center on Widget");

	URotatorSelector_C_Center_on_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RotatorSelector.RotatorSelector_C.Initialize
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Display_Text                   (CPF_Parm)
// TArray<struct FText>           Options                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FText                   Hover_Text                     (CPF_Parm)
// class UCommonTextBlock*        Tab_Tooltip                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URotatorSelector_C::Initialize(const struct FText& Display_Text, const struct FText& Hover_Text, class UCommonTextBlock* Tab_Tooltip, TArray<struct FText>* Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelector.RotatorSelector_C.Initialize");

	URotatorSelector_C_Initialize_Params params;
	params.Display_Text = Display_Text;
	params.Hover_Text = Hover_Text;
	params.Tab_Tooltip = Tab_Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Options != nullptr)
		*Options = params.Options;
}


// Function RotatorSelector.RotatorSelector_C.Update Row Selector
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Currently_Selected             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URotatorSelector_C::Update_Row_Selector(int Currently_Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelector.RotatorSelector_C.Update Row Selector");

	URotatorSelector_C_Update_Row_Selector_Params params;
	params.Currently_Selected = Currently_Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RotatorSelector.RotatorSelector_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URotatorSelector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelector.RotatorSelector_C.Construct");

	URotatorSelector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RotatorSelector.RotatorSelector_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void URotatorSelector_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelector.RotatorSelector_C.OnMouseLeave");

	URotatorSelector_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RotatorSelector.RotatorSelector_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void URotatorSelector_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelector.RotatorSelector_C.OnMouseEnter");

	URotatorSelector_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RotatorSelector.RotatorSelector_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URotatorSelector_C::BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelector.RotatorSelector_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature");

	URotatorSelector_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RotatorSelector.RotatorSelector_C.ExecuteUbergraph_RotatorSelector
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URotatorSelector_C::ExecuteUbergraph_RotatorSelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelector.RotatorSelector_C.ExecuteUbergraph_RotatorSelector");

	URotatorSelector_C_ExecuteUbergraph_RotatorSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RotatorSelector.RotatorSelector_C.Selection Changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URotatorSelector_C::Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelector.RotatorSelector_C.Selection Changed__DelegateSignature");

	URotatorSelector_C_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
