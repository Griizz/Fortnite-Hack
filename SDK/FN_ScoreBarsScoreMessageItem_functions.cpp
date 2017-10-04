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

// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnAppearAnimationFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreBarsScoreMessageItem_C::OnAppearAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnAppearAnimationFinished");

	UScoreBarsScoreMessageItem_C_OnAppearAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ClearScoreValueWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreBarsScoreMessageItem_C::ClearScoreValueWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ClearScoreValueWidget");

	UScoreBarsScoreMessageItem_C_ClearScoreValueWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.GetScoreValueWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScoreBarsScoreMessageItem_C::GetScoreValueWidget(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.GetScoreValueWidget");

	UScoreBarsScoreMessageItem_C_GetScoreValueWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.Setup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Base_Delta                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Name_Text                      (CPF_Parm)
// class UScoreMessageNumber_C*   In_Score_Widget                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScoreBarsScoreMessageItem_C::Setup(int Base_Delta, const struct FText& Name_Text, class UScoreMessageNumber_C* In_Score_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.Setup");

	UScoreBarsScoreMessageItem_C_Setup_Params params;
	params.Base_Delta = Base_Delta;
	params.Name_Text = Name_Text;
	params.In_Score_Widget = In_Score_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.UpdateValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreBarsScoreMessageItem_C::UpdateValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.UpdateValues");

	UScoreBarsScoreMessageItem_C_UpdateValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnStackSizeChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int*                           OldStackSize                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScoreBarsScoreMessageItem_C::OnStackSizeChanged(int* OldStackSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnStackSizeChanged");

	UScoreBarsScoreMessageItem_C_OnStackSizeChanged_Params params;
	params.OldStackSize = OldStackSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnBeginRemove
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UScoreBarsScoreMessageItem_C::OnBeginRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnBeginRemove");

	UScoreBarsScoreMessageItem_C_OnBeginRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ExecuteUbergraph_ScoreBarsScoreMessageItem
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScoreBarsScoreMessageItem_C::ExecuteUbergraph_ScoreBarsScoreMessageItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ExecuteUbergraph_ScoreBarsScoreMessageItem");

	UScoreBarsScoreMessageItem_C_ExecuteUbergraph_ScoreBarsScoreMessageItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
