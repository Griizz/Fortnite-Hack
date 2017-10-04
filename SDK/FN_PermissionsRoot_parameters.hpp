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

// Function PermissionsRoot.PermissionsRoot_C.Input Handle Back
struct UPermissionsRoot_C_Input_Handle_Back_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PermissionsRoot.PermissionsRoot_C.RefreshOutpostInfo
struct UPermissionsRoot_C_RefreshOutpostInfo_Params
{
};

// Function PermissionsRoot.PermissionsRoot_C.Construct
struct UPermissionsRoot_C_Construct_Params
{
};

// Function PermissionsRoot.PermissionsRoot_C.OnActivated
struct UPermissionsRoot_C_OnActivated_Params
{
};

// Function PermissionsRoot.PermissionsRoot_C.ExecuteUbergraph_PermissionsRoot
struct UPermissionsRoot_C_ExecuteUbergraph_PermissionsRoot_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
