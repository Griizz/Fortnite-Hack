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

// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.GetKeyBindingAction_Gamepad
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   KeyBindingAction               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaQuickBarSlot_C::GetKeyBindingAction_Gamepad(struct FName* KeyBindingAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.GetKeyBindingAction_Gamepad");

	UAthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KeyBindingAction != nullptr)
		*KeyBindingAction = params.KeyBindingAction;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
