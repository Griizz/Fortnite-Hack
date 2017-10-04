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

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.IsInputSuspended
struct ATheaterCamera_Blueprint_C_IsInputSuspended_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.NewFunction_1
struct ATheaterCamera_Blueprint_C_NewFunction_1_Params
{
	class AActor*                                      self2;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PanCamera
struct ATheaterCamera_Blueprint_C_PanCamera_Params
{
	float                                              DeltaX;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeltaY;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.HandleTheaterSelected
struct ATheaterCamera_Blueprint_C_HandleTheaterSelected_Params
{
	struct FString                                     TheaterId;                                                // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ZoomCameraStep
struct ATheaterCamera_Blueprint_C_ZoomCameraStep_Params
{
	bool                                               Forward;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.UserConstructionScript
struct ATheaterCamera_Blueprint_C_UserConstructionScript_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.FocusTimeline__FinishedFunc
struct ATheaterCamera_Blueprint_C_FocusTimeline__FinishedFunc_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.FocusTimeline__UpdateFunc
struct ATheaterCamera_Blueprint_C_FocusTimeline__UpdateFunc_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DebugZoomTL__FinishedFunc
struct ATheaterCamera_Blueprint_C_DebugZoomTL__FinishedFunc_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DebugZoomTL__UpdateFunc
struct ATheaterCamera_Blueprint_C_DebugZoomTL__UpdateFunc_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InitializeFX-TL__FinishedFunc
struct ATheaterCamera_Blueprint_C_InitializeFX_TL__FinishedFunc_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InitializeFX-TL__UpdateFunc
struct ATheaterCamera_Blueprint_C_InitializeFX_TL__UpdateFunc_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DEBUGFOVA__FinishedFunc
struct ATheaterCamera_Blueprint_C_DEBUGFOVA__FinishedFunc_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DEBUGFOVA__UpdateFunc
struct ATheaterCamera_Blueprint_C_DEBUGFOVA__UpdateFunc_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_8
struct ATheaterCamera_Blueprint_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_7
struct ATheaterCamera_Blueprint_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_6
struct ATheaterCamera_Blueprint_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_5
struct ATheaterCamera_Blueprint_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnActivated
struct ATheaterCamera_Blueprint_C_OnActivated_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDeactivated
struct ATheaterCamera_Blueprint_C_OnDeactivated_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.SetTileFocus
struct ATheaterCamera_Blueprint_C_SetTileFocus_Params
{
	class AFortTheaterMapTile**                        TargetTile;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ReceiveTick
struct ATheaterCamera_Blueprint_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDragBegin
struct ATheaterCamera_Blueprint_C_OnDragBegin_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDragEnd
struct ATheaterCamera_Blueprint_C_OnDragEnd_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.StopFocusTimeline
struct ATheaterCamera_Blueprint_C_StopFocusTimeline_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ForceTileFocus
struct ATheaterCamera_Blueprint_C_ForceTileFocus_Params
{
	struct FVector                                     HexWorldLoc;                                              // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PingFromHex
struct ATheaterCamera_Blueprint_C_PingFromHex_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.RefreshCloudMask
struct ATheaterCamera_Blueprint_C_RefreshCloudMask_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.MaskFinished
struct ATheaterCamera_Blueprint_C_MaskFinished_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PinnedPing
struct ATheaterCamera_Blueprint_C_PinnedPing_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ExecuteUbergraph_TheaterCamera_Blueprint
struct ATheaterCamera_Blueprint_C_ExecuteUbergraph_TheaterCamera_Blueprint_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
