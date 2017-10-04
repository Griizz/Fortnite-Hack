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

// Function OptionsMenuInput.OptionsMenuInput_C.DoesItemHaveChildren
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UOptionsMenuInput_C::DoesItemHaveChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.DoesItemHaveChildren");

	UOptionsMenuInput_C_DoesItemHaveChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuInput.OptionsMenuInput_C.GetIndentLevel
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UOptionsMenuInput_C::GetIndentLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.GetIndentLevel");

	UOptionsMenuInput_C_GetIndentLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuInput.OptionsMenuInput_C.IsItemExpanded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UOptionsMenuInput_C::IsItemExpanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.IsItemExpanded");

	UOptionsMenuInput_C_IsItemExpanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuInput.OptionsMenuInput_C.GetData
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UOptionsMenuInput_C::GetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.GetData");

	UOptionsMenuInput_C_GetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuInput.OptionsMenuInput_C.Change Key
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Primary_Key                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Key_To_Sets                    (CPF_Parm)

void UOptionsMenuInput_C::Change_Key(bool Primary_Key, const struct FText& Key_To_Sets)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.Change Key");

	UOptionsMenuInput_C_Change_Key_Params params;
	params.Primary_Key = Primary_Key;
	params.Key_To_Sets = Key_To_Sets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInput.OptionsMenuInput_C.Center on Widget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenuInput_C::Center_on_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.Center on Widget");

	UOptionsMenuInput_C_Center_on_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInput.OptionsMenuInput_C.OnAcquireFromPool
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOptionsMenuInput_C::OnAcquireFromPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.OnAcquireFromPool");

	UOptionsMenuInput_C_OnAcquireFromPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInput.OptionsMenuInput_C.OnReleaseToPool
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOptionsMenuInput_C::OnReleaseToPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.OnReleaseToPool");

	UOptionsMenuInput_C_OnReleaseToPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInput.OptionsMenuInput_C.Private_OnExpanderArrowShiftClicked
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenuInput_C::Private_OnExpanderArrowShiftClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.Private_OnExpanderArrowShiftClicked");

	UOptionsMenuInput_C_Private_OnExpanderArrowShiftClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInput.OptionsMenuInput_C.RegisterOnClicked
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UOptionsMenuInput_C::RegisterOnClicked(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.RegisterOnClicked");

	UOptionsMenuInput_C_RegisterOnClicked_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInput.OptionsMenuInput_C.SetExpanded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bExpanded                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuInput_C::SetExpanded(bool bExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.SetExpanded");

	UOptionsMenuInput_C_SetExpanded_Params params;
	params.bExpanded = bExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInput.OptionsMenuInput_C.SetIndexInList
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndexInList                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuInput_C::SetIndexInList(int InIndexInList)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.SetIndexInList");

	UOptionsMenuInput_C_SetIndexInList_Params params;
	params.InIndexInList = InIndexInList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInput.OptionsMenuInput_C.SetSelected
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSelected                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuInput_C::SetSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.SetSelected");

	UOptionsMenuInput_C_SetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInput.OptionsMenuInput_C.ToggleExpansion
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenuInput_C::ToggleExpansion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.ToggleExpansion");

	UOptionsMenuInput_C_ToggleExpansion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInput.OptionsMenuInput_C.Reset
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenuInput_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.Reset");

	UOptionsMenuInput_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInput.OptionsMenuInput_C.BndEvt__PrimaryInput_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuInput_C::BndEvt__PrimaryInput_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.BndEvt__PrimaryInput_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature");

	UOptionsMenuInput_C_BndEvt__PrimaryInput_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInput.OptionsMenuInput_C.BndEvt__SecondaryInput_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuInput_C::BndEvt__SecondaryInput_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.BndEvt__SecondaryInput_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature");

	UOptionsMenuInput_C_BndEvt__SecondaryInput_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInput.OptionsMenuInput_C.SetData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 InData                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonListView*         OwningList                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuInput_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.SetData");

	UOptionsMenuInput_C_SetData_Params params;
	params.InData = InData;
	params.OwningList = OwningList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInput.OptionsMenuInput_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOptionsMenuInput_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.OnMouseLeave");

	UOptionsMenuInput_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInput.OptionsMenuInput_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOptionsMenuInput_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.OnMouseEnter");

	UOptionsMenuInput_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInput.OptionsMenuInput_C.ExecuteUbergraph_OptionsMenuInput
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuInput_C::ExecuteUbergraph_OptionsMenuInput(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.ExecuteUbergraph_OptionsMenuInput");

	UOptionsMenuInput_C_ExecuteUbergraph_OptionsMenuInput_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInput.OptionsMenuInput_C.Input Clicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Number_In_List                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Is_Primary_Button              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuInput_C::Input_Clicked__DelegateSignature(int Number_In_List, bool Is_Primary_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInput.OptionsMenuInput_C.Input Clicked__DelegateSignature");

	UOptionsMenuInput_C_Input_Clicked__DelegateSignature_Params params;
	params.Number_In_List = Number_In_List;
	params.Is_Primary_Button = Is_Primary_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
