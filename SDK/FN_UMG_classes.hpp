#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UMG.AsyncTaskDownloadImage
// 0x0020 (0x0048 - 0x0028)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.AsyncTaskDownloadImage");
		return ptr;
	}


	class UAsyncTaskDownloadImage* STATIC_DownloadImage(const struct FString& URL);
};


// Class UMG.DragDropOperation
// 0x0060 (0x0088 - 0x0028)
class UDragDropOperation : public UObject
{
public:
	struct FString                                     Tag;                                                      // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class UObject*                                     Payload;                                                  // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     DefaultDragVisual;                                        // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0048(0x0001) UNKNOWN PROPERTY: EnumProperty UMG.DragDropOperation.Pivot
	unsigned char                                      UnknownData01[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FVector2D                                   Offset;                                                   // 0x004C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDrop;                                                   // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragCancelled;                                          // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragged;                                                // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DragDropOperation");
		return ptr;
	}


	void Drop(const struct FPointerEvent& PointerEvent);
	void Dragged(const struct FPointerEvent& PointerEvent);
	void DragCancelled(const struct FPointerEvent& PointerEvent);
};


// Class UMG.MovieScene2DTransformSection
// 0x0310 (0x03E0 - 0x00D0)
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	struct FRichCurve                                  Translation[0x2];                                         // 0x00D0(0x0070)
	struct FRichCurve                                  Rotation;                                                 // 0x01B0(0x0070)
	struct FRichCurve                                  Scale[0x2];                                               // 0x0220(0x0070)
	struct FRichCurve                                  Shear[0x2];                                               // 0x0300(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		return ptr;
	}

};


// Class UMG.MovieScene2DTransformTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		return ptr;
	}

};


// Class UMG.MovieSceneMarginSection
// 0x01C0 (0x0290 - 0x00D0)
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	struct FRichCurve                                  TopCurve;                                                 // 0x00D0(0x0070)
	struct FRichCurve                                  LeftCurve;                                                // 0x0140(0x0070)
	struct FRichCurve                                  RightCurve;                                               // 0x01B0(0x0070)
	struct FRichCurve                                  BottomCurve;                                              // 0x0220(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginSection");
		return ptr;
	}

};


// Class UMG.MovieSceneMarginTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		return ptr;
	}

};


// Class UMG.MovieSceneWidgetMaterialTrack
// 0x0010 (0x00E0 - 0x00D0)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	struct FName                                       TrackName;                                                // 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneWidgetMaterialTrack");
		return ptr;
	}

};


// Class UMG.NamedSlotInterface
// 0x0000 (0x0028 - 0x0028)
class UNamedSlotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NamedSlotInterface");
		return ptr;
	}

};


// Class UMG.PropertyBinding
// 0x0020 (0x0048 - 0x0028)
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                      SourceObject;                                             // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDynamicPropertyPath                        SourcePath;                                               // 0x0030(0x0010)
	struct FName                                       DestinationProperty;                                      // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PropertyBinding");
		return ptr;
	}

};


// Class UMG.BoolBinding
// 0x0000 (0x0048 - 0x0048)
class UBoolBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BoolBinding");
		return ptr;
	}


	bool GetValue();
};


// Class UMG.BrushBinding
// 0x0008 (0x0050 - 0x0048)
class UBrushBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BrushBinding");
		return ptr;
	}


	struct FSlateBrush GetValue();
};


// Class UMG.CheckedStateBinding
// 0x0008 (0x0050 - 0x0048)
class UCheckedStateBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CheckedStateBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.ColorBinding
// 0x0008 (0x0050 - 0x0048)
class UColorBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ColorBinding");
		return ptr;
	}


	struct FSlateColor GetSlateValue();
	struct FLinearColor GetLinearValue();
};


// Class UMG.FloatBinding
// 0x0000 (0x0048 - 0x0048)
class UFloatBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.FloatBinding");
		return ptr;
	}


	float GetValue();
};


// Class UMG.Int32Binding
// 0x0000 (0x0048 - 0x0048)
class UInt32Binding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Int32Binding");
		return ptr;
	}


	int GetValue();
};


// Class UMG.MouseCursorBinding
// 0x0000 (0x0048 - 0x0048)
class UMouseCursorBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MouseCursorBinding");
		return ptr;
	}


	TEnumAsByte<EMouseCursor> GetValue();
};


// Class UMG.TextBinding
// 0x0008 (0x0050 - 0x0048)
class UTextBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextBinding");
		return ptr;
	}


	struct FText GetTextValue();
	struct FString GetStringValue();
};


// Class UMG.VisibilityBinding
// 0x0000 (0x0048 - 0x0048)
class UVisibilityBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VisibilityBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.WidgetBinding
// 0x0000 (0x0048 - 0x0048)
class UWidgetBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBinding");
		return ptr;
	}


	class UWidget* GetValue();
};


// Class UMG.RichTextBlockDecorator
// 0x0008 (0x0030 - 0x0028)
class URichTextBlockDecorator : public UObject
{
public:
	unsigned char                                      bReveal : 1;                                              // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                RevealedIndex;                                            // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlockDecorator");
		return ptr;
	}

};


// Class UMG.SlateBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		return ptr;
	}


	void STATIC_ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate);
	void STATIC_ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate);
	void STATIC_ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition);
	void STATIC_LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D STATIC_LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);
	bool STATIC_IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
	struct FVector2D STATIC_GetLocalSize(const struct FGeometry& Geometry);
	bool STATIC_EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B);
	void STATIC_AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D STATIC_AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
};


// Class UMG.SlateDataSheet
// 0x0408 (0x0430 - 0x0028)
class USlateDataSheet : public UObject
{
public:
	class UTexture2D*                                  DataTexture;                                              // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x400];                                     // 0x0030(0x0400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateDataSheet");
		return ptr;
	}

};


// Class UMG.SlateVectorArtData
// 0x0038 (0x0060 - 0x0028)
class USlateVectorArtData : public UObject
{
public:
	TArray<struct FSlateMeshVertex>                    VertexData;                                               // 0x0028(0x0010) (CPF_ZeroConstructor)
	TArray<uint32_t>                                   IndexData;                                                // 0x0038(0x0010) (CPF_ZeroConstructor)
	class UMaterialInterface*                          Material;                                                 // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   ExtentMin;                                                // 0x0050(0x0008) (CPF_IsPlainOldData)
	struct FVector2D                                   ExtentMax;                                                // 0x0058(0x0008) (CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateVectorArtData");
		return ptr;
	}

};


// Class UMG.Visual
// 0x0000 (0x0028 - 0x0028)
class UVisual : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Visual");
		return ptr;
	}

};


