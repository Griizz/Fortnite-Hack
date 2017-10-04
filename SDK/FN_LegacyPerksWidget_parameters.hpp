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

// Function LegacyPerksWidget.LegacyPerksWidget_C.Construct
struct ULegacyPerksWidget_C_Construct_Params
{
};

// Function LegacyPerksWidget.LegacyPerksWidget_C.OnGeneratePerkTier
struct ULegacyPerksWidget_C_OnGeneratePerkTier_Params
{
	struct FFortUIPerkTier*                            FortPerkTier;                                             // (CPF_Parm)
};

// Function LegacyPerksWidget.LegacyPerksWidget_C.ExecuteUbergraph_LegacyPerksWidget
struct ULegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
