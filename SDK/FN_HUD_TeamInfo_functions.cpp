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

// Function HUD_TeamInfo.HUD_TeamInfo_C.HandleTeamHitInfoChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<float>                  HealthFractions                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<float>                  ShieldFractions                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UHUD_TeamInfo_C::HandleTeamHitInfoChanged(TArray<float>* HealthFractions, TArray<float>* ShieldFractions)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamInfo.HUD_TeamInfo_C.HandleTeamHitInfoChanged");

	UHUD_TeamInfo_C_HandleTeamHitInfoChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthFractions != nullptr)
		*HealthFractions = params.HealthFractions;
	if (ShieldFractions != nullptr)
		*ShieldFractions = params.ShieldFractions;
}


// Function HUD_TeamInfo.HUD_TeamInfo_C.ClearContents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_TeamInfo_C::ClearContents()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamInfo.HUD_TeamInfo_C.ClearContents");

	UHUD_TeamInfo_C_ClearContents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamInfo.HUD_TeamInfo_C.AppendTeamMember
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UHUD_TeamInfo_C::AppendTeamMember(struct FFortTeamMemberInfo* TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamInfo.HUD_TeamInfo_C.AppendTeamMember");

	UHUD_TeamInfo_C_AppendTeamMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamMemberInfo != nullptr)
		*TeamMemberInfo = params.TeamMemberInfo;
}


// Function HUD_TeamInfo.HUD_TeamInfo_C.ShiftTeamMembers
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamInfo_C::ShiftTeamMembers(int Index, struct FFortTeamMemberInfo* TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamInfo.HUD_TeamInfo_C.ShiftTeamMembers");

	UHUD_TeamInfo_C_ShiftTeamMembers_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamMemberInfo != nullptr)
		*TeamMemberInfo = params.TeamMemberInfo;
}


// Function HUD_TeamInfo.HUD_TeamInfo_C.HandleTeamMemberChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     Member_Info                    (CPF_Parm)

void UHUD_TeamInfo_C::HandleTeamMemberChanged(const struct FFortTeamMemberInfo& Member_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamInfo.HUD_TeamInfo_C.HandleTeamMemberChanged");

	UHUD_TeamInfo_C_HandleTeamMemberChanged_Params params;
	params.Member_Info = Member_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamInfo.HUD_TeamInfo_C.HandleTeamMemberRemoved
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Member_Index                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamInfo_C::HandleTeamMemberRemoved(int Member_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamInfo.HUD_TeamInfo_C.HandleTeamMemberRemoved");

	UHUD_TeamInfo_C_HandleTeamMemberRemoved_Params params;
	params.Member_Index = Member_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamInfo.HUD_TeamInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_TeamInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamInfo.HUD_TeamInfo_C.Construct");

	UHUD_TeamInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamInfo.HUD_TeamInfo_C.HandlePartyLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_TeamInfo_C::HandlePartyLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamInfo.HUD_TeamInfo_C.HandlePartyLeft");

	UHUD_TeamInfo_C_HandlePartyLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamInfo.HUD_TeamInfo_C.ExecuteUbergraph_HUD_TeamInfo
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamInfo_C::ExecuteUbergraph_HUD_TeamInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamInfo.HUD_TeamInfo_C.ExecuteUbergraph_HUD_TeamInfo");

	UHUD_TeamInfo_C_ExecuteUbergraph_HUD_TeamInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
