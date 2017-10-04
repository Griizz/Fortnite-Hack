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

// Function TabAccountLinkage.TabAccountLinkage_C.InitializeWebsiteConfiguration
struct UTabAccountLinkage_C_InitializeWebsiteConfiguration_Params
{
};

// Function TabAccountLinkage.TabAccountLinkage_C.Build Player Id Analytic Attribute
struct UTabAccountLinkage_C_Build_Player_Id_Analytic_Attribute_Params
{
	struct FFortAnalyticsEventAttribute                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TabAccountLinkage.TabAccountLinkage_C.Build Player Name Analytic Attribute
struct UTabAccountLinkage_C_Build_Player_Name_Analytic_Attribute_Params
{
	struct FFortAnalyticsEventAttribute                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TabAccountLinkage.TabAccountLinkage_C.Fire Enter Live Stream Analytic
struct UTabAccountLinkage_C_Fire_Enter_Live_Stream_Analytic_Params
{
};

// Function TabAccountLinkage.TabAccountLinkage_C.Initialize Data
struct UTabAccountLinkage_C_Initialize_Data_Params
{
};

// Function TabAccountLinkage.TabAccountLinkage_C.Update Data
struct UTabAccountLinkage_C_Update_Data_Params
{
};

// Function TabAccountLinkage.TabAccountLinkage_C.UpdateOptionsTab
struct UTabAccountLinkage_C_UpdateOptionsTab_Params
{
};

// Function TabAccountLinkage.TabAccountLinkage_C.CenterOnTab
struct UTabAccountLinkage_C_CenterOnTab_Params
{
};

// Function TabAccountLinkage.TabAccountLinkage_C.Construct
struct UTabAccountLinkage_C_Construct_Params
{
};

// Function TabAccountLinkage.TabAccountLinkage_C.BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature
struct UTabAccountLinkage_C_BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature_Params
{
	struct FText                                       NewTooltipText;                                           // (CPF_Parm)
};

// Function TabAccountLinkage.TabAccountLinkage_C.BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature
struct UTabAccountLinkage_C_BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabAccountLinkage.TabAccountLinkage_C.ExecuteUbergraph_TabAccountLinkage
struct UTabAccountLinkage_C_ExecuteUbergraph_TabAccountLinkage_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
