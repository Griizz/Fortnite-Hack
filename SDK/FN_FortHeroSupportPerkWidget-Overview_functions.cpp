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

// Function FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C.OnHeroUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFortHeroSupportPerkWidget_Overview_C::OnHeroUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C.OnHeroUpdated");

	UFortHeroSupportPerkWidget_Overview_C_OnHeroUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C.OnSupportTypeUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFortHeroSupportPerkWidget_Overview_C::OnSupportTypeUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C.OnSupportTypeUpdated");

	UFortHeroSupportPerkWidget_Overview_C_OnSupportTypeUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C.ExecuteUbergraph_FortHeroSupportPerkWidget-Overview
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFortHeroSupportPerkWidget_Overview_C::ExecuteUbergraph_FortHeroSupportPerkWidget_Overview(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C.ExecuteUbergraph_FortHeroSupportPerkWidget-Overview");

	UFortHeroSupportPerkWidget_Overview_C_ExecuteUbergraph_FortHeroSupportPerkWidget_Overview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
