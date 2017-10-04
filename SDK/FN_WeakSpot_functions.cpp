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

// Function WeakSpot.WeakSpot_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWeakSpot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeakSpot.WeakSpot_C.UserConstructionScript");

	AWeakSpot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.ScaleDownParticleTL__FinishedFunc
// (FUNC_BlueprintEvent)

void AWeakSpot_C::ScaleDownParticleTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeakSpot.WeakSpot_C.ScaleDownParticleTL__FinishedFunc");

	AWeakSpot_C_ScaleDownParticleTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.ScaleDownParticleTL__UpdateFunc
// (FUNC_BlueprintEvent)

void AWeakSpot_C::ScaleDownParticleTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeakSpot.WeakSpot_C.ScaleDownParticleTL__UpdateFunc");

	AWeakSpot_C_ScaleDownParticleTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.OnStartDirectionEffect
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWeakSpot_C::OnStartDirectionEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeakSpot.WeakSpot_C.OnStartDirectionEffect");

	AWeakSpot_C_OnStartDirectionEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.OnHitCrack
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWeakSpot_C::OnHitCrack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeakSpot.WeakSpot_C.OnHitCrack");

	AWeakSpot_C_OnHitCrack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.OnFadeOut
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AWeakSpot_C::OnFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeakSpot.WeakSpot_C.OnFadeOut");

	AWeakSpot_C_OnFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.HideMesh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWeakSpot_C::HideMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeakSpot.WeakSpot_C.HideMesh");

	AWeakSpot_C_HideMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.ExecuteUbergraph_WeakSpot
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeakSpot_C::ExecuteUbergraph_WeakSpot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeakSpot.WeakSpot_C.ExecuteUbergraph_WeakSpot");

	AWeakSpot_C_ExecuteUbergraph_WeakSpot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
