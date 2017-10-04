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

// Function BPI_StormShieldinterface.BPI_StormShieldInterface_C.GetOutpostReadyState
struct UBPI_StormShieldInterface_C_GetOutpostReadyState_Params
{
	bool                                               ReadyToExpand;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReadyToInstallAmplifier;                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BPI_StormShieldinterface.BPI_StormShieldInterface_C.CanLeaveOutpost
struct UBPI_StormShieldInterface_C_CanLeaveOutpost_Params
{
	bool                                               AllowedToLeave;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
