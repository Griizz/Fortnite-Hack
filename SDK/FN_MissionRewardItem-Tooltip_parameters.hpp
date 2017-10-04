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

// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Rarity Color (SlateColor)
struct UMissionRewardItem_Tooltip_C_Get_Rarity_Color__SlateColor__Params
{
	struct FSlateColor                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Rarity Color
struct UMissionRewardItem_Tooltip_C_Get_Rarity_Color_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Reward Icon
struct UMissionRewardItem_Tooltip_C_Get_Reward_Icon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Reward Name
struct UMissionRewardItem_Tooltip_C_Get_Reward_Name_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
