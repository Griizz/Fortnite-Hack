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

// Function RadialPicker.RadialPicker_C.SetShowMouseCursor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InShowMouseCursor              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::SetShowMouseCursor(bool InShowMouseCursor)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.SetShowMouseCursor");

	URadialPicker_C_SetShowMouseCursor_Params params;
	params.InShowMouseCursor = InShowMouseCursor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.SetPointerDirection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialPicker_C::SetPointerDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.SetPointerDirection");

	URadialPicker_C_SetPointerDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.IsGamepadInPickerDeadZone
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bIsInDeadZone                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::IsGamepadInPickerDeadZone(bool* bIsInDeadZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.IsGamepadInPickerDeadZone");

	URadialPicker_C_IsGamepadInPickerDeadZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsInDeadZone != nullptr)
		*bIsInDeadZone = params.bIsInDeadZone;
}


// Function RadialPicker.RadialPicker_C.MoveActiveOption
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MoveOptionDirection            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::MoveActiveOption(int MoveOptionDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.MoveActiveOption");

	URadialPicker_C_MoveActiveOption_Params params;
	params.MoveOptionDirection = MoveOptionDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.ResetInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialPicker_C::ResetInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.ResetInput");

	URadialPicker_C_ResetInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.CanConfirm
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           CanAccept                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::CanConfirm(bool* CanAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.CanConfirm");

	URadialPicker_C_CanConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAccept != nullptr)
		*CanAccept = params.CanAccept;
}


// Function RadialPicker.RadialPicker_C.SetInputMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialPicker_C::SetInputMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.SetInputMode");

	URadialPicker_C_SetInputMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.SetActiveOption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Option                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::SetActiveOption(int Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.SetActiveOption");

	URadialPicker_C_SetActiveOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.ClearActiveOption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialPicker_C::ClearActiveOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.ClearActiveOption");

	URadialPicker_C_ClearActiveOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.GetOptionAngle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Option                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Angle                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::GetOptionAngle(int Option, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.GetOptionAngle");

	URadialPicker_C_GetOptionAngle_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function RadialPicker.RadialPicker_C.GetAngleDifference
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          AngleA                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AngleB                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Difference                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::GetAngleDifference(float AngleA, float AngleB, float* Difference)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.GetAngleDifference");

	URadialPicker_C_GetAngleDifference_Params params;
	params.AngleA = AngleA;
	params.AngleB = AngleB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difference != nullptr)
		*Difference = params.Difference;
}


// Function RadialPicker.RadialPicker_C.GetOptionPosition
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Option                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               Position                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void URadialPicker_C::GetOptionPosition(int Option, struct FVector2D* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.GetOptionPosition");

	URadialPicker_C_GetOptionPosition_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
}


// Function RadialPicker.RadialPicker_C.InitializePicker
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InitialOption                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::InitializePicker(int InitialOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.InitializePicker");

	URadialPicker_C_InitializePicker_Params params;
	params.InitialOption = InitialOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.Tick");

	URadialPicker_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URadialPicker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.Construct");

	URadialPicker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.Event AcceptOption
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialPicker_C::Event_AcceptOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.Event AcceptOption");

	URadialPicker_C_Event_AcceptOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.Event CancelPicker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialPicker_C::Event_CancelPicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.Event CancelPicker");

	URadialPicker_C_Event_CancelPicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.ClosePicker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URadialPicker_C::ClosePicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.ClosePicker");

	URadialPicker_C_ClosePicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.AcceptChosenOption
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PickerOption                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::AcceptChosenOption(int PickerOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.AcceptChosenOption");

	URadialPicker_C_AcceptChosenOption_Params params;
	params.PickerOption = PickerOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPicker.RadialPicker_C.ExecuteUbergraph_RadialPicker
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URadialPicker_C::ExecuteUbergraph_RadialPicker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPicker.RadialPicker_C.ExecuteUbergraph_RadialPicker");

	URadialPicker_C_ExecuteUbergraph_RadialPicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
