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

// Function EulaTab.EulaTab_C.Activate Scroll Box
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEulaTab_C::Activate_Scroll_Box()
{
	static auto fn = UObject::FindObject<UFunction>("Function EulaTab.EulaTab_C.Activate Scroll Box");

	UEulaTab_C_Activate_Scroll_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EulaTab.EulaTab_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEulaTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EulaTab.EulaTab_C.Construct");

	UEulaTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EulaTab.EulaTab_C.ExecuteUbergraph_EulaTab
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEulaTab_C::ExecuteUbergraph_EulaTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EulaTab.EulaTab_C.ExecuteUbergraph_EulaTab");

	UEulaTab_C_ExecuteUbergraph_EulaTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
