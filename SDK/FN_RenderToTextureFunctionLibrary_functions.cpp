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

// Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Set Canvas Material Scale and Position
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               Size                           (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               Position                       (CPF_Parm, CPF_IsPlainOldData)
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               Screen_Position                (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector2D               Screen_Size                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void URenderToTextureFunctionLibrary_C::STATIC_Set_Canvas_Material_Scale_and_Position(const struct FVector2D& Size, const struct FVector2D& Position, float Scale, class UObject* __WorldContext, struct FVector2D* Screen_Position, struct FVector2D* Screen_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Set Canvas Material Scale and Position");

	URenderToTextureFunctionLibrary_C_Set_Canvas_Material_Scale_and_Position_Params params;
	params.Size = Size;
	params.Position = Position;
	params.Scale = Scale;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Screen_Position != nullptr)
		*Screen_Position = params.Screen_Position;
	if (Screen_Size != nullptr)
		*Screen_Size = params.Screen_Size;
}


// Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Array to HLSL Int Array
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EIntTypes>         Type                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Variable_Name                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<int>                    int                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector2D>       int2                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector>         int3                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FLinearColor>    int4                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 String                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void URenderToTextureFunctionLibrary_C::STATIC_Array_to_HLSL_Int_Array(TEnumAsByte<EIntTypes> Type, class UObject* __WorldContext, struct FString* Variable_Name, TArray<int>* int, TArray<struct FVector2D>* int2, TArray<struct FVector>* int3, TArray<struct FLinearColor>* int4, struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Array to HLSL Int Array");

	URenderToTextureFunctionLibrary_C_Array_to_HLSL_Int_Array_Params params;
	params.Type = Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Variable_Name != nullptr)
		*Variable_Name = params.Variable_Name;
	if (int != nullptr)
		*int = params.int;
	if (int2 != nullptr)
		*int2 = params.int2;
	if (int3 != nullptr)
		*int3 = params.int3;
	if (int4 != nullptr)
		*int4 = params.int4;
	if (String != nullptr)
		*String = params.String;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
