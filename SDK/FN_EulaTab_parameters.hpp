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

// Function EulaTab.EulaTab_C.Activate Scroll Box
struct UEulaTab_C_Activate_Scroll_Box_Params
{
};

// Function EulaTab.EulaTab_C.Construct
struct UEulaTab_C_Construct_Params
{
};

// Function EulaTab.EulaTab_C.ExecuteUbergraph_EulaTab
struct UEulaTab_C_ExecuteUbergraph_EulaTab_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
