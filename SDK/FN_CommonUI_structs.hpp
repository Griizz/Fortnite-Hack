#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum CommonUI.ECommonInputType
enum class ECommonInputType
{
	ECommonInputType__MouseAndKeyboard = 0,
	ECommonInputType__XboxOneController = 1,
	ECommonInputType__PS4Controller = 2,
	ECommonInputType__Touch        = 3,
	ECommonInputType__Count        = 4,
	ECommonInputType__ECommonInputType_MAX = 5
};


// Enum CommonUI.EInputActionState
enum class EInputActionState
{
	EInputActionState__Enabled     = 0,
	EInputActionState__Disabled    = 1,
	EInputActionState__Hidden      = 2,
	EInputActionState__HiddenAndDisabled = 3,
	EInputActionState__EInputActionState_MAX = 4
};


// Enum CommonUI.EItemAlignment
enum class EItemAlignment
{
	EItemAlignment__EvenlyDistributed = 0,
	EItemAlignment__EvenlySize     = 1,
	EItemAlignment__EvenlyWide     = 2,
	EItemAlignment__LeftAligned    = 3,
	EItemAlignment__RightAligned   = 4,
	EItemAlignment__CenterAligned  = 5,
	EItemAlignment__Fill           = 6,
	EItemAlignment__EItemAlignment_MAX = 7
};


// Enum CommonUI.ECommonPlatformType
enum class ECommonPlatformType
{
	ECommonPlatformType__PC        = 0,
	ECommonPlatformType__Mac       = 1,
	ECommonPlatformType__PS4       = 2,
	ECommonPlatformType__XBox      = 3,
	ECommonPlatformType__Count     = 4,
	ECommonPlatformType__ECommonPlatformType_MAX = 5
};


// Enum CommonUI.EOperation
enum class EOperation
{
	EOperation__Intro              = 0,
	EOperation__Outro              = 1,
	EOperation__Push               = 2,
	EOperation__Pop                = 3,
	EOperation__Invalid            = 4,
	EOperation__EOperation_MAX     = 5
};


// Enum CommonUI.ETransitionCurve
enum class ETransitionCurve
{
	ETransitionCurve__Linear       = 0,
	ETransitionCurve__QuadIn       = 1,
	ETransitionCurve__QuadOut      = 2,
	ETransitionCurve__QuadInOut    = 3,
	ETransitionCurve__CubicIn      = 4,
	ETransitionCurve__CubicOut     = 5,
	ETransitionCurve__CubicInOut   = 6,
	ETransitionCurve__ETransitionCurve_MAX = 7
};


// Enum CommonUI.ECommonSwitcherTransition
enum class ECommonSwitcherTransition
{
	ECommonSwitcherTransition__FadeOnly = 0,
	ECommonSwitcherTransition__Horizontal = 1,
	ECommonSwitcherTransition__Vertical = 2,
	ECommonSwitcherTransition__Zoom = 3,
	ECommonSwitcherTransition__ECommonSwitcherTransition_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CommonUI.CommonRegisteredTabInfo
// 0x0018
struct FCommonRegisteredTabInfo
{
	int                                                TabIndex;                                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UCommonButton*                               TabButton;                                                // 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     ContentInstance;                                          // 0x0010(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct CommonUI.CommonNumberFormattingOptions
// 0x0014
struct FCommonNumberFormattingOptions
{
	TEnumAsByte<ERoundingMode>                         RoundingMode;                                             // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UseGrouping : 1;                                          // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                MinimumIntegralDigits;                                    // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaximumIntegralDigits;                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinimumFractionalDigits;                                  // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaximumFractionalDigits;                                  // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CommonUI.Operation
// 0x0018
struct FOperation
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty CommonUI.Operation.Operation
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UCommonActivatablePanel*                     Panel;                                                    // 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      bIntroPanel : 1;                                          // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOutroPanelBelow : 1;                                     // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CommonUI.CommonInputKeyDisplayData
// 0x0240
struct FCommonInputKeyDisplayData
{
	struct FSlateBrush                                 PlatformSpecificBrush[0x4];                               // 0x0000(0x0090) (CPF_Edit)
};

// ScriptStruct CommonUI.CommonInputKeyDisplayConfiguration
// 0x0258
struct FCommonInputKeyDisplayConfiguration
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (CPF_Edit)
	struct FCommonInputKeyDisplayData                  Value;                                                    // 0x0018(0x0240) (CPF_Edit)
};

// ScriptStruct CommonUI.CommonInputActionHandlerData
// 0x0018
struct FCommonInputActionHandlerData
{
	struct FDataTableRowHandle                         InputActionRow;                                           // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty CommonUI.CommonInputActionHandlerData.State
};

// ScriptStruct CommonUI.CommonInputActionData
// 0x02C8 (0x02D0 - 0x0008)
struct FCommonInputActionData : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FKey                                        PlatformSpecificKeys[0x4];                                // 0x0020(0x0018) (CPF_Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0080(0x0004) UNKNOWN PROPERTY: EnumProperty CommonUI.CommonInputActionData.OverrrideStateForInputType
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FSlateBrush                                 InputTypeOverrideBrush[0x4];                              // 0x0088(0x0090) (CPF_Edit)
	unsigned char                                      bActionRequiresHold : 1;                                  // 0x02C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	float                                              HoldTime;                                                 // 0x02CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
