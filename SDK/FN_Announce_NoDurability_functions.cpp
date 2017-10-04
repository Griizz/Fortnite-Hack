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

// Function Announce_NoDurability.Announce_NoDurability_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAnnounce_NoDurability_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_NoDurability.Announce_NoDurability_C.UserConstructionScript");

	AAnnounce_NoDurability_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_NoDurability.Announce_NoDurability_C.OnClientAnnouncementStart
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAnnounce_NoDurability_C::OnClientAnnouncementStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_NoDurability.Announce_NoDurability_C.OnClientAnnouncementStart");

	AAnnounce_NoDurability_C_OnClientAnnouncementStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_NoDurability.Announce_NoDurability_C.ExecuteUbergraph_Announce_NoDurability
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAnnounce_NoDurability_C::ExecuteUbergraph_Announce_NoDurability(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_NoDurability.Announce_NoDurability_C.ExecuteUbergraph_Announce_NoDurability");

	AAnnounce_NoDurability_C_ExecuteUbergraph_Announce_NoDurability_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
