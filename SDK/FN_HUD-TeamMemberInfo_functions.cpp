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

// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.SetHealth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamMemberInfo_C::SetHealth(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.SetHealth");

	UHUD_TeamMemberInfo_C_SetHealth_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     UpdatedMemberInfo              (CPF_Parm)

void UHUD_TeamMemberInfo_C::Update(const struct FFortTeamMemberInfo& UpdatedMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Update");

	UHUD_TeamMemberInfo_C_Update_Params params;
	params.UpdatedMemberInfo = UpdatedMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_TeamMemberInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Construct");

	UHUD_TeamMemberInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.ExecuteUbergraph_HUD-TeamMemberInfo
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamMemberInfo_C::ExecuteUbergraph_HUD_TeamMemberInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.ExecuteUbergraph_HUD-TeamMemberInfo");

	UHUD_TeamMemberInfo_C_ExecuteUbergraph_HUD_TeamMemberInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
