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

// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.UpdateItemAndQuantity
struct UMulchRefundItemQuantityListEntry_C_UpdateItemAndQuantity_Params
{
	bool                                               DirectlySetQuantity;                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.HandleDifferentItemOrQuantitySetBP
struct UMulchRefundItemQuantityListEntry_C_HandleDifferentItemOrQuantitySetBP_Params
{
	bool*                                              IsBeingReset;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.Construct
struct UMulchRefundItemQuantityListEntry_C_Construct_Params
{
};

// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.ExecuteUbergraph_MulchRefundItemQuantityListEntry
struct UMulchRefundItemQuantityListEntry_C_ExecuteUbergraph_MulchRefundItemQuantityListEntry_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
