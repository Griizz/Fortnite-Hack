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

// Function PowerWidget.PowerWidget_C.Check For Power Change
struct UPowerWidget_C_Check_For_Power_Change_Params
{
};

// Function PowerWidget.PowerWidget_C.GetPowerRatingTooltipWidget
struct UPowerWidget_C_GetPowerRatingTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PowerWidget.PowerWidget_C.PlayerHasTeammates
struct UPowerWidget_C_PlayerHasTeammates_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function PowerWidget.PowerWidget_C.Debug
struct UPowerWidget_C_Debug_Params
{
};

// Function PowerWidget.PowerWidget_C.SetState
struct UPowerWidget_C_SetState_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PowerWidget.PowerWidget_C.Update Rating
struct UPowerWidget_C_Update_Rating_Params
{
};

// Function PowerWidget.PowerWidget_C.Update Rating Value
struct UPowerWidget_C_Update_Rating_Value_Params
{
	int                                                New_Rating_Value;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PowerWidget.PowerWidget_C.Construct
struct UPowerWidget_C_Construct_Params
{
};

// Function PowerWidget.PowerWidget_C.OnPlayerInfoChanged
struct UPowerWidget_C_OnPlayerInfoChanged_Params
{
	struct FFortTeamMemberInfo*                        NewInfo;                                                  // (CPF_Parm)
};

// Function PowerWidget.PowerWidget_C.ExecuteUbergraph_PowerWidget
struct UPowerWidget_C_ExecuteUbergraph_PowerWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PowerWidget.PowerWidget_C.Power Increased__DelegateSignature
struct UPowerWidget_C_Power_Increased__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
