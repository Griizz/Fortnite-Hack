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

// Function Results_TopPanel.Results_TopPanel_C.Initialize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TopPanel_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TopPanel.Results_TopPanel_C.Initialize");

	UResults_TopPanel_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TopPanel.Results_TopPanel_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_56_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UResults_TopPanel_C::BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_56_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TopPanel.Results_TopPanel_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_56_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_TopPanel_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_56_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TopPanel.Results_TopPanel_C.Intro Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TopPanel_C::Intro_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TopPanel.Results_TopPanel_C.Intro Sequence");

	UResults_TopPanel_C_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TopPanel.Results_TopPanel_C.ExecuteUbergraph_Results_TopPanel
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResults_TopPanel_C::ExecuteUbergraph_Results_TopPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TopPanel.Results_TopPanel_C.ExecuteUbergraph_Results_TopPanel");

	UResults_TopPanel_C_ExecuteUbergraph_Results_TopPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_TopPanel.Results_TopPanel_C.IntroComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResults_TopPanel_C::IntroComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_TopPanel.Results_TopPanel_C.IntroComplete__DelegateSignature");

	UResults_TopPanel_C_IntroComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
