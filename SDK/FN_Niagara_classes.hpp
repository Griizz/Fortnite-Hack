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

// Class Niagara.NiagaraActor
// 0x0008 (0x0390 - 0x0388)
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                           NiagaraComponent;                                         // 0x0388(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraActor");
		return ptr;
	}

};


// Class Niagara.NiagaraComponent
// 0x0030 (0x06A0 - 0x0670)
class UNiagaraComponent : public UPrimitiveComponent
{
public:
	class UNiagaraEffect*                              Asset;                                                    // 0x0670(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0678(0x0010) MISSED OFFSET
	TArray<struct FNiagaraVariable>                    EffectParameterLocalOverrides;                            // 0x0688(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0698(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraComponent");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterface
// 0x0000 (0x0028 - 0x0028)
class UNiagaraDataInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterface");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurve
// 0x0008 (0x0030 - 0x0028)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterface
{
public:
	class UCurveFloat*                                 Curve;                                                    // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorCurve
// 0x0008 (0x0030 - 0x0028)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterface
{
public:
	class UCurveVector*                                Curve;                                                    // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceColorCurve
// 0x0008 (0x0030 - 0x0028)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterface
{
public:
	class UCurveLinearColor*                           Curve;                                                    // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceColorCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraEffect
// 0x0028 (0x0050 - 0x0028)
class UNiagaraEffect : public UObject
{
public:
	TArray<struct FNiagaraEmitterHandle>               EmitterHandles;                                           // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	class UNiagaraScript*                              EffectScript;                                             // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FNiagaraParameterBinding>            ParameterBindings;                                        // 0x0040(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEffect");
		return ptr;
	}

};


// Class Niagara.NiagaraEffectRendererProperties
// 0x0000 (0x0028 - 0x0028)
class UNiagaraEffectRendererProperties : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEffectRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraMeshRendererProperties
// 0x0008 (0x0030 - 0x0028)
class UNiagaraMeshRendererProperties : public UNiagaraEffectRendererProperties
{
public:
	class UStaticMesh*                                 ParticleMesh;                                             // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraMeshRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraRibbonRendererProperties
// 0x0000 (0x0028 - 0x0028)
class UNiagaraRibbonRendererProperties : public UNiagaraEffectRendererProperties
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraRibbonRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraSpriteRendererProperties
// 0x0010 (0x0038 - 0x0028)
class UNiagaraSpriteRendererProperties : public UNiagaraEffectRendererProperties
{
public:
	struct FVector2D                                   SubImageInfo;                                             // 0x0028(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	bool                                               bBVelocityAligned;                                        // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSpriteRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraScript
// 0x00A0 (0x00C8 - 0x0028)
class UNiagaraScript : public UObject
{
public:
	TArray<unsigned char>                              ByteCode;                                                 // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FNiagaraParameters                          Parameters;                                               // 0x0038(0x0010)
	struct FNiagaraParameters                          InternalParameters;                                       // 0x0048(0x0010)
	TArray<struct FNiagaraVariable>                    Attributes;                                               // 0x0058(0x0010) (CPF_ZeroConstructor)
	TArray<struct FNiagaraDataSetProperties>           EventReceivers;                                           // 0x0068(0x0010) (CPF_ZeroConstructor)
	TArray<struct FNiagaraDataSetProperties>           EventGenerators;                                          // 0x0078(0x0010) (CPF_ZeroConstructor)
	struct FNiagaraScriptDataUsageInfo                 DataUsage;                                                // 0x0088(0x0001)
	ENiagaraScriptUsage                                Usage;                                                    // 0x0089(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x008A(0x0006) MISSED OFFSET
	TArray<struct FNiagaraScriptDataInterfaceInfo>     DataInterfaceInfo;                                        // 0x0090(0x0010) (CPF_ZeroConstructor)
	ENiagaraNumericOutputTypeSelectionMode             NumericOutputTypeSelectionMode;                           // 0x00A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x27];                                      // 0x00A1(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScript");
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction
// 0x0000 (0x0028 - 0x0028)
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction");
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// 0x0008 (0x0030 - 0x0028)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32_t                                           NumParticles;                                             // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
		return ptr;
	}

};


// Class Niagara.NiagaraEmitterProperties
// 0x00D8 (0x0100 - 0x0028)
class UNiagaraEmitterProperties : public UObject
{
public:
	float                                              SpawnRate;                                                // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bLocalSpace;                                              // 0x002C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	class UMaterial*                                   Material;                                                 // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartTime;                                                // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndTime;                                                  // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumLoops;                                                 // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ENiagaraCollisionMode                              CollisionMode;                                            // 0x0044(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	class UNiagaraEffectRendererProperties*            RendererProperties;                                       // 0x0048(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                        // 0x0050(0x0028)
	struct FNiagaraEmitterScriptProperties             SpawnScriptProps;                                         // 0x0078(0x0028)
	struct FNiagaraEventScriptProperties               EventHandlerScriptProps;                                  // 0x00A0(0x0050) (CPF_Edit)
	TArray<struct FNiagaraEmitterBurst>                Bursts;                                                   // 0x00F0(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEmitterProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraFunctionLibrary");
		return ptr;
	}


	class UNiagaraComponent* STATIC_SpawnEffectAttached(class UNiagaraEffect* EffectTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy);
	class UNiagaraComponent* STATIC_SpawnEffectAtLocation(class UObject* WorldContextObject, class UNiagaraEffect* EffectTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy);
};


// Class Niagara.NiagaraScriptSourceBase
// 0x0020 (0x0048 - 0x0028)
class UNiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScriptSourceBase");
		return ptr;
	}

};


// Class Niagara.NiagaraSequence
// 0x0000 (0x02E0 - 0x02E0)
class UNiagaraSequence : public UMovieSceneSequence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSequence");
		return ptr;
	}

};


// Class Niagara.NiagaraSettings
// 0x0030 (0x0068 - 0x0038)
class UNiagaraSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       DefaultEffect;                                            // 0x0038(0x0010) (CPF_Edit, CPF_Config)
	struct FStringAssetReference                       DefaultEmitter;                                           // 0x0048(0x0010) (CPF_Edit, CPF_Config)
	struct FStringAssetReference                       DefaultScript;                                            // 0x0058(0x0010) (CPF_Edit, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
