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

// Function TabGamePadConfig.TabGamePadConfig_C.Handle Mode Toggled
struct UTabGamePadConfig_C_Handle_Mode_Toggled_Params
{
};

// Function TabGamePadConfig.TabGamePadConfig_C.Update Data
struct UTabGamePadConfig_C_Update_Data_Params
{
};

// Function TabGamePadConfig.TabGamePadConfig_C.Initialize Data
struct UTabGamePadConfig_C_Initialize_Data_Params
{
};

// Function TabGamePadConfig.TabGamePadConfig_C.Construct
struct UTabGamePadConfig_C_Construct_Params
{
};

// Function TabGamePadConfig.TabGamePadConfig_C.Configuration Changed
struct UTabGamePadConfig_C_Configuration_Changed_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGamePadConfig.TabGamePadConfig_C.CenterOnTab
struct UTabGamePadConfig_C_CenterOnTab_Params
{
};

// Function TabGamePadConfig.TabGamePadConfig_C.Gamepad Config Changed
struct UTabGamePadConfig_C_Gamepad_Config_Changed_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGamePadConfig.TabGamePadConfig_C.UpdateOptionsTab
struct UTabGamePadConfig_C_UpdateOptionsTab_Params
{
};

// Function TabGamePadConfig.TabGamePadConfig_C.ControllerPlatformConfigChanged
struct UTabGamePadConfig_C_ControllerPlatformConfigChanged_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabGamePadConfig.TabGamePadConfig_C.ExecuteUbergraph_TabGamePadConfig
struct UTabGamePadConfig_C_ExecuteUbergraph_TabGamePadConfig_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
