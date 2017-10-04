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

// Function XpBarToolTip.XpBarToolTip_C.GetBodyText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UXpBarToolTip_C::GetBodyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBarToolTip.XpBarToolTip_C.GetBodyText");

	UXpBarToolTip_C_GetBodyText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBarToolTip.XpBarToolTip_C.GetRestedXPText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UXpBarToolTip_C::GetRestedXPText()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBarToolTip.XpBarToolTip_C.GetRestedXPText");

	UXpBarToolTip_C_GetRestedXPText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBarToolTip.XpBarToolTip_C.GetBoostXPText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UXpBarToolTip_C::GetBoostXPText()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBarToolTip.XpBarToolTip_C.GetBoostXPText");

	UXpBarToolTip_C_GetBoostXPText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBarToolTip.XpBarToolTip_C.GetCommanderXPText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UXpBarToolTip_C::GetCommanderXPText()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBarToolTip.XpBarToolTip_C.GetCommanderXPText");

	UXpBarToolTip_C_GetCommanderXPText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBarToolTip.XpBarToolTip_C.GetHeaderText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UXpBarToolTip_C::GetHeaderText()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBarToolTip.XpBarToolTip_C.GetHeaderText");

	UXpBarToolTip_C_GetHeaderText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
