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
enum class ESlateVisibility
{
	ESlateVisibility__Visible      = 0,
	ESlateVisibility__Collapsed    = 1,
	ESlateVisibility__Hidden       = 2,
	ESlateVisibility__HitTestInvisible = 3,
	ESlateVisibility__SelfHitTestInvisible = 4,
	ESlateVisibility__ESlateVisibility_MAX = 5
};


// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType
{
	EVirtualKeyboardType__Default  = 0,
	EVirtualKeyboardType__Number   = 1,
	EVirtualKeyboardType__Web      = 2,
	EVirtualKeyboardType__Email    = 3,
	EVirtualKeyboardType__Password = 4,
	EVirtualKeyboardType__AlphaNumeric = 5,
	EVirtualKeyboardType__EVirtualKeyboardType_MAX = 6
};


// Enum UMG.EDragPivot
enum class EDragPivot
{
	EDragPivot__MouseDown          = 0,
	EDragPivot__TopLeft            = 1,
	EDragPivot__TopCenter          = 2,
	EDragPivot__TopRight           = 3,
	EDragPivot__CenterLeft         = 4,
	EDragPivot__CenterCenter       = 5,
	EDragPivot__CenterRight        = 6,
	EDragPivot__BottomLeft         = 7,
	EDragPivot__BottomCenter       = 8,
	EDragPivot__BottomRight        = 9,
	EDragPivot__EDragPivot_MAX     = 10
};


// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule
{
	ESlateSizeRule__Automatic      = 0,
	ESlateSizeRule__Fill           = 1,
	ESlateSizeRule__ESlateSizeRule_MAX = 2
};


// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags
{
	EWidgetDesignFlags__None       = 0,
	EWidgetDesignFlags__Designing  = 1,
	EWidgetDesignFlags__ShowOutline = 2,
	EWidgetDesignFlags__ExecutePreConstruct = 3,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX = 4
};


// Enum UMG.EBindingKind
enum class EBindingKind
{
	EBindingKind__Function         = 0,
	EBindingKind__Property         = 1,
	EBindingKind__EBindingKind_MAX = 2
};


// Enum UMG.EDesignPreviewSizeMode
enum class EDesignPreviewSizeMode
{
	EDesignPreviewSizeMode__FillScreen = 0,
	EDesignPreviewSizeMode__Custom = 1,
	EDesignPreviewSizeMode__CustomOnScreen = 2,
	EDesignPreviewSizeMode__Desired = 3,
	EDesignPreviewSizeMode__DesiredOnScreen = 4,
	EDesignPreviewSizeMode__EDesignPreviewSizeMode_MAX = 5
};


// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode
{
	EUMGSequencePlayMode__Forward  = 0,
	EUMGSequencePlayMode__Reverse  = 1,
	EUMGSequencePlayMode__PingPong = 2,
	EUMGSequencePlayMode__EUMGSequencePlayMode_MAX = 3
};


// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode
{
	EWidgetGeometryMode__Plane     = 0,
	EWidgetGeometryMode__Cylinder  = 1,
	EWidgetGeometryMode__EWidgetGeometryMode_MAX = 2
};


// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode
{
	EWidgetBlendMode__Opaque       = 0,
	EWidgetBlendMode__Masked       = 1,
	EWidgetBlendMode__Transparent  = 2,
	EWidgetBlendMode__EWidgetBlendMode_MAX = 3
};


// Enum UMG.EWidgetSpace
enum class EWidgetSpace
{
	EWidgetSpace__World            = 0,
	EWidgetSpace__Screen           = 1,
	EWidgetSpace__EWidgetSpace_MAX = 2
};


// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource
{
	EWidgetInteractionSource__World = 0,
	EWidgetInteractionSource__Mouse = 1,
	EWidgetInteractionSource__CenterScreen = 2,
	EWidgetInteractionSource__Custom = 3,
	EWidgetInteractionSource__EWidgetInteractionSource_MAX = 4
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

// ScriptStruct UMG.DelegateRuntimeBinding
// 0x0038
struct FDelegateRuntimeBinding
{
	struct FString                                     ObjectName;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FName                                       PropertyName;                                             // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       FunctionName;                                             // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDynamicPropertyPath                        SourcePath;                                               // 0x0020(0x0010)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0030(0x0001) UNKNOWN PROPERTY: EnumProperty UMG.DelegateRuntimeBinding.Kind
};

// ScriptStruct UMG.NamedSlotBinding
// 0x0010
struct FNamedSlotBinding
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     Content;                                                  // 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
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
};

// ScriptStruct UMG.ShapedTextOptions
// 0x0008
struct FShapedTextOptions
{
	unsigned char                                      bOverride_TextShapingMethod : 1;                          // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_TextFlowDirection : 1;                          // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData01[0x1];                                       // 0x0001(0x0001) UNKNOWN PROPERTY: EnumProperty UMG.ShapedTextOptions.TextShapingMethod
	unsigned char                                      UnknownData02[0x1];                                       // 0x0005(0x0001) UNKNOWN PROPERTY: EnumProperty UMG.ShapedTextOptions.TextFlowDirection
};

// ScriptStruct UMG.WidgetAnimationBinding
// 0x0028
struct FWidgetAnimationBinding
{
	struct FName                                       WidgetName;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SlotWidgetName;                                           // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       AnimationGuid;                                            // 0x0010(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      bIsRootWidget : 1;                                        // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct UMG.WidgetNavigationData
// 0x0018
struct FWidgetNavigationData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty UMG.WidgetNavigationData.Rule
	unsigned char                                      UnknownData01[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       WidgetToFocus;                                            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UWidget>                      Widget;                                                   // 0x0010(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct UMG.EventReply
// 0x00B8
struct FEventReply
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct UMG.PaintContext
// 0x0030
struct FPaintContext
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
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
