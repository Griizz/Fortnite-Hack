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

// Function SubgameSelect.SubgameSelect_C.UpdateHeaderAndFooter
struct USubgameSelect_C_UpdateHeaderAndFooter_Params
{
	bool                                               HideHeader;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HideFooter;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SubgameSelect.SubgameSelect_C.PopContentWidgetInternal
struct USubgameSelect_C_PopContentWidgetInternal_Params
{
	struct FContentPushState*                          State;                                                    // (CPF_Parm)
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function SubgameSelect.SubgameSelect_C.Initialize
struct USubgameSelect_C_Initialize_Params
{
};

// Function SubgameSelect.SubgameSelect_C.Construct
struct USubgameSelect_C_Construct_Params
{
};

// Function SubgameSelect.SubgameSelect_C.OnEnterState
struct USubgameSelect_C_OnEnterState_Params
{
	EFortUIState*                                      PreviousUIState;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SubgameSelect.SubgameSelect_C.PushContentWidgetInternal
struct USubgameSelect_C_PushContentWidgetInternal_Params
{
	class UWidget**                                    Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FContentPushState*                          State;                                                    // (CPF_Parm)
};

// Function SubgameSelect.SubgameSelect_C.ExecuteUbergraph_SubgameSelect
struct USubgameSelect_C_ExecuteUbergraph_SubgameSelect_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
