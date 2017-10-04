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

// Function StatNumericTextBlock.StatNumericTextBlock_C.SetComparisonState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatNumericTextBlock_C::SetComparisonState()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatNumericTextBlock.StatNumericTextBlock_C.SetComparisonState");

	UStatNumericTextBlock_C_SetComparisonState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatNumericTextBlock.StatNumericTextBlock_C.UpdateComparison
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatNumericTextBlock_C::UpdateComparison()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatNumericTextBlock.StatNumericTextBlock_C.UpdateComparison");

	UStatNumericTextBlock_C_UpdateComparison_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatNumericTextBlock.StatNumericTextBlock_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatNumericTextBlock_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatNumericTextBlock.StatNumericTextBlock_C.Construct");

	UStatNumericTextBlock_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatNumericTextBlock.StatNumericTextBlock_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatNumericTextBlock_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatNumericTextBlock.StatNumericTextBlock_C.PreConstruct");

	UStatNumericTextBlock_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatNumericTextBlock.StatNumericTextBlock_C.ExecuteUbergraph_StatNumericTextBlock
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatNumericTextBlock_C::ExecuteUbergraph_StatNumericTextBlock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatNumericTextBlock.StatNumericTextBlock_C.ExecuteUbergraph_StatNumericTextBlock");

	UStatNumericTextBlock_C_ExecuteUbergraph_StatNumericTextBlock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
