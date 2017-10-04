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

// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.CenterWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutpostScreenCanEditRow_C::CenterWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.CenterWidget");

	UOutpostScreenCanEditRow_C_CenterWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.Init
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortPlayerStateOutpost* InPlayer                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFortPlayerStateOutpost* InOutpostOwner                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenCanEditRow_C::Init(class AFortPlayerStateOutpost* InPlayer, class AFortPlayerStateOutpost* InOutpostOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.Init");

	UOutpostScreenCanEditRow_C_Init_Params params;
	params.InPlayer = InPlayer;
	params.InOutpostOwner = InOutpostOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenCanEditRow_C::BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature");

	UOutpostScreenCanEditRow_C_BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.ExecuteUbergraph_OutpostScreenCanEditRow
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOutpostScreenCanEditRow_C::ExecuteUbergraph_OutpostScreenCanEditRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.ExecuteUbergraph_OutpostScreenCanEditRow");

	UOutpostScreenCanEditRow_C_ExecuteUbergraph_OutpostScreenCanEditRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
