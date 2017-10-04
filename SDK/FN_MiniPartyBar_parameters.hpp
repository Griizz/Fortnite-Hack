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

// Function MiniPartyBar.MiniPartyBar_C.Get Banners Tooltip Widget
struct UMiniPartyBar_C_Get_Banners_Tooltip_Widget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MiniPartyBar.MiniPartyBar_C.HandlePartybarUIFeatureChanged
struct UMiniPartyBar_C_HandlePartybarUIFeatureChanged_Params
{
};

// Function MiniPartyBar.MiniPartyBar_C.Construct
struct UMiniPartyBar_C_Construct_Params
{
};

// Function MiniPartyBar.MiniPartyBar_C.BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature
struct UMiniPartyBar_C_BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MiniPartyBar.MiniPartyBar_C.ExecuteUbergraph_MiniPartyBar
struct UMiniPartyBar_C_ExecuteUbergraph_MiniPartyBar_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
