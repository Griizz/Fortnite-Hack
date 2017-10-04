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

// Function ProgressWidget.ProgressWidget_C.SetIcon
struct UProgressWidget_C_SetIcon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (CPF_Parm)
};

// Function ProgressWidget.ProgressWidget_C.SetDescription
struct UProgressWidget_C_SetDescription_Params
{
	struct FText                                       Description;                                              // (CPF_Parm)
};

// Function ProgressWidget.ProgressWidget_C.SetTitle
struct UProgressWidget_C_SetTitle_Params
{
	struct FText                                       Title;                                                    // (CPF_Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
