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

// Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.Construct
struct ULegacyPerkTierWidget_C_Construct_Params
{
};

// Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.OnGeneratePerk
struct ULegacyPerkTierWidget_C_OnGeneratePerk_Params
{
	struct FFortUIPerk*                                Perk;                                                     // (CPF_Parm)
};

// Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.ExecuteUbergraph_LegacyPerkTierWidget
struct ULegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