// Class UMG.Widget
// 0x00F0 (0x0118 - 0x0028)
class UWidget : public UVisual
{
public:
	unsigned char                                      bIsVariable : 1;                                          // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCreatedByConstructionScript : 1;                         // 0x0029(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	class UPanelSlot*                                  Slot;                                                     // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      bIsEnabled : 1;                                           // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FScriptDelegate                             bIsEnabledDelegate;                                       // 0x0040(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0039(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FText                                       ToolTipText;                                              // 0x0050(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FScriptDelegate                             ToolTipTextDelegate;                                      // 0x0068(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0068(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UWidget*                                     ToolTipWidget;                                            // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FScriptDelegate                             ToolTipWidgetDelegate;                                    // 0x0080(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0080(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData05[0x1];                                       // 0x0090(0x0001) UNKNOWN PROPERTY: EnumProperty UMG.Widget.Visiblity
	unsigned char                                      UnknownData06[0x1];                                       // 0x0091(0x0001) UNKNOWN PROPERTY: EnumProperty UMG.Widget.Visibility
	unsigned char                                      UnknownData07[0x6];                                       // 0x0092(0x0006) MISSED OFFSET
	struct FScriptDelegate                             VisibilityDelegate;                                       // 0x0098(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData08[0x6];                                       // 0x0092(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      bOverride_Cursor : 1;                                     // 0x00A8(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData09[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	TEnumAsByte<EMouseCursor>                          Cursor;                                                   // 0x00AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsVolatile : 1;                                          // 0x00AD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x00AE(0x0002) MISSED OFFSET
	struct FWidgetTransform                            RenderTransform;                                          // 0x00B0(0x001C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FVector2D                                   RenderTransformPivot;                                     // 0x00CC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	class UWidgetNavigation*                           Navigation;                                               // 0x00D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x28];                                      // 0x00E0(0x0028) MISSED OFFSET
	TArray<class UPropertyBinding*>                    NativeBindings;                                           // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Widget");
		return ptr;
	}


	void SetVisibility();
	void SetUserFocus(class APlayerController* PlayerController);
	void SetToolTipText(const struct FText& InToolTipText);
	void SetToolTip(class UWidget* Widget);
	void SetRenderTranslation(const struct FVector2D& Translation);
	void SetRenderTransformPivot(const struct FVector2D& Pivot);
	void SetRenderTransform(const struct FWidgetTransform& InTransform);
	void SetRenderShear(const struct FVector2D& Shear);
	void SetRenderScale(const struct FVector2D& Scale);
	void SetRenderAngle(float Angle);
	void SetNavigationRule(const struct FName& WidgetToFocus);
	void SetKeyboardFocus();
	void SetIsEnabled(bool bInIsEnabled);
	void SetCursor(TEnumAsByte<EMouseCursor> InCursor);
	void SetAllNavigationRules(const struct FName& WidgetToFocus);
	void ResetCursor();
	void RemoveFromParent();
	struct FEventReply OnReply__DelegateSignature();
	struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool IsVisible();
	bool IsHovered();
	void InvalidateLayoutAndVolatility();
	bool HasUserFocusedDescendants(class APlayerController* PlayerController);
	bool HasUserFocus(class APlayerController* PlayerController);
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	bool HasAnyUserFocus();
	class UWidget* GetWidget__DelegateSignature();
	void GetVisibility();
	struct FText GetText__DelegateSignature();
	void GetSlateVisibility__DelegateSignature();
	struct FSlateColor GetSlateColor__DelegateSignature();
	struct FSlateBrush GetSlateBrush__DelegateSignature();
	class UPanelWidget* GetParent();
	class APlayerController* GetOwningPlayer();
	TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();
	struct FLinearColor GetLinearColor__DelegateSignature();
	bool GetIsEnabled();
	int GetInt32__DelegateSignature();
	float GetFloat__DelegateSignature();
	struct FVector2D GetDesiredSize();
	void GetCheckBoxState__DelegateSignature();
	struct FGeometry GetCachedGeometry();
	bool GetBool__DelegateSignature();
	class UWidget* GenerateWidgetForString__DelegateSignature(const struct FString& Item);
	class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	void ForceVolatile(bool bForce);
	void ForceLayoutPrepass();
};


// Class UMG.WidgetBlueprintGeneratedClass
// 0x0068 (0x0398 - 0x0330)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                                 WidgetTree;                                               // 0x0330(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAllowTemplate : 1;                                       // 0x0338(0x0001)
	unsigned char                                      bValidTemplate : 1;                                       // 0x0338(0x0001)
	unsigned char                                      bTemplateInitialized : 1;                                 // 0x0338(0x0001) (CPF_Transient)
	unsigned char                                      bCookedTemplate : 1;                                      // 0x0338(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	TArray<struct FDelegateRuntimeBinding>             Bindings;                                                 // 0x0340(0x0010) (CPF_ZeroConstructor)
	TArray<class UWidgetAnimation*>                    Animations;                                               // 0x0350(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TArray<struct FName>                               NamedSlots;                                               // 0x0360(0x0010) (CPF_ZeroConstructor)
	TAssetPtr<class UUserWidget>                       TemplateAsset;                                            // 0x0370(0x0020) (CPF_ExportObject, CPF_InstancedReference)
	class UUserWidget*                                 Template;                                                 // 0x0390(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		return ptr;
	}

};


// Class UMG.UserWidget
// 0x0118 (0x0230 - 0x0118)
class UUserWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0120(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0130(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0130(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FSlateColor                                 ForegroundColor;                                          // 0x0140(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FScriptDelegate                             ForegroundColorDelegate;                                  // 0x0168(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0168(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FMargin                                     Padding;                                                  // 0x0178(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bSupportsKeyboardFocus : 1;                               // 0x0188(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bIsFocusable : 1;                                         // 0x0189(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x018A(0x0006) MISSED OFFSET
	TArray<class UUMGSequencePlayer*>                  ActiveSequencePlayers;                                    // 0x0190(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UUMGSequencePlayer*>                  StoppedSequencePlayers;                                   // 0x01A0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      bStopAction : 1;                                          // 0x01B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01B1(0x0003) MISSED OFFSET
	int                                                Priority;                                                 // 0x01B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FNamedSlotBinding>                   NamedSlotBindings;                                        // 0x01B8(0x0010) (CPF_ZeroConstructor)
	class UWidgetTree*                                 WidgetTree;                                               // 0x01C8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      bCanEverTick : 1;                                         // 0x01D0(0x0001)
	unsigned char                                      bCanEverPaint : 1;                                        // 0x01D0(0x0001)
	unsigned char                                      bCookedWidgetTree : 1;                                    // 0x01D0(0x0001)
	unsigned char                                      UnknownData05[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET
	class UInputComponent*                             InputComponent;                                           // 0x01D8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x50];                                      // 0x01E0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserWidget");
		return ptr;
	}


	void UnregisterInputComponent();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType);
	void StopListeningForAllInputActions();
	void StopAnimation(class UWidgetAnimation* InAnimation);
	void SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);
	void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	void SetPadding(const struct FMargin& InPadding);
	void SetOwningPlayer(class APlayerController* LocalPlayerController);
	void SetOwningLocalPlayer(class ULocalPlayer* LocalPlayer);
	void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay);
	void SetInputActionPriority(int NewPriority);
	void SetInputActionBlocking(bool bShouldBlock);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void SetDesiredSizeInViewport(const struct FVector2D& Size);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetAnchorsInViewport(const struct FAnchors& Anchors);
	void SetAlignmentInViewport(const struct FVector2D& Alignment);
	void ReverseAnimation(class UWidgetAnimation* InAnimation);
	void RemoveFromViewport();
	void RegisterInputComponent();
	void PreConstruct(bool IsDesignTime);
	void PlaySound(class USoundBase* SoundToPlay);
	void PlayAnimationTo(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	void PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	float PauseAnimation(class UWidgetAnimation* InAnimation);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);
	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnPaint(struct FPaintContext* Context);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	struct FEventReply OnControllerButtonReleased(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
	struct FEventReply OnControllerButtonPressed(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
	struct FEventReply OnControllerAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
	void OnAnimationStarted(class UWidgetAnimation* Animation);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void ListenForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback);
	bool IsPlayingAnimation();
	bool IsListeningForInputAction(const struct FName& ActionName);
	bool IsInViewport();
	bool IsInteractable();
	bool IsAnyAnimationPlaying();
	bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);
	bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);
	class APawn* GetOwningPlayerPawn();
	class ULocalPlayer* GetOwningLocalPlayer();
	bool GetIsVisible();
	float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);
	struct FAnchors GetAnchorsInViewport();
	struct FVector2D GetAlignmentInViewport();
	void Destruct();
	void Construct();
	void AddToViewport(int ZOrder);
	bool AddToPlayerScreen(int ZOrder);
};


// Class UMG.UMGSequencePlayer
// 0x0638 (0x0660 - 0x0028)
class UUMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x358];                                     // 0x0028(0x0358) MISSED OFFSET
	class UWidgetAnimation*                            Animation;                                                // 0x0380(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2D8];                                     // 0x0388(0x02D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UMGSequencePlayer");
		return ptr;
	}

};


// Class UMG.PanelSlot
// 0x0010 (0x0038 - 0x0028)
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                                Parent;                                                   // 0x0028(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     Content;                                                  // 0x0030(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelSlot");
		return ptr;
	}

};


