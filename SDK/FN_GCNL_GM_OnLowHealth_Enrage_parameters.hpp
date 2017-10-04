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

// Function GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C.OnRemove
struct AGCNL_GM_OnLowHealth_Enrage_C_OnRemove_Params
{
	class AActor**                                     MyTarget;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C.OnActive
struct AGCNL_GM_OnLowHealth_Enrage_C_OnActive_Params
{
	class AActor**                                     MyTarget;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C.UserConstructionScript
struct AGCNL_GM_OnLowHealth_Enrage_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
