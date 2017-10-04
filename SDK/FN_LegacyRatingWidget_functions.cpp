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

// Function LegacyRatingWidget.LegacyRatingWidget_C.SetShouldShowTeamPowerRating
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowTeamRating                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyRatingWidget_C::SetShouldShowTeamPowerRating(bool ShowTeamRating)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyRatingWidget.LegacyRatingWidget_C.SetShouldShowTeamPowerRating");

	ULegacyRatingWidget_C_SetShouldShowTeamPowerRating_Params params;
	params.ShowTeamRating = ShowTeamRating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Override Default Color Set
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Override                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Light_Color                    (CPF_Parm, CPF_IsPlainOldData)
// struct FLinearColor            Medium_Color                   (CPF_Parm, CPF_IsPlainOldData)
// struct FLinearColor            Dark_Color                     (CPF_Parm, CPF_IsPlainOldData)

void ULegacyRatingWidget_C::Override_Default_Color_Set(bool Override, const struct FLinearColor& Light_Color, const struct FLinearColor& Medium_Color, const struct FLinearColor& Dark_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyRatingWidget.LegacyRatingWidget_C.Override Default Color Set");

	ULegacyRatingWidget_C_Override_Default_Color_Set_Params params;
	params.Override = Override;
	params.Light_Color = Light_Color;
	params.Medium_Color = Medium_Color;
	params.Dark_Color = Dark_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Texture2D Parameter From Multi Size Brush
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Mid                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Parameter                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortMultiSizeBrush     MBrush                         (CPF_Parm)

void ULegacyRatingWidget_C::Set_Texture2D_Parameter_From_Multi_Size_Brush(class UMaterialInstanceDynamic* Mid, const struct FName& Parameter, const struct FFortMultiSizeBrush& MBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyRatingWidget.LegacyRatingWidget_C.Set Texture2D Parameter From Multi Size Brush");

	ULegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush_Params params;
	params.Mid = Mid;
	params.Parameter = Parameter;
	params.MBrush = MBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Update Base Material
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyRatingWidget_C::Update_Base_Material()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyRatingWidget.LegacyRatingWidget_C.Update Base Material");

	ULegacyRatingWidget_C_Update_Base_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Update From Unique ID
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyRatingWidget_C::Update_From_Unique_ID()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyRatingWidget.LegacyRatingWidget_C.Update From Unique ID");

	ULegacyRatingWidget_C_Update_From_Unique_ID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Unique ID
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        ID                             (CPF_Parm)

void ULegacyRatingWidget_C::Set_Unique_ID(const struct FUniqueNetIdRepl& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyRatingWidget.LegacyRatingWidget_C.Set Unique ID");

	ULegacyRatingWidget_C_Set_Unique_ID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Update
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyRatingWidget_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyRatingWidget.LegacyRatingWidget_C.Update");

	ULegacyRatingWidget_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Padding
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyRatingWidget_C::Set_Padding()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyRatingWidget.LegacyRatingWidget_C.Set Padding");

	ULegacyRatingWidget_C_Set_Padding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Size Box
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULegacyRatingWidget_C::Set_Size_Box()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyRatingWidget.LegacyRatingWidget_C.Set Size Box");

	ULegacyRatingWidget_C_Set_Size_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Update Rating Value
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Rating                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyRatingWidget_C::Update_Rating_Value(int Rating)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyRatingWidget.LegacyRatingWidget_C.Update Rating Value");

	ULegacyRatingWidget_C_Update_Rating_Value_Params params;
	params.Rating = Rating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyRatingWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyRatingWidget.LegacyRatingWidget_C.PreConstruct");

	ULegacyRatingWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.PlayerInfoChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        UniqueId                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULegacyRatingWidget_C::PlayerInfoChanged(const struct FUniqueNetIdRepl& UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyRatingWidget.LegacyRatingWidget_C.PlayerInfoChanged");

	ULegacyRatingWidget_C_PlayerInfoChanged_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULegacyRatingWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyRatingWidget.LegacyRatingWidget_C.Construct");

	ULegacyRatingWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.PlayerStateChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     PlayerInfo                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ULegacyRatingWidget_C::PlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyRatingWidget.LegacyRatingWidget_C.PlayerStateChanged");

	ULegacyRatingWidget_C_PlayerStateChanged_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.ExecuteUbergraph_LegacyRatingWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULegacyRatingWidget_C::ExecuteUbergraph_LegacyRatingWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LegacyRatingWidget.LegacyRatingWidget_C.ExecuteUbergraph_LegacyRatingWidget");

	ULegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
