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

// Function SlateContentCalloutMenu.SlateContentCalloutMenu_C.Get Size Box
struct USlateContentCalloutMenu_C_Get_Size_Box_Params
{
	class USizeBox*                                    Size_Box;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SlateContentCalloutMenu.SlateContentCalloutMenu_C.Construct
struct USlateContentCalloutMenu_C_Construct_Params
{
};

// Function SlateContentCalloutMenu.SlateContentCalloutMenu_C.ExecuteUbergraph_SlateContentCalloutMenu
struct USlateContentCalloutMenu_C_ExecuteUbergraph_SlateContentCalloutMenu_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
