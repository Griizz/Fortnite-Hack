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

// Function InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepRight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInterfacePlayerPawn_C::FootStepRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepRight");

	UInterfacePlayerPawn_C_FootStepRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepLeft
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInterfacePlayerPawn_C::FootStepLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepLeft");

	UInterfacePlayerPawn_C_FootStepLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.Melee_Effect_Color
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Melee_Color_Set                (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UInterfacePlayerPawn_C::Melee_Effect_Color(struct FVector* Melee_Color_Set)
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfacePlayerPawn.InterfacePlayerPawn_C.Melee_Effect_Color");

	UInterfacePlayerPawn_C_Melee_Effect_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Melee_Color_Set != nullptr)
		*Melee_Color_Set = params.Melee_Color_Set;
}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInterfacePlayerPawn_C::MeleeSwingLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingLeft");

	UInterfacePlayerPawn_C_MeleeSwingLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingRight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInterfacePlayerPawn_C::MeleeSwingRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingRight");

	UInterfacePlayerPawn_C_MeleeSwingRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
