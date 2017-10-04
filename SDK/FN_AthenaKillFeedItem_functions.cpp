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

// Function AthenaKillFeedItem.AthenaKillFeedItem_C.SetText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_Parm)

void UAthenaKillFeedItem_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaKillFeedItem.AthenaKillFeedItem_C.SetText");

	UAthenaKillFeedItem_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
