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

// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Set Item Flare
struct UDailyRewardsCurrent_C_Set_Item_Flare_Params
{
};

// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Set Item
struct UDailyRewardsCurrent_C_Set_Item_Params
{
	class UFortItem*                                   Item_To_Represent;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Quantity;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Construct
struct UDailyRewardsCurrent_C_Construct_Params
{
};

// Function DailyRewardsCurrent.DailyRewardsCurrent_C.ExecuteUbergraph_DailyRewardsCurrent
struct UDailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
