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

// Function DailyRewardsItem.DailyRewardsItem_C.SetCardSize
struct UDailyRewardsItem_C_SetCardSize_Params
{
	TEnumAsByte<EFortBrushSize>                        CardSize;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DailyRewardsItem.DailyRewardsItem_C.Construct
struct UDailyRewardsItem_C_Construct_Params
{
};

// Function DailyRewardsItem.DailyRewardsItem_C.ExecuteUbergraph_DailyRewardsItem
struct UDailyRewardsItem_C_ExecuteUbergraph_DailyRewardsItem_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
