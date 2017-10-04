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

// Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.AlertPlayer
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText*                  DetailText                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAthenaPlayerActionAlert_C::AlertPlayer(struct FText* DetailText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.AlertPlayer");

	UAthenaPlayerActionAlert_C_AlertPlayer_Params params;
	params.DetailText = DetailText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.OnAnimationFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaPlayerActionAlert_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.OnAnimationFinished");

	UAthenaPlayerActionAlert_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.ExecuteUbergraph_AthenaPlayerActionAlert
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaPlayerActionAlert_C::ExecuteUbergraph_AthenaPlayerActionAlert(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.ExecuteUbergraph_AthenaPlayerActionAlert");

	UAthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
