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

// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.PlayIntro
struct UHordeWaveModifiersTile_C_PlayIntro_Params
{
};

// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.SetModifierItem
struct UHordeWaveModifiersTile_C_SetModifierItem_Params
{
	class UFortItem*                                   ModifierItem;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.OnAnimReadyForNextModifier
struct UHordeWaveModifiersTile_C_OnAnimReadyForNextModifier_Params
{
};

// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.SetData
struct UHordeWaveModifiersTile_C_SetData_Params
{
	class UObject*                                     InData;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.ExecuteUbergraph_HordeWaveModifiersTile
struct UHordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.OnReadyForNextModifierPresentation__DelegateSignature
struct UHordeWaveModifiersTile_C_OnReadyForNextModifierPresentation__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
