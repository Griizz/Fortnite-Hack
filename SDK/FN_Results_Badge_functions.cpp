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

// Function Results_Badge.Results_Badge_C.DoDesignTimeRandomization
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_Badge_C::DoDesignTimeRandomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.DoDesignTimeRandomization");

	UResults_Badge_C_DoDesignTimeRandomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.SkipToFinalState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_Badge_C::SkipToFinalState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.SkipToFinalState");

	UResults_Badge_C_SkipToFinalState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.SetSkippingToEnd
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_Badge_C::SetSkippingToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.SetSkippingToEnd");

	UResults_Badge_C_SetSkippingToEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          PlayRate                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_Badge_C::Initialize(float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.Initialize");

	UResults_Badge_C_Initialize_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.HasValidItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           HasValidItem                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_Badge_C::HasValidItem(bool* HasValidItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.HasValidItem");

	UResults_Badge_C_HasValidItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasValidItem != nullptr)
		*HasValidItem = params.HasValidItem;
}


// Function Results_Badge.Results_Badge_C.SetItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_Badge_C::SetItem(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.SetItem");

	UResults_Badge_C_SetItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.Intro Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_Badge_C::Intro_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.Intro Sequence");

	UResults_Badge_C_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.Convert Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_Badge_C::Convert_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.Convert Sequence");

	UResults_Badge_C_Convert_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.BndEvt__Anim_Convert_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UResults_Badge_C::BndEvt__Anim_Convert_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.BndEvt__Anim_Convert_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_Badge_C_BndEvt__Anim_Convert_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_Badge_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.PreConstruct");

	UResults_Badge_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.Reset Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_Badge_C::Reset_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.Reset Sequence");

	UResults_Badge_C_Reset_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.ExecuteUbergraph_Results_Badge
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_Badge_C::ExecuteUbergraph_Results_Badge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.ExecuteUbergraph_Results_Badge");

	UResults_Badge_C_ExecuteUbergraph_Results_Badge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_Badge.Results_Badge_C.ConvertFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_Badge_C::ConvertFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_Badge.Results_Badge_C.ConvertFinished__DelegateSignature");

	UResults_Badge_C_ConvertFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
