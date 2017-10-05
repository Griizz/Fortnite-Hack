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

// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.LeaveZone
struct UPopupCenterMessageModalPanel_C_LeaveZone_Params
{
};

// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateMatchTimerText
struct UPopupCenterMessageModalPanel_C_UpdateMatchTimerText_Params
{
	bool                                               StopTimer;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateState
struct UPopupCenterMessageModalPanel_C_UpdateState_Params
{
	ECenterPopupMessageStateEnum                       NewState;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateMatchTimer
struct UPopupCenterMessageModalPanel_C_UpdateMatchTimer_Params
{
};

// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.StartMatchTimer
struct UPopupCenterMessageModalPanel_C_StartMatchTimer_Params
{
};

// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.OnActivated
struct UPopupCenterMessageModalPanel_C_OnActivated_Params
{
};

// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.ExecuteUbergraph_PopupCenterMessageModalPanel
struct UPopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
