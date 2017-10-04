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

// Function WeaponTooltipDPSWidget.WeaponTooltipDPSWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWeaponTooltipDPSWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponTooltipDPSWidget.WeaponTooltipDPSWidget_C.Construct");

	UWeaponTooltipDPSWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponTooltipDPSWidget.WeaponTooltipDPSWidget_C.ExecuteUbergraph_WeaponTooltipDPSWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponTooltipDPSWidget_C::ExecuteUbergraph_WeaponTooltipDPSWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponTooltipDPSWidget.WeaponTooltipDPSWidget_C.ExecuteUbergraph_WeaponTooltipDPSWidget");

	UWeaponTooltipDPSWidget_C_ExecuteUbergraph_WeaponTooltipDPSWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
