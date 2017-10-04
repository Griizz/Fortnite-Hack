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

// Function StatsListItemWIdget.StatsListItemWIdget_C.GetListItemTooltipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UStatsListItemWIdget_C::GetListItemTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.GetListItemTooltipWidget");

	UStatsListItemWIdget_C_GetListItemTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.SetStatIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateBrush             NewParam                       (CPF_Parm)

void UStatsListItemWIdget_C::SetStatIcon(const struct FSlateBrush& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.SetStatIcon");

	UStatsListItemWIdget_C_SetStatIcon_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBuffArrows
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute   CurrentAttribute               (CPF_Parm)

void UStatsListItemWIdget_C::UpdateBuffArrows(const struct FFortDisplayAttribute& CurrentAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBuffArrows");

	UStatsListItemWIdget_C_UpdateBuffArrows_Params params;
	params.CurrentAttribute = CurrentAttribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBasicPairLabel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute   CurrentAttribute               (CPF_Parm)

void UStatsListItemWIdget_C::UpdateBasicPairLabel(const struct FFortDisplayAttribute& CurrentAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateBasicPairLabel");

	UStatsListItemWIdget_C_UpdateBasicPairLabel_Params params;
	params.CurrentAttribute = CurrentAttribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateValueText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute   CurrentAttribute               (CPF_Parm)

void UStatsListItemWIdget_C::UpdateValueText(const struct FFortDisplayAttribute& CurrentAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateValueText");

	UStatsListItemWIdget_C_UpdateValueText_Params params;
	params.CurrentAttribute = CurrentAttribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateType
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute   CurrentAttribute               (CPF_Parm)

void UStatsListItemWIdget_C::UpdateType(const struct FFortDisplayAttribute& CurrentAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateType");

	UStatsListItemWIdget_C_UpdateType_Params params;
	params.CurrentAttribute = CurrentAttribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateColors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortDisplayAttribute   CurrentAttribute               (CPF_Parm)

void UStatsListItemWIdget_C::UpdateColors(const struct FFortDisplayAttribute& CurrentAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.UpdateColors");

	UStatsListItemWIdget_C_UpdateColors_Params params;
	params.CurrentAttribute = CurrentAttribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UStatsListItemWIdget_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.Update");

	UStatsListItemWIdget_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.DisplayAttributeChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatsListItemWIdget_C::DisplayAttributeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.DisplayAttributeChanged");

	UStatsListItemWIdget_C_DisplayAttributeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewStarted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatsListItemWIdget_C::PreviewStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewStarted");

	UStatsListItemWIdget_C_PreviewStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewEnded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatsListItemWIdget_C::PreviewEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.PreviewEnded");

	UStatsListItemWIdget_C_PreviewEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.ValueChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         Delta                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatsListItemWIdget_C::ValueChanged(float* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.ValueChanged");

	UStatsListItemWIdget_C_ValueChanged_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UStatsListItemWIdget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.Construct");

	UStatsListItemWIdget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListItemWIdget.StatsListItemWIdget_C.ExecuteUbergraph_StatsListItemWIdget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStatsListItemWIdget_C::ExecuteUbergraph_StatsListItemWIdget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatsListItemWIdget.StatsListItemWIdget_C.ExecuteUbergraph_StatsListItemWIdget");

	UStatsListItemWIdget_C_ExecuteUbergraph_StatsListItemWIdget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
