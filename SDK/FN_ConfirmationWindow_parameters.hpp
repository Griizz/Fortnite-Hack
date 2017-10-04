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

// Function ConfirmationWindow.ConfirmationWindow_C.TriggerCameraMode
struct UConfirmationWindow_C_TriggerCameraMode_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.TriggerCursorMode
struct UConfirmationWindow_C_TriggerCursorMode_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.CloseConfirmation
struct UConfirmationWindow_C_CloseConfirmation_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.CenterFirstButton
struct UConfirmationWindow_C_CenterFirstButton_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.SetupAdditionalContent
struct UConfirmationWindow_C_SetupAdditionalContent_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.SetupLeftAdditionalContent
struct UConfirmationWindow_C_SetupLeftAdditionalContent_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.SetupNonInteractiveContent
struct UConfirmationWindow_C_SetupNonInteractiveContent_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.ClickButtonIfBot
struct UConfirmationWindow_C_ClickButtonIfBot_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.OnWaitForExternalLatentAction
struct UConfirmationWindow_C_OnWaitForExternalLatentAction_Params
{
	struct FFortDialogExternalLatentActionHandle       LatentActionHandle;                                       // (CPF_Parm)
};

// Function ConfirmationWindow.ConfirmationWindow_C.StopWaitingForLatentAction
struct UConfirmationWindow_C_StopWaitingForLatentAction_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.GetLatentActionWaitHandle
struct UConfirmationWindow_C_GetLatentActionWaitHandle_Params
{
	struct FFortDialogExternalLatentActionHandle       LatentActionHandle;                                       // (CPF_Parm, CPF_OutParm)
};

// Function ConfirmationWindow.ConfirmationWindow_C.Set Hover Description
struct UConfirmationWindow_C_Set_Hover_Description_Params
{
	class UCommonButton*                               Button_to_Hover;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.SetupLeft
struct UConfirmationWindow_C_SetupLeft_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.SetupTitleAndDescription
struct UConfirmationWindow_C_SetupTitleAndDescription_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.SetupMainIcon
struct UConfirmationWindow_C_SetupMainIcon_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.Deinitialize
struct UConfirmationWindow_C_Deinitialize_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.KillCurrentConfirmation
struct UConfirmationWindow_C_KillCurrentConfirmation_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.GetResultName
struct UConfirmationWindow_C_GetResultName_Params
{
	class UIconTextButton_C*                           ConfirmButton;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ResultName;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.GetInputAction
struct UConfirmationWindow_C_GetInputAction_Params
{
	struct FName                                       RowName;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseInputAction;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDataTableRowHandle                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ConfirmationWindow.ConfirmationWindow_C.AddSingleConfirmButton
struct UConfirmationWindow_C_AddSingleConfirmButton_Params
{
	struct FConfirmationDialogAction                   ConfirmDialogAction;                                      // (CPF_Parm)
	bool                                               UseInputAction;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.HasAnyConfirmAction
struct UConfirmationWindow_C_HasAnyConfirmAction_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.ConfirmActionClicked
struct UConfirmationWindow_C_ConfirmActionClicked_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.IsSimpleConfirmAction
struct UConfirmationWindow_C_IsSimpleConfirmAction_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.DeclineActionClicked
struct UConfirmationWindow_C_DeclineActionClicked_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.AddDeclineButton
struct UConfirmationWindow_C_AddDeclineButton_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.AddConfirmButtons
struct UConfirmationWindow_C_AddConfirmButtons_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.Initialize
struct UConfirmationWindow_C_Initialize_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.SetDescription
struct UConfirmationWindow_C_SetDescription_Params
{
	struct FFortDialogDescription_NUI                  NewDescription;                                           // (CPF_Parm)
};

// Function ConfirmationWindow.ConfirmationWindow_C.Construct
struct UConfirmationWindow_C_Construct_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.HandleIntroEnded
struct UConfirmationWindow_C_HandleIntroEnded_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.HandleOutroEnded
struct UConfirmationWindow_C_HandleOutroEnded_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.OnBeginIntro
struct UConfirmationWindow_C_OnBeginIntro_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.OnBeginOutro
struct UConfirmationWindow_C_OnBeginOutro_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.PreConstruct
struct UConfirmationWindow_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.OnActivated
struct UConfirmationWindow_C_OnActivated_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.Destruct
struct UConfirmationWindow_C_Destruct_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow
struct UConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
