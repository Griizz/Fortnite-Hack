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

// Function MessageCenterWidget.MessageCenterWidget_C.HandleMessageSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Selected                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageCenterWidget_C::HandleMessageSelected(class UObject* Item, bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterWidget.MessageCenterWidget_C.HandleMessageSelected");

	UMessageCenterWidget_C_HandleMessageSelected_Params params;
	params.Item = Item;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterWidget.MessageCenterWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMessageCenterWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterWidget.MessageCenterWidget_C.Construct");

	UMessageCenterWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterWidget.MessageCenterWidget_C.OnBeginIntro
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMessageCenterWidget_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterWidget.MessageCenterWidget_C.OnBeginIntro");

	UMessageCenterWidget_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterWidget.MessageCenterWidget_C.OnBeginOutro
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMessageCenterWidget_C::OnBeginOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterWidget.MessageCenterWidget_C.OnBeginOutro");

	UMessageCenterWidget_C_OnBeginOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterWidget.MessageCenterWidget_C.HandleIntroEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMessageCenterWidget_C::HandleIntroEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterWidget.MessageCenterWidget_C.HandleIntroEnded");

	UMessageCenterWidget_C_HandleIntroEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterWidget.MessageCenterWidget_C.HandleOutroEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMessageCenterWidget_C::HandleOutroEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterWidget.MessageCenterWidget_C.HandleOutroEnded");

	UMessageCenterWidget_C_HandleOutroEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterWidget.MessageCenterWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageCenterWidget_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterWidget.MessageCenterWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature");

	UMessageCenterWidget_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterWidget.MessageCenterWidget_C.BndEvt__MessagesList_K2Node_ComponentBoundEvent_303_OnListViewItemSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsSelected                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageCenterWidget_C::BndEvt__MessagesList_K2Node_ComponentBoundEvent_303_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterWidget.MessageCenterWidget_C.BndEvt__MessagesList_K2Node_ComponentBoundEvent_303_OnListViewItemSelected__DelegateSignature");

	UMessageCenterWidget_C_BndEvt__MessagesList_K2Node_ComponentBoundEvent_303_OnListViewItemSelected__DelegateSignature_Params params;
	params.Item = Item;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterWidget.MessageCenterWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageCenterWidget_C::BndEvt__OpenButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterWidget.MessageCenterWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature");

	UMessageCenterWidget_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterWidget.MessageCenterWidget_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageCenterWidget_C::BndEvt__ClearButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterWidget.MessageCenterWidget_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature");

	UMessageCenterWidget_C_BndEvt__ClearButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageCenterWidget.MessageCenterWidget_C.ExecuteUbergraph_MessageCenterWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessageCenterWidget_C::ExecuteUbergraph_MessageCenterWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageCenterWidget.MessageCenterWidget_C.ExecuteUbergraph_MessageCenterWidget");

	UMessageCenterWidget_C_ExecuteUbergraph_MessageCenterWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
