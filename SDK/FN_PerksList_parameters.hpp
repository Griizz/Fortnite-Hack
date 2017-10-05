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

// Function PerksList.PerksList_C.ResetVariables
struct UPerksList_C_ResetVariables_Params
{
};

// Function PerksList.PerksList_C.OnGeneratePerkTier
struct UPerksList_C_OnGeneratePerkTier_Params
{
	struct FFortUIPerkTier*                            FortPerkTier;                                             // (CPF_Parm)
	class UFortPerkTierWidget_NUI**                    PerkTierWidget;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PerksList.PerksList_C.OnGeneratePerk
struct UPerksList_C_OnGeneratePerk_Params
{
	struct FFortUIPerk*                                FortPerk;                                                 // (CPF_Parm)
	class UFortPerkWidget_NUI**                        PerkWidget;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PerksList.PerksList_C.Construct
struct UPerksList_C_Construct_Params
{
};

// Function PerksList.PerksList_C.OnHeroChanged
struct UPerksList_C_OnHeroChanged_Params
{
};

// Function PerksList.PerksList_C.OnStateChanged
struct UPerksList_C_OnStateChanged_Params
{
};

// Function PerksList.PerksList_C.ExecuteUbergraph_PerksList
struct UPerksList_C_ExecuteUbergraph_PerksList_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
