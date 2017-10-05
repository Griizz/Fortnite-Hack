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

// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{
	Visible                        = 0,
	Collapsed                      = 1,
	Hidden                         = 2,
	HitTestInvisible               = 3,
	SelfHitTestInvisible           = 4,
	ESlateVisibility_MAX           = 5
};


// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t
{
	Default                        = 0,
	Number                         = 1,
	Web                            = 2,
	Email                          = 3,
	Password                       = 4,
	AlphaNumeric                   = 5,
	EVirtualKeyboardType_MAX       = 6
};


// Enum UMG.EDragPivot
enum class EDragPivot : uint8_t
{
	MouseDown                      = 0,
	TopLeft                        = 1,
	TopCenter                      = 2,
	TopRight                       = 3,
	CenterLeft                     = 4,
	CenterCenter                   = 5,
	CenterRight                    = 6,
	BottomLeft                     = 7,
	BottomCenter                   = 8,
	BottomRight                    = 9,
	EDragPivot_MAX                 = 10
};


// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
	Automatic                      = 0,
	Fill                           = 1,
	ESlateSizeRule_MAX             = 2
};


// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{
	None                           = 0,
	Designing                      = 1,
	ShowOutline                    = 2,
	ExecutePreConstruct            = 3,
	EWidgetDesignFlags_MAX         = 4
};


// Enum UMG.EBindingKind
enum class EBindingKind : uint8_t
{
	Function                       = 0,
	Property                       = 1,
	EBindingKind_MAX               = 2
};


// Enum UMG.EDesignPreviewSizeMode
enum class EDesignPreviewSizeMode : uint8_t
{
	FillScreen                     = 0,
	Custom                         = 1,
	CustomOnScreen                 = 2,
	Desired                        = 3,
	DesiredOnScreen                = 4,
	EDesignPreviewSizeMode_MAX     = 5
};


// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
	Forward                        = 0,
	Reverse                        = 1,
	PingPong                       = 2,
	EUMGSequencePlayMode_MAX       = 3
};


// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t
{
	Plane                          = 0,
	Cylinder                       = 1,
	EWidgetGeometryMode_MAX        = 2
};


// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{
	Opaque                         = 0,
	Masked                         = 1,
	Transparent                    = 2,
	EWidgetBlendMode_MAX           = 3
};


// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{
	World                          = 0,
	Screen                         = 1,
	EWidgetSpace_MAX               = 2
};


// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t
{
	World                          = 0,
	Mouse                          = 1,
	CenterScreen                   = 2,
	Custom                         = 3,
	EWidgetInteractionSource_MAX   = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UMG.PropertyPathSegment
// 0x0020
struct FPropertyPathSegment
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ArrayIndex;                                               // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UStruct*                                     Struct;                                                   // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UField*                                      Field;                                                    // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct UMG.DynamicPropertyPath
// 0x0010
struct FDynamicPropertyPath
{
	TArray<struct FPropertyPathSegment>                Segments;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct UMG.SlateMeshVertex
// 0x003C
struct FSlateMeshVertex
{
	struct FVector2D                                   Position;                                                 // 0x0000(0x0008) (CPF_IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0008(0x0004) (CPF_IsPlainOldData)
	struct FVector2D                                   UV0;                                                      // 0x000C(0x0008) (CPF_IsPlainOldData)
	struct FVector2D                                   UV1;                                                      // 0x0014(0x0008) (CPF_IsPlainOldData)
	struct FVector2D                                   UV2;                                                      // 0x001C(0x0008) (CPF_IsPlainOldData)
	struct FVector2D                                   UV3;                                                      // 0x0024(0x0008) (CPF_IsPlainOldData)
	struct FVector2D                                   UV4;                                                      // 0x002C(0x0008) (CPF_IsPlainOldData)
	struct FVector2D                                   UV5;                                                      // 0x0034(0x0008) (CPF_IsPlainOldData)
};

// ScriptStruct UMG.WidgetTransform
// 0x001C
struct FWidgetTransform
{
	struct FVector2D                                   Translation;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   Shear;                                                    // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              Angle;                                                    // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct UMG.EventReply
// 0x00B8
struct FEventReply
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct UMG.DelegateRuntimeBinding
// 0x0038
struct FDelegateRuntimeBinding
{
	struct FString                                     ObjectName;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FName                                       PropertyName;                                             // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       FunctionName;                                             // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDynamicPropertyPath                        SourcePath;                                               // 0x0020(0x0010)
	EBindingKind                                       Kind;                                                     // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct UMG.NamedSlotBinding
// 0x0010
struct FNamedSlotBinding
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     Content;                                                  // 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct UMG.PaintContext
// 0x0030
struct FPaintContext
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct UMG.AnchorData
// 0x0028
struct FAnchorData
{
	struct FMargin                                     Offsets;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FAnchors                                    Anchors;                                                  // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector2D                                   Alignment;                                                // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct UMG.SlateChildSize
// 0x0008
struct FSlateChildSize
{
	float                                              Value;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESlateSizeRule>                        SizeRule;                                                 // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct UMG.ShapedTextOptions
// 0x0008
struct FShapedTextOptions
{
	unsigned char                                      bOverride_TextShapingMethod : 1;                          // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_TextFlowDirection : 1;                          // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	ETextShapingMethod                                 TextShapingMethod;                                        // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ETextFlowDirection                                 TextFlowDirection;                                        // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct UMG.WidgetAnimationBinding
// 0x0028
struct FWidgetAnimationBinding
{
	struct FName                                       WidgetName;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SlotWidgetName;                                           // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       AnimationGuid;                                            // 0x0010(0x0010) (CPF_IsPlainOldData)
	bool                                               bIsRootWidget;                                            // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct UMG.WidgetNavigationData
// 0x0018
struct FWidgetNavigationData
{
	EUINavigationRule                                  Rule;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       WidgetToFocus;                                            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UWidget>                      Widget;                                                   // 0x0010(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// 0x0330 (0x0348 - 0x0018)
struct FMovieScene2DTransformSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                             // 0x0018(0x0020)
	struct FRichCurve                                  Translation[0x2];                                         // 0x0038(0x0070)
	struct FRichCurve                                  Rotation;                                                 // 0x0118(0x0070)
	struct FRichCurve                                  Scale[0x2];                                               // 0x0188(0x0070)
	struct FRichCurve                                  Shear[0x2];                                               // 0x0268(0x0070)
};

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
// 0x01E0 (0x01F8 - 0x0018)
struct FMovieSceneMarginSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                             // 0x0018(0x0020)
	struct FRichCurve                                  TopCurve;                                                 // 0x0038(0x0070)
	struct FRichCurve                                  LeftCurve;                                                // 0x00A8(0x0070)
	struct FRichCurve                                  RightCurve;                                               // 0x0118(0x0070)
	struct FRichCurve                                  BottomCurve;                                              // 0x0188(0x0070)
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// 0x0010 (0x0058 - 0x0048)
struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	TArray<struct FName>                               BrushPropertyNamePath;                                    // 0x0048(0x0010) (CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
