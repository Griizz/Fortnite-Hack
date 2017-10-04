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

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeIconSizeByMagnitude
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EFortBrushSize>    Icon_Size                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillTreeBPLibrary_C::STATIC_GetSkillTreeNodeIconSizeByMagnitude(class UObject* __WorldContext, TEnumAsByte<EFortBrushSize>* Icon_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeIconSizeByMagnitude");

	USkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon_Size != nullptr)
		*Icon_Size = params.Icon_Size;
}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeShapeByDisplayType
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsSquare                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsExitNode                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillTreeBPLibrary_C::STATIC_GetSkillTreeNodeShapeByDisplayType(class UObject* __WorldContext, bool* IsSquare, bool* IsExitNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeShapeByDisplayType");

	USkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSquare != nullptr)
		*IsSquare = params.IsSquare;
	if (IsExitNode != nullptr)
		*IsExitNode = params.IsExitNode;
}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeSizeByMagnitude
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 World_Context                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Size                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillTreeBPLibrary_C::STATIC_GetSkillTreeNodeSizeByMagnitude(class UObject* World_Context, class UObject* __WorldContext, float* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeSizeByMagnitude");

	USkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude_Params params;
	params.World_Context = World_Context;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;
}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_DynamicData
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 World_Context                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInstanceDynamic* Material                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHomebaseNodeState      NodeState                      (CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillTreeBPLibrary_C::STATIC_UpdateSkillTreeNodeMaterial_DynamicData(class UObject* World_Context, class UMaterialInstanceDynamic* Material, const struct FHomebaseNodeState& NodeState, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_DynamicData");

	USkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData_Params params;
	params.World_Context = World_Context;
	params.Material = Material;
	params.NodeState = NodeState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeCostTint
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FHomebaseNode           HomebaseNode                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            NodeTintColour                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void USkillTreeBPLibrary_C::STATIC_GetSkillTreeNodeCostTint(const struct FHomebaseNode& HomebaseNode, class UObject* __WorldContext, struct FLinearColor* NodeTintColour)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeCostTint");

	USkillTreeBPLibrary_C_GetSkillTreeNodeCostTint_Params params;
	params.HomebaseNode = HomebaseNode;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NodeTintColour != nullptr)
		*NodeTintColour = params.NodeTintColour;
}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_StaticData
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 World_Context                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInstanceDynamic* Material                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHomebaseNode           NodeData                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FFortSkillTreeNodeDisplayData DisplayData                    (CPF_Parm)
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillTreeBPLibrary_C::STATIC_UpdateSkillTreeNodeMaterial_StaticData(class UObject* World_Context, class UMaterialInstanceDynamic* Material, const struct FHomebaseNode& NodeData, const struct FFortSkillTreeNodeDisplayData& DisplayData, class UCommonButton* Button, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_StaticData");

	USkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData_Params params;
	params.World_Context = World_Context;
	params.Material = Material;
	params.NodeData = NodeData;
	params.DisplayData = DisplayData;
	params.Button = Button;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
