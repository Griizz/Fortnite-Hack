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

// Function RadialPicker.RadialPicker_C.SetShowMouseCursor
struct URadialPicker_C_SetShowMouseCursor_Params
{
	bool                                               InShowMouseCursor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.SetPointerDirection
struct URadialPicker_C_SetPointerDirection_Params
{
};

// Function RadialPicker.RadialPicker_C.IsGamepadInPickerDeadZone
struct URadialPicker_C_IsGamepadInPickerDeadZone_Params
{
	bool                                               bIsInDeadZone;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.MoveActiveOption
struct URadialPicker_C_MoveActiveOption_Params
{
	int                                                MoveOptionDirection;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.ResetInput
struct URadialPicker_C_ResetInput_Params
{
};

// Function RadialPicker.RadialPicker_C.CanConfirm
struct URadialPicker_C_CanConfirm_Params
{
	bool                                               CanAccept;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.SetInputMode
struct URadialPicker_C_SetInputMode_Params
{
};

// Function RadialPicker.RadialPicker_C.SetActiveOption
struct URadialPicker_C_SetActiveOption_Params
{
	int                                                Option;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.ClearActiveOption
struct URadialPicker_C_ClearActiveOption_Params
{
};

// Function RadialPicker.RadialPicker_C.GetOptionAngle
struct URadialPicker_C_GetOptionAngle_Params
{
	int                                                Option;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Angle;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.GetAngleDifference
struct URadialPicker_C_GetAngleDifference_Params
{
	float                                              AngleA;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngleB;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Difference;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.GetOptionPosition
struct URadialPicker_C_GetOptionPosition_Params
{
	int                                                Option;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   Position;                                                 // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.InitializePicker
struct URadialPicker_C_InitializePicker_Params
{
	EFortPickerMode                                    PickerMode;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InitialOption;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.Tick
struct URadialPicker_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.Construct
struct URadialPicker_C_Construct_Params
{
};

// Function RadialPicker.RadialPicker_C.Event AcceptOption
struct URadialPicker_C_Event_AcceptOption_Params
{
};

// Function RadialPicker.RadialPicker_C.Event CancelPicker
struct URadialPicker_C_Event_CancelPicker_Params
{
};

// Function RadialPicker.RadialPicker_C.ClosePicker
struct URadialPicker_C_ClosePicker_Params
{
};

// Function RadialPicker.RadialPicker_C.AcceptChosenOption
struct URadialPicker_C_AcceptChosenOption_Params
{
	int                                                PickerOption;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function RadialPicker.RadialPicker_C.OnPickerRefreshItems
struct URadialPicker_C_OnPickerRefreshItems_Params
{
};

// Function RadialPicker.RadialPicker_C.ExecuteUbergraph_RadialPicker
struct URadialPicker_C_ExecuteUbergraph_RadialPicker_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
