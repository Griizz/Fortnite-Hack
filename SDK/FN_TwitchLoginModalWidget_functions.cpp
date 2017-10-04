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

// Function TwitchLoginModalWidget.TwitchLoginModalWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTwitchLoginModalWidget_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwitchLoginModalWidget.TwitchLoginModalWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature");

	UTwitchLoginModalWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TwitchLoginModalWidget.TwitchLoginModalWidget_C.ExecuteUbergraph_TwitchLoginModalWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTwitchLoginModalWidget_C::ExecuteUbergraph_TwitchLoginModalWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwitchLoginModalWidget.TwitchLoginModalWidget_C.ExecuteUbergraph_TwitchLoginModalWidget");

	UTwitchLoginModalWidget_C_ExecuteUbergraph_TwitchLoginModalWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TwitchLoginModalWidget.TwitchLoginModalWidget_C.OnCancelButtonClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTwitchLoginModalWidget_C::OnCancelButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwitchLoginModalWidget.TwitchLoginModalWidget_C.OnCancelButtonClicked__DelegateSignature");

	UTwitchLoginModalWidget_C_OnCancelButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
