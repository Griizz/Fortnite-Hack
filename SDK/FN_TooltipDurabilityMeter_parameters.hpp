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

// Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.Draw
struct UTooltipDurabilityMeter_C_Draw_Params
{
	float                                              Normalized;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortDisplayAttribute                       Display_Attribute;                                        // (CPF_Parm)
};

// Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.Construct
struct UTooltipDurabilityMeter_C_Construct_Params
{
};

// Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.ExecuteUbergraph_TooltipDurabilityMeter
struct UTooltipDurabilityMeter_C_ExecuteUbergraph_TooltipDurabilityMeter_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
