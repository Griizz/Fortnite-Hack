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

// Function FriendCodePC.FriendCodePC_C.GetFriendCodeUrl
struct UFriendCodePC_C_GetFriendCodeUrl_Params
{
	struct FText                                       Result;                                                   // (CPF_Parm, CPF_OutParm)
};

// Function FriendCodePC.FriendCodePC_C.Construct
struct UFriendCodePC_C_Construct_Params
{
};

// Function FriendCodePC.FriendCodePC_C.OnMouseEnter
struct UFriendCodePC_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function FriendCodePC.FriendCodePC_C.OnMouseLeave
struct UFriendCodePC_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function FriendCodePC.FriendCodePC_C.OnClicked
struct UFriendCodePC_C_OnClicked_Params
{
};

// Function FriendCodePC.FriendCodePC_C.ExecuteUbergraph_FriendCodePC
struct UFriendCodePC_C_ExecuteUbergraph_FriendCodePC_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
