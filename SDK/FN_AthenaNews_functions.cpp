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

// Function AthenaNews.AthenaNews_C.Get_RegionNews_Visibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UAthenaNews_C::Get_RegionNews_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNews.AthenaNews_C.Get_RegionNews_Visibility");

	UAthenaNews_C_Get_RegionNews_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaNews.AthenaNews_C.Get_PlatformNews_Visibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UAthenaNews_C::Get_PlatformNews_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNews.AthenaNews_C.Get_PlatformNews_Visibility");

	UAthenaNews_C_Get_PlatformNews_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaNews.AthenaNews_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAthenaNews_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNews.AthenaNews_C.Construct");

	UAthenaNews_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaNews.AthenaNews_C.ExecuteUbergraph_AthenaNews
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAthenaNews_C::ExecuteUbergraph_AthenaNews(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNews.AthenaNews_C.ExecuteUbergraph_AthenaNews");

	UAthenaNews_C_ExecuteUbergraph_AthenaNews_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
