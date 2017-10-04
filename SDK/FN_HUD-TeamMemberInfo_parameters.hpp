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

// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.SetHealth
struct UHUD_TeamMemberInfo_C_SetHealth_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Update
struct UHUD_TeamMemberInfo_C_Update_Params
{
	struct FFortTeamMemberInfo                         UpdatedMemberInfo;                                        // (CPF_Parm)
};

// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Construct
struct UHUD_TeamMemberInfo_C_Construct_Params
{
};

// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.ExecuteUbergraph_HUD-TeamMemberInfo
struct UHUD_TeamMemberInfo_C_ExecuteUbergraph_HUD_TeamMemberInfo_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
