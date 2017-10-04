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

// Function EarnedBadgeTile.EarnedBadgeTile_C.PreConstruct
struct UEarnedBadgeTile_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function EarnedBadgeTile.EarnedBadgeTile_C.Construct
struct UEarnedBadgeTile_C_Construct_Params
{
};

// Function EarnedBadgeTile.EarnedBadgeTile_C.ExecuteUbergraph_EarnedBadgeTile
struct UEarnedBadgeTile_C_ExecuteUbergraph_EarnedBadgeTile_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
