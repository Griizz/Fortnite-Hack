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

// Function MusicManager.MusicManager_C.ResetMusicBools
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMusicManager_C::ResetMusicBools()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.ResetMusicBools");

	AMusicManager_C_ResetMusicBools_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMusicManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.UserConstructionScript");

	AMusicManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.OnDayPhaseChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortDayPhase>*    CurrentDayPhase                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EFortDayPhase>*    PreviousDayPhase               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool*                          bAtCreation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AMusicManager_C::OnDayPhaseChanged(TEnumAsByte<EFortDayPhase>* CurrentDayPhase, TEnumAsByte<EFortDayPhase>* PreviousDayPhase, bool* bAtCreation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.OnDayPhaseChanged");

	AMusicManager_C_OnDayPhaseChanged_Params params;
	params.CurrentDayPhase = CurrentDayPhase;
	params.PreviousDayPhase = PreviousDayPhase;
	params.bAtCreation = bAtCreation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.OnUpdateMusic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMusicManager_C::OnUpdateMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.OnUpdateMusic");

	AMusicManager_C_OnUpdateMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.PlayAmbientMusic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMusicManager_C::PlayAmbientMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.PlayAmbientMusic");

	AMusicManager_C_PlayAmbientMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AMusicManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.ReceiveBeginPlay");

	AMusicManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.StartMusic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMusicManager_C::StartMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.StartMusic");

	AMusicManager_C_StartMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.StopMusic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMusicManager_C::StopMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.StopMusic");

	AMusicManager_C_StopMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.ExecuteUbergraph_MusicManager
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AMusicManager_C::ExecuteUbergraph_MusicManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.ExecuteUbergraph_MusicManager");

	AMusicManager_C_ExecuteUbergraph_MusicManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
