#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WaveModifiersWidget.WaveModifiersWidget_C.PresentNextModifier
struct UWaveModifiersWidget_C_PresentNextModifier_Params
{
};

// Function WaveModifiersWidget.WaveModifiersWidget_C.OnModifiersAdded
struct UWaveModifiersWidget_C_OnModifiersAdded_Params
{
	TArray<class UFortGameplayModifierItemDefinition*> Modifiers;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	bool                                               StartPresentationImmediately;                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WaveModifiersWidget.WaveModifiersWidget_C.OnAllModifiersPresented__DelegateSignature
struct UWaveModifiersWidget_C_OnAllModifiersPresented__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
