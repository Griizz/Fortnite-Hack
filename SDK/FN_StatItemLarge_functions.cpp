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

// Function StatItemLarge.StatItemLarge_C.UpdateValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CurrentValue                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFortStatValueDisplayType      DisplayType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFortBuffState                 BuffState                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatItemLarge_C::UpdateValue(float NewValue, float CurrentValue, EFortStatValueDisplayType DisplayType, EFortBuffState BuffState)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatItemLarge.StatItemLarge_C.UpdateValue");

	UStatItemLarge_C_UpdateValue_Params params;
	params.NewValue = NewValue;
	params.CurrentValue = CurrentValue;
	params.DisplayType = DisplayType;
	params.BuffState = BuffState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatItemLarge.StatItemLarge_C.UpdateIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatItemLarge_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatItemLarge.StatItemLarge_C.UpdateIcon");

	UStatItemLarge_C_UpdateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatItemLarge.StatItemLarge_C.UpdateDisplayData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatItemLarge_C::UpdateDisplayData()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatItemLarge.StatItemLarge_C.UpdateDisplayData");

	UStatItemLarge_C_UpdateDisplayData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatItemLarge.StatItemLarge_C.GetLocalPlayerId
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl        LocalPlayerNetId               (CPF_Parm, CPF_OutParm)

void UStatItemLarge_C::GetLocalPlayerId(struct FUniqueNetIdRepl* LocalPlayerNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatItemLarge.StatItemLarge_C.GetLocalPlayerId");

	UStatItemLarge_C_GetLocalPlayerId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalPlayerNetId != nullptr)
		*LocalPlayerNetId = params.LocalPlayerNetId;
}


// Function StatItemLarge.StatItemLarge_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatItemLarge_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatItemLarge.StatItemLarge_C.Construct");

	UStatItemLarge_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatItemLarge.StatItemLarge_C.DisplayAttributeChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatItemLarge_C::DisplayAttributeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatItemLarge.StatItemLarge_C.DisplayAttributeChanged");

	UStatItemLarge_C_DisplayAttributeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatItemLarge.StatItemLarge_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatItemLarge_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatItemLarge.StatItemLarge_C.PreConstruct");

	UStatItemLarge_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatItemLarge.StatItemLarge_C.PreviewStarted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatItemLarge_C::PreviewStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatItemLarge.StatItemLarge_C.PreviewStarted");

	UStatItemLarge_C_PreviewStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatItemLarge.StatItemLarge_C.PreviewEnded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatItemLarge_C::PreviewEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatItemLarge.StatItemLarge_C.PreviewEnded");

	UStatItemLarge_C_PreviewEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatItemLarge.StatItemLarge_C.ValueChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         Delta                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatItemLarge_C::ValueChanged(float* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatItemLarge.StatItemLarge_C.ValueChanged");

	UStatItemLarge_C_ValueChanged_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatItemLarge.StatItemLarge_C.ExecuteUbergraph_StatItemLarge
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatItemLarge_C::ExecuteUbergraph_StatItemLarge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatItemLarge.StatItemLarge_C.ExecuteUbergraph_StatItemLarge");

	UStatItemLarge_C_ExecuteUbergraph_StatItemLarge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
