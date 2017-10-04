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

// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Rarity Color (SlateColor)
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateColor UMissionRewardItem_Tooltip_C::Get_Rarity_Color__SlateColor_()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Rarity Color (SlateColor)");

	UMissionRewardItem_Tooltip_C_Get_Rarity_Color__SlateColor__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Rarity Color
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UMissionRewardItem_Tooltip_C::Get_Rarity_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Rarity Color");

	UMissionRewardItem_Tooltip_C_Get_Rarity_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Reward Icon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UMissionRewardItem_Tooltip_C::Get_Reward_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Reward Icon");

	UMissionRewardItem_Tooltip_C_Get_Reward_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Reward Name
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UMissionRewardItem_Tooltip_C::Get_Reward_Name()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Reward Name");

	UMissionRewardItem_Tooltip_C_Get_Reward_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
