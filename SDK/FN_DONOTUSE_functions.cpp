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

// Function DONOTUSE.DONOTUSE_C.Refresh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDONOTUSE_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DONOTUSE.DONOTUSE_C.Refresh");

	UDONOTUSE_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DONOTUSE.DONOTUSE_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDONOTUSE_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DONOTUSE.DONOTUSE_C.Construct");

	UDONOTUSE_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DONOTUSE.DONOTUSE_C.ExecuteUbergraph_DONOTUSE
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDONOTUSE_C::ExecuteUbergraph_DONOTUSE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DONOTUSE.DONOTUSE_C.ExecuteUbergraph_DONOTUSE");

	UDONOTUSE_C_ExecuteUbergraph_DONOTUSE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
