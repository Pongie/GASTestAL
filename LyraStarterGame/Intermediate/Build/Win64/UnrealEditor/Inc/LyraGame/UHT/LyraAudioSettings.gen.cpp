// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Audio/LyraAudioSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAudioSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAudioSettings();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAudioSettings_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraSubmixEffectChainMap;
class UScriptStruct* FLyraSubmixEffectChainMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraSubmixEffectChainMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraSubmixEffectChainMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraSubmixEffectChainMap"));
	}
	return Z_Registration_Info_UScriptStruct_LyraSubmixEffectChainMap.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraSubmixEffectChainMap>()
{
	return FLyraSubmixEffectChainMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Submix_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Submix;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SubmixEffectChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmixEffectChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubmixEffectChain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraSubmixEffectChainMap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewProp_Submix_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundSubmix" },
		{ "Category", "LyraSubmixEffectChainMap" },
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraSubmixEffectChainMap, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewProp_Submix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewProp_Submix_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewProp_SubmixEffectChain_Inner = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewProp_SubmixEffectChain_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundEffectSubmixPreset" },
		{ "Category", "LyraSubmixEffectChainMap" },
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewProp_SubmixEffectChain = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraSubmixEffectChainMap, SubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewProp_SubmixEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewProp_SubmixEffectChain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewProp_Submix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewProp_SubmixEffectChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewProp_SubmixEffectChain,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraSubmixEffectChainMap",
		sizeof(FLyraSubmixEffectChainMap),
		alignof(FLyraSubmixEffectChainMap),
		Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraSubmixEffectChainMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraSubmixEffectChainMap.InnerSingleton, Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraSubmixEffectChainMap.InnerSingleton;
	}
	void ULyraAudioSettings::StaticRegisterNativesULyraAudioSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAudioSettings);
	UClass* Z_Construct_UClass_ULyraAudioSettings_NoRegister()
	{
		return ULyraAudioSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULyraAudioSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultControlBusMix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultControlBusMix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenControlBusMix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingScreenControlBusMix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserSettingsControlBusMix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserSettingsControlBusMix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverallVolumeControlBus_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverallVolumeControlBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolumeControlBus_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MusicVolumeControlBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundFXVolumeControlBus_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundFXVolumeControlBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueVolumeControlBus_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueVolumeControlBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceChatVolumeControlBus_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoiceChatVolumeControlBus;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HDRAudioSubmixEffectChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HDRAudioSubmixEffectChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HDRAudioSubmixEffectChain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LDRAudioSubmixEffectChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LDRAudioSubmixEffectChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LDRAudioSubmixEffectChain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraAudioSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "LyraAudioSettings" },
		{ "IncludePath", "Audio/LyraAudioSettings.h" },
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_DefaultControlBusMix_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBusMix" },
		{ "Category", "MixSettings" },
		{ "Comment", "/** The Default Base Control Bus Mix */" },
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
		{ "ToolTip", "The Default Base Control Bus Mix" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_DefaultControlBusMix = { "DefaultControlBusMix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioSettings, DefaultControlBusMix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_DefaultControlBusMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_DefaultControlBusMix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_LoadingScreenControlBusMix_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBusMix" },
		{ "Category", "MixSettings" },
		{ "Comment", "/** The Loading Screen Control Bus Mix - Called during loading screens to cover background audio events */" },
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
		{ "ToolTip", "The Loading Screen Control Bus Mix - Called during loading screens to cover background audio events" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_LoadingScreenControlBusMix = { "LoadingScreenControlBusMix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioSettings, LoadingScreenControlBusMix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_LoadingScreenControlBusMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_LoadingScreenControlBusMix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_UserSettingsControlBusMix_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBusMix" },
		{ "Category", "UserMixSettings" },
		{ "Comment", "/** The Default Base Control Bus Mix */" },
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
		{ "ToolTip", "The Default Base Control Bus Mix" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_UserSettingsControlBusMix = { "UserSettingsControlBusMix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioSettings, UserSettingsControlBusMix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_UserSettingsControlBusMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_UserSettingsControlBusMix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_OverallVolumeControlBus_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBus" },
		{ "Category", "UserMixSettings" },
		{ "Comment", "/** Control Bus assigned to the Overall sound volume setting */" },
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
		{ "ToolTip", "Control Bus assigned to the Overall sound volume setting" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_OverallVolumeControlBus = { "OverallVolumeControlBus", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioSettings, OverallVolumeControlBus), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_OverallVolumeControlBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_OverallVolumeControlBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_MusicVolumeControlBus_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBus" },
		{ "Category", "UserMixSettings" },
		{ "Comment", "/** Control Bus assigned to the Music sound volume setting */" },
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
		{ "ToolTip", "Control Bus assigned to the Music sound volume setting" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_MusicVolumeControlBus = { "MusicVolumeControlBus", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioSettings, MusicVolumeControlBus), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_MusicVolumeControlBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_MusicVolumeControlBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_SoundFXVolumeControlBus_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBus" },
		{ "Category", "UserMixSettings" },
		{ "Comment", "/** Control Bus assigned to the SoundFX sound volume setting */" },
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
		{ "ToolTip", "Control Bus assigned to the SoundFX sound volume setting" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_SoundFXVolumeControlBus = { "SoundFXVolumeControlBus", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioSettings, SoundFXVolumeControlBus), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_SoundFXVolumeControlBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_SoundFXVolumeControlBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_DialogueVolumeControlBus_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBus" },
		{ "Category", "UserMixSettings" },
		{ "Comment", "/** Control Bus assigned to the Dialogue sound volume setting */" },
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
		{ "ToolTip", "Control Bus assigned to the Dialogue sound volume setting" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_DialogueVolumeControlBus = { "DialogueVolumeControlBus", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioSettings, DialogueVolumeControlBus), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_DialogueVolumeControlBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_DialogueVolumeControlBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_VoiceChatVolumeControlBus_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBus" },
		{ "Category", "UserMixSettings" },
		{ "Comment", "/** Control Bus assigned to the VoiceChat sound volume setting */" },
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
		{ "ToolTip", "Control Bus assigned to the VoiceChat sound volume setting" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_VoiceChatVolumeControlBus = { "VoiceChatVolumeControlBus", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioSettings, VoiceChatVolumeControlBus), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_VoiceChatVolumeControlBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_VoiceChatVolumeControlBus_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_HDRAudioSubmixEffectChain_Inner = { "HDRAudioSubmixEffectChain", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap, METADATA_PARAMS(nullptr, 0) }; // 3621923147
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_HDRAudioSubmixEffectChain_MetaData[] = {
		{ "Category", "EffectSettings" },
		{ "Comment", "/** Submix Processing Chains to achieve high dynamic range audio output */" },
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
		{ "ToolTip", "Submix Processing Chains to achieve high dynamic range audio output" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_HDRAudioSubmixEffectChain = { "HDRAudioSubmixEffectChain", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioSettings, HDRAudioSubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_HDRAudioSubmixEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_HDRAudioSubmixEffectChain_MetaData)) }; // 3621923147
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_LDRAudioSubmixEffectChain_Inner = { "LDRAudioSubmixEffectChain", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap, METADATA_PARAMS(nullptr, 0) }; // 3621923147
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_LDRAudioSubmixEffectChain_MetaData[] = {
		{ "Category", "EffectSettings" },
		{ "Comment", "/** Submix Processing Chains to achieve low dynamic range audio output */" },
		{ "ModuleRelativePath", "Audio/LyraAudioSettings.h" },
		{ "ToolTip", "Submix Processing Chains to achieve low dynamic range audio output" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_LDRAudioSubmixEffectChain = { "LDRAudioSubmixEffectChain", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioSettings, LDRAudioSubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_LDRAudioSubmixEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_LDRAudioSubmixEffectChain_MetaData)) }; // 3621923147
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAudioSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_DefaultControlBusMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_LoadingScreenControlBusMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_UserSettingsControlBusMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_OverallVolumeControlBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_MusicVolumeControlBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_SoundFXVolumeControlBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_DialogueVolumeControlBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_VoiceChatVolumeControlBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_HDRAudioSubmixEffectChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_HDRAudioSubmixEffectChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_LDRAudioSubmixEffectChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioSettings_Statics::NewProp_LDRAudioSubmixEffectChain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraAudioSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAudioSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAudioSettings_Statics::ClassParams = {
		&ULyraAudioSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraAudioSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraAudioSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraAudioSettings()
	{
		if (!Z_Registration_Info_UClass_ULyraAudioSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAudioSettings.OuterSingleton, Z_Construct_UClass_ULyraAudioSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraAudioSettings.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraAudioSettings>()
	{
		return ULyraAudioSettings::StaticClass();
	}
	ULyraAudioSettings::ULyraAudioSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAudioSettings);
	ULyraAudioSettings::~ULyraAudioSettings() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_Statics::ScriptStructInfo[] = {
		{ FLyraSubmixEffectChainMap::StaticStruct, Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics::NewStructOps, TEXT("LyraSubmixEffectChainMap"), &Z_Registration_Info_UScriptStruct_LyraSubmixEffectChainMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraSubmixEffectChainMap), 3621923147U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAudioSettings, ULyraAudioSettings::StaticClass, TEXT("ULyraAudioSettings"), &Z_Registration_Info_UClass_ULyraAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAudioSettings), 737810146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_1019530901(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
