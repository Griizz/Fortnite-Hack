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

// Function ToastDisplayArea.ToastDisplayArea_C.AttemptDisplayNextToast
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UToastDisplayArea_C::AttemptDisplayNextToast()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastDisplayArea.ToastDisplayArea_C.AttemptDisplayNextToast");

	UToastDisplayArea_C_AttemptDisplayNextToast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastDisplayArea.ToastDisplayArea_C.RegisterToastHandler
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UToastDisplayArea_C::RegisterToastHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastDisplayArea.ToastDisplayArea_C.RegisterToastHandler");

	UToastDisplayArea_C_RegisterToastHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastDisplayArea.ToastDisplayArea_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UToastDisplayArea_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastDisplayArea.ToastDisplayArea_C.Construct");

	UToastDisplayArea_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastDisplayArea.ToastDisplayArea_C.HandleNewToastAvailable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UToastDisplayArea_C::HandleNewToastAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastDisplayArea.ToastDisplayArea_C.HandleNewToastAvailable");

	UToastDisplayArea_C_HandleNewToastAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastDisplayArea.ToastDisplayArea_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UToastDisplayArea_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastDisplayArea.ToastDisplayArea_C.Destruct");

	UToastDisplayArea_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastDisplayArea.ToastDisplayArea_C.BndEvt__ToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature
// (FUNC_BlueprintEvent)

void UToastDisplayArea_C::BndEvt__ToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastDisplayArea.ToastDisplayArea_C.BndEvt__ToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature");

	UToastDisplayArea_C_BndEvt__ToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastDisplayArea.ToastDisplayArea_C.BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_8_OnFinishedToast__DelegateSignature
// (FUNC_BlueprintEvent)

void UToastDisplayArea_C::BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_8_OnFinishedToast__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastDisplayArea.ToastDisplayArea_C.BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_8_OnFinishedToast__DelegateSignature");

	UToastDisplayArea_C_BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_8_OnFinishedToast__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastDisplayArea.ToastDisplayArea_C.ExecuteUbergraph_ToastDisplayArea
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UToastDisplayArea_C::ExecuteUbergraph_ToastDisplayArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastDisplayArea.ToastDisplayArea_C.ExecuteUbergraph_ToastDisplayArea");

	UToastDisplayArea_C_ExecuteUbergraph_ToastDisplayArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
