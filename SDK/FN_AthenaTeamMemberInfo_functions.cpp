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

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ShowPlayerInfo
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaTeamMemberInfo_C::ShowPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ShowPlayerInfo");

	UAthenaTeamMemberInfo_C_ShowPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ShowConnecting
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaTeamMemberInfo_C::ShowConnecting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ShowConnecting");

	UAthenaTeamMemberInfo_C_ShowConnecting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetReviving
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Reviving                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetReviving(bool Reviving)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetReviving");

	UAthenaTeamMemberInfo_C_SetReviving_Params params;
	params.Reviving = Reviving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdatePlayerName
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaTeamMemberInfo_C::UpdatePlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdatePlayerName");

	UAthenaTeamMemberInfo_C_UpdatePlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDBNO
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DBNO                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetDBNO(bool DBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDBNO");

	UAthenaTeamMemberInfo_C_SetDBNO_Params params;
	params.DBNO = DBNO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDead
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Dead                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetDead(bool Dead)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDead");

	UAthenaTeamMemberInfo_C_SetDead_Params params;
	params.Dead = Dead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdatePS
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*  InPlayerState                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaTeamMemberInfo_C::UpdatePS(class AFortPlayerStateAthena* InPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdatePS");

	UAthenaTeamMemberInfo_C_UpdatePS_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetShield
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetShield(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetShield");

	UAthenaTeamMemberInfo_C_SetShield_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetHealth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetHealth(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetHealth");

	UAthenaTeamMemberInfo_C_SetHealth_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaTeamMemberInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Construct");

	UAthenaTeamMemberInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ExecuteUbergraph_AthenaTeamMemberInfo
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaTeamMemberInfo_C::ExecuteUbergraph_AthenaTeamMemberInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ExecuteUbergraph_AthenaTeamMemberInfo");

	UAthenaTeamMemberInfo_C_ExecuteUbergraph_AthenaTeamMemberInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
