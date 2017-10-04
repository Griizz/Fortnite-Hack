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

// Function MissionModifierItem.MissionModifierItem_C.GetToolTipWidget
struct UMissionModifierItem_C_GetToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MissionModifierItem.MissionModifierItem_C.Update
struct UMissionModifierItem_C_Update_Params
{
};

// Function MissionModifierItem.MissionModifierItem_C.Construct
struct UMissionModifierItem_C_Construct_Params
{
};

// Function MissionModifierItem.MissionModifierItem_C.ExecuteUbergraph_MissionModifierItem
struct UMissionModifierItem_C_ExecuteUbergraph_MissionModifierItem_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
