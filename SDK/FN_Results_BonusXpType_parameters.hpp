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

// Function Results_BonusXpType.Results_BonusXpType_C.setInformation
struct UResults_BonusXpType_C_setInformation_Params
{
	int                                                InXPAmount;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       PlayerName;                                               // (CPF_Parm)
	struct FName                                       InType;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_BonusXpType.Results_BonusXpType_C.Construct
struct UResults_BonusXpType_C_Construct_Params
{
};

// Function Results_BonusXpType.Results_BonusXpType_C.PreConstruct
struct UResults_BonusXpType_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_BonusXpType.Results_BonusXpType_C.ExecuteUbergraph_Results_BonusXpType
struct UResults_BonusXpType_C_ExecuteUbergraph_Results_BonusXpType_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
