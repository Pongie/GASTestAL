// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "System/LyraReplicationGraphSettings.h"
#include "System/LyraReplicationGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraReplicationGraphSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplicationGraphSettings();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplicationGraphSettings_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRepGraphActorClassSettings();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraReplicationGraphSettings::StaticRegisterNativesULyraReplicationGraphSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraReplicationGraphSettings);
	UClass* Z_Construct_UClass_ULyraReplicationGraphSettings_NoRegister()
	{
		return ULyraReplicationGraphSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULyraReplicationGraphSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableReplicationGraph_MetaData[];
#endif
		static void NewProp_bDisableReplicationGraph_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableReplicationGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultReplicationGraphClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultReplicationGraphClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFastSharedPath_MetaData[];
#endif
		static void NewProp_bEnableFastSharedPath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFastSharedPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetKBytesSecFastSharedPath_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetKBytesSecFastSharedPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FastSharedPathCullDistPct_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FastSharedPathCullDistPct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestructionInfoMaxDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DestructionInfoMaxDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatialGridCellSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpatialGridCellSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatialBiasX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpatialBiasX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatialBiasY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpatialBiasY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableSpatialRebuilds_MetaData[];
#endif
		static void NewProp_bDisableSpatialRebuilds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableSpatialRebuilds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicActorFrequencyBuckets_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DynamicActorFrequencyBuckets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default settings for the Lyra replication graph\n */" },
		{ "IncludePath", "System/LyraReplicationGraphSettings.h" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
		{ "ToolTip", "Default settings for the Lyra replication graph" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableReplicationGraph_MetaData[] = {
		{ "Category", "ReplicationGraph" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableReplicationGraph_SetBit(void* Obj)
	{
		((ULyraReplicationGraphSettings*)Obj)->bDisableReplicationGraph = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableReplicationGraph = { "bDisableReplicationGraph", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraReplicationGraphSettings), &Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableReplicationGraph_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableReplicationGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableReplicationGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DefaultReplicationGraphClass_MetaData[] = {
		{ "Category", "ReplicationGraph" },
		{ "MetaClass", "/Script/LyraGame.LyraReplicationGraph" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DefaultReplicationGraphClass = { "DefaultReplicationGraphClass", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraReplicationGraphSettings, DefaultReplicationGraphClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DefaultReplicationGraphClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DefaultReplicationGraphClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bEnableFastSharedPath_MetaData[] = {
		{ "Category", "FastSharedPath" },
		{ "ConsoleVariable", "Lyra.RepGraph.EnableFastSharedPath" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bEnableFastSharedPath_SetBit(void* Obj)
	{
		((ULyraReplicationGraphSettings*)Obj)->bEnableFastSharedPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bEnableFastSharedPath = { "bEnableFastSharedPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraReplicationGraphSettings), &Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bEnableFastSharedPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bEnableFastSharedPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bEnableFastSharedPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_TargetKBytesSecFastSharedPath_MetaData[] = {
		{ "Category", "FastSharedPath" },
		{ "Comment", "// How much bandwidth to use for FastShared movement updates. This is counted independently of the NetDriver's target bandwidth.\n" },
		{ "ConsoleVariable", "Lyra.RepGraph.TargetKBytesSecFastSharedPath" },
		{ "ForceUnits", "Kilobytes" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
		{ "ToolTip", "How much bandwidth to use for FastShared movement updates. This is counted independently of the NetDriver's target bandwidth." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_TargetKBytesSecFastSharedPath = { "TargetKBytesSecFastSharedPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraReplicationGraphSettings, TargetKBytesSecFastSharedPath), METADATA_PARAMS(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_TargetKBytesSecFastSharedPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_TargetKBytesSecFastSharedPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_FastSharedPathCullDistPct_MetaData[] = {
		{ "Category", "FastSharedPath" },
		{ "ConsoleVariable", "Lyra.RepGraph.FastSharedPathCullDistPct" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_FastSharedPathCullDistPct = { "FastSharedPathCullDistPct", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraReplicationGraphSettings, FastSharedPathCullDistPct), METADATA_PARAMS(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_FastSharedPathCullDistPct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_FastSharedPathCullDistPct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DestructionInfoMaxDist_MetaData[] = {
		{ "Category", "DestructionInfo" },
		{ "ConsoleVariable", "Lyra.RepGraph.DestructInfo.MaxDist" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DestructionInfoMaxDist = { "DestructionInfoMaxDist", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraReplicationGraphSettings, DestructionInfoMaxDist), METADATA_PARAMS(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DestructionInfoMaxDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DestructionInfoMaxDist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialGridCellSize_MetaData[] = {
		{ "Category", "SpatialGrid" },
		{ "ConsoleVariable", "Lyra.RepGraph.CellSize" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialGridCellSize = { "SpatialGridCellSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraReplicationGraphSettings, SpatialGridCellSize), METADATA_PARAMS(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialGridCellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialGridCellSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialBiasX_MetaData[] = {
		{ "Category", "SpatialGrid" },
		{ "Comment", "// Essentially \"Min X\" for replication. This is just an initial value. The system will reset itself if actors appears outside of this.\n" },
		{ "ConsoleVariable", "Lyra.RepGraph.SpatialBiasX" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
		{ "ToolTip", "Essentially \"Min X\" for replication. This is just an initial value. The system will reset itself if actors appears outside of this." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialBiasX = { "SpatialBiasX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraReplicationGraphSettings, SpatialBiasX), METADATA_PARAMS(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialBiasX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialBiasX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialBiasY_MetaData[] = {
		{ "Category", "SpatialGrid" },
		{ "Comment", "// Essentially \"Min Y\" for replication. This is just an initial value. The system will reset itself if actors appears outside of this.\n" },
		{ "ConsoleVariable", "Lyra.RepGraph.SpatialBiasY" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
		{ "ToolTip", "Essentially \"Min Y\" for replication. This is just an initial value. The system will reset itself if actors appears outside of this." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialBiasY = { "SpatialBiasY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraReplicationGraphSettings, SpatialBiasY), METADATA_PARAMS(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialBiasY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialBiasY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableSpatialRebuilds_MetaData[] = {
		{ "Category", "SpatialGrid" },
		{ "ConsoleVariable", "Lyra.RepGraph.DisableSpatialRebuilds" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableSpatialRebuilds_SetBit(void* Obj)
	{
		((ULyraReplicationGraphSettings*)Obj)->bDisableSpatialRebuilds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableSpatialRebuilds = { "bDisableSpatialRebuilds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraReplicationGraphSettings), &Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableSpatialRebuilds_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableSpatialRebuilds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableSpatialRebuilds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DynamicActorFrequencyBuckets_MetaData[] = {
		{ "Category", "DynamicSpatialFrequency" },
		{ "Comment", "// How many buckets to spread dynamic, spatialized actors across.\n// High number = more buckets = smaller effective replication frequency.\n// This happens before individual actors do their own NetUpdateFrequency check.\n" },
		{ "ConsoleVariable", "Lyra.RepGraph.DynamicActorFrequencyBuckets" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
		{ "ToolTip", "How many buckets to spread dynamic, spatialized actors across.\nHigh number = more buckets = smaller effective replication frequency.\nThis happens before individual actors do their own NetUpdateFrequency check." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DynamicActorFrequencyBuckets = { "DynamicActorFrequencyBuckets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraReplicationGraphSettings, DynamicActorFrequencyBuckets), METADATA_PARAMS(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DynamicActorFrequencyBuckets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DynamicActorFrequencyBuckets_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_ClassSettings_Inner = { "ClassSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRepGraphActorClassSettings, METADATA_PARAMS(nullptr, 0) }; // 540532678
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_ClassSettings_MetaData[] = {
		{ "Category", "ReplicationGraph" },
		{ "Comment", "// Array of Custom Settings for Specific Classes \n" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphSettings.h" },
		{ "ToolTip", "Array of Custom Settings for Specific Classes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_ClassSettings = { "ClassSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraReplicationGraphSettings, ClassSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_ClassSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_ClassSettings_MetaData)) }; // 540532678
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableReplicationGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DefaultReplicationGraphClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bEnableFastSharedPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_TargetKBytesSecFastSharedPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_FastSharedPathCullDistPct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DestructionInfoMaxDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialGridCellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialBiasX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_SpatialBiasY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_bDisableSpatialRebuilds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_DynamicActorFrequencyBuckets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_ClassSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::NewProp_ClassSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraReplicationGraphSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::ClassParams = {
		&ULyraReplicationGraphSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraReplicationGraphSettings()
	{
		if (!Z_Registration_Info_UClass_ULyraReplicationGraphSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraReplicationGraphSettings.OuterSingleton, Z_Construct_UClass_ULyraReplicationGraphSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraReplicationGraphSettings.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraReplicationGraphSettings>()
	{
		return ULyraReplicationGraphSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraReplicationGraphSettings);
	ULyraReplicationGraphSettings::~ULyraReplicationGraphSettings() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraReplicationGraphSettings, ULyraReplicationGraphSettings::StaticClass, TEXT("ULyraReplicationGraphSettings"), &Z_Registration_Info_UClass_ULyraReplicationGraphSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraReplicationGraphSettings), 113510838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphSettings_h_1378473983(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
