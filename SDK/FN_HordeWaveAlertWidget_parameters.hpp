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

// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveStarted
struct UHordeWaveAlertWidget_C_OnWaveStarted_Params
{
	struct FText                                       LevelText;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	int                                                Level;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       WaveText;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	int                                                WaveNum;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveCompleted
struct UHordeWaveAlertWidget_C_OnWaveCompleted_Params
{
	int                                                Wave;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnHordeTierInitialized_Event_1
struct UHordeWaveAlertWidget_C_OnHordeTierInitialized_Event_1_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       Items;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveModifiersAdded
struct UHordeWaveAlertWidget_C_OnWaveModifiersAdded_Params
{
	TArray<class UFortGameplayModifierItemDefinition*> Modifiers;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.Construct
struct UHordeWaveAlertWidget_C_Construct_Params
{
};

// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnModifierAppearanceAnimComplete
struct UHordeWaveAlertWidget_C_OnModifierAppearanceAnimComplete_Params
{
};

// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnAllModifiersPresented
struct UHordeWaveAlertWidget_C_OnAllModifiersPresented_Params
{
};

// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnAppearanceDisappearanceAnimComplete
struct UHordeWaveAlertWidget_C_OnAppearanceDisappearanceAnimComplete_Params
{
};

// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnModifierDisappearanceAnimComplete
struct UHordeWaveAlertWidget_C_OnModifierDisappearanceAnimComplete_Params
{
};

// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnAppearanceDisappearanceAnimComplete_Quick
struct UHordeWaveAlertWidget_C_OnAppearanceDisappearanceAnimComplete_Quick_Params
{
};

// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.ExecuteUbergraph_HordeWaveAlertWidget
struct UHordeWaveAlertWidget_C_ExecuteUbergraph_HordeWaveAlertWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
