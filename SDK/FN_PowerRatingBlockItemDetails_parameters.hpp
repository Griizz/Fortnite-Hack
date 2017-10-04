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

// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.ClearComparison
struct UPowerRatingBlockItemDetails_C_ClearComparison_Params
{
};

// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.UpdateComparison
struct UPowerRatingBlockItemDetails_C_UpdateComparison_Params
{
};

// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.SetPowerRatingValueForComparison
struct UPowerRatingBlockItemDetails_C_SetPowerRatingValueForComparison_Params
{
	int                                                Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.SetPowerRatingFromItem
struct UPowerRatingBlockItemDetails_C_SetPowerRatingFromItem_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InterpolationDuration;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PowerRatingBlockItemDetails.PowerRatingBlockItemDetails_C.SetPowerRatingValue
struct UPowerRatingBlockItemDetails_C_SetPowerRatingValue_Params
{
	int                                                PowerRating;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InterpolationDuration;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
