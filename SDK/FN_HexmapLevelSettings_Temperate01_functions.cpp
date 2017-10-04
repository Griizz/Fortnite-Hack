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

// Function HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AHexmapLevelSettings_Temperate01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C.UserConstructionScript");

	AHexmapLevelSettings_Temperate01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C.CustomSettings
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visibility                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AHexmapLevelSettings_Temperate01_C::CustomSettings(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C.CustomSettings");

	AHexmapLevelSettings_Temperate01_C_CustomSettings_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C.ExecuteUbergraph_HexmapLevelSettings_Temperate01
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AHexmapLevelSettings_Temperate01_C::ExecuteUbergraph_HexmapLevelSettings_Temperate01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C.ExecuteUbergraph_HexmapLevelSettings_Temperate01");

	AHexmapLevelSettings_Temperate01_C_ExecuteUbergraph_HexmapLevelSettings_Temperate01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
