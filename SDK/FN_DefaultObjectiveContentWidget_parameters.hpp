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

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.GetHeightEstimate
struct UDefaultObjectiveContentWidget_C_GetHeightEstimate_Params
{
	float                                              Height;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleTimerComponentUpdated
struct UDefaultObjectiveContentWidget_C_HandleTimerComponentUpdated_Params
{
	class UFortMissionTimerComponent*                  InTimerComponent;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.CreateRichTextBlock
struct UDefaultObjectiveContentWidget_C_CreateRichTextBlock_Params
{
	struct FText                                       Text;                                                     // (CPF_Parm)
};

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.GetRichTextBlock
struct UDefaultObjectiveContentWidget_C_GetRichTextBlock_Params
{
	class UMissionRichText_C*                          MissionRichTextBlock;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.Update
struct UDefaultObjectiveContentWidget_C_Update_Params
{
};

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.Setup
struct UDefaultObjectiveContentWidget_C_Setup_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInConfigureAsHUD;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleObjectiveStatusChanged
struct UDefaultObjectiveContentWidget_C_HandleObjectiveStatusChanged_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFortObjectiveStatus                               NewStatus;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleObjectiveVisibilityChanged
struct UDefaultObjectiveContentWidget_C_HandleObjectiveVisibilityChanged_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bNewVisibility;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleUpdate
struct UDefaultObjectiveContentWidget_C_HandleUpdate_Params
{
	class AFortMissionState*                           MissionState;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.ExecuteUbergraph_DefaultObjectiveContentWidget
struct UDefaultObjectiveContentWidget_C_ExecuteUbergraph_DefaultObjectiveContentWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
