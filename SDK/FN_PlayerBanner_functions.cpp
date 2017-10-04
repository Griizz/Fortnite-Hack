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

// Function PlayerBanner.PlayerBanner_C.ClearBannerState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerBanner_C::ClearBannerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.ClearBannerState");

	UPlayerBanner_C_ClearBannerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.OnBannerIconLoaded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 LoadedObject                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerBanner_C::OnBannerIconLoaded(class UObject* LoadedObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.OnBannerIconLoaded");

	UPlayerBanner_C_OnBannerIconLoaded_Params params;
	params.LoadedObject = LoadedObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.GetBannerMID
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* BannerMID                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerBanner_C::GetBannerMID(class UMaterialInstanceDynamic** BannerMID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.GetBannerMID");

	UPlayerBanner_C_GetBannerMID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BannerMID != nullptr)
		*BannerMID = params.BannerMID;
}


// Function PlayerBanner.PlayerBanner_C.SetBannerOwner
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        OwnerId                        (CPF_Parm)

void UPlayerBanner_C::SetBannerOwner(const struct FUniqueNetIdRepl& OwnerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.SetBannerOwner");

	UPlayerBanner_C_SetBannerOwner_Params params;
	params.OwnerId = OwnerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.SetBannerColorId
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InBannerColorId                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerBanner_C::SetBannerColorId(const struct FName& InBannerColorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.SetBannerColorId");

	UPlayerBanner_C_SetBannerColorId_Params params;
	params.InBannerColorId = InBannerColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.SetBannerIconId
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InBannerIconId                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerBanner_C::SetBannerIconId(const struct FName& InBannerIconId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.SetBannerIconId");

	UPlayerBanner_C_SetBannerIconId_Params params;
	params.InBannerIconId = InBannerIconId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.SetBannerImage
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortHomeBaseInfo       Image_info                     (CPF_Parm)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerBanner_C::SetBannerImage(const struct FFortHomeBaseInfo& Image_info, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.SetBannerImage");

	UPlayerBanner_C_SetBannerImage_Params params;
	params.Image_info = Image_info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function PlayerBanner.PlayerBanner_C.OnTeamMemberStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (CPF_Parm)

void UPlayerBanner_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.OnTeamMemberStateChanged");

	UPlayerBanner_C_OnTeamMemberStateChanged_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerBanner_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.PreConstruct");

	UPlayerBanner_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.ExecuteUbergraph_PlayerBanner
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerBanner_C::ExecuteUbergraph_PlayerBanner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.ExecuteUbergraph_PlayerBanner");

	UPlayerBanner_C_ExecuteUbergraph_PlayerBanner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
