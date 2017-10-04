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

// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.Get Badge And Count For Player
struct UBadgesEarnedPanelContent_C_Get_Badge_And_Count_For_Player_Params
{
	class AFortPlayerController*                       InFortPC;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FEarnedBadgeEntry                           EarnedBadgeEntry;                                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               Found;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortPlayerController*                       FortPC;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortBadgeItemDefinition*                    Badge;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.HandleMissionsUpdated
struct UBadgesEarnedPanelContent_C_HandleMissionsUpdated_Params
{
};

// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.UpdatePotentialBadges
struct UBadgesEarnedPanelContent_C_UpdatePotentialBadges_Params
{
};

// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.HandlePotentialBadgesChanged
struct UBadgesEarnedPanelContent_C_HandlePotentialBadgesChanged_Params
{
};

// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.UpdateBadgeWidgets
struct UBadgesEarnedPanelContent_C_UpdateBadgeWidgets_Params
{
};

// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.HandleEarnedBadgesChanged
struct UBadgesEarnedPanelContent_C_HandleEarnedBadgesChanged_Params
{
};

// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.Construct
struct UBadgesEarnedPanelContent_C_Construct_Params
{
};

// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.ExecuteUbergraph_BadgesEarnedPanelContent
struct UBadgesEarnedPanelContent_C_ExecuteUbergraph_BadgesEarnedPanelContent_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
