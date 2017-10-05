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

// Function HelpWidget.HelpWidget_C.Init
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   inTitle                        (CPF_Parm)
// struct FText                   inDescription                  (CPF_Parm)
// struct FText                   inStep1_Text                   (CPF_Parm)
// struct FText                   inStep2_Text                   (CPF_Parm)
// struct FText                   inStep3_Text                   (CPF_Parm)
// class UTexture2D*              inStep1_Picture                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              inStep2_Picture                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              inStep3_Picture                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            inNumOfSteps                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHelpWidget_C::Init(const struct FText& inTitle, const struct FText& inDescription, const struct FText& inStep1_Text, const struct FText& inStep2_Text, const struct FText& inStep3_Text, class UTexture2D* inStep1_Picture, class UTexture2D* inStep2_Picture, class UTexture2D* inStep3_Picture, int inNumOfSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpWidget.HelpWidget_C.Init");

	UHelpWidget_C_Init_Params params;
	params.inTitle = inTitle;
	params.inDescription = inDescription;
	params.inStep1_Text = inStep1_Text;
	params.inStep2_Text = inStep2_Text;
	params.inStep3_Text = inStep3_Text;
	params.inStep1_Picture = inStep1_Picture;
	params.inStep2_Picture = inStep2_Picture;
	params.inStep3_Picture = inStep3_Picture;
	params.inNumOfSteps = inNumOfSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpWidget.HelpWidget_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHelpWidget_C::BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpWidget.HelpWidget_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature");

	UHelpWidget_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpWidget.HelpWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHelpWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpWidget.HelpWidget_C.Construct");

	UHelpWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HelpWidget.HelpWidget_C.ExecuteUbergraph_HelpWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHelpWidget_C::ExecuteUbergraph_HelpWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HelpWidget.HelpWidget_C.ExecuteUbergraph_HelpWidget");

	UHelpWidget_C_ExecuteUbergraph_HelpWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
