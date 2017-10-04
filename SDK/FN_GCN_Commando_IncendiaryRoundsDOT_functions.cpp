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

// Function GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGCN_Commando_IncendiaryRoundsDOT_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.UserConstructionScript");

	AGCN_Commando_IncendiaryRoundsDOT_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AGCN_Commando_IncendiaryRoundsDOT_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.ReceiveDestroyed");

	AGCN_Commando_IncendiaryRoundsDOT_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGCN_Commando_IncendiaryRoundsDOT_C::ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT");

	AGCN_Commando_IncendiaryRoundsDOT_C_ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
