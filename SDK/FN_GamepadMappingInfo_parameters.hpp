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

// Function GamepadMappingInfo.GamepadMappingInfo_C.ComputeActiveWidgetIndex
struct UGamepadMappingInfo_C_ComputeActiveWidgetIndex_Params
{
	int                                                platform;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Mode;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Configuration;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.Update Displayed Mapping
struct UGamepadMappingInfo_C_Update_Displayed_Mapping_Params
{
	int                                                platform;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Mode;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Configuration;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
