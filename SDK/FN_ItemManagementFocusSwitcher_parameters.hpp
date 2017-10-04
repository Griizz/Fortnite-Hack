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

// Function ItemManagementFocusSwitcher.ItemManagementFocusSwitcher_C.ExecuteFocusSwitch
struct UItemManagementFocusSwitcher_C_ExecuteFocusSwitch_Params
{
};

// Function ItemManagementFocusSwitcher.ItemManagementFocusSwitcher_C.DeferFocusSwitch
struct UItemManagementFocusSwitcher_C_DeferFocusSwitch_Params
{
};

// Function ItemManagementFocusSwitcher.ItemManagementFocusSwitcher_C.OnFocusReceived
struct UItemManagementFocusSwitcher_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
