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

// Function ChoiceCardName.ChoiceCardName_C.UpdateText
struct UChoiceCardName_C_UpdateText_Params
{
	struct FText                                       DisplayText;                                              // (CPF_Parm)
	EFortRarity                                        Rarity;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
