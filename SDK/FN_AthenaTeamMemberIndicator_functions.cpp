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

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team Reviving Changed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<bool>                   Team_Reviving                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UAthenaTeamMemberIndicator_C::On_Team_Reviving_Changed(TArray<bool>* Team_Reviving)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team Reviving Changed");

	UAthenaTeamMemberIndicator_C_On_Team_Reviving_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Team_Reviving != nullptr)
		*Team_Reviving = params.Team_Reviving;
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team DBNO Changed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<bool>                   DBNOStates                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UAthenaTeamMemberIndicator_C::On_Team_DBNO_Changed(TArray<bool>* DBNOStates)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team DBNO Changed");

	UAthenaTeamMemberIndicator_C_On_Team_DBNO_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DBNOStates != nullptr)
		*DBNOStates = params.DBNOStates;
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaTeamMemberIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Construct");

	UAthenaTeamMemberIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaTeamMemberIndicator_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Tick");

	UAthenaTeamMemberIndicator_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaTeamMemberIndicator_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Destruct");

	UAthenaTeamMemberIndicator_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Update Pawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaTeamMemberIndicator_C::Update_Pawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Update Pawn");

	UAthenaTeamMemberIndicator_C_Update_Pawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.ExecuteUbergraph_AthenaTeamMemberIndicator
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaTeamMemberIndicator_C::ExecuteUbergraph_AthenaTeamMemberIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.ExecuteUbergraph_AthenaTeamMemberIndicator");

	UAthenaTeamMemberIndicator_C_ExecuteUbergraph_AthenaTeamMemberIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
