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

// Function HeroSquadBonus.HeroSquadBonus_C.Get_ToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UHeroSquadBonus_C::Get_ToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonus.HeroSquadBonus_C.Get_ToolTipWidget");

	UHeroSquadBonus_C_Get_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeroSquadBonus.HeroSquadBonus_C.SetBackgroundGlow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           GlowBackground                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHeroSquadBonus_C::SetBackgroundGlow(bool GlowBackground)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonus.HeroSquadBonus_C.SetBackgroundGlow");

	UHeroSquadBonus_C_SetBackgroundGlow_Params params;
	params.GlowBackground = GlowBackground;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadBonus.HeroSquadBonus_C.UpdateSquadBonusIconState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHeroSquadBonus_C::UpdateSquadBonusIconState()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonus.HeroSquadBonus_C.UpdateSquadBonusIconState");

	UHeroSquadBonus_C_UpdateSquadBonusIconState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadBonus.HeroSquadBonus_C.UpdateBonusPerk
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHeroSquadBonus_C::UpdateBonusPerk()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonus.HeroSquadBonus_C.UpdateBonusPerk");

	UHeroSquadBonus_C_UpdateBonusPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadBonus.HeroSquadBonus_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHeroSquadBonus_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonus.HeroSquadBonus_C.PreConstruct");

	UHeroSquadBonus_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadBonus.HeroSquadBonus_C.OnPerkUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHeroSquadBonus_C::OnPerkUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonus.HeroSquadBonus_C.OnPerkUpdated");

	UHeroSquadBonus_C_OnPerkUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadBonus.HeroSquadBonus_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHeroSquadBonus_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonus.HeroSquadBonus_C.Construct");

	UHeroSquadBonus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadBonus.HeroSquadBonus_C.ExecuteUbergraph_HeroSquadBonus
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHeroSquadBonus_C::ExecuteUbergraph_HeroSquadBonus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonus.HeroSquadBonus_C.ExecuteUbergraph_HeroSquadBonus");

	UHeroSquadBonus_C_ExecuteUbergraph_HeroSquadBonus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