// Class UMG.BackgroundBlurSlot
// 0x0028 (0x0060 - 0x0038)
class UBackgroundBlurSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (CPF_Edit)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BackgroundBlurSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.BorderSlot
// 0x0028 (0x0060 - 0x0038)
class UBorderSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (CPF_Edit)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BorderSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.ButtonSlot
// 0x0028 (0x0060 - 0x0038)
class UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ButtonSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.CanvasPanelSlot
// 0x0038 (0x0070 - 0x0038)
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                                 LayoutData;                                               // 0x0038(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bAutoSize : 1;                                            // 0x0060(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                ZOrder;                                                   // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanelSlot");
		return ptr;
	}


	void SetZOrder(int InZOrder);
	void SetSize(const struct FVector2D& InSize);
	void SetPosition(const struct FVector2D& InPosition);
	void SetOffsets(const struct FMargin& InOffset);
	void SetMinimum(const struct FVector2D& InMinimumAnchors);
	void SetMaximum(const struct FVector2D& InMaximumAnchors);
	void SetLayout(const struct FAnchorData& InLayoutData);
	void SetAutoSize(bool InbAutoSize);
	void SetAnchors(const struct FAnchors& InAnchors);
	void SetAlignment(const struct FVector2D& InAlignment);
	int GetZOrder();
	struct FVector2D GetSize();
	struct FVector2D GetPosition();
	struct FMargin GetOffsets();
	struct FAnchorData GetLayout();
	bool GetAutoSize();
	struct FAnchors GetAnchors();
	struct FVector2D GetAlignment();
};


// Class UMG.GridSlot
// 0x0038 (0x0070 - 0x0038)
class UGridSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	int                                                Row;                                                      // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RowSpan;                                                  // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Column;                                                   // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ColumnSpan;                                               // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Layer;                                                    // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   Nudge;                                                    // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetRowSpan(int InRowSpan);
	void SetRow(int InRow);
	void SetPadding(const struct FMargin& InPadding);
	void SetLayer(int InLayer);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetColumnSpan(int InColumnSpan);
	void SetColumn(int InColumn);
};


// Class UMG.HorizontalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateChildSize                             Size;                                                     // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.OverlaySlot
// 0x0020 (0x0058 - 0x0038)
class UOverlaySlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x004A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.OverlaySlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.SafeZoneSlot
// 0x0028 (0x0060 - 0x0038)
class USafeZoneSlot : public UPanelSlot
{
public:
	unsigned char                                      bIsTitleSafe : 1;                                         // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FMargin                                     SafeAreaScale;                                            // 0x003C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HAlign;                                                   // 0x004C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VAlign;                                                   // 0x004D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SafeZoneSlot");
		return ptr;
	}

};


// Class UMG.ScaleBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UScaleBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.ScrollBoxSlot
// 0x0020 (0x0058 - 0x0038)
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0049(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBoxSlot");
		return ptr;
	}


	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.SizeBoxSlot
// 0x0028 (0x0060 - 0x0038)
class USizeBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.UniformGridSlot
// 0x0018 (0x0050 - 0x0038)
class UUniformGridSlot : public UPanelSlot
{
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0039(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	int                                                Row;                                                      // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Column;                                                   // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0044(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetRow(int InRow);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetColumn(int InColumn);
};


// Class UMG.VerticalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateChildSize                             Size;                                                     // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WidgetSwitcherSlot
// 0x0020 (0x0058 - 0x0038)
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x004A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcherSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.PanelWidget
// 0x0018 (0x0130 - 0x0118)
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                          Slots;                                                    // 0x0118(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelWidget");
		return ptr;
	}


	bool RemoveChildAt(int Index);
	bool RemoveChild(class UWidget* Content);
	bool HasChild(class UWidget* Content);
	bool HasAnyChildren();
	int GetChildrenCount();
	int GetChildIndex(class UWidget* Content);
	class UWidget* GetChildAt(int Index);
	void ClearChildren();
	class UPanelSlot* AddChild(class UWidget* Content);
};


// Class UMG.ContentWidget
// 0x0000 (0x0130 - 0x0130)
class UContentWidget : public UPanelWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ContentWidget");
		return ptr;
	}


	class UPanelSlot* SetContent(class UWidget* Content);
	class UPanelSlot* GetContentSlot();
};


// Class UMG.WindowTitleBarArea
// 0x0020 (0x0150 - 0x0130)
class UWindowTitleBarArea : public UContentWidget
{
public:
	unsigned char                                      bDoubleClickTogglesFullscreen : 1;                        // 0x0130(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0131(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WindowTitleBarArea");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WindowTitleBarAreaSlot
// 0x0028 (0x0060 - 0x0038)
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WindowTitleBarAreaSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WrapBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bFillEmptySpace : 1;                                      // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              FillSpanWhenLessThan;                                     // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WrapBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
};


// Class UMG.CircularThrobber
// 0x00C0 (0x01D8 - 0x0118)
class UCircularThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           // 0x0118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Period;                                                   // 0x011C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0120(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	class USlateBrushAsset*                            PieceImage;                                               // 0x0128(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FSlateBrush                                 Image;                                                    // 0x0130(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bEnableRadius : 1;                                        // 0x01C0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x01C1(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CircularThrobber");
		return ptr;
	}


	void SetRadius(float InRadius);
	void SetPeriod(float InPeriod);
	void SetNumberOfPieces(int InNumberOfPieces);
};


// Class UMG.ComboBox
// 0x0038 (0x0150 - 0x0118)
class UComboBox : public UWidget
{
public:
	TArray<class UObject*>                             Items;                                                    // 0x0118(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                    // 0x0128(0x000A) (CPF_Edit, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0128(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      bIsFocusable : 1;                                         // 0x0138(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0139(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBox");
		return ptr;
	}

};


// Class UMG.ComboBoxString
// 0x0C80 (0x0D98 - 0x0118)
class UComboBoxString : public UWidget
{
public:
	TArray<struct FString>                             DefaultOptions;                                           // 0x0118(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     SelectedOption;                                           // 0x0128(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FComboBoxStyle                              WidgetStyle;                                              // 0x0138(0x0428) (CPF_Edit, CPF_BlueprintVisible)
	struct FTableRowStyle                              ItemStyle;                                                // 0x0560(0x0718) (CPF_Edit, CPF_BlueprintVisible)
	struct FMargin                                     ContentPadding;                                           // 0x0C78(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              MaxListHeight;                                            // 0x0C88(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      HasDownArrow : 1;                                         // 0x0C8C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      EnableGamepadNavigationMode : 1;                          // 0x0C8D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0C8E(0x0002) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0C90(0x0068) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0CF8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bIsFocusable : 1;                                         // 0x0D20(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0D21(0x0007) MISSED OFFSET
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                    // 0x0D28(0x000A) (CPF_Edit, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0D21(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0D38(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOpening;                                                // 0x0D48(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData03[0x40];                                      // 0x0D58(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBoxString");
		return ptr;
	}


	void SetSelectedOption(const struct FString& Option);
	bool RemoveOption(const struct FString& Option);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnOpeningEvent__DelegateSignature();
	struct FString GetSelectedOption();
	int GetOptionCount();
	struct FString GetOptionAtIndex(int Index);
	int FindOptionIndex(const struct FString& Option);
	void ClearSelection();
	void ClearOptions();
	void AddOption(const struct FString& Option);
};


