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

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Button Hovered
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button_Hovered                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuRowSelector_C::Button_Hovered(class UCommonButton* Button_Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Button Hovered");

	UOptionsMenuRowSelector_C_Button_Hovered_Params params;
	params.Button_Hovered = Button_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Deselect All Rows
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenuRowSelector_C::Deselect_All_Rows()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Deselect All Rows");

	UOptionsMenuRowSelector_C_Deselect_All_Rows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Update Row Selector
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Tab_Number                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuRowSelector_C::Update_Row_Selector(int Tab_Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Update Row Selector");

	UOptionsMenuRowSelector_C_Update_Row_Selector_Params params;
	params.Tab_Number = Tab_Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Initialize Row Selector
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Row_Text                       (CPF_Parm)
// TArray<struct FText>           Buttons                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FText>           Hover_Texts                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           Require_Selection              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonTextBlock*        Tab_Tooltip                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuRowSelector_C::Initialize_Row_Selector(const struct FText& Row_Text, bool Require_Selection, class UCommonTextBlock* Tab_Tooltip, TArray<struct FText>* Buttons, TArray<struct FText>* Hover_Texts)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Initialize Row Selector");

	UOptionsMenuRowSelector_C_Initialize_Row_Selector_Params params;
	params.Row_Text = Row_Text;
	params.Require_Selection = Require_Selection;
	params.Tab_Tooltip = Tab_Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;
	if (Hover_Texts != nullptr)
		*Hover_Texts = params.Hover_Texts;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptionsMenuRowSelector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Construct");

	UOptionsMenuRowSelector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnSelectedButtonChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           AssociatedButton               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ButtonIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuRowSelector_C::OnSelectedButtonChanged_Event_1(class UCommonButton* AssociatedButton, int ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnSelectedButtonChanged_Event_1");

	UOptionsMenuRowSelector_C_OnSelectedButtonChanged_Event_1_Params params;
	params.AssociatedButton = AssociatedButton;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOptionsMenuRowSelector_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnMouseLeave");

	UOptionsMenuRowSelector_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptionsMenuRowSelector_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Destruct");

	UOptionsMenuRowSelector_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuRowSelector_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.PreConstruct");

	UOptionsMenuRowSelector_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.ExecuteUbergraph_OptionsMenuRowSelector
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuRowSelector_C::ExecuteUbergraph_OptionsMenuRowSelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.ExecuteUbergraph_OptionsMenuRowSelector");

	UOptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Selector Button Selected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Tab_Id                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuRowSelector_C::Selector_Button_Selected__DelegateSignature(int Tab_Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Selector Button Selected__DelegateSignature");

	UOptionsMenuRowSelector_C_Selector_Button_Selected__DelegateSignature_Params params;
	params.Tab_Id = Tab_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
