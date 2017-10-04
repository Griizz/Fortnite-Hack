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

// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Teleport
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayCueParameters  GameplayCueParameters          (CPF_Parm)
// bool                           TeleportOut_                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Default_PlayLength             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_Parent_C::Teleport(const struct FGameplayCueParameters& GameplayCueParameters, bool TeleportOut_, float Default_PlayLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Teleport");

	APlayerPawn_Generic_Parent_C_Teleport_Params params;
	params.GameplayCueParameters = GameplayCueParameters;
	params.TeleportOut_ = TeleportOut_;
	params.Default_PlayLength = Default_PlayLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerPawn_Generic_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.UserConstructionScript");

	APlayerPawn_Generic_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.GameplayCue.Teleport.Out
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)

void APlayerPawn_Generic_Parent_C::GameplayCue_Teleport_Out(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.GameplayCue.Teleport.Out");

	APlayerPawn_Generic_Parent_C_GameplayCue_Teleport_Out_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APlayerPawn_Generic_Parent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReceiveBeginPlay");

	APlayerPawn_Generic_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.GameplayCue.Teleport.In
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm)

void APlayerPawn_Generic_Parent_C::GameplayCue_Teleport_In(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.GameplayCue.Teleport.In");

	APlayerPawn_Generic_Parent_C_GameplayCue_Teleport_In_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Generic_Parent
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APlayerPawn_Generic_Parent_C::ExecuteUbergraph_PlayerPawn_Generic_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Generic_Parent");

	APlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
