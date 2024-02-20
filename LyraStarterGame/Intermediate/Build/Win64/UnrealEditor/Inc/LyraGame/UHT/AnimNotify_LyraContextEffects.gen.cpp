// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_LyraContextEffects() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	LYRAGAME_API UClass* Z_Construct_UClass_UAnimNotify_LyraContextEffects();
	LYRAGAME_API UClass* Z_Construct_UClass_UAnimNotify_LyraContextEffects_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyVFXSettings;
class UScriptStruct* FLyraContextEffectAnimNotifyVFXSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyVFXSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyVFXSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraContextEffectAnimNotifyVFXSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyVFXSettings.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraContextEffectAnimNotifyVFXSettings>()
{
	return FLyraContextEffectAnimNotifyVFXSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraContextEffectAnimNotifyVFXSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "FX" },
		{ "Comment", "// Scale to spawn the particle system at\n" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ToolTip", "Scale to spawn the particle system at" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraContextEffectAnimNotifyVFXSettings, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraContextEffectAnimNotifyVFXSettings",
		sizeof(FLyraContextEffectAnimNotifyVFXSettings),
		alignof(FLyraContextEffectAnimNotifyVFXSettings),
		Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyVFXSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyVFXSettings.InnerSingleton, Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyVFXSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyAudioSettings;
class UScriptStruct* FLyraContextEffectAnimNotifyAudioSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyAudioSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyAudioSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraContextEffectAnimNotifyAudioSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyAudioSettings.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraContextEffectAnimNotifyAudioSettings>()
{
	return FLyraContextEffectAnimNotifyAudioSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraContextEffectAnimNotifyAudioSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "// Volume Multiplier\n" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ToolTip", "Volume Multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraContextEffectAnimNotifyAudioSettings, VolumeMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::NewProp_VolumeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::NewProp_VolumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "// Pitch Multiplier\n" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ToolTip", "Pitch Multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraContextEffectAnimNotifyAudioSettings, PitchMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::NewProp_PitchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::NewProp_PitchMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::NewProp_PitchMultiplier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraContextEffectAnimNotifyAudioSettings",
		sizeof(FLyraContextEffectAnimNotifyAudioSettings),
		alignof(FLyraContextEffectAnimNotifyAudioSettings),
		Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyAudioSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyAudioSettings.InnerSingleton, Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyAudioSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyTraceSettings;
class UScriptStruct* FLyraContextEffectAnimNotifyTraceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyTraceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyTraceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraContextEffectAnimNotifyTraceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyTraceSettings.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraContextEffectAnimNotifyTraceSettings>()
{
	return FLyraContextEffectAnimNotifyTraceSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTraceLocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndTraceLocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreActor_MetaData[];
#endif
		static void NewProp_bIgnoreActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraContextEffectAnimNotifyTraceSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "// Trace Channel\n" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ToolTip", "Trace Channel" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraContextEffectAnimNotifyTraceSettings, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_TraceChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_EndTraceLocationOffset_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "// Vector offset from Effect Location\n" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ToolTip", "Vector offset from Effect Location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_EndTraceLocationOffset = { "EndTraceLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraContextEffectAnimNotifyTraceSettings, EndTraceLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_EndTraceLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_EndTraceLocationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_bIgnoreActor_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "// Ignore this Actor when getting trace result\n" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ToolTip", "Ignore this Actor when getting trace result" },
	};
#endif
	void Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_bIgnoreActor_SetBit(void* Obj)
	{
		((FLyraContextEffectAnimNotifyTraceSettings*)Obj)->bIgnoreActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_bIgnoreActor = { "bIgnoreActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLyraContextEffectAnimNotifyTraceSettings), &Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_bIgnoreActor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_bIgnoreActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_bIgnoreActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_EndTraceLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewProp_bIgnoreActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraContextEffectAnimNotifyTraceSettings",
		sizeof(FLyraContextEffectAnimNotifyTraceSettings),
		alignof(FLyraContextEffectAnimNotifyTraceSettings),
		Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyTraceSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyTraceSettings.InnerSingleton, Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyTraceSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyPreviewSettings;
class UScriptStruct* FLyraContextEffectAnimNotifyPreviewSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyPreviewSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyPreviewSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraContextEffectAnimNotifyPreviewSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyPreviewSettings.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraContextEffectAnimNotifyPreviewSettings>()
{
	return FLyraContextEffectAnimNotifyPreviewSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewPhysicalSurfaceAsContext_MetaData[];
#endif
		static void NewProp_bPreviewPhysicalSurfaceAsContext_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewPhysicalSurfaceAsContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewPhysicalSurface_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviewPhysicalSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewContextEffectsLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewContextEffectsLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewContexts_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewContexts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraContextEffectAnimNotifyPreviewSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_bPreviewPhysicalSurfaceAsContext_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "// If true, will attempt to match selected Surface Type to Context Tag via Project Settings\n" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ToolTip", "If true, will attempt to match selected Surface Type to Context Tag via Project Settings" },
	};
#endif
	void Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_bPreviewPhysicalSurfaceAsContext_SetBit(void* Obj)
	{
		((FLyraContextEffectAnimNotifyPreviewSettings*)Obj)->bPreviewPhysicalSurfaceAsContext = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_bPreviewPhysicalSurfaceAsContext = { "bPreviewPhysicalSurfaceAsContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLyraContextEffectAnimNotifyPreviewSettings), &Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_bPreviewPhysicalSurfaceAsContext_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_bPreviewPhysicalSurfaceAsContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_bPreviewPhysicalSurfaceAsContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewPhysicalSurface_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "// Surface Type\n" },
		{ "EditCondition", "bPreviewPhysicalSurfaceAsContext" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ToolTip", "Surface Type" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewPhysicalSurface = { "PreviewPhysicalSurface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraContextEffectAnimNotifyPreviewSettings, PreviewPhysicalSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewPhysicalSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewPhysicalSurface_MetaData)) }; // 455643187
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewContextEffectsLibrary_MetaData[] = {
		{ "AllowedClasses", "/Script/LyraGame.LyraContextEffectsLibrary" },
		{ "Category", "Preview" },
		{ "Comment", "// Preview Library\n" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ToolTip", "Preview Library" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewContextEffectsLibrary = { "PreviewContextEffectsLibrary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraContextEffectAnimNotifyPreviewSettings, PreviewContextEffectsLibrary), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewContextEffectsLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewContextEffectsLibrary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewContexts_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "// Preview Context\n" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ToolTip", "Preview Context" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewContexts = { "PreviewContexts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraContextEffectAnimNotifyPreviewSettings, PreviewContexts), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewContexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewContexts_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_bPreviewPhysicalSurfaceAsContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewPhysicalSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewContextEffectsLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewProp_PreviewContexts,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraContextEffectAnimNotifyPreviewSettings",
		sizeof(FLyraContextEffectAnimNotifyPreviewSettings),
		alignof(FLyraContextEffectAnimNotifyPreviewSettings),
		Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyPreviewSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyPreviewSettings.InnerSingleton, Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyPreviewSettings.InnerSingleton;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UAnimNotify_LyraContextEffects::execSetParameters)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_EffectIn);
		P_GET_STRUCT(FVector,Z_Param_LocationOffsetIn);
		P_GET_STRUCT(FRotator,Z_Param_RotationOffsetIn);
		P_GET_STRUCT(FLyraContextEffectAnimNotifyVFXSettings,Z_Param_VFXPropertiesIn);
		P_GET_STRUCT(FLyraContextEffectAnimNotifyAudioSettings,Z_Param_AudioPropertiesIn);
		P_GET_UBOOL(Z_Param_bAttachedIn);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketNameIn);
		P_GET_UBOOL(Z_Param_bPerformTraceIn);
		P_GET_STRUCT(FLyraContextEffectAnimNotifyTraceSettings,Z_Param_TracePropertiesIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParameters(Z_Param_EffectIn,Z_Param_LocationOffsetIn,Z_Param_RotationOffsetIn,Z_Param_VFXPropertiesIn,Z_Param_AudioPropertiesIn,Z_Param_bAttachedIn,Z_Param_SocketNameIn,Z_Param_bPerformTraceIn,Z_Param_TracePropertiesIn);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UAnimNotify_LyraContextEffects::StaticRegisterNativesUAnimNotify_LyraContextEffects()
	{
#if WITH_EDITOR
		UClass* Class = UAnimNotify_LyraContextEffects::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetParameters", &UAnimNotify_LyraContextEffects::execSetParameters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics
	{
		struct AnimNotify_LyraContextEffects_eventSetParameters_Parms
		{
			FGameplayTag EffectIn;
			FVector LocationOffsetIn;
			FRotator RotationOffsetIn;
			FLyraContextEffectAnimNotifyVFXSettings VFXPropertiesIn;
			FLyraContextEffectAnimNotifyAudioSettings AudioPropertiesIn;
			bool bAttachedIn;
			FName SocketNameIn;
			bool bPerformTraceIn;
			FLyraContextEffectAnimNotifyTraceSettings TracePropertiesIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffsetIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffsetIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VFXPropertiesIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AudioPropertiesIn;
		static void NewProp_bAttachedIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachedIn;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketNameIn;
		static void NewProp_bPerformTraceIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformTraceIn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TracePropertiesIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_EffectIn = { "EffectIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotify_LyraContextEffects_eventSetParameters_Parms, EffectIn), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_LocationOffsetIn = { "LocationOffsetIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotify_LyraContextEffects_eventSetParameters_Parms, LocationOffsetIn), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_RotationOffsetIn = { "RotationOffsetIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotify_LyraContextEffects_eventSetParameters_Parms, RotationOffsetIn), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_VFXPropertiesIn = { "VFXPropertiesIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotify_LyraContextEffects_eventSetParameters_Parms, VFXPropertiesIn), Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings, METADATA_PARAMS(nullptr, 0) }; // 1732979713
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_AudioPropertiesIn = { "AudioPropertiesIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotify_LyraContextEffects_eventSetParameters_Parms, AudioPropertiesIn), Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings, METADATA_PARAMS(nullptr, 0) }; // 3000863304
	void Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_bAttachedIn_SetBit(void* Obj)
	{
		((AnimNotify_LyraContextEffects_eventSetParameters_Parms*)Obj)->bAttachedIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_bAttachedIn = { "bAttachedIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimNotify_LyraContextEffects_eventSetParameters_Parms), &Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_bAttachedIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_SocketNameIn = { "SocketNameIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotify_LyraContextEffects_eventSetParameters_Parms, SocketNameIn), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_bPerformTraceIn_SetBit(void* Obj)
	{
		((AnimNotify_LyraContextEffects_eventSetParameters_Parms*)Obj)->bPerformTraceIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_bPerformTraceIn = { "bPerformTraceIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimNotify_LyraContextEffects_eventSetParameters_Parms), &Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_bPerformTraceIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_TracePropertiesIn = { "TracePropertiesIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotify_LyraContextEffects_eventSetParameters_Parms, TracePropertiesIn), Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings, METADATA_PARAMS(nullptr, 0) }; // 3171214532
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_EffectIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_LocationOffsetIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_RotationOffsetIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_VFXPropertiesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_AudioPropertiesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_bAttachedIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_SocketNameIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_bPerformTraceIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::NewProp_TracePropertiesIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotify_LyraContextEffects, nullptr, "SetParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::AnimNotify_LyraContextEffects_eventSetParameters_Parms), Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x64820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_LyraContextEffects);
	UClass* Z_Construct_UClass_UAnimNotify_LyraContextEffects_NoRegister()
	{
		return UAnimNotify_LyraContextEffects::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VFXProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VFXProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AudioProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttached_MetaData[];
#endif
		static void NewProp_bAttached_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttached;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPerformTrace_MetaData[];
#endif
		static void NewProp_bPerformTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceProperties;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewInEditor_MetaData[];
#endif
		static void NewProp_bPreviewInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewProperties;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimNotify_LyraContextEffects_SetParameters, "SetParameters" }, // 4164619142
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Play Context Effects" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_Effect_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Effect to Play\n" },
		{ "DisplayName", "Effect" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ToolTip", "Effect to Play" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_LyraContextEffects, Effect), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_Effect_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Location offset from the socket\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ToolTip", "Location offset from the socket" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_LyraContextEffects, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_LocationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Rotation offset from socket\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ToolTip", "Rotation offset from socket" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_LyraContextEffects, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_VFXProperties_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Scale to spawn the particle system at\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ToolTip", "Scale to spawn the particle system at" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_VFXProperties = { "VFXProperties", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_LyraContextEffects, VFXProperties), Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_VFXProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_VFXProperties_MetaData)) }; // 1732979713
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_AudioProperties_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Scale to spawn the particle system at\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ToolTip", "Scale to spawn the particle system at" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_AudioProperties = { "AudioProperties", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_LyraContextEffects, AudioProperties), Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_AudioProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_AudioProperties_MetaData)) }; // 3000863304
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bAttached_MetaData[] = {
		{ "Category", "AttachmentProperties" },
		{ "Comment", "// Should attach to the bone/socket\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ToolTip", "Should attach to the bone/socket" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bAttached_SetBit(void* Obj)
	{
		((UAnimNotify_LyraContextEffects*)Obj)->bAttached = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bAttached = { "bAttached", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimNotify_LyraContextEffects), &Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bAttached_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bAttached_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "AttachmentProperties" },
		{ "Comment", "// SocketName to attach to\n" },
		{ "EditCondition", "bAttached" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ToolTip", "SocketName to attach to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_LyraContextEffects, SocketName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPerformTrace_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Will perform a trace, required for SurfaceType to Context Conversion\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ToolTip", "Will perform a trace, required for SurfaceType to Context Conversion" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPerformTrace_SetBit(void* Obj)
	{
		((UAnimNotify_LyraContextEffects*)Obj)->bPerformTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPerformTrace = { "bPerformTrace", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimNotify_LyraContextEffects), &Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPerformTrace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPerformTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPerformTrace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_TraceProperties_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Scale to spawn the particle system at\n" },
		{ "EditCondition", "bPerformTrace" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
		{ "ToolTip", "Scale to spawn the particle system at" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_TraceProperties = { "TraceProperties", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_LyraContextEffects, TraceProperties), Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_TraceProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_TraceProperties_MetaData)) }; // 3171214532
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPreviewInEditor_MetaData[] = {
		{ "Category", "PreviewProperties" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPreviewInEditor_SetBit(void* Obj)
	{
		((UAnimNotify_LyraContextEffects*)Obj)->bPreviewInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPreviewInEditor = { "bPreviewInEditor", nullptr, (EPropertyFlags)0x0010000800004011, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimNotify_LyraContextEffects), &Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPreviewInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPreviewInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPreviewInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_PreviewProperties_MetaData[] = {
		{ "Category", "PreviewProperties" },
		{ "EditCondition", "bPreviewInEditor" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_PreviewProperties = { "PreviewProperties", nullptr, (EPropertyFlags)0x0010000800000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_LyraContextEffects, PreviewProperties), Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_PreviewProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_PreviewProperties_MetaData)) }; // 3755713570
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_RotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_VFXProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_AudioProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bAttached,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPerformTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_TraceProperties,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_bPreviewInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::NewProp_PreviewProperties,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_LyraContextEffects>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::ClassParams = {
		&UAnimNotify_LyraContextEffects::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::PropPointers),
		0,
		0x001120A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_LyraContextEffects()
	{
		if (!Z_Registration_Info_UClass_UAnimNotify_LyraContextEffects.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_LyraContextEffects.OuterSingleton, Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotify_LyraContextEffects.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UAnimNotify_LyraContextEffects>()
	{
		return UAnimNotify_LyraContextEffects::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_LyraContextEffects);
	UAnimNotify_LyraContextEffects::~UAnimNotify_LyraContextEffects() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_Statics::ScriptStructInfo[] = {
		{ FLyraContextEffectAnimNotifyVFXSettings::StaticStruct, Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics::NewStructOps, TEXT("LyraContextEffectAnimNotifyVFXSettings"), &Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyVFXSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraContextEffectAnimNotifyVFXSettings), 1732979713U) },
		{ FLyraContextEffectAnimNotifyAudioSettings::StaticStruct, Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics::NewStructOps, TEXT("LyraContextEffectAnimNotifyAudioSettings"), &Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraContextEffectAnimNotifyAudioSettings), 3000863304U) },
		{ FLyraContextEffectAnimNotifyTraceSettings::StaticStruct, Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics::NewStructOps, TEXT("LyraContextEffectAnimNotifyTraceSettings"), &Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyTraceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraContextEffectAnimNotifyTraceSettings), 3171214532U) },
		{ FLyraContextEffectAnimNotifyPreviewSettings::StaticStruct, Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics::NewStructOps, TEXT("LyraContextEffectAnimNotifyPreviewSettings"), &Z_Registration_Info_UScriptStruct_LyraContextEffectAnimNotifyPreviewSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraContextEffectAnimNotifyPreviewSettings), 3755713570U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_LyraContextEffects, UAnimNotify_LyraContextEffects::StaticClass, TEXT("UAnimNotify_LyraContextEffects"), &Z_Registration_Info_UClass_UAnimNotify_LyraContextEffects, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_LyraContextEffects), 1050369488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_1977320203(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