// Class UMG.TextLayoutWidget
// 0x0028 (0x0140 - 0x0118)
class UTextLayoutWidget : public UWidget
{
public:
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x0118(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0120(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AutoWrapText : 1;                                         // 0x0121(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0122(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x0124(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0128(0x0001) UNKNOWN PROPERTY: EnumProperty UMG.TextLayoutWidget.WrappingPolicy
	unsigned char                                      UnknownData02[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	struct FMargin                                     Margin;                                                   // 0x012C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              LineHeightPercentage;                                     // 0x013C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextLayoutWidget");
		return ptr;
	}

};


// Class UMG.EditableText
// 0x0390 (0x04A8 - 0x0118)
class UEditableText : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0118(0x0018) (CPF_Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0130(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0130(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FText                                       HintText;                                                 // 0x0140(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0158(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0158(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FEditableTextStyle                          WidgetStyle;                                              // 0x0168(0x0248) (CPF_Edit, CPF_BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x03B0(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImageSelected;                                  // 0x03B8(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImageComposing;                                 // 0x03C0(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class USlateBrushAsset*                            CaretImage;                                               // 0x03C8(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x03D0(0x0068) (CPF_Deprecated)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0438(0x0028) (CPF_Deprecated)
	unsigned char                                      IsReadOnly : 1;                                           // 0x0460(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsPassword : 1;                                           // 0x0461(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0462(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x0464(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsCaretMovedWhenGainFocus : 1;                            // 0x0468(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SelectAllTextWhenFocused : 1;                             // 0x0469(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      RevertTextOnEscape : 1;                                   // 0x046A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ClearKeyboardFocusOnCommit : 1;                           // 0x046B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SelectAllTextOnCommit : 1;                                // 0x046C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AllowContextMenu : 1;                                     // 0x046D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVirtualKeyboardType>                  KeyboardType;                                             // 0x046E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x046F(0x0001) MISSED OFFSET
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x0470(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x0478(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0488(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0498(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableText");
		return ptr;
	}


	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool InbIsReadyOnly);
	void SetIsPassword(bool InbIsPassword);
	void SetHintText(const struct FText& InHintText);
	void OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};


// Class UMG.EditableTextBox
// 0x09B8 (0x0AD0 - 0x0118)
class UEditableTextBox : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0118(0x0018) (CPF_Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0130(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0130(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FEditableTextBoxStyle                       WidgetStyle;                                              // 0x0140(0x0870) (CPF_Edit, CPF_BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x09B0(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FText                                       HintText;                                                 // 0x09B8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x09D0(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData01[0x6];                                       // 0x09D0(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FSlateFontInfo                              Font;                                                     // 0x09E0(0x0068) (CPF_Deprecated)
	struct FLinearColor                                ForegroundColor;                                          // 0x0A48(0x0010) (CPF_Deprecated, CPF_IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0A58(0x0010) (CPF_Deprecated, CPF_IsPlainOldData)
	struct FLinearColor                                ReadOnlyForegroundColor;                                  // 0x0A68(0x0010) (CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      IsReadOnly : 1;                                           // 0x0A78(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsPassword : 1;                                           // 0x0A79(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0A7A(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x0A7C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMargin                                     Padding;                                                  // 0x0A80(0x0010) (CPF_Deprecated)
	unsigned char                                      IsCaretMovedWhenGainFocus : 1;                            // 0x0A90(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SelectAllTextWhenFocused : 1;                             // 0x0A91(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      RevertTextOnEscape : 1;                                   // 0x0A92(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ClearKeyboardFocusOnCommit : 1;                           // 0x0A93(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SelectAllTextOnCommit : 1;                                // 0x0A94(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AllowContextMenu : 1;                                     // 0x0A95(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVirtualKeyboardType>                  KeyboardType;                                             // 0x0A96(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0A97(0x0001) MISSED OFFSET
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x0A98(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x0AA0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0AB0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0AC0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableTextBox");
		return ptr;
	}


	void SetText(const struct FText& InText);
	void SetError(const struct FText& InError);
	void OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	bool HasError();
	struct FText GetText();
	void ClearError();
};


// Class UMG.ExpandableArea
// 0x0248 (0x0360 - 0x0118)
class UExpandableArea : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	struct FExpandableAreaStyle                        Style;                                                    // 0x0120(0x0130) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateBrush                                 BorderBrush;                                              // 0x0250(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateColor                                 BorderColor;                                              // 0x02E0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bIsExpanded : 1;                                          // 0x0308(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0309(0x0003) MISSED OFFSET
	float                                              MaxHeight;                                                // 0x030C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMargin                                     HeaderPadding;                                            // 0x0310(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FMargin                                     AreaPadding;                                              // 0x0320(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnExpansionChanged;                                       // 0x0330(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UWidget*                                     HeaderContent;                                            // 0x0340(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     BodyContent;                                              // 0x0348(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0350(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ExpandableArea");
		return ptr;
	}


	void SetIsExpanded_Animated(bool IsExpanded);
	void SetIsExpanded(bool IsExpanded);
	bool GetIsExpanded();
};


// Class UMG.Image
// 0x00E8 (0x0200 - 0x0118)
class UImage : public UWidget
{
public:
	class USlateBrushAsset*                            Image;                                                    // 0x0118(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // 0x0120(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FScriptDelegate                             BrushDelegate;                                            // 0x01B0(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x6];                                       // 0x01B0(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FLinearColor                                ColorAndOpacity;                                          // 0x01C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x01D0(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData01[0x6];                                       // 0x01D0(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x01E0(0x000A) (CPF_Edit, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData02[0x6];                                       // 0x01E0(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData03[0x10];                                      // 0x01F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Image");
		return ptr;
	}


	void SetOpacity(float InOpacity);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
	void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};


// Class UMG.InputKeySelector
// 0x0100 (0x0218 - 0x0118)
class UInputKeySelector : public UWidget
{
public:
	struct FInputChord                                 SelectedKey;                                              // 0x0118(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FSlateFontInfo                              Font;                                                     // 0x0138(0x0068) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FMargin                                     Margin;                                                   // 0x01A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x01B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FText                                       KeySelectionText;                                         // 0x01C0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bAllowModifierKeys : 1;                                   // 0x01D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnKeySelected;                                            // 0x01E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIsSelectingKeyChanged;                                  // 0x01F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0200(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.InputKeySelector");
		return ptr;
	}


	void SetSelectedKey(const struct FInputChord& InSelectedKey);
	void SetKeySelectionText(const struct FText& InKeySelectionText);
	void SetAllowModifierKeys(bool bInAllowModifierKeys);
	void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void OnIsSelectingKeyChanged__DelegateSignature();
	bool GetIsSelectingKey();
};


// Class UMG.NativeWidgetHost
// 0x0010 (0x0128 - 0x0118)
class UNativeWidgetHost : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NativeWidgetHost");
		return ptr;
	}

};


// Class UMG.CanvasPanel
// 0x0010 (0x0140 - 0x0130)
class UCanvasPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanel");
		return ptr;
	}


	class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);
};


// Class UMG.BackgroundBlur
// 0x00C0 (0x01F0 - 0x0130)
class UBackgroundBlur : public UContentWidget
{
public:
	struct FMargin                                     Padding;                                                  // 0x0130(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0140(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0141(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bApplyAlphaToBlur : 1;                                    // 0x0142(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0143(0x0001) MISSED OFFSET
	float                                              BlurStrength;                                             // 0x0144(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverrideAutoRadiusCalculation : 1;                       // 0x0148(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	int                                                BlurRadius;                                               // 0x014C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSlateBrush                                 LowQualityFallbackBrush;                                  // 0x0150(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x10];                                      // 0x01E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BackgroundBlur");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetBlurStrength(float InStrength);
	void SetBlurRadius(int InBlurRadius);
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
};


// Class UMG.Border
// 0x0160 (0x0290 - 0x0130)
class UBorder : public UContentWidget
{
public:
	struct FLinearColor                                ContentColorAndOpacity;                                   // 0x0130(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FScriptDelegate                             ContentColorAndOpacityDelegate;                           // 0x0140(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0140(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FMargin                                     Padding;                                                  // 0x0150(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0160(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0161(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0162(0x0006) MISSED OFFSET
	struct FSlateBrush                                 Background;                                               // 0x0168(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FScriptDelegate                             BackgroundDelegate;                                       // 0x01F8(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData02[0x6];                                       // 0x01F8(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FLinearColor                                BrushColor;                                               // 0x0208(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FScriptDelegate                             BrushColorDelegate;                                       // 0x0218(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0218(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FVector2D                                   DesiredSizeScale;                                         // 0x0228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      bShowEffectWhenDisabled : 1;                              // 0x0230(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x0238(0x000A) (CPF_Edit, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0231(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             OnMouseButtonUpEvent;                                     // 0x0248(0x000A) (CPF_Edit, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData06[0x6];                                       // 0x0248(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             OnMouseMoveEvent;                                         // 0x0258(0x000A) (CPF_Edit, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData07[0x6];                                       // 0x0258(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             OnMouseDoubleClickEvent;                                  // 0x0268(0x000A) (CPF_Edit, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData08[0x6];                                       // 0x0268(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData09[0x10];                                      // 0x0278(0x0010) MISSED OFFSET
	class USlateBrushAsset*                            Brush;                                                    // 0x0288(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Border");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetDesiredSizeScale(const struct FVector2D& InScale);
	void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
	void SetBrushFromTexture(class UTexture2D* Texture);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrushColor(const struct FLinearColor& InBrushColor);
	void SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};


