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

// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.UpdateBackground
struct UResults_TeamSubtotalScore_C_UpdateBackground_Params
{
};

// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.SetScore
struct UResults_TeamSubtotalScore_C_SetScore_Params
{
	int                                                Score;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.PreConstruct
struct UResults_TeamSubtotalScore_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.Construct
struct UResults_TeamSubtotalScore_C_Construct_Params
{
};

// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.ExecuteUbergraph_Results_TeamSubtotalScore
struct UResults_TeamSubtotalScore_C_ExecuteUbergraph_Results_TeamSubtotalScore_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
