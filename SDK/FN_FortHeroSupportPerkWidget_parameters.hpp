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

// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateComparisonVisibility
struct UFortHeroSupportPerkWidget_C_UpdateComparisonVisibility_Params
{
};

// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateEmptyVisibility
struct UFortHeroSupportPerkWidget_C_UpdateEmptyVisibility_Params
{
};

// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateActiveDisplay
struct UFortHeroSupportPerkWidget_C_UpdateActiveDisplay_Params
{
};

// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateLockedVisibility
struct UFortHeroSupportPerkWidget_C_UpdateLockedVisibility_Params
{
};

// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateVisibility
struct UFortHeroSupportPerkWidget_C_UpdateVisibility_Params
{
};

// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.Update
struct UFortHeroSupportPerkWidget_C_Update_Params
{
	bool                                               DisplayedOutsideOfHeroSquad;                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortSupportBonusType                              TargetedSupportType;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.OnHeroUpdated
struct UFortHeroSupportPerkWidget_C_OnHeroUpdated_Params
{
};

// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.OnSupportTypeUpdated
struct UFortHeroSupportPerkWidget_C_OnSupportTypeUpdated_Params
{
};

// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.Construct
struct UFortHeroSupportPerkWidget_C_Construct_Params
{
};

// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.OnStateChanged
struct UFortHeroSupportPerkWidget_C_OnStateChanged_Params
{
};

// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.ExecuteUbergraph_FortHeroSupportPerkWidget
struct UFortHeroSupportPerkWidget_C_ExecuteUbergraph_FortHeroSupportPerkWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
