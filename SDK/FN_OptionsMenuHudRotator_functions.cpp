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

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.DoesItemHaveChildren
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UOptionsMenuHudRotator_C::DoesItemHaveChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.DoesItemHaveChildren");

	UOptionsMenuHudRotator_C_DoesItemHaveChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.GetIndentLevel
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UOptionsMenuHudRotator_C::GetIndentLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.GetIndentLevel");

	UOptionsMenuHudRotator_C_GetIndentLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.IsItemExpanded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UOptionsMenuHudRotator_C::IsItemExpanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.IsItemExpanded");

	UOptionsMenuHudRotator_C_IsItemExpanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.GetData
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UOptionsMenuHudRotator_C::GetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.GetData");

	UOptionsMenuHudRotator_C_GetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UOptionsMenuHudRotator_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnFocusReceived");

	UOptionsMenuHudRotator_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Update Options
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UOptionsMenuHudRotator_C::Update_Options(TArray<struct FText>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Update Options");

	UOptionsMenuHudRotator_C_Update_Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Center on Widget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenuHudRotator_C::Center_on_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Center on Widget");

	UOptionsMenuHudRotator_C_Center_on_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Update Row Selector
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Currently_Selected             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuHudRotator_C::Update_Row_Selector(int Currently_Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Update Row Selector");

	UOptionsMenuHudRotator_C_Update_Row_Selector_Params params;
	params.Currently_Selected = Currently_Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnAcquireFromPool
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOptionsMenuHudRotator_C::OnAcquireFromPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnAcquireFromPool");

	UOptionsMenuHudRotator_C_OnAcquireFromPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnReleaseToPool
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOptionsMenuHudRotator_C::OnReleaseToPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnReleaseToPool");

	UOptionsMenuHudRotator_C_OnReleaseToPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Private_OnExpanderArrowShiftClicked
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenuHudRotator_C::Private_OnExpanderArrowShiftClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Private_OnExpanderArrowShiftClicked");

	UOptionsMenuHudRotator_C_Private_OnExpanderArrowShiftClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.RegisterOnClicked
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UOptionsMenuHudRotator_C::RegisterOnClicked(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.RegisterOnClicked");

	UOptionsMenuHudRotator_C_RegisterOnClicked_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetExpanded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bExpanded                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuHudRotator_C::SetExpanded(bool bExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetExpanded");

	UOptionsMenuHudRotator_C_SetExpanded_Params params;
	params.bExpanded = bExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetIndexInList
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndexInList                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuHudRotator_C::SetIndexInList(int InIndexInList)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetIndexInList");

	UOptionsMenuHudRotator_C_SetIndexInList_Params params;
	params.InIndexInList = InIndexInList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetSelected
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSelected                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuHudRotator_C::SetSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetSelected");

	UOptionsMenuHudRotator_C_SetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.ToggleExpansion
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenuHudRotator_C::ToggleExpansion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.ToggleExpansion");

	UOptionsMenuHudRotator_C_ToggleExpansion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Reset
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsMenuHudRotator_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Reset");

	UOptionsMenuHudRotator_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptionsMenuHudRotator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Construct");

	UOptionsMenuHudRotator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOptionsMenuHudRotator_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnMouseLeave");

	UOptionsMenuHudRotator_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOptionsMenuHudRotator_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnMouseEnter");

	UOptionsMenuHudRotator_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuHudRotator_C::BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature");

	UOptionsMenuHudRotator_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 InData                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCommonListView*         OwningList                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuHudRotator_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetData");

	UOptionsMenuHudRotator_C_SetData_Params params;
	params.InData = InData;
	params.OwningList = OwningList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.ExecuteUbergraph_OptionsMenuHudRotator
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsMenuHudRotator_C::ExecuteUbergraph_OptionsMenuHudRotator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.ExecuteUbergraph_OptionsMenuHudRotator");

	UOptionsMenuHudRotator_C_ExecuteUbergraph_OptionsMenuHudRotator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Selection Changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTag            Gameplay_Tag                   (CPF_Parm)

void UOptionsMenuHudRotator_C::Selection_Changed__DelegateSignature(int Selected_Index, const struct FGameplayTag& Gameplay_Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Selection Changed__DelegateSignature");

	UOptionsMenuHudRotator_C_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;
	params.Gameplay_Tag = Gameplay_Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
