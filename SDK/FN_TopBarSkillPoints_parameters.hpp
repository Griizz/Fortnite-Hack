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

// Function TopBarSkillPoints.TopBarSkillPoints_C.GetFounderBadgetTooltipWidget
struct UTopBarSkillPoints_C_GetFounderBadgetTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.GetMonthlyVIPBadgetTooltipWidget
struct UTopBarSkillPoints_C_GetMonthlyVIPBadgetTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.Has VIP Badge
struct UTopBarSkillPoints_C_Has_VIP_Badge_Params
{
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.Has Founder Badge
struct UTopBarSkillPoints_C_Has_Founder_Badge_Params
{
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.HandleRemotePlayerRemoved
struct UTopBarSkillPoints_C_HandleRemotePlayerRemoved_Params
{
	int                                                RemovedIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.HandleOnTeamMemberStateChanged
struct UTopBarSkillPoints_C_HandleOnTeamMemberStateChanged_Params
{
	struct FFortTeamMemberInfo                         NewMemberState;                                           // (CPF_Parm)
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.Unbind Party Delegates
struct UTopBarSkillPoints_C_Unbind_Party_Delegates_Params
{
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.Bind Party Delegates
struct UTopBarSkillPoints_C_Bind_Party_Delegates_Params
{
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.BoostExperiencePercentOfLevel
struct UTopBarSkillPoints_C_BoostExperiencePercentOfLevel_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.RestExperencePercentOfLevel
struct UTopBarSkillPoints_C_RestExperencePercentOfLevel_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.GetBonusExperienceDescription
struct UTopBarSkillPoints_C_GetBonusExperienceDescription_Params
{
	struct FText                                       Result;                                                   // (CPF_Parm, CPF_OutParm)
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.GetSkillPointsTooltipWidget
struct UTopBarSkillPoints_C_GetSkillPointsTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.GetBonusExperienceTooltipWidget
struct UTopBarSkillPoints_C_GetBonusExperienceTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.Update Boosts
struct UTopBarSkillPoints_C_Update_Boosts_Params
{
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.UpdateAccountInfo
struct UTopBarSkillPoints_C_UpdateAccountInfo_Params
{
	struct FFortPublicAccountInfo                      Info;                                                     // (CPF_Parm)
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.Construct
struct UTopBarSkillPoints_C_Construct_Params
{
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.Xp Boost Changed
struct UTopBarSkillPoints_C_Xp_Boost_Changed_Params
{
	int                                                BoostAmount;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature
struct UTopBarSkillPoints_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.On Party Left
struct UTopBarSkillPoints_C_On_Party_Left_Params
{
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.On Party Joined
struct UTopBarSkillPoints_C_On_Party_Joined_Params
{
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.Founder Changed
struct UTopBarSkillPoints_C_Founder_Changed_Params
{
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.Destruct
struct UTopBarSkillPoints_C_Destruct_Params
{
};

// Function TopBarSkillPoints.TopBarSkillPoints_C.ExecuteUbergraph_TopBarSkillPoints
struct UTopBarSkillPoints_C_ExecuteUbergraph_TopBarSkillPoints_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
