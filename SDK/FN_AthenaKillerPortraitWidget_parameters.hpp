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

// Function AthenaKillerPortraitWidget.AthenaKillerPortraitWidget_C.GetOwningPlayerState
struct UAthenaKillerPortraitWidget_C_GetOwningPlayerState_Params
{
	class AFortPlayerStateAthena*                      AsFort_Player_State_Athena;                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AthenaKillerPortraitWidget.AthenaKillerPortraitWidget_C.Init
struct UAthenaKillerPortraitWidget_C_Init_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                              // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
