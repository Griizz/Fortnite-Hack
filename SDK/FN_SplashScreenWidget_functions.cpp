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

// Function SplashScreenWidget.SplashScreenWidget_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply USplashScreenWidget_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.OnFocusReceived");

	USplashScreenWidget_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SplashScreenWidget.SplashScreenWidget_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply USplashScreenWidget_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.OnMouseButtonDown");

	USplashScreenWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SplashScreenWidget.SplashScreenWidget_C.RelinquishInputFocus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USplashScreenWidget_C::RelinquishInputFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.RelinquishInputFocus");

	USplashScreenWidget_C_RelinquishInputFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplashScreenWidget.SplashScreenWidget_C.SetInputFocus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USplashScreenWidget_C::SetInputFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.SetInputFocus");

	USplashScreenWidget_C_SetInputFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplashScreenWidget.SplashScreenWidget_C.OnInputMethodChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USplashScreenWidget_C::OnInputMethodChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.OnInputMethodChanged");

	USplashScreenWidget_C_OnInputMethodChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplashScreenWidget.SplashScreenWidget_C.OnGameBootableInviteReceived
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int*                           UserIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USplashScreenWidget_C::OnGameBootableInviteReceived(int* UserIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.OnGameBootableInviteReceived");

	USplashScreenWidget_C_OnGameBootableInviteReceived_Params params;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplashScreenWidget.SplashScreenWidget_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USplashScreenWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.OnActivated");

	USplashScreenWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplashScreenWidget.SplashScreenWidget_C.ExecuteUbergraph_SplashScreenWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USplashScreenWidget_C::ExecuteUbergraph_SplashScreenWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.ExecuteUbergraph_SplashScreenWidget");

	USplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
