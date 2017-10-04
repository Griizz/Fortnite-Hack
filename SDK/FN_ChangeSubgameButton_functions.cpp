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

// Function ChangeSubgameButton.ChangeSubgameButton_C.DialogResult_3A1F478D47C301F9F1E029927174E059
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UChangeSubgameButton_C::DialogResult_3A1F478D47C301F9F1E029927174E059(const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChangeSubgameButton.ChangeSubgameButton_C.DialogResult_3A1F478D47C301F9F1E029927174E059");

	UChangeSubgameButton_C_DialogResult_3A1F478D47C301F9F1E029927174E059_Params params;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChangeSubgameButton.ChangeSubgameButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UChangeSubgameButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChangeSubgameButton.ChangeSubgameButton_C.Construct");

	UChangeSubgameButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChangeSubgameButton.ChangeSubgameButton_C.BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UChangeSubgameButton_C::BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChangeSubgameButton.ChangeSubgameButton_C.BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature");

	UChangeSubgameButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChangeSubgameButton.ChangeSubgameButton_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UChangeSubgameButton_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChangeSubgameButton.ChangeSubgameButton_C.Destruct");

	UChangeSubgameButton_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChangeSubgameButton.ChangeSubgameButton_C.UpdateButtonState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UChangeSubgameButton_C::UpdateButtonState(bool* bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChangeSubgameButton.ChangeSubgameButton_C.UpdateButtonState");

	UChangeSubgameButton_C_UpdateButtonState_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChangeSubgameButton.ChangeSubgameButton_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UChangeSubgameButton_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChangeSubgameButton.ChangeSubgameButton_C.OnMouseEnter");

	UChangeSubgameButton_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChangeSubgameButton.ChangeSubgameButton_C.ExecuteUbergraph_ChangeSubgameButton
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UChangeSubgameButton_C::ExecuteUbergraph_ChangeSubgameButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChangeSubgameButton.ChangeSubgameButton_C.ExecuteUbergraph_ChangeSubgameButton");

	UChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChangeSubgameButton.ChangeSubgameButton_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UChangeSubgameButton_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChangeSubgameButton.ChangeSubgameButton_C.OnClicked__DelegateSignature");

	UChangeSubgameButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
