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

// Function ScoreDetailsRow.ScoreDetailsRow_C.UpdateRow
struct UScoreDetailsRow_C_UpdateRow_Params
{
	struct FText                                       PlayerName;                                               // (CPF_Parm)
	int                                                TotalScore;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Combat;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Building;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Utility;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
