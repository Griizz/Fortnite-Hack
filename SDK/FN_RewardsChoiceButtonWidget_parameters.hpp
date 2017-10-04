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

// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.SetHighlight
struct URewardsChoiceButtonWidget_C_SetHighlight_Params
{
	bool                                               EnableHighlight;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.SelectRewards
struct URewardsChoiceButtonWidget_C_SelectRewards_Params
{
};

// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.OnPreviewMouseButtonDown
struct URewardsChoiceButtonWidget_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.PopulateRewards
struct URewardsChoiceButtonWidget_C_PopulateRewards_Params
{
	class URewardsWidget_C*                            Owner;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RewardIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
