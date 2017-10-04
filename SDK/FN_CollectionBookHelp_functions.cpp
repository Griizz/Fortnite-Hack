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

// Function CollectionBookHelp.CollectionBookHelp_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookHelp_C::BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookHelp.CollectionBookHelp_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature");

	UCollectionBookHelp_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookHelp.CollectionBookHelp_C.ExecuteUbergraph_CollectionBookHelp
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookHelp_C::ExecuteUbergraph_CollectionBookHelp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookHelp.CollectionBookHelp_C.ExecuteUbergraph_CollectionBookHelp");

	UCollectionBookHelp_C_ExecuteUbergraph_CollectionBookHelp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
