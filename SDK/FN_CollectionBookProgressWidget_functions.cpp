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

// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookLevelProgressionChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float*                         NewCompletionPct               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookProgressWidget_C::OnCollectionBookLevelProgressionChanged(float* NewCompletionPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookLevelProgressionChanged");

	UCollectionBookProgressWidget_C_OnCollectionBookLevelProgressionChanged_Params params;
	params.NewCompletionPct = NewCompletionPct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookPreviewXPChange
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float*                         PreviewCompletionPct           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookProgressWidget_C::OnCollectionBookPreviewXPChange(float* PreviewCompletionPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookPreviewXPChange");

	UCollectionBookProgressWidget_C_OnCollectionBookPreviewXPChange_Params params;
	params.PreviewCompletionPct = PreviewCompletionPct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.ExecuteUbergraph_CollectionBookProgressWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCollectionBookProgressWidget_C::ExecuteUbergraph_CollectionBookProgressWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.ExecuteUbergraph_CollectionBookProgressWidget");

	UCollectionBookProgressWidget_C_ExecuteUbergraph_CollectionBookProgressWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
