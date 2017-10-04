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

// Function FullPartyMemberConnected.FullPartyMemberConnected_C.UpdateDimensions
struct UFullPartyMemberConnected_C_UpdateDimensions_Params
{
	struct FVector2D                                   NewDimensions;                                            // (CPF_Parm, CPF_IsPlainOldData)
};

// Function FullPartyMemberConnected.FullPartyMemberConnected_C.UpdateMemberInfo
struct UFullPartyMemberConnected_C_UpdateMemberInfo_Params
{
	struct FFortTeamMemberInfo                         NewMemberInfo;                                            // (CPF_Parm)
};

// Function FullPartyMemberConnected.FullPartyMemberConnected_C.PreConstruct
struct UFullPartyMemberConnected_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FullPartyMemberConnected.FullPartyMemberConnected_C.Construct
struct UFullPartyMemberConnected_C_Construct_Params
{
};

// Function FullPartyMemberConnected.FullPartyMemberConnected_C.ExecuteUbergraph_FullPartyMemberConnected
struct UFullPartyMemberConnected_C_ExecuteUbergraph_FullPartyMemberConnected_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
