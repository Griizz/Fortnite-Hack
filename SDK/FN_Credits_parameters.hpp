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

// Function Credits.Credits_C.Reset
struct UCredits_C_Reset_Params
{
};

// Function Credits.Credits_C.CaptureEndPoint
struct UCredits_C_CaptureEndPoint_Params
{
};

// Function Credits.Credits_C.ScrollCredits
struct UCredits_C_ScrollCredits_Params
{
};

// Function Credits.Credits_C.ToggleScrollTimer
struct UCredits_C_ToggleScrollTimer_Params
{
	bool                                               EnableTimer;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Credits.Credits_C.HandleBack
struct UCredits_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Credits.Credits_C.HandleFadeInFinished
struct UCredits_C_HandleFadeInFinished_Params
{
};

// Function Credits.Credits_C.OnDeactivated
struct UCredits_C_OnDeactivated_Params
{
};

// Function Credits.Credits_C.OnActivated
struct UCredits_C_OnActivated_Params
{
};

// Function Credits.Credits_C.Construct
struct UCredits_C_Construct_Params
{
};

// Function Credits.Credits_C.ExecuteUbergraph_Credits
struct UCredits_C_ExecuteUbergraph_Credits_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