// Class UMG.Button
// 0x0338 (0x0468 - 0x0130)
class UButton : public UContentWidget
{
public:
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0130(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FButtonStyle                                WidgetStyle;                                              // 0x0138(0x02A8) (CPF_Edit, CPF_BlueprintVisible)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x03E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x03F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x0400(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              // 0x0401(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsFocusable : 1;                                          // 0x0402(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0403(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0408(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPressed;                                                // 0x0418(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReleased;                                               // 0x0428(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHovered;                                                // 0x0438(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUnhovered;                                              // 0x0448(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0458(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Button");
		return ptr;
	}


	void SetStyle(const struct FButtonStyle& InStyle);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	bool IsPressed();
};


// Class UMG.CheckBox
// 0x06B0 (0x07E0 - 0x0130)
class UCheckBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0130(0x0001) UNKNOWN PROPERTY: EnumProperty UMG.CheckBox.CheckedState
	unsigned char                                      UnknownData01[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	struct FScriptDelegate                             CheckedStateDelegate;                                     // 0x0138(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0131(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FCheckBoxStyle                              WidgetStyle;                                              // 0x0148(0x05E0) (CPF_Edit, CPF_BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0728(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class USlateBrushAsset*                            UncheckedImage;                                           // 0x0730(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class USlateBrushAsset*                            UncheckedHoveredImage;                                    // 0x0738(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class USlateBrushAsset*                            UncheckedPressedImage;                                    // 0x0740(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class USlateBrushAsset*                            CheckedImage;                                             // 0x0748(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class USlateBrushAsset*                            CheckedHoveredImage;                                      // 0x0750(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class USlateBrushAsset*                            CheckedPressedImage;                                      // 0x0758(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedImage;                                        // 0x0760(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedHoveredImage;                                 // 0x0768(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedPressedImage;                                 // 0x0770(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0778(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0779(0x0003) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x077C(0x0010) (CPF_Deprecated)
	unsigned char                                      UnknownData04[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	struct FSlateColor                                 BorderBackgroundColor;                                    // 0x0790(0x0028) (CPF_Deprecated)
	unsigned char                                      IsFocusable : 1;                                          // 0x07B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x07B9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCheckStateChanged;                                      // 0x07C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData06[0x10];                                      // 0x07D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CheckBox");
		return ptr;
	}


	void SetIsChecked(bool InIsChecked);
	void SetCheckedState();
	bool IsPressed();
	bool IsChecked();
	void GetCheckedState();
};


// Class UMG.InvalidationBox
// 0x0018 (0x0148 - 0x0130)
class UInvalidationBox : public UContentWidget
{
public:
	unsigned char                                      bCanCache : 1;                                            // 0x0130(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CacheRelativeTransforms : 1;                              // 0x0131(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0132(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.InvalidationBox");
		return ptr;
	}


	void SetCanCache(bool CanCache);
	void InvalidateCache();
	bool GetCanCache();
};


// Class UMG.MenuAnchor
// 0x0040 (0x0170 - 0x0130)
class UMenuAnchor : public UContentWidget
{
public:
	class UClass*                                      MenuClass;                                                // 0x0130(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptDelegate                             OnGetMenuContentEvent;                                    // 0x0138(0x000A) (CPF_Edit, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0138(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TEnumAsByte<EMenuPlacement>                        Placement;                                                // 0x0148(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ShouldDeferPaintingAfterWindowContent : 1;                // 0x0149(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UseApplicationMenuStack : 1;                              // 0x014A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x014B(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMenuOpenChanged;                                        // 0x0150(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0160(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MenuAnchor");
		return ptr;
	}


	void ToggleOpen(bool bFocusOnOpen);
	bool ShouldOpenDueToClick();
	void Open(bool bFocusMenu);
	bool IsOpen();
	bool HasOpenSubMenus();
	struct FVector2D GetMenuPosition();
	void Close();
};


// Class UMG.NamedSlot
// 0x0010 (0x0140 - 0x0130)
class UNamedSlot : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NamedSlot");
		return ptr;
	}

};


// Class UMG.RetainerBox
// 0x0028 (0x0158 - 0x0130)
class URetainerBox : public UContentWidget
{
public:
	int                                                Phase;                                                    // 0x0130(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PhaseCount;                                               // 0x0134(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          EffectMaterial;                                           // 0x0138(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TextureParameter;                                         // 0x0140(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0148(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RetainerBox");
		return ptr;
	}


	void SetTextureParameter(const struct FName& TextureParameter);
	void SetEffectMaterial(class UMaterialInterface* EffectMaterial);
	class UMaterialInstanceDynamic* GetEffectMaterial();
};


// Class UMG.SafeZone
// 0x0018 (0x0148 - 0x0130)
class USafeZone : public UContentWidget
{
public:
	unsigned char                                      PadLeft : 1;                                              // 0x0130(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      PadRight : 1;                                             // 0x0131(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      PadTop : 1;                                               // 0x0132(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      PadBottom : 1;                                            // 0x0133(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0134(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SafeZone");
		return ptr;
	}


	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
};


// Class UMG.ScaleBox
// 0x0020 (0x0150 - 0x0130)
class UScaleBox : public UContentWidget
{
public:
	TEnumAsByte<EStretch>                              Stretch;                                                  // 0x0130(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EStretchDirection>                     StretchDirection;                                         // 0x0131(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0132(0x0002) MISSED OFFSET
	float                                              UserSpecifiedScale;                                       // 0x0134(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IgnoreInheritedScale : 1;                                 // 0x0138(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0139(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBox");
		return ptr;
	}


	void SetUserSpecifiedScale(float InUserSpecifiedScale);
	void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);
	void SetStretch(TEnumAsByte<EStretch> InStretch);
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
};


// Class UMG.SizeBox
// 0x0030 (0x0160 - 0x0130)
class USizeBox : public UContentWidget
{
public:
	unsigned char                                      bOverride_WidthOverride : 1;                              // 0x0130(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_HeightOverride : 1;                             // 0x0130(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_MinDesiredWidth : 1;                            // 0x0130(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_MinDesiredHeight : 1;                           // 0x0130(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_MaxDesiredWidth : 1;                            // 0x0130(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_MaxDesiredHeight : 1;                           // 0x0130(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_MaxAspectRatio : 1;                             // 0x0130(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              WidthOverride;                                            // 0x0134(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeightOverride;                                           // 0x0138(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinDesiredWidth;                                          // 0x013C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinDesiredHeight;                                         // 0x0140(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDesiredWidth;                                          // 0x0144(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDesiredHeight;                                         // 0x0148(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxAspectRatio;                                           // 0x014C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0150(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBox");
		return ptr;
	}


	void SetWidthOverride(float InWidthOverride);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetMinDesiredHeight(float InMinDesiredHeight);
	void SetMaxDesiredWidth(float InMaxDesiredWidth);
	void SetMaxDesiredHeight(float InMaxDesiredHeight);
	void SetMaxAspectRatio(float InMaxAspectRatio);
	void SetHeightOverride(float InHeightOverride);
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearMaxAspectRatio();
	void ClearHeightOverride();
};


// Class UMG.Viewport
// 0x0028 (0x0158 - 0x0130)
class UViewport : public UContentWidget
{
public:
	struct FLinearColor                                BackgroundColor;                                          // 0x0130(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0140(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Viewport");
		return ptr;
	}


	class AActor* Spawn(class UClass* ActorClass);
	void SetViewRotation(const struct FRotator& Rotation);
	void SetViewLocation(const struct FVector& Location);
	struct FRotator GetViewRotation();
	class UWorld* GetViewportWorld();
	struct FVector GetViewLocation();
};


// Class UMG.GridPanel
// 0x0030 (0x0160 - 0x0130)
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                      ColumnFill;                                               // 0x0130(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<float>                                      RowFill;                                                  // 0x0140(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0150(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridPanel");
		return ptr;
	}


	class UGridSlot* AddChildToGrid(class UWidget* Content);
};


// Class UMG.HorizontalBox
// 0x0010 (0x0140 - 0x0130)
class UHorizontalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBox");
		return ptr;
	}


	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
};


// Class UMG.Overlay
// 0x0010 (0x0140 - 0x0130)
class UOverlay : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Overlay");
		return ptr;
	}


	class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
};


