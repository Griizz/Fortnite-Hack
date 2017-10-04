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

// Function WaveModifiersWidget.WaveModifiersWidget_C.PresentNextModifier
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWaveModifiersWidget_C::PresentNextModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaveModifiersWidget.WaveModifiersWidget_C.PresentNextModifier");

	UWaveModifiersWidget_C_PresentNextModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaveModifiersWidget.WaveModifiersWidget_C.OnModifiersAdded
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*> Modifiers                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           StartPresentationImmediately   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWaveModifiersWidget_C::OnModifiersAdded(bool StartPresentationImmediately, TArray<class UFortGameplayModifierItemDefinition*>* Modifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaveModifiersWidget.WaveModifiersWidget_C.OnModifiersAdded");

	UWaveModifiersWidget_C_OnModifiersAdded_Params params;
	params.StartPresentationImmediately = StartPresentationImmediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Modifiers != nullptr)
		*Modifiers = params.Modifiers;
}


// Function WaveModifiersWidget.WaveModifiersWidget_C.OnAllModifiersPresented__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWaveModifiersWidget_C::OnAllModifiersPresented__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaveModifiersWidget.WaveModifiersWidget_C.OnAllModifiersPresented__DelegateSignature");

	UWaveModifiersWidget_C_OnAllModifiersPresented__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
