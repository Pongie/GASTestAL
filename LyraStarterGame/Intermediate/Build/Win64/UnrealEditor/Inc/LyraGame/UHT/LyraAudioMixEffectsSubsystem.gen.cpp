// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Audio/LyraAudioMixEffectsSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAudioMixEffectsSubsystem() {}
// Cross Module References
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBus_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBusMix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAudioMixEffectsSubsystem();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAudioSubmixEffectsChain;
class UScriptStruct* FLyraAudioSubmixEffectsChain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAudioSubmixEffectsChain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAudioSubmixEffectsChain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAudioSubmixEffectsChain"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAudioSubmixEffectsChain.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAudioSubmixEffectsChain>()
{
	return FLyraAudioSubmixEffectsChain::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Submix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Submix;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubmixEffectChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmixEffectChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubmixEffectChain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAudioSubmixEffectsChain>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewProp_Submix_MetaData[] = {
		{ "Comment", "// Submix on which to apply the Submix Effect Chain Override\n" },
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
		{ "ToolTip", "Submix on which to apply the Submix Effect Chain Override" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAudioSubmixEffectsChain, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewProp_Submix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewProp_Submix_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewProp_SubmixEffectChain_Inner = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewProp_SubmixEffectChain_MetaData[] = {
		{ "Comment", "// Submix Effect Chain Override (Effects processed in Array index order)\n" },
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
		{ "ToolTip", "Submix Effect Chain Override (Effects processed in Array index order)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewProp_SubmixEffectChain = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAudioSubmixEffectsChain, SubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewProp_SubmixEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewProp_SubmixEffectChain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewProp_Submix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewProp_SubmixEffectChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewProp_SubmixEffectChain,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraAudioSubmixEffectsChain",
		sizeof(FLyraAudioSubmixEffectsChain),
		alignof(FLyraAudioSubmixEffectsChain),
		Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraAudioSubmixEffectsChain.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAudioSubmixEffectsChain.InnerSingleton, Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraAudioSubmixEffectsChain.InnerSingleton;
	}
	void ULyraAudioMixEffectsSubsystem::StaticRegisterNativesULyraAudioMixEffectsSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAudioMixEffectsSubsystem);
	UClass* Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_NoRegister()
	{
		return ULyraAudioMixEffectsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBaseMix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultBaseMix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenMix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LoadingScreenMix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserMix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UserMix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverallControlBus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverallControlBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MusicControlBus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MusicControlBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundFXControlBus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundFXControlBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueControlBus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DialogueControlBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceChatControlBus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VoiceChatControlBus;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HDRSubmixEffectChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HDRSubmixEffectChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HDRSubmixEffectChain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LDRSubmixEffectChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LDRSubmixEffectChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LDRSubmixEffectChain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This subsystem is meant to automatically engage default and user control bus mixes\n * to retrieve previously saved user settings and apply them to the activated user mix.\n * Additionally, this subsystem will automatically apply HDR/LDR Audio Submix Effect Chain Overrides\n * based on the user's preference for HDR Audio. Submix Effect Chain Overrides are defined in the\n * Lyra Audio Settings.\n */" },
		{ "IncludePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
		{ "ToolTip", "This subsystem is meant to automatically engage default and user control bus mixes\nto retrieve previously saved user settings and apply them to the activated user mix.\nAdditionally, this subsystem will automatically apply HDR/LDR Audio Submix Effect Chain Overrides\nbased on the user's preference for HDR Audio. Submix Effect Chain Overrides are defined in the\nLyra Audio Settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_DefaultBaseMix_MetaData[] = {
		{ "Comment", "// Default Sound Control Bus Mix retrieved from the Lyra Audio Settings\n" },
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
		{ "ToolTip", "Default Sound Control Bus Mix retrieved from the Lyra Audio Settings" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_DefaultBaseMix = { "DefaultBaseMix", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, DefaultBaseMix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_DefaultBaseMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_DefaultBaseMix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_LoadingScreenMix_MetaData[] = {
		{ "Comment", "// Loading Screen Sound Control Bus Mix retrieved from the Lyra Audio Settings\n" },
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
		{ "ToolTip", "Loading Screen Sound Control Bus Mix retrieved from the Lyra Audio Settings" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_LoadingScreenMix = { "LoadingScreenMix", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, LoadingScreenMix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_LoadingScreenMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_LoadingScreenMix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_UserMix_MetaData[] = {
		{ "Comment", "// User Sound Control Bus Mix retrieved from the Lyra Audio Settings\n" },
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
		{ "ToolTip", "User Sound Control Bus Mix retrieved from the Lyra Audio Settings" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_UserMix = { "UserMix", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, UserMix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_UserMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_UserMix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_OverallControlBus_MetaData[] = {
		{ "Comment", "// Overall Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal\n" },
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
		{ "ToolTip", "Overall Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_OverallControlBus = { "OverallControlBus", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, OverallControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_OverallControlBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_OverallControlBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_MusicControlBus_MetaData[] = {
		{ "Comment", "// Music Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal\n" },
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
		{ "ToolTip", "Music Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_MusicControlBus = { "MusicControlBus", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, MusicControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_MusicControlBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_MusicControlBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_SoundFXControlBus_MetaData[] = {
		{ "Comment", "// SoundFX Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal\n" },
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
		{ "ToolTip", "SoundFX Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_SoundFXControlBus = { "SoundFXControlBus", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, SoundFXControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_SoundFXControlBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_SoundFXControlBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_DialogueControlBus_MetaData[] = {
		{ "Comment", "// Dialogue Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal\n" },
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
		{ "ToolTip", "Dialogue Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_DialogueControlBus = { "DialogueControlBus", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, DialogueControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_DialogueControlBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_DialogueControlBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_VoiceChatControlBus_MetaData[] = {
		{ "Comment", "// VoiceChat Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal\n" },
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
		{ "ToolTip", "VoiceChat Sound Control Bus retrieved from the Lyra Audio Settings and linked to the UI and game settings in LyraSettingsLocal" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_VoiceChatControlBus = { "VoiceChatControlBus", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, VoiceChatControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_VoiceChatControlBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_VoiceChatControlBus_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_HDRSubmixEffectChain_Inner = { "HDRSubmixEffectChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain, METADATA_PARAMS(nullptr, 0) }; // 2804554436
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_HDRSubmixEffectChain_MetaData[] = {
		{ "Comment", "// Submix Effect Chain Overrides to apply when HDR Audio is turned on\n" },
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
		{ "ToolTip", "Submix Effect Chain Overrides to apply when HDR Audio is turned on" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_HDRSubmixEffectChain = { "HDRSubmixEffectChain", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, HDRSubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_HDRSubmixEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_HDRSubmixEffectChain_MetaData)) }; // 2804554436
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_LDRSubmixEffectChain_Inner = { "LDRSubmixEffectChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain, METADATA_PARAMS(nullptr, 0) }; // 2804554436
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_LDRSubmixEffectChain_MetaData[] = {
		{ "Comment", "// Submix Effect hain Overrides to apply when HDR Audio is turned off\n" },
		{ "ModuleRelativePath", "Audio/LyraAudioMixEffectsSubsystem.h" },
		{ "ToolTip", "Submix Effect hain Overrides to apply when HDR Audio is turned off" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_LDRSubmixEffectChain = { "LDRSubmixEffectChain", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAudioMixEffectsSubsystem, LDRSubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_LDRSubmixEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_LDRSubmixEffectChain_MetaData)) }; // 2804554436
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_DefaultBaseMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_LoadingScreenMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_UserMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_OverallControlBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_MusicControlBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_SoundFXControlBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_DialogueControlBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_VoiceChatControlBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_HDRSubmixEffectChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_HDRSubmixEffectChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_LDRSubmixEffectChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::NewProp_LDRSubmixEffectChain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAudioMixEffectsSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::ClassParams = {
		&ULyraAudioMixEffectsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraAudioMixEffectsSubsystem()
	{
		if (!Z_Registration_Info_UClass_ULyraAudioMixEffectsSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAudioMixEffectsSubsystem.OuterSingleton, Z_Construct_UClass_ULyraAudioMixEffectsSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraAudioMixEffectsSubsystem.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraAudioMixEffectsSubsystem>()
	{
		return ULyraAudioMixEffectsSubsystem::StaticClass();
	}
	ULyraAudioMixEffectsSubsystem::ULyraAudioMixEffectsSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAudioMixEffectsSubsystem);
	ULyraAudioMixEffectsSubsystem::~ULyraAudioMixEffectsSubsystem() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Audio_LyraAudioMixEffectsSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Audio_LyraAudioMixEffectsSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FLyraAudioSubmixEffectsChain::StaticStruct, Z_Construct_UScriptStruct_FLyraAudioSubmixEffectsChain_Statics::NewStructOps, TEXT("LyraAudioSubmixEffectsChain"), &Z_Registration_Info_UScriptStruct_LyraAudioSubmixEffectsChain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAudioSubmixEffectsChain), 2804554436U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Audio_LyraAudioMixEffectsSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAudioMixEffectsSubsystem, ULyraAudioMixEffectsSubsystem::StaticClass, TEXT("ULyraAudioMixEffectsSubsystem"), &Z_Registration_Info_UClass_ULyraAudioMixEffectsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAudioMixEffectsSubsystem), 1272122389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Audio_LyraAudioMixEffectsSubsystem_h_2043391602(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Audio_LyraAudioMixEffectsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Audio_LyraAudioMixEffectsSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Audio_LyraAudioMixEffectsSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Audio_LyraAudioMixEffectsSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
