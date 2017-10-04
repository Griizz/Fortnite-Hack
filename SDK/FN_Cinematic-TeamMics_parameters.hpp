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

// Function Cinematic-TeamMics.Cinematic-TeamMics_C.Update
struct UCinematic_TeamMics_C_Update_Params
{
	struct FFortTeamMemberInfo                         UpdatedMemberInfo;                                        // (CPF_Parm)
};

// Function Cinematic-TeamMics.Cinematic-TeamMics_C.Construct
struct UCinematic_TeamMics_C_Construct_Params
{
};

// Function Cinematic-TeamMics.Cinematic-TeamMics_C.ExecuteUbergraph_Cinematic-TeamMics
struct UCinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