// Class UMG.ScrollBox
// 0x0798 (0x08C8 - 0x0130)
class UScrollBox : public UPanelWidget
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                              // 0x0130(0x0248) (CPF_Edit, CPF_BlueprintVisible)
	struct FScrollBarStyle                             WidgetBarStyle;                                           // 0x0378(0x0518) (CPF_Edit, CPF_BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0890(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class USlateWidgetStyleAsset*                      BarStyle;                                                 // 0x0898(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x08A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x08A1(0x0001) UNKNOWN PROPERTY: EnumProperty UMG.ScrollBox.ScrollBarVisibility
	unsigned char                                      UnknownData01[0x1];                                       // 0x08A2(0x0001) UNKNOWN PROPERTY: EnumProperty UMG.ScrollBox.ConsumeMouseWheel
	unsigned char                                      UnknownData02[0x1];                                       // 0x08A3(0x0001) MISSED OFFSET
	struct FVector2D                                   ScrollbarThickness;                                       // 0x08A4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      AlwaysShowScrollbar : 1;                                  // 0x08AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x08AD(0x0001) UNKNOWN PROPERTY: EnumProperty UMG.ScrollBox.NavigationDestination
	unsigned char                                      UnknownData04[0x2];                                       // 0x08AE(0x0002) MISSED OFFSET
	float                                              NavigationScrollPadding;                                  // 0x08B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x14];                                      // 0x08B4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBox");
		return ptr;
	}


	void SetScrollOffset(float NewScrollOffset);
	void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll);
	void ScrollToStart();
	void ScrollToEnd();
	float GetScrollOffset();
};


// Class UMG.UniformGridPanel
// 0x0028 (0x0158 - 0x0130)
class UUniformGridPanel : public UPanelWidget
{
public:
	struct FMargin                                     SlotPadding;                                              // 0x0130(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              MinDesiredSlotWidth;                                      // 0x0140(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinDesiredSlotHeight;                                     // 0x0144(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0148(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridPanel");
		return ptr;
	}


	void SetSlotPadding(const struct FMargin& InSlotPadding);
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content);
};


// Class UMG.VerticalBox
// 0x0010 (0x0140 - 0x0130)
class UVerticalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBox");
		return ptr;
	}


	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);
};


// Class UMG.WidgetSwitcher
// 0x0018 (0x0148 - 0x0130)
class UWidgetSwitcher : public UPanelWidget
{
public:
	int                                                ActiveWidgetIndex;                                        // 0x0130(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0134(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcher");
		return ptr;
	}


	void SetActiveWidgetIndex(int Index);
	void SetActiveWidget(class UWidget* Widget);
	class UWidget* GetWidgetAtIndex(int Index);
	int GetNumWidgets();
	int GetActiveWidgetIndex();
};


// Class UMG.WrapBox
// 0x0020 (0x0150 - 0x0130)
class UWrapBox : public UPanelWidget
{
public:
	struct FVector2D                                   InnerSlotPadding;                                         // 0x0130(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              WrapWidth;                                                // 0x0138(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bExplicitWrapWidth : 1;                                   // 0x013C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x013D(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WrapBox");
		return ptr;
	}


	void SetInnerSlotPadding(const struct FVector2D& InPadding);
	class UWrapBoxSlot* AddChildWrapBox(class UWidget* Content);
};


// Class UMG.ProgressBar
// 0x0220 (0x0338 - 0x0118)
class UProgressBar : public UWidget
{
public:
	struct FProgressBarStyle                           WidgetStyle;                                              // 0x0118(0x01B8) (CPF_Edit, CPF_BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x02D0(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImage;                                          // 0x02D8(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class USlateBrushAsset*                            FillImage;                                                // 0x02E0(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class USlateBrushAsset*                            MarqueeImage;                                             // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              Percent;                                                  // 0x02F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EProgressBarFillType>                  BarFillType;                                              // 0x02F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsMarquee : 1;                                           // 0x02F5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02F6(0x0002) MISSED OFFSET
	struct FScriptDelegate                             PercentDelegate;                                          // 0x02F8(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData01[0x6];                                       // 0x02F6(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FLinearColor                                FillColorAndOpacity;                                      // 0x0308(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FScriptDelegate                             FillColorAndOpacityDelegate;                              // 0x0318(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0318(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData03[0x10];                                      // 0x0328(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ProgressBar");
		return ptr;
	}


	void SetPercent(float InPercent);
	void SetIsMarquee(bool InbIsMarquee);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
};


// Class UMG.ScrollBar
// 0x0540 (0x0658 - 0x0118)
class UScrollBar : public UWidget
{
public:
	struct FScrollBarStyle                             WidgetStyle;                                              // 0x0118(0x0518) (CPF_Edit, CPF_BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0630(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bAlwaysShowScrollbar : 1;                                 // 0x0638(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0639(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x063A(0x0002) MISSED OFFSET
	struct FVector2D                                   Thickness;                                                // 0x063C(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0644(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBar");
		return ptr;
	}


	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};


// Class UMG.Slider
// 0x02F8 (0x0410 - 0x0118)
class USlider : public UWidget
{
public:
	float                                              Value;                                                    // 0x0118(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FScriptDelegate                             ValueDelegate;                                            // 0x0120(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData01[0x6];                                       // 0x011C(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FSliderStyle                                WidgetStyle;                                              // 0x0130(0x0250) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0380(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	struct FLinearColor                                SliderBarColor;                                           // 0x0384(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                SliderHandleColor;                                        // 0x0394(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      IndentHandle : 1;                                         // 0x03A4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Locked : 1;                                               // 0x03A5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x03A6(0x0002) MISSED OFFSET
	float                                              StepSize;                                                 // 0x03A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsFocusable : 1;                                          // 0x03AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                      // 0x03B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                        // 0x03C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnControllerCaptureBegin;                                 // 0x03D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnControllerCaptureEnd;                                   // 0x03E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x03F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0400(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Slider");
		return ptr;
	}


	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	float GetValue();
};


// Class UMG.Spacer
// 0x0018 (0x0130 - 0x0118)
class USpacer : public UWidget
{
public:
	struct FVector2D                                   Size;                                                     // 0x0118(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Spacer");
		return ptr;
	}


	void SetSize(const struct FVector2D& InSize);
};


// Class UMG.SpinBox
// 0x0438 (0x0550 - 0x0118)
class USpinBox : public UWidget
{
public:
	float                                              Value;                                                    // 0x0118(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FScriptDelegate                             ValueDelegate;                                            // 0x0120(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData01[0x6];                                       // 0x011C(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FSpinBoxStyle                               WidgetStyle;                                              // 0x0130(0x0310) (CPF_Edit, CPF_BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0440(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              Delta;                                                    // 0x0448(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SliderExponent;                                           // 0x044C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x0450(0x0068) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              MinDesiredWidth;                                          // 0x04B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ClearKeyboardFocusOnCommit : 1;                           // 0x04BC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SelectAllTextOnCommit : 1;                                // 0x04BD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x04BE(0x0002) MISSED OFFSET
	struct FSlateColor                                 ForegroundColor;                                          // 0x04C0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x04E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueCommitted;                                         // 0x04F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginSliderMovement;                                    // 0x0508(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndSliderMovement;                                      // 0x0518(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      bOverride_MinValue : 1;                                   // 0x0528(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_MaxValue : 1;                                   // 0x0528(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_MinSliderValue : 1;                             // 0x0528(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_MaxSliderValue : 1;                             // 0x0528(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	float                                              MinValue;                                                 // 0x052C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0530(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSliderValue;                                           // 0x0534(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSliderValue;                                           // 0x0538(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x14];                                      // 0x053C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SpinBox");
		return ptr;
	}


	void SetValue(float NewValue);
	void SetMinValue(float NewValue);
	void SetMinSliderValue(float NewValue);
	void SetMaxValue(float NewValue);
	void SetMaxSliderValue(float NewValue);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	float GetMaxValue();
	float GetMaxSliderValue();
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};


// Class UMG.TableViewBase
// 0x0000 (0x0118 - 0x0118)
class UTableViewBase : public UWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TableViewBase");
		return ptr;
	}


	class UWidget* OnGenerateRowUObject__DelegateSignature(class UObject* Item);
};


// Class UMG.ListView
// 0x0040 (0x0158 - 0x0118)
class UListView : public UTableViewBase
{
public:
	float                                              ItemHeight;                                               // 0x0118(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	TArray<class UObject*>                             Items;                                                    // 0x0120(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            // 0x0130(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	struct FScriptDelegate                             OnGenerateRowEvent;                                       // 0x0138(0x000A) (CPF_Edit, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0131(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData03[0x10];                                      // 0x0148(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListView");
		return ptr;
	}

};


