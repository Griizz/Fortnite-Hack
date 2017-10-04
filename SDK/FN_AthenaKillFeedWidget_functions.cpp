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

// Function AthenaKillFeedWidget.AthenaKillFeedWidget_C.UpdateKillFeed
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAthenaKillFeedWidget_C::UpdateKillFeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaKillFeedWidget.AthenaKillFeedWidget_C.UpdateKillFeed");

	UAthenaKillFeedWidget_C_UpdateKillFeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaKillFeedWidget.AthenaKillFeedWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaKillFeedWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaKillFeedWidget.AthenaKillFeedWidget_C.Construct");

	UAthenaKillFeedWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaKillFeedWidget.AthenaKillFeedWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaKillFeedWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaKillFeedWidget.AthenaKillFeedWidget_C.Destruct");

	UAthenaKillFeedWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaKillFeedWidget.AthenaKillFeedWidget_C.ExecuteUbergraph_AthenaKillFeedWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaKillFeedWidget_C::ExecuteUbergraph_AthenaKillFeedWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaKillFeedWidget.AthenaKillFeedWidget_C.ExecuteUbergraph_AthenaKillFeedWidget");

	UAthenaKillFeedWidget_C_ExecuteUbergraph_AthenaKillFeedWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
