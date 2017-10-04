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

// Function McpProfileSys.McpProfile.UnlockProfileForWrite
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_NetRequest, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_HasOutParms)
// Parameters:
// struct FString                 Code                           (CPF_Parm, CPF_ZeroConstructor)
// struct FDedicatedServerUrlContext Context                        (CPF_Parm, CPF_OutParm, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)

void UMcpProfile::UnlockProfileForWrite(const struct FString& Code, struct FDedicatedServerUrlContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function McpProfileSys.McpProfile.UnlockProfileForWrite");

	UMcpProfile_UnlockProfileForWrite_Params params;
	params.Code = Code;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function McpProfileSys.McpProfile.QueryProfile
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_NetRequest, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_HasOutParms)
// Parameters:
// struct FBaseUrlContext         Context                        (CPF_Parm, CPF_OutParm, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)

void UMcpProfile::QueryProfile(struct FBaseUrlContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function McpProfileSys.McpProfile.QueryProfile");

	UMcpProfile_QueryProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function McpProfileSys.McpProfile.LockProfileForWrite
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_NetRequest, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_HasOutParms)
// Parameters:
// struct FString                 Code                           (CPF_Parm, CPF_ZeroConstructor)
// int                            Timeout                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDedicatedServerUrlContext Context                        (CPF_Parm, CPF_OutParm, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)

void UMcpProfile::LockProfileForWrite(const struct FString& Code, int Timeout, struct FDedicatedServerUrlContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function McpProfileSys.McpProfile.LockProfileForWrite");

	UMcpProfile_LockProfileForWrite_Params params;
	params.Code = Code;
	params.Timeout = Timeout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function McpProfileSys.McpProfile.DeleteProfile
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_NetRequest, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_HasOutParms)
// Parameters:
// struct FClientUrlContext       Context                        (CPF_Parm, CPF_OutParm, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)

void UMcpProfile::DeleteProfile(struct FClientUrlContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function McpProfileSys.McpProfile.DeleteProfile");

	UMcpProfile_DeleteProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function McpProfileSys.McpProfile.DeleteAllProfiles
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_NetRequest, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_HasOutParms)
// Parameters:
// struct FClientUrlContext       Context                        (CPF_Parm, CPF_OutParm, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)

void UMcpProfile::DeleteAllProfiles(struct FClientUrlContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function McpProfileSys.McpProfile.DeleteAllProfiles");

	UMcpProfile_DeleteAllProfiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
