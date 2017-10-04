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

// Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALoginCamera_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.UserConstructionScript");

	ALoginCamera_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.OnActivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ALoginCamera_Blueprint_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.OnActivated");

	ALoginCamera_Blueprint_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.ExecuteUbergraph_LoginCamera_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALoginCamera_Blueprint_C::ExecuteUbergraph_LoginCamera_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.ExecuteUbergraph_LoginCamera_Blueprint");

	ALoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
