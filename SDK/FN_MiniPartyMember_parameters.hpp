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

// Function MiniPartyMember.MiniPartyMember_C.HandleMouseHoverVisualState
struct UMiniPartyMember_C_HandleMouseHoverVisualState_Params
{
	bool                                               Hover;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MiniPartyMember.MiniPartyMember_C.OpenPartyFinder
struct UMiniPartyMember_C_OpenPartyFinder_Params
{
};

// Function MiniPartyMember.MiniPartyMember_C.GetLeaderVisibility
struct UMiniPartyMember_C_GetLeaderVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MiniPartyMember.MiniPartyMember_C.UpdateMemberInfo
struct UMiniPartyMember_C_UpdateMemberInfo_Params
{
	struct FFortTeamMemberInfo                         NewMemberInfo;                                            // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function MiniPartyMember.MiniPartyMember_C.ShowOpen
struct UMiniPartyMember_C_ShowOpen_Params
{
};

// Function MiniPartyMember.MiniPartyMember_C.ShowConnected
struct UMiniPartyMember_C_ShowConnected_Params
{
};

// Function MiniPartyMember.MiniPartyMember_C.ShowConnecting
struct UMiniPartyMember_C_ShowConnecting_Params
{
};

// Function MiniPartyMember.MiniPartyMember_C.Destruct
struct UMiniPartyMember_C_Destruct_Params
{
};

// Function MiniPartyMember.MiniPartyMember_C.OnPlayerInfoChanged
struct UMiniPartyMember_C_OnPlayerInfoChanged_Params
{
	struct FFortTeamMemberInfo*                        NewInfo;                                                  // (CPF_Parm)
};

// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
struct UMiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature
struct UMiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
struct UMiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MiniPartyMember.MiniPartyMember_C.PreConstruct
struct UMiniPartyMember_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MiniPartyMember.MiniPartyMember_C.ExecuteUbergraph_MiniPartyMember
struct UMiniPartyMember_C_ExecuteUbergraph_MiniPartyMember_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
