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

// Function DeathWidget.DeathWidget_C.ShowExtraLivesText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDeathWidget_C::ShowExtraLivesText()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget.DeathWidget_C.ShowExtraLivesText");

	UDeathWidget_C_ShowExtraLivesText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathWidget.DeathWidget_C.SetRespawnTimerText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDeathWidget_C::SetRespawnTimerText()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget.DeathWidget_C.SetRespawnTimerText");

	UDeathWidget_C_SetRespawnTimerText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathWidget.DeathWidget_C.OnRespawnTimerUpdate
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDeathWidget_C::OnRespawnTimerUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget.DeathWidget_C.OnRespawnTimerUpdate");

	UDeathWidget_C_OnRespawnTimerUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathWidget.DeathWidget_C.ConfigureRespawnTimer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ServerRespawnTime              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ServerResurrectTime            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDeathWidget_C::ConfigureRespawnTimer(float ServerRespawnTime, float ServerResurrectTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget.DeathWidget_C.ConfigureRespawnTimer");

	UDeathWidget_C_ConfigureRespawnTimer_Params params;
	params.ServerRespawnTime = ServerRespawnTime;
	params.ServerResurrectTime = ServerResurrectTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathWidget.DeathWidget_C.OnPawnDied
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport  DeathReport                    (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UDeathWidget_C::OnPawnDied(struct FFortPlayerDeathReport* DeathReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget.DeathWidget_C.OnPawnDied");

	UDeathWidget_C_OnPawnDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeathReport != nullptr)
		*DeathReport = params.DeathReport;
}


// Function DeathWidget.DeathWidget_C.OnPawnSpawned
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDeathWidget_C::OnPawnSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget.DeathWidget_C.OnPawnSpawned");

	UDeathWidget_C_OnPawnSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathWidget.DeathWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDeathWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget.DeathWidget_C.Construct");

	UDeathWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathWidget.DeathWidget_C.ExecuteUbergraph_DeathWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDeathWidget_C::ExecuteUbergraph_DeathWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget.DeathWidget_C.ExecuteUbergraph_DeathWidget");

	UDeathWidget_C_ExecuteUbergraph_DeathWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
