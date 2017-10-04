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

// Function T2_Research.T2_Research_C.PreConstruct
struct UT2_Research_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function T2_Research.T2_Research_C.Construct
struct UT2_Research_C_Construct_Params
{
};

// Function T2_Research.T2_Research_C.ExecuteUbergraph_T2_Research
struct UT2_Research_C_ExecuteUbergraph_T2_Research_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
