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

// Function StatNumericTextBlock.StatNumericTextBlock_C.SetComparisonState
struct UStatNumericTextBlock_C_SetComparisonState_Params
{
	EFortBuffState                                     Buff_State;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StatNumericTextBlock.StatNumericTextBlock_C.UpdateComparison
struct UStatNumericTextBlock_C_UpdateComparison_Params
{
};

// Function StatNumericTextBlock.StatNumericTextBlock_C.Construct
struct UStatNumericTextBlock_C_Construct_Params
{
};

// Function StatNumericTextBlock.StatNumericTextBlock_C.PreConstruct
struct UStatNumericTextBlock_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StatNumericTextBlock.StatNumericTextBlock_C.ExecuteUbergraph_StatNumericTextBlock
struct UStatNumericTextBlock_C_ExecuteUbergraph_StatNumericTextBlock_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
