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

// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Set Reviving
struct UAthenaTeamMemberDBNOState_C_Set_Reviving_Params
{
	bool                                               Is_Reviving;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Set DBNO
struct UAthenaTeamMemberDBNOState_C_Set_DBNO_Params
{
	bool                                               Is_DBNO;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
