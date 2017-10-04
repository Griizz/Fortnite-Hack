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

// Function ActiveModifierItemHUD.ActiveModifierItemHUD_C.AssignIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateBrush             inIconSlateBrush               (CPF_Parm)

void UActiveModifierItemHUD_C::AssignIcon(const struct FSlateBrush& inIconSlateBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActiveModifierItemHUD.ActiveModifierItemHUD_C.AssignIcon");

	UActiveModifierItemHUD_C_AssignIcon_Params params;
	params.inIconSlateBrush = inIconSlateBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