// Class UMG.TileView
// 0x0040 (0x0158 - 0x0118)
class UTileView : public UTableViewBase
{
public:
	float                                              ItemWidth;                                                // 0x0118(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ItemHeight;                                               // 0x011C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UObject*>                             Items;                                                    // 0x0120(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            // 0x0130(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	struct FScriptDelegate                             OnGenerateTileEvent;                                      // 0x0138(0x000A) (CPF_Edit, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0131(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData02[0x10];                                      // 0x0148(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TileView");
		return ptr;
	}


	void SetItemWidth(float Width);
	void SetItemHeight(float Height);
	void RequestListRefresh();
};


// Class UMG.MultiLineEditableText
// 0x02E8 (0x0428 - 0x0140)
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0140(0x0018) (CPF_Edit)
	struct FText                                       HintText;                                                 // 0x0158(0x0018) (CPF_Edit)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0170(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0170(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FTextBlockStyle                             WidgetStyle;                                              // 0x0180(0x0208) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateFontInfo                              Font;                                                     // 0x0388(0x0068) (CPF_Deprecated)
	unsigned char                                      AllowContextMenu : 1;                                     // 0x03F0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x03F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0408(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0418(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableText");
		return ptr;
	}


	void SetText(const struct FText& InText);
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};


// Class UMG.MultiLineEditableTextBox
// 0x0B90 (0x0CD0 - 0x0140)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0140(0x0018) (CPF_Edit)
	struct FText                                       HintText;                                                 // 0x0158(0x0018) (CPF_Edit)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0170(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0170(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FEditableTextBoxStyle                       WidgetStyle;                                              // 0x0180(0x0870) (CPF_Edit, CPF_BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x09F0(0x0208) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      AllowContextMenu : 1;                                     // 0x0BF8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0BF9(0x0007) MISSED OFFSET
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0C00(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x0C08(0x0068) (CPF_Deprecated)
	struct FLinearColor                                ForegroundColor;                                          // 0x0C70(0x0010) (CPF_Deprecated, CPF_IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0C80(0x0010) (CPF_Deprecated, CPF_IsPlainOldData)
	struct FLinearColor                                ReadOnlyForegroundColor;                                  // 0x0C90(0x0010) (CPF_Deprecated, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x0CA0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0CB0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0CC0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		return ptr;
	}


	void SetText(const struct FText& InText);
	void SetError(const struct FText& InError);
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};


// Class UMG.RichTextBlock
// 0x02C8 (0x0408 - 0x0140)
class URichTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0140(0x0018) (CPF_Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0158(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0158(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FSlateFontInfo                              Font;                                                     // 0x0168(0x0068) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FLinearColor                                Color;                                                    // 0x01D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	TArray<class URichTextBlockDecorator*>             Decorators;                                               // 0x01E0(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x218];                                     // 0x01F0(0x0218) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlock");
		return ptr;
	}

};


// Class UMG.TextBlock
// 0x0108 (0x0248 - 0x0140)
class UTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0140(0x0018) (CPF_Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0158(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0158(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0168(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0190(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0190(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FSlateFontInfo                              Font;                                                     // 0x01A0(0x0068) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FVector2D                                   ShadowOffset;                                             // 0x0208(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0210(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FScriptDelegate                             ShadowColorAndOpacityDelegate;                            // 0x0220(0x000A) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0220(0x0006) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	float                                              MinDesiredWidth;                                          // 0x0230(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bWrapWithInvalidationPanel : 1;                           // 0x0234(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x13];                                      // 0x0235(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextBlock");
		return ptr;
	}


	void SetText(const struct FText& InText);
	void SetShadowOffset(const struct FVector2D& InShadowOffset);
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetOpacity(float InOpacity);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	struct FText GetText();
};


// Class UMG.Throbber
// 0x00B0 (0x01C8 - 0x0118)
class UThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           // 0x0118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAnimateHorizontally : 1;                                 // 0x011C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAnimateVertically : 1;                                   // 0x011D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAnimateOpacity : 1;                                      // 0x011E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x011F(0x0001) MISSED OFFSET
	class USlateBrushAsset*                            PieceImage;                                               // 0x0120(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FSlateBrush                                 Image;                                                    // 0x0128(0x0090) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Throbber");
		return ptr;
	}


	void SetNumberOfPieces(int InNumberOfPieces);
	void SetAnimateVertically(bool bInAnimateVertically);
	void SetAnimateOpacity(bool bInAnimateOpacity);
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
};


// Class UMG.WidgetAnimation
// 0x0030 (0x0310 - 0x02E0)
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAnimationFinished;                                      // 0x02E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UMovieScene*                                 MovieScene;                                               // 0x02F8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<struct FWidgetAnimationBinding>             AnimationBindings;                                        // 0x0300(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimation");
		return ptr;
	}


	float GetStartTime();
	float GetEndTime();
};


// Class UMG.WidgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		return ptr;
	}


	struct FEventReply STATIC_UnlockMouse(struct FEventReply* Reply);
	struct FEventReply STATIC_Unhandled();
	struct FEventReply STATIC_SetUserFocus(class UWidget* FocusWidget, bool bInAllUsers, struct FEventReply* Reply);
	struct FEventReply STATIC_SetMousePosition(const struct FVector2D& NewMousePosition, struct FEventReply* Reply);
	void STATIC_SetInputMode_UIOnlyEx(class APlayerController* Target, class UWidget* InWidgetToFocus);
	void STATIC_SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
	void STATIC_SetInputMode_GameOnly(class APlayerController* Target);
	void STATIC_SetInputMode_GameAndUIEx(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bHideCursorDuringCapture);
	void STATIC_SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
	void STATIC_SetFocusToGameViewport();
	void STATIC_SetBrushResourceToTexture(class UTexture2D* Texture, struct FSlateBrush* Brush);
	void STATIC_SetBrushResourceToMaterial(class UMaterialInterface* Material, struct FSlateBrush* Brush);
	struct FEventReply STATIC_ReleaseMouseCapture(struct FEventReply* Reply);
	struct FEventReply STATIC_ReleaseJoystickCapture(bool bInAllJoysticks, struct FEventReply* Reply);
	struct FSlateBrush STATIC_NoResourceBrush();
	struct FSlateBrush STATIC_MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height);
	struct FSlateBrush STATIC_MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height);
	struct FSlateBrush STATIC_MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
	struct FEventReply STATIC_LockMouse(class UWidget* CapturingWidget, struct FEventReply* Reply);
	bool STATIC_IsDragDropping();
	struct FEventReply STATIC_Handled();
	void STATIC_GetSafeZonePadding(class UObject* WorldContextObject, struct FVector2D* SafePadding, struct FVector2D* SafePaddingScale, struct FVector2D* SpillOverPadding);
	struct FKeyEvent STATIC_GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromPointerEvent(const struct FPointerEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromKeyEvent(const struct FKeyEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromControllerEvent(const struct FControllerEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event);
	class UMaterialInstanceDynamic* STATIC_GetDynamicMaterial(struct FSlateBrush* Brush);
	class UDragDropOperation* STATIC_GetDragDroppingContent();
	class UTexture2D* STATIC_GetBrushResourceAsTexture2D(struct FSlateBrush* Brush);
	class UMaterialInterface* STATIC_GetBrushResourceAsMaterial(struct FSlateBrush* Brush);
	class UObject* STATIC_GetBrushResource(struct FSlateBrush* Brush);
	void STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets);
	void STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets);
	struct FEventReply STATIC_EndDragDrop(struct FEventReply* Reply);
	void STATIC_DrawTextFormatted(const struct FText& Text, const struct FVector2D& Position, class UFont* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint, struct FPaintContext* Context);
	void STATIC_DrawText(const struct FString& inString, const struct FVector2D& Position, const struct FLinearColor& Tint, struct FPaintContext* Context);
	void STATIC_DrawLines(TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context);
	void STATIC_DrawLine(const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context);
	void STATIC_DrawBox(const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint, struct FPaintContext* Context);
	void STATIC_DismissAllMenus();
	struct FEventReply STATIC_DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
	struct FEventReply STATIC_DetectDrag(class UWidget* WidgetDetectingDrag, const struct FKey& DragKey, struct FEventReply* Reply);
	class UDragDropOperation* STATIC_CreateDragDropOperation(class UClass* OperationClass);
	class UUserWidget* STATIC_Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer);
	struct FEventReply STATIC_ClearUserFocus(bool bInAllUsers, struct FEventReply* Reply);
	struct FEventReply STATIC_CaptureMouse(class UWidget* CapturingWidget, struct FEventReply* Reply);
	struct FEventReply STATIC_CaptureJoystick(class UWidget* CapturingWidget, bool bInAllJoysticks, struct FEventReply* Reply);
	void STATIC_CancelDragDrop();
};


