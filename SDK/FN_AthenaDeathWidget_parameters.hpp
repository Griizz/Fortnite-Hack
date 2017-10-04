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

// Function AthenaDeathWidget.AthenaDeathWidget_C.AnyTeamMembersStillAlive
struct UAthenaDeathWidget_C_AnyTeamMembersStillAlive_Params
{
	class AFortPlayerControllerAthena*                 PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               AnyAlive;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.OnWinnerAnnounced
struct UAthenaDeathWidget_C_OnWinnerAnnounced_Params
{
	struct FString                                     Winner;                                                   // (CPF_Parm, CPF_ZeroConstructor)
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.HideExtraStuffForSpectating
struct UAthenaDeathWidget_C_HideExtraStuffForSpectating_Params
{
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.OnViewTargetChanged
struct UAthenaDeathWidget_C_OnViewTargetChanged_Params
{
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.OnPlaceChanged
struct UAthenaDeathWidget_C_OnPlaceChanged_Params
{
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.OnPawnDied
struct UAthenaDeathWidget_C_OnPawnDied_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                              // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.OnActivated
struct UAthenaDeathWidget_C_OnActivated_Params
{
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.Construct
struct UAthenaDeathWidget_C_Construct_Params
{
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.On Kill Feed Updated
struct UAthenaDeathWidget_C_On_Kill_Feed_Updated_Params
{
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
struct UAthenaDeathWidget_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaDeathWidget.AthenaDeathWidget_C.ExecuteUbergraph_AthenaDeathWidget
struct UAthenaDeathWidget_C_ExecuteUbergraph_AthenaDeathWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
