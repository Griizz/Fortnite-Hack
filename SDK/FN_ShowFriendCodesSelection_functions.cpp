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

// Function ShowFriendCodesSelection.ShowFriendCodesSelection_C.SetFocus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UShowFriendCodesSelection_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowFriendCodesSelection.ShowFriendCodesSelection_C.SetFocus");

	UShowFriendCodesSelection_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowFriendCodesSelection.ShowFriendCodesSelection_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UShowFriendCodesSelection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowFriendCodesSelection.ShowFriendCodesSelection_C.Construct");

	UShowFriendCodesSelection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowFriendCodesSelection.ShowFriendCodesSelection_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UShowFriendCodesSelection_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowFriendCodesSelection.ShowFriendCodesSelection_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature");

	UShowFriendCodesSelection_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowFriendCodesSelection.ShowFriendCodesSelection_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UShowFriendCodesSelection_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowFriendCodesSelection.ShowFriendCodesSelection_C.OnActivated");

	UShowFriendCodesSelection_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowFriendCodesSelection.ShowFriendCodesSelection_C.ExecuteUbergraph_ShowFriendCodesSelection
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UShowFriendCodesSelection_C::ExecuteUbergraph_ShowFriendCodesSelection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowFriendCodesSelection.ShowFriendCodesSelection_C.ExecuteUbergraph_ShowFriendCodesSelection");

	UShowFriendCodesSelection_C_ExecuteUbergraph_ShowFriendCodesSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