// Class UMG.WidgetComponent
// 0x0130 (0x08B0 - 0x0780)
class UWidgetComponent : public UMeshComponent
{
public:
	class UClass*                                      WidgetClass;                                              // 0x0780(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FIntPoint                                   DrawSize;                                                 // 0x0788(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      bManuallyRedraw : 1;                                      // 0x0790(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRedrawRequested : 1;                                     // 0x0791(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0792(0x0002) MISSED OFFSET
	float                                              RedrawTime;                                               // 0x0794(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0798(0x0008) MISSED OFFSET
	struct FIntPoint                                   CurrentDrawSize;                                          // 0x07A0(0x0008) (CPF_IsPlainOldData)
	unsigned char                                      bDrawAtDesiredSize : 1;                                   // 0x07A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07A9(0x0003) MISSED OFFSET
	struct FVector2D                                   Pivot;                                                    // 0x07AC(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      bReceiveHardwareInput : 1;                                // 0x07B4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bWindowFocusable : 1;                                     // 0x07B5(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x07B6(0x0002) MISSED OFFSET
	class ULocalPlayer*                                OwnerPlayer;                                              // 0x07B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x07C0(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                TintColorAndOpacity;                                      // 0x07D0(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	float                                              OpacityFromTexture;                                       // 0x07E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x07E4(0x0001) UNKNOWN PROPERTY: EnumProperty UMG.WidgetComponent.BlendMode
	unsigned char                                      bIsTwoSided : 1;                                          // 0x07E5(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      TickWhenOffscreen : 1;                                    // 0x07E6(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x07E7(0x0001) MISSED OFFSET
	class UUserWidget*                                 Widget;                                                   // 0x07E8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x20];                                      // 0x07F0(0x0020) MISSED OFFSET
	class UBodySetup*                                  BodySetup;                                                // 0x0810(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData)
	class UMaterialInterface*                          TranslucentMaterial;                                      // 0x0818(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          TranslucentMaterial_OneSided;                             // 0x0820(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          OpaqueMaterial;                                           // 0x0828(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          OpaqueMaterial_OneSided;                                  // 0x0830(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          MaskedMaterial;                                           // 0x0838(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          MaskedMaterial_OneSided;                                  // 0x0840(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0848(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // 0x0850(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData)
	unsigned char                                      bAddedToScreen : 1;                                       // 0x0858(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData)
	unsigned char                                      bEditTimeUsable : 1;                                      // 0x0859(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x085A(0x0006) MISSED OFFSET
	struct FName                                       SharedLayerName;                                          // 0x0860(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                LayerZOrder;                                              // 0x0868(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x086C(0x0001) UNKNOWN PROPERTY: EnumProperty UMG.WidgetComponent.GeometryMode
	unsigned char                                      UnknownData09[0x3];                                       // 0x086D(0x0003) MISSED OFFSET
	float                                              CylinderArcAngle;                                         // 0x0870(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x3C];                                      // 0x0874(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetComponent");
		return ptr;
	}


	void SetWidget(class UUserWidget* Widget);
	void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
	void SetDrawSize(const struct FVector2D& Size);
	void SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);
	void RequestRedraw();
	class UUserWidget* GetUserWidgetObject();
	class UTextureRenderTarget2D* GetRenderTarget();
	class ULocalPlayer* GetOwnerPlayer();
	class UMaterialInstanceDynamic* GetMaterialInstance();
	struct FVector2D GetDrawSize();
};


// Class UMG.WidgetInteractionComponent
// 0x01F0 (0x0480 - 0x0290)
class UWidgetInteractionComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnHoveredWidgetChanged;                                   // 0x0290(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A0(0x0010) MISSED OFFSET
	int                                                VirtualUserIndex;                                         // 0x02B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PointerIndex;                                             // 0x02B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x02B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	float                                              InteractionDistance;                                      // 0x02BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x02C0(0x0001) UNKNOWN PROPERTY: EnumProperty UMG.WidgetInteractionComponent.InteractionSource
	unsigned char                                      bEnableHitTesting : 1;                                    // 0x02C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShowDebug : 1;                                           // 0x02C2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x02C3(0x0001) MISSED OFFSET
	struct FLinearColor                                DebugColor;                                               // 0x02C4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7C];                                      // 0x02D4(0x007C) MISSED OFFSET
	struct FHitResult                                  CustomHitResult;                                          // 0x0350(0x0088) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector2D                                   LocalHitLocation;                                         // 0x03D8(0x0008) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector2D                                   LastLocalHitLocation;                                     // 0x03E0(0x0008) (CPF_Transient, CPF_IsPlainOldData)
	class UWidgetComponent*                            HoveredWidgetComponent;                                   // 0x03E8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FHitResult                                  LastHitResult;                                            // 0x03F0(0x0088) (CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsHoveredWidgetInteractable : 1;                         // 0x0478(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsHoveredWidgetFocusable : 1;                            // 0x0479(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsHoveredWidgetHitTestVisible : 1;                       // 0x047A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetInteractionComponent");
		return ptr;
	}


	void SetCustomHitResult(const struct FHitResult& HitResult);
	bool SendKeyChar(const struct FString& Characters, bool bRepeat);
	void ScrollWheel(float ScrollDelta);
	void ReleasePointerKey(const struct FKey& Key);
	bool ReleaseKey(const struct FKey& Key);
	void PressPointerKey(const struct FKey& Key);
	bool PressKey(const struct FKey& Key, bool bRepeat);
	bool PressAndReleaseKey(const struct FKey& Key);
	bool IsOverInteractableWidget();
	bool IsOverHitTestVisibleWidget();
	bool IsOverFocusableWidget();
	struct FHitResult GetLastHitResult();
	class UWidgetComponent* GetHoveredWidgetComponent();
	struct FVector2D Get2DHitLocation();
};


// Class UMG.WidgetLayoutLibrary
// 0x0000 (0x0028 - 0x0028)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		return ptr;
	}


	class UVerticalBoxSlot* STATIC_SlotAsVerticalBoxSlot(class UWidget* Widget);
	class UUniformGridSlot* STATIC_SlotAsUniformGridSlot(class UWidget* Widget);
	class UOverlaySlot* STATIC_SlotAsOverlaySlot(class UWidget* Widget);
	class UHorizontalBoxSlot* STATIC_SlotAsHorizontalBoxSlot(class UWidget* Widget);
	class UGridSlot* STATIC_SlotAsGridSlot(class UWidget* Widget);
	class UCanvasPanelSlot* STATIC_SlotAsCanvasSlot(class UWidget* Widget);
	class UBorderSlot* STATIC_SlotAsBorderSlot(class UWidget* Widget);
	void STATIC_RemoveAllWidgets(class UObject* WorldContextObject);
	bool STATIC_ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition);
	struct FVector2D STATIC_GetViewportSize(class UObject* WorldContextObject);
	float STATIC_GetViewportScale(class UObject* WorldContextObject);
	bool STATIC_GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);
};


// Class UMG.WidgetNavigation
// 0x0090 (0x00B8 - 0x0028)
class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                       Up;                                                       // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FWidgetNavigationData                       Down;                                                     // 0x0040(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FWidgetNavigationData                       Left;                                                     // 0x0058(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FWidgetNavigationData                       Right;                                                    // 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FWidgetNavigationData                       Next;                                                     // 0x0088(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FWidgetNavigationData                       Previous;                                                 // 0x00A0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetNavigation");
		return ptr;
	}

};


// Class UMG.WidgetTree
// 0x0018 (0x0040 - 0x0028)
class UWidgetTree : public UObject
{
public:
	class UWidget*                                     RootWidget;                                               // 0x0028(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UWidget*>                             AllWidgets;                                               // 0x0030(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetTree");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
