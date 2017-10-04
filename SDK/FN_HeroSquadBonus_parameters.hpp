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

// Function HeroSquadBonus.HeroSquadBonus_C.Get_ToolTipWidget
struct UHeroSquadBonus_C_Get_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function HeroSquadBonus.HeroSquadBonus_C.SetBackgroundGlow
struct UHeroSquadBonus_C_SetBackgroundGlow_Params
{
	bool                                               GlowBackground;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HeroSquadBonus.HeroSquadBonus_C.UpdateSquadBonusIconState
struct UHeroSquadBonus_C_UpdateSquadBonusIconState_Params
{
};

// Function HeroSquadBonus.HeroSquadBonus_C.UpdateBonusPerk
struct UHeroSquadBonus_C_UpdateBonusPerk_Params
{
};

// Function HeroSquadBonus.HeroSquadBonus_C.PreConstruct
struct UHeroSquadBonus_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HeroSquadBonus.HeroSquadBonus_C.OnPerkUpdated
struct UHeroSquadBonus_C_OnPerkUpdated_Params
{
};

// Function HeroSquadBonus.HeroSquadBonus_C.Construct
struct UHeroSquadBonus_C_Construct_Params
{
};

// Function HeroSquadBonus.HeroSquadBonus_C.ExecuteUbergraph_HeroSquadBonus
struct UHeroSquadBonus_C_ExecuteUbergraph_HeroSquadBonus_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
