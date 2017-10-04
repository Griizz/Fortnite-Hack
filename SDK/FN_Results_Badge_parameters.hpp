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

// Function Results_Badge.Results_Badge_C.DoDesignTimeRandomization
struct UResults_Badge_C_DoDesignTimeRandomization_Params
{
};

// Function Results_Badge.Results_Badge_C.SkipToFinalState
struct UResults_Badge_C_SkipToFinalState_Params
{
};

// Function Results_Badge.Results_Badge_C.SetSkippingToEnd
struct UResults_Badge_C_SetSkippingToEnd_Params
{
};

// Function Results_Badge.Results_Badge_C.Initialize
struct UResults_Badge_C_Initialize_Params
{
	float                                              PlayRate;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_Badge.Results_Badge_C.HasValidItem
struct UResults_Badge_C_HasValidItem_Params
{
	bool                                               HasValidItem;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_Badge.Results_Badge_C.SetItem
struct UResults_Badge_C_SetItem_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_Badge.Results_Badge_C.Intro Sequence
struct UResults_Badge_C_Intro_Sequence_Params
{
};

// Function Results_Badge.Results_Badge_C.Convert Sequence
struct UResults_Badge_C_Convert_Sequence_Params
{
};

// Function Results_Badge.Results_Badge_C.BndEvt__Anim_Convert_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_Badge_C_BndEvt__Anim_Convert_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_Badge.Results_Badge_C.PreConstruct
struct UResults_Badge_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_Badge.Results_Badge_C.Reset Sequence
struct UResults_Badge_C_Reset_Sequence_Params
{
};

// Function Results_Badge.Results_Badge_C.ExecuteUbergraph_Results_Badge
struct UResults_Badge_C_ExecuteUbergraph_Results_Badge_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Results_Badge.Results_Badge_C.ConvertFinished__DelegateSignature
struct UResults_Badge_C_ConvertFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
