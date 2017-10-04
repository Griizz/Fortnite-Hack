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

// Function StatItemLarge.StatItemLarge_C.UpdateValue
struct UStatItemLarge_C_UpdateValue_Params
{
	float                                              NewValue;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentValue;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StatItemLarge.StatItemLarge_C.UpdateIcon
struct UStatItemLarge_C_UpdateIcon_Params
{
};

// Function StatItemLarge.StatItemLarge_C.UpdateDisplayData
struct UStatItemLarge_C_UpdateDisplayData_Params
{
};

// Function StatItemLarge.StatItemLarge_C.GetLocalPlayerId
struct UStatItemLarge_C_GetLocalPlayerId_Params
{
	struct FUniqueNetIdRepl                            LocalPlayerNetId;                                         // (CPF_Parm, CPF_OutParm)
};

// Function StatItemLarge.StatItemLarge_C.Construct
struct UStatItemLarge_C_Construct_Params
{
};

// Function StatItemLarge.StatItemLarge_C.DisplayAttributeChanged
struct UStatItemLarge_C_DisplayAttributeChanged_Params
{
};

// Function StatItemLarge.StatItemLarge_C.PreConstruct
struct UStatItemLarge_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StatItemLarge.StatItemLarge_C.PreviewStarted
struct UStatItemLarge_C_PreviewStarted_Params
{
};

// Function StatItemLarge.StatItemLarge_C.PreviewEnded
struct UStatItemLarge_C_PreviewEnded_Params
{
};

// Function StatItemLarge.StatItemLarge_C.ValueChanged
struct UStatItemLarge_C_ValueChanged_Params
{
	float*                                             Delta;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StatItemLarge.StatItemLarge_C.ExecuteUbergraph_StatItemLarge
struct UStatItemLarge_C_ExecuteUbergraph_StatItemLarge_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
