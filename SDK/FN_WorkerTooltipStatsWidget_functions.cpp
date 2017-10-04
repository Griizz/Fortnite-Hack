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

// Function WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWorkerTooltipStatsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C.Construct");

	UWorkerTooltipStatsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWorkerTooltipStatsWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C.Tick");

	UWorkerTooltipStatsWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C.On Worker Preview State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWorkerTooltipStatsWidget_C::On_Worker_Preview_State_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C.On Worker Preview State Changed");

	UWorkerTooltipStatsWidget_C_On_Worker_Preview_State_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C.ExecuteUbergraph_WorkerTooltipStatsWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWorkerTooltipStatsWidget_C::ExecuteUbergraph_WorkerTooltipStatsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C.ExecuteUbergraph_WorkerTooltipStatsWidget");

	UWorkerTooltipStatsWidget_C_ExecuteUbergraph_WorkerTooltipStatsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
