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
enum class ECommonInputType : uint8_t
{
	MouseAndKeyboard               = 0,
	XboxOneController              = 1,
	PS4Controller                  = 2,
	Touch                          = 3,
	Count                          = 4,
	ECommonInputType_MAX           = 5
};


// Enum CommonUI.EInputActionState
enum class EInputActionState : uint8_t
{
	Enabled                        = 0,
	Disabled                       = 1,
	Hidden                         = 2,
	HiddenAndDisabled              = 3,
	EInputActionState_MAX          = 4
};


// Enum CommonUI.EItemAlignment
enum class EItemAlignment : uint8_t
{
	EvenlyDistributed              = 0,
	EvenlySize                     = 1,
	EvenlyWide                     = 2,
	LeftAligned                    = 3,
	RightAligned                   = 4,
	CenterAligned                  = 5,
	Fill                           = 6,
	EItemAlignment_MAX             = 7
};


// Enum CommonUI.ECommonPlatformType
enum class ECommonPlatformType : uint8_t
{
	PC                             = 0,
	Mac                            = 1,
	PS4                            = 2,
	XBox                           = 3,
	IOS                            = 4,
	Android                        = 5,
	Count                          = 6,
	ECommonPlatformType_MAX        = 7
};


// Enum CommonUI.EOperation
enum class EOperation : uint8_t
{
	Intro                          = 0,
	Outro                          = 1,
	Push                           = 2,
	Pop                            = 3,
	Invalid                        = 4,
	EOperation_MAX                 = 5
};


// Enum CommonUI.ETransitionCurve
enum class ETransitionCurve : uint8_t
{
	Linear                         = 0,
	QuadIn                         = 1,
	QuadOut                        = 2,
	QuadInOut                      = 3,
	CubicIn                        = 4,
	CubicOut                       = 5,
	CubicInOut                     = 6,
	ETransitionCurve_MAX           = 7
};


// Enum CommonUI.ECommonSwitcherTransition
enum class ECommonSwitcherTransition : uint8_t
{
	FadeOnly                       = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Zoom                           = 3,
	ECommonSwitcherTransition_MAX  = 4
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

// ScriptStruct CommonUI.CommonInputActionHandlerData
// 0x0018
struct FCommonInputActionHandlerData
{
	struct FDataTableRowHandle                         InputActionRow;                                           // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	EInputActionState                                  State;                                                    // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct CommonUI.CommonNumberFormattingOptions
// 0x0014
struct FCommonNumberFormattingOptions
{
	TEnumAsByte<ERoundingMode>                         RoundingMode;                                             // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseGrouping;                                              // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	EOperation                                         Operation;                                                // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UCommonActivatablePanel*                     Panel;                                                    // 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               bIntroPanel;                                              // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOutroPanelBelow;                                         // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
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

// ScriptStruct CommonUI.CommonInputActionData
// 0x02C8 (0x02D0 - 0x0008)
struct FCommonInputActionData : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FKey                                        PlatformSpecificKeys[0x4];                                // 0x0020(0x0018) (CPF_Edit)
	EInputActionState                                  OverrrideStateForInputType[0x4];                          // 0x0080(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FSlateBrush                                 InputTypeOverrideBrush[0x4];                              // 0x0088(0x0090) (CPF_Edit)
	bool                                               bActionRequiresHold;                                      // 0x02C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	float                                              HoldTime;                                                 // 0x02CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
