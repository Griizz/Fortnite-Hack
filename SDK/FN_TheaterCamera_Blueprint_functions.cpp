// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.IsInputSuspended
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATheaterCamera_Blueprint_C::IsInputSuspended()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.IsInputSuspended");

	ATheaterCamera_Blueprint_C_IsInputSuspended_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.NewFunction_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  self2                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D ATheaterCamera_Blueprint_C::NewFunction_1(class AActor* self2)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.NewFunction_1");

	ATheaterCamera_Blueprint_C_NewFunction_1_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PanCamera
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaX                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DeltaY                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATheaterCamera_Blueprint_C::PanCamera(float DeltaX, float DeltaY)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PanCamera");

	ATheaterCamera_Blueprint_C_PanCamera_Params params;
	params.DeltaX = DeltaX;
	params.DeltaY = DeltaY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.HandleTheaterSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 TheaterId                      (CPF_Parm, CPF_ZeroConstructor)

void ATheaterCamera_Blueprint_C::HandleTheaterSelected(const struct FString& TheaterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.HandleTheaterSelected");

	ATheaterCamera_Blueprint_C_HandleTheaterSelected_Params params;
	params.TheaterId = TheaterId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ZoomCameraStep
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Forward                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATheaterCamera_Blueprint_C::ZoomCameraStep(bool Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ZoomCameraStep");

	ATheaterCamera_Blueprint_C_ZoomCameraStep_Params params;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATheaterCamera_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.UserConstructionScript");

	ATheaterCamera_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.FocusTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ATheaterCamera_Blueprint_C::FocusTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.FocusTimeline__FinishedFunc");

	ATheaterCamera_Blueprint_C_FocusTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.FocusTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ATheaterCamera_Blueprint_C::FocusTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.FocusTimeline__UpdateFunc");

	ATheaterCamera_Blueprint_C_FocusTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DebugZoomTL__FinishedFunc
// (FUNC_BlueprintEvent)

void ATheaterCamera_Blueprint_C::DebugZoomTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DebugZoomTL__FinishedFunc");

	ATheaterCamera_Blueprint_C_DebugZoomTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DebugZoomTL__UpdateFunc
// (FUNC_BlueprintEvent)

void ATheaterCamera_Blueprint_C::DebugZoomTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DebugZoomTL__UpdateFunc");

	ATheaterCamera_Blueprint_C_DebugZoomTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InitializeFX-TL__FinishedFunc
// (FUNC_BlueprintEvent)

void ATheaterCamera_Blueprint_C::InitializeFX_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InitializeFX-TL__FinishedFunc");

	ATheaterCamera_Blueprint_C_InitializeFX_TL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InitializeFX-TL__UpdateFunc
// (FUNC_BlueprintEvent)

void ATheaterCamera_Blueprint_C::InitializeFX_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InitializeFX-TL__UpdateFunc");

	ATheaterCamera_Blueprint_C_InitializeFX_TL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DEBUGFOVA__FinishedFunc
// (FUNC_BlueprintEvent)

void ATheaterCamera_Blueprint_C::DEBUGFOVA__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DEBUGFOVA__FinishedFunc");

	ATheaterCamera_Blueprint_C_DEBUGFOVA__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DEBUGFOVA__UpdateFunc
// (FUNC_BlueprintEvent)

void ATheaterCamera_Blueprint_C::DEBUGFOVA__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DEBUGFOVA__UpdateFunc");

	ATheaterCamera_Blueprint_C_DEBUGFOVA__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_8
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void ATheaterCamera_Blueprint_C::InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_8");

	ATheaterCamera_Blueprint_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_7
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void ATheaterCamera_Blueprint_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_7");

	ATheaterCamera_Blueprint_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_6
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void ATheaterCamera_Blueprint_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_6");

	ATheaterCamera_Blueprint_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_5
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void ATheaterCamera_Blueprint_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_5");

	ATheaterCamera_Blueprint_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnActivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATheaterCamera_Blueprint_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnActivated");

	ATheaterCamera_Blueprint_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDeactivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATheaterCamera_Blueprint_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDeactivated");

	ATheaterCamera_Blueprint_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.SetTileFocus
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AFortTheaterMapTile**    TargetTile                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATheaterCamera_Blueprint_C::SetTileFocus(class AFortTheaterMapTile** TargetTile)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.SetTileFocus");

	ATheaterCamera_Blueprint_C_SetTileFocus_Params params;
	params.TargetTile = TargetTile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATheaterCamera_Blueprint_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ReceiveTick");

	ATheaterCamera_Blueprint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDragBegin
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATheaterCamera_Blueprint_C::OnDragBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDragBegin");

	ATheaterCamera_Blueprint_C_OnDragBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDragEnd
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATheaterCamera_Blueprint_C::OnDragEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDragEnd");

	ATheaterCamera_Blueprint_C_OnDragEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.StopFocusTimeline
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATheaterCamera_Blueprint_C::StopFocusTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.StopFocusTimeline");

	ATheaterCamera_Blueprint_C_StopFocusTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ForceTileFocus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 HexWorldLoc                    (CPF_Parm, CPF_IsPlainOldData)

void ATheaterCamera_Blueprint_C::ForceTileFocus(const struct FVector& HexWorldLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ForceTileFocus");

	ATheaterCamera_Blueprint_C_ForceTileFocus_Params params;
	params.HexWorldLoc = HexWorldLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PingFromHex
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATheaterCamera_Blueprint_C::PingFromHex()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PingFromHex");

	ATheaterCamera_Blueprint_C_PingFromHex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.RefreshCloudMask
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATheaterCamera_Blueprint_C::RefreshCloudMask()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.RefreshCloudMask");

	ATheaterCamera_Blueprint_C_RefreshCloudMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.MaskFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATheaterCamera_Blueprint_C::MaskFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.MaskFinished");

	ATheaterCamera_Blueprint_C_MaskFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PinnedPing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATheaterCamera_Blueprint_C::PinnedPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PinnedPing");

	ATheaterCamera_Blueprint_C_PinnedPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ExecuteUbergraph_TheaterCamera_Blueprint
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATheaterCamera_Blueprint_C::ExecuteUbergraph_TheaterCamera_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ExecuteUbergraph_TheaterCamera_Blueprint");

	ATheaterCamera_Blueprint_C_ExecuteUbergraph_TheaterCamera_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
