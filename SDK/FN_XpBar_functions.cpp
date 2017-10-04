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

// Function XpBar.XpBar_C.ScaledCommanderBalance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            LeveXP                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InInt2                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UXpBar_C::ScaledCommanderBalance(int LeveXP, int InInt2)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBar.XpBar_C.ScaledCommanderBalance");

	UXpBar_C_ScaledCommanderBalance_Params params;
	params.LeveXP = LeveXP;
	params.InInt2 = InInt2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBar.XpBar_C.ScaledRestBalance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            AmountToLevel                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UXpBar_C::ScaledRestBalance(int AmountToLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBar.XpBar_C.ScaledRestBalance");

	UXpBar_C_ScaledRestBalance_Params params;
	params.AmountToLevel = AmountToLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBar.XpBar_C.ScaledBoostBalance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            AmountToLevel                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UXpBar_C::ScaledBoostBalance(int AmountToLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBar.XpBar_C.ScaledBoostBalance");

	UXpBar_C_ScaledBoostBalance_Params params;
	params.AmountToLevel = AmountToLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBar.XpBar_C.GetExperienceToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UXpBar_C::GetExperienceToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBar.XpBar_C.GetExperienceToolTipWidget");

	UXpBar_C_GetExperienceToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XpBar.XpBar_C.Update Xp Bar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo  Account_Info                   (CPF_Parm)

void UXpBar_C::Update_Xp_Bar(const struct FFortPublicAccountInfo& Account_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBar.XpBar_C.Update Xp Bar");

	UXpBar_C_Update_Xp_Bar_Params params;
	params.Account_Info = Account_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBar.XpBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UXpBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBar.XpBar_C.Construct");

	UXpBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBar.XpBar_C.Account Info Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo  NewInfo                        (CPF_Parm)

void UXpBar_C::Account_Info_Changed(const struct FFortPublicAccountInfo& NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBar.XpBar_C.Account Info Changed");

	UXpBar_C_Account_Info_Changed_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBar.XpBar_C.Xp Boost Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            BoostAmount                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UXpBar_C::Xp_Boost_Changed(int BoostAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBar.XpBar_C.Xp Boost Changed");

	UXpBar_C_Xp_Boost_Changed_Params params;
	params.BoostAmount = BoostAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBar.XpBar_C.ExecuteUbergraph_XpBar
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UXpBar_C::ExecuteUbergraph_XpBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBar.XpBar_C.ExecuteUbergraph_XpBar");

	UXpBar_C_ExecuteUbergraph_XpBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
