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

// Class AudioMixer.SoundEffectLowPassFilterPreset
// 0x0008 (0x0048 - 0x0040)
class USoundEffectLowPassFilterPreset : public USoundEffectSourcePreset
{
public:
	struct FSoundEffectLowPassFilterSettings           Settings;                                                 // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SoundEffectLowPassFilterPreset");
		return ptr;
	}

};


// Class AudioMixer.SubmixEffectReverbPreset
// 0x0008 (0x0048 - 0x0040)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	struct FSubmixEffectReverbSettings                 Settings;                                                 // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbPreset");
		return ptr;
	}

};


// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0008 (0x0048 - 0x0040)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	struct FSubmixEffectSubmixEQSettings               Settings;                                                 // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectSubmixEQPreset");
		return ptr;
	}

};


// Class AudioMixer.SubmixEffectTestPreset
// 0x0008 (0x0048 - 0x0040)
class USubmixEffectTestPreset : public USoundEffectSubmixPreset
{
public:
	struct FSubmixEffectTestSettings                   Settings;                                                 // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectTestPreset");
		return ptr;
	}

};


// Class AudioMixer.SynthSound
// 0x0020 (0x0310 - 0x02F0)
class USynthSound : public USoundWaveProcedural
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthSound");
		return ptr;
	}

};


// Class AudioMixer.SynthComponent
// 0x0190 (0x0420 - 0x0290)
class USynthComponent : public USceneComponent
{
public:
	unsigned char                                      bAutoDestroy : 1;                                         // 0x0290(0x0001)
	unsigned char                                      bStopWhenOwnerDestroyed : 1;                              // 0x0290(0x0001)
	unsigned char                                      bAllowSpatialization : 1;                                 // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverrideAttenuation : 1;                                 // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSoundAttenuationSettings                   AttenuationOverrides;                                     // 0x02A0(0x0120) (CPF_Edit, CPF_BlueprintVisible)
	class USoundConcurrency*                           ConcurrencySettings;                                      // 0x03C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundClass*                                 SoundClass;                                               // 0x03C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	class USynthSound*                                 Synth;                                                    // 0x03D8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             AudioComponent;                                           // 0x03E0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                                      // 0x03E8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthComponent");
		return ptr;
	}


	void Stop();
	void Start();
	bool IsPlaying();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
