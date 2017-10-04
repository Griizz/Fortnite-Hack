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

// Function ZoneDetails.ZoneDetails_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UZoneDetails_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneDetails.ZoneDetails_C.Update");

	UZoneDetails_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneDetails.ZoneDetails_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UZoneDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneDetails.ZoneDetails_C.Construct");

	UZoneDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneDetails.ZoneDetails_C.ExecuteUbergraph_ZoneDetails
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UZoneDetails_C::ExecuteUbergraph_ZoneDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneDetails.ZoneDetails_C.ExecuteUbergraph_ZoneDetails");

	UZoneDetails_C_ExecuteUbergraph_ZoneDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
