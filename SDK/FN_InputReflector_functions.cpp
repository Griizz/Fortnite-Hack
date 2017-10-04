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

// Function InputReflector.InputReflector_C.OnButtonAdded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton**          AddedButton                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FCommonInputActionHandlerData* Data                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UInputReflector_C::OnButtonAdded(class UCommonButton** AddedButton, struct FCommonInputActionHandlerData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflector.InputReflector_C.OnButtonAdded");

	UInputReflector_C_OnButtonAdded_Params params;
	params.AddedButton = AddedButton;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflector.InputReflector_C.ClearButtons
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UInputReflector_C::ClearButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflector.InputReflector_C.ClearButtons");

	UInputReflector_C_ClearButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflector.InputReflector_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UInputReflector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflector.InputReflector_C.Construct");

	UInputReflector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflector.InputReflector_C.ExecuteUbergraph_InputReflector
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInputReflector_C::ExecuteUbergraph_InputReflector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflector.InputReflector_C.ExecuteUbergraph_InputReflector");

	UInputReflector_C_ExecuteUbergraph_InputReflector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
