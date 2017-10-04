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

// Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.GetDisplayName
struct URewardInfoButtonWidget_C_GetDisplayName_Params
{
	struct FText                                       DisplayName;                                              // (CPF_Parm, CPF_OutParm)
};

// Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.SetShowDescriptionBP
struct URewardInfoButtonWidget_C_SetShowDescriptionBP_Params
{
	bool*                                              bInShowDescription;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.HandleDifferentItemOrQuantitySetBP
struct URewardInfoButtonWidget_C_HandleDifferentItemOrQuantitySetBP_Params
{
};

// Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.ExecuteUbergraph_RewardInfoButtonWidget
struct URewardInfoButtonWidget_C_ExecuteUbergraph_RewardInfoButtonWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
