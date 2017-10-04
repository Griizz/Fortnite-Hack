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

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.PlayIntroAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionDetailsModifierRow_C::PlayIntroAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.PlayIntroAnimation");

	UMissionDetailsModifierRow_C_PlayIntroAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Init
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ModifierName                   (CPF_Parm)
// struct FText                   ModifierDescription            (CPF_Parm)
// class UTexture2D*              ModifierIcon                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  TextStyle                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Show_Description               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           UseSmallIcon                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionDetailsModifierRow_C::Init(const struct FText& ModifierName, const struct FText& ModifierDescription, class UTexture2D* ModifierIcon, class UClass* TextStyle, bool Show_Description, bool UseSmallIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Init");

	UMissionDetailsModifierRow_C_Init_Params params;
	params.ModifierName = ModifierName;
	params.ModifierDescription = ModifierDescription;
	params.ModifierIcon = ModifierIcon;
	params.TextStyle = TextStyle;
	params.Show_Description = Show_Description;
	params.UseSmallIcon = UseSmallIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMissionDetailsModifierRow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Construct");

	UMissionDetailsModifierRow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.ExecuteUbergraph_MissionDetailsModifierRow
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionDetailsModifierRow_C::ExecuteUbergraph_MissionDetailsModifierRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.ExecuteUbergraph_MissionDetailsModifierRow");

	UMissionDetailsModifierRow_C_ExecuteUbergraph_MissionDetailsModifierRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
