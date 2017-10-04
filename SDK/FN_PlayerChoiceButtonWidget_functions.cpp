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

// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.ConfigureChoice
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FChoiceDataEntry        Choice                         (CPF_Parm)
// int                            ChoiceID                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPlayerChoiceWidget_C*   Owner                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerChoiceButtonWidget_C::ConfigureChoice(const struct FChoiceDataEntry& Choice, int ChoiceID, class UPlayerChoiceWidget_C* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.ConfigureChoice");

	UPlayerChoiceButtonWidget_C_ConfigureChoice_Params params;
	params.Choice = Choice;
	params.ChoiceID = ChoiceID;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerChoiceButtonWidget_C::BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature");

	UPlayerChoiceButtonWidget_C_BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.ExecuteUbergraph_PlayerChoiceButtonWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerChoiceButtonWidget_C::ExecuteUbergraph_PlayerChoiceButtonWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.ExecuteUbergraph_PlayerChoiceButtonWidget");

	UPlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
