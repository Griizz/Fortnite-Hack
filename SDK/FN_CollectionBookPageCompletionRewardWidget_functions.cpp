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

// Function CollectionBookPageCompletionRewardWidget.CollectionBookPageCompletionRewardWidget_C.OnRewardStatusChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCollectionBookPageCompletionRewardWidget_C::OnRewardStatusChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageCompletionRewardWidget.CollectionBookPageCompletionRewardWidget_C.OnRewardStatusChanged");

	UCollectionBookPageCompletionRewardWidget_C_OnRewardStatusChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageCompletionRewardWidget.CollectionBookPageCompletionRewardWidget_C.ExecuteUbergraph_CollectionBookPageCompletionRewardWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookPageCompletionRewardWidget_C::ExecuteUbergraph_CollectionBookPageCompletionRewardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageCompletionRewardWidget.CollectionBookPageCompletionRewardWidget_C.ExecuteUbergraph_CollectionBookPageCompletionRewardWidget");

	UCollectionBookPageCompletionRewardWidget_C_ExecuteUbergraph_CollectionBookPageCompletionRewardWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
