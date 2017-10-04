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

// Function TabVideoOptions.TabVideoOptions_C.Initialize Display Resolutions
struct UTabVideoOptions_C_Initialize_Display_Resolutions_Params
{
};

// Function TabVideoOptions.TabVideoOptions_C.Update Data
struct UTabVideoOptions_C_Update_Data_Params
{
	bool                                               Reset_Quality_Selector;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabVideoOptions.TabVideoOptions_C.Initialize Data
struct UTabVideoOptions_C_Initialize_Data_Params
{
};

// Function TabVideoOptions.TabVideoOptions_C.View Distance Changed
struct UTabVideoOptions_C_View_Distance_Changed_Params
{
	int                                                Tab_Id;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabVideoOptions.TabVideoOptions_C.Discrete Resolution Changed
struct UTabVideoOptions_C_Discrete_Resolution_Changed_Params
{
	int                                                Tab_Id;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabVideoOptions.TabVideoOptions_C.Shadows Changed
struct UTabVideoOptions_C_Shadows_Changed_Params
{
	int                                                Tab_Id;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabVideoOptions.TabVideoOptions_C.Anti-Aliasing Changed
struct UTabVideoOptions_C_Anti_Aliasing_Changed_Params
{
	int                                                Tab_Id;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabVideoOptions.TabVideoOptions_C.Textures Changed
struct UTabVideoOptions_C_Textures_Changed_Params
{
	int                                                Tab_Id;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabVideoOptions.TabVideoOptions_C.Post-Processing Changed
struct UTabVideoOptions_C_Post_Processing_Changed_Params
{
	int                                                Tab_Id;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabVideoOptions.TabVideoOptions_C.Effects Changed
struct UTabVideoOptions_C_Effects_Changed_Params
{
	int                                                Tab_Id;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabVideoOptions.TabVideoOptions_C.Quality Changed
struct UTabVideoOptions_C_Quality_Changed_Params
{
	int                                                Tab_Id;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabVideoOptions.TabVideoOptions_C.UpdateOptionsTab
struct UTabVideoOptions_C_UpdateOptionsTab_Params
{
};

// Function TabVideoOptions.TabVideoOptions_C.Window Mode  Changed
struct UTabVideoOptions_C_Window_Mode__Changed_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_23
struct UTabVideoOptions_C_CustomEvent_23_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_24
struct UTabVideoOptions_C_CustomEvent_24_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabVideoOptions.TabVideoOptions_C.Construct
struct UTabVideoOptions_C_Construct_Params
{
};

// Function TabVideoOptions.TabVideoOptions_C.CenterOnTab
struct UTabVideoOptions_C_CenterOnTab_Params
{
};

// Function TabVideoOptions.TabVideoOptions_C.VSync Changed
struct UTabVideoOptions_C_VSync_Changed_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabVideoOptions.TabVideoOptions_C.Motion Blur Changed
struct UTabVideoOptions_C_Motion_Blur_Changed_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabVideoOptions.TabVideoOptions_C.CustomEvent
struct UTabVideoOptions_C_CustomEvent_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_2
struct UTabVideoOptions_C_CustomEvent_2_Params
{
	int                                                Selected_Index;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabVideoOptions.TabVideoOptions_C.PreConstruct
struct UTabVideoOptions_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabVideoOptions.TabVideoOptions_C.ExecuteUbergraph_TabVideoOptions
struct UTabVideoOptions_C_ExecuteUbergraph_TabVideoOptions_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TabVideoOptions.TabVideoOptions_C.Disable Overlay__DelegateSignature
struct UTabVideoOptions_C_Disable_Overlay__DelegateSignature_Params
{
};

// Function TabVideoOptions.TabVideoOptions_C.Enable Overlay__DelegateSignature
struct UTabVideoOptions_C_Enable_Overlay__DelegateSignature_Params
{
	bool                                               Accept_Input;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
