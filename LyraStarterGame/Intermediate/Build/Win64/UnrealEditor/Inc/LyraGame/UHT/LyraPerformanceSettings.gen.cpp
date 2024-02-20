// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Performance/LyraPerformanceSettings.h"
#include "Engine/PlatformSettings.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPerformanceSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UPlatformSettings();
	DEVELOPERSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformSettings();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPerformanceSettings();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPerformanceSettings_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraFramePacingMode();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraPerformanceStatGroup();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraQualityDeviceProfileVariant;
class UScriptStruct* FLyraQualityDeviceProfileVariant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraQualityDeviceProfileVariant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraQualityDeviceProfileVariant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraQualityDeviceProfileVariant"));
	}
	return Z_Registration_Info_UScriptStruct_LyraQualityDeviceProfileVariant.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraQualityDeviceProfileVariant>()
{
	return FLyraQualityDeviceProfileVariant::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceProfileSuffix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceProfileSuffix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRefreshRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinRefreshRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Describes one platform-specific device profile variant that the user can choose from in the UI\n" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceSettings.h" },
		{ "ToolTip", "Describes one platform-specific device profile variant that the user can choose from in the UI" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraQualityDeviceProfileVariant>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "LyraQualityDeviceProfileVariant" },
		{ "Comment", "// The display name for this device profile variant (visible in the options screen)\n" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceSettings.h" },
		{ "ToolTip", "The display name for this device profile variant (visible in the options screen)" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraQualityDeviceProfileVariant, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::NewProp_DeviceProfileSuffix_MetaData[] = {
		{ "Category", "LyraQualityDeviceProfileVariant" },
		{ "Comment", "// The suffix to append to the base device profile name for the current platform\n" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceSettings.h" },
		{ "ToolTip", "The suffix to append to the base device profile name for the current platform" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::NewProp_DeviceProfileSuffix = { "DeviceProfileSuffix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraQualityDeviceProfileVariant, DeviceProfileSuffix), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::NewProp_DeviceProfileSuffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::NewProp_DeviceProfileSuffix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::NewProp_MinRefreshRate_MetaData[] = {
		{ "Category", "LyraQualityDeviceProfileVariant" },
		{ "Comment", "// The minimum required refresh rate to enable this mode\n// (e.g., if this is set to 120 Hz and the device is connected\n// to a 60 Hz display, it won't be available)\n" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceSettings.h" },
		{ "ToolTip", "The minimum required refresh rate to enable this mode\n(e.g., if this is set to 120 Hz and the device is connected\nto a 60 Hz display, it won't be available)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::NewProp_MinRefreshRate = { "MinRefreshRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraQualityDeviceProfileVariant, MinRefreshRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::NewProp_MinRefreshRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::NewProp_MinRefreshRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::NewProp_DeviceProfileSuffix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::NewProp_MinRefreshRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraQualityDeviceProfileVariant",
		sizeof(FLyraQualityDeviceProfileVariant),
		alignof(FLyraQualityDeviceProfileVariant),
		Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraQualityDeviceProfileVariant.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraQualityDeviceProfileVariant.InnerSingleton, Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraQualityDeviceProfileVariant.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraPerformanceStatGroup;
class UScriptStruct* FLyraPerformanceStatGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraPerformanceStatGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraPerformanceStatGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraPerformanceStatGroup, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraPerformanceStatGroup"));
	}
	return Z_Registration_Info_UScriptStruct_LyraPerformanceStatGroup.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraPerformanceStatGroup>()
{
	return FLyraPerformanceStatGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisibilityQuery;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedStats_ElementProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedStats_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedStats_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AllowedStats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Describes a set of performance stats that the user can enable in settings,\n// predicated on passing a visibility query on platform traits\n" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceSettings.h" },
		{ "ToolTip", "Describes a set of performance stats that the user can enable in settings,\npredicated on passing a visibility query on platform traits" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraPerformanceStatGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::NewProp_VisibilityQuery_MetaData[] = {
		{ "Categories", "Input,Platform.Trait" },
		{ "Category", "LyraPerformanceStatGroup" },
		{ "Comment", "// A query on platform traits to determine whether or not it will be possible\n// to show a set of stats\n" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceSettings.h" },
		{ "ToolTip", "A query on platform traits to determine whether or not it will be possible\nto show a set of stats" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::NewProp_VisibilityQuery = { "VisibilityQuery", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraPerformanceStatGroup, VisibilityQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::NewProp_VisibilityQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::NewProp_VisibilityQuery_MetaData)) }; // 689482789
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::NewProp_AllowedStats_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::NewProp_AllowedStats_ElementProp = { "AllowedStats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat, METADATA_PARAMS(nullptr, 0) }; // 2215989194
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::NewProp_AllowedStats_MetaData[] = {
		{ "Category", "LyraPerformanceStatGroup" },
		{ "Comment", "// The set of stats to allow if the query passes\n" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceSettings.h" },
		{ "ToolTip", "The set of stats to allow if the query passes" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::NewProp_AllowedStats = { "AllowedStats", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraPerformanceStatGroup, AllowedStats), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::NewProp_AllowedStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::NewProp_AllowedStats_MetaData)) }; // 2215989194
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::NewProp_VisibilityQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::NewProp_AllowedStats_ElementProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::NewProp_AllowedStats_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::NewProp_AllowedStats,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraPerformanceStatGroup",
		sizeof(FLyraPerformanceStatGroup),
		alignof(FLyraPerformanceStatGroup),
		Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraPerformanceStatGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraPerformanceStatGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraPerformanceStatGroup.InnerSingleton, Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraPerformanceStatGroup.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraFramePacingMode;
	static UEnum* ELyraFramePacingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELyraFramePacingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELyraFramePacingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraFramePacingMode, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraFramePacingMode"));
		}
		return Z_Registration_Info_UEnum_ELyraFramePacingMode.OuterSingleton;
	}
	template<> LYRAGAME_API UEnum* StaticEnum<ELyraFramePacingMode>()
	{
		return ELyraFramePacingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LyraGame_ELyraFramePacingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LyraGame_ELyraFramePacingMode_Statics::Enumerators[] = {
		{ "ELyraFramePacingMode::DesktopStyle", (int64)ELyraFramePacingMode::DesktopStyle },
		{ "ELyraFramePacingMode::ConsoleStyle", (int64)ELyraFramePacingMode::ConsoleStyle },
		{ "ELyraFramePacingMode::MobileStyle", (int64)ELyraFramePacingMode::MobileStyle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LyraGame_ELyraFramePacingMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// How hare frame pacing and overall graphics settings controlled/exposed for the platform?\n" },
		{ "ConsoleStyle.Comment", "// Limits handled by choosing present intervals driven by device profiles\n" },
		{ "ConsoleStyle.Name", "ELyraFramePacingMode::ConsoleStyle" },
		{ "ConsoleStyle.ToolTip", "Limits handled by choosing present intervals driven by device profiles" },
		{ "DesktopStyle.Comment", "// Manual frame rate limits, user is allowed to choose whether or not to lock to vsync\n" },
		{ "DesktopStyle.Name", "ELyraFramePacingMode::DesktopStyle" },
		{ "DesktopStyle.ToolTip", "Manual frame rate limits, user is allowed to choose whether or not to lock to vsync" },
		{ "MobileStyle.Comment", "// Limits handled by a user-facing choice of frame rate from among ones allowed by device profiles for the specific device\n" },
		{ "MobileStyle.Name", "ELyraFramePacingMode::MobileStyle" },
		{ "MobileStyle.ToolTip", "Limits handled by a user-facing choice of frame rate from among ones allowed by device profiles for the specific device" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceSettings.h" },
		{ "ToolTip", "How hare frame pacing and overall graphics settings controlled/exposed for the platform?" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraFramePacingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		"ELyraFramePacingMode",
		"ELyraFramePacingMode",
		Z_Construct_UEnum_LyraGame_ELyraFramePacingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraFramePacingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LyraGame_ELyraFramePacingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraFramePacingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LyraGame_ELyraFramePacingMode()
	{
		if (!Z_Registration_Info_UEnum_ELyraFramePacingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraFramePacingMode.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraFramePacingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELyraFramePacingMode.InnerSingleton;
	}
	void ULyraPlatformSpecificRenderingSettings::StaticRegisterNativesULyraPlatformSpecificRenderingSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraPlatformSpecificRenderingSettings);
	UClass* Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_NoRegister()
	{
		return ULyraPlatformSpecificRenderingSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDeviceProfileSuffix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultDeviceProfileSuffix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserFacingDeviceProfileOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserFacingDeviceProfileOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserFacingDeviceProfileOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsGranularVideoQualitySettings_MetaData[];
#endif
		static void NewProp_bSupportsGranularVideoQualitySettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsGranularVideoQualitySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAutomaticVideoQualityBenchmark_MetaData[];
#endif
		static void NewProp_bSupportsAutomaticVideoQualityBenchmark_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAutomaticVideoQualityBenchmark;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FramePacingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramePacingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FramePacingMode;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MobileFrameRateLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MobileFrameRateLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileFrameRateLimits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlatformSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Performance/LyraPerformanceSettings.h" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_DefaultDeviceProfileSuffix_MetaData[] = {
		{ "Category", "DeviceProfiles" },
		{ "Comment", "// The default variant suffix to append, should typically be a member of\n// UserFacingDeviceProfileOptions unless there is only one for the current platform\n//\n// Note that this will usually be set from platform-specific ini files, not via the UI\n" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceSettings.h" },
		{ "ToolTip", "The default variant suffix to append, should typically be a member of\nUserFacingDeviceProfileOptions unless there is only one for the current platform\n\nNote that this will usually be set from platform-specific ini files, not via the UI" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_DefaultDeviceProfileSuffix = { "DefaultDeviceProfileSuffix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPlatformSpecificRenderingSettings, DefaultDeviceProfileSuffix), METADATA_PARAMS(Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_DefaultDeviceProfileSuffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_DefaultDeviceProfileSuffix_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_UserFacingDeviceProfileOptions_Inner = { "UserFacingDeviceProfileOptions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant, METADATA_PARAMS(nullptr, 0) }; // 3781646523
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_UserFacingDeviceProfileOptions_MetaData[] = {
		{ "Category", "DeviceProfiles" },
		{ "Comment", "// The list of device profile variations to allow users to choose from in settings\n//\n// These should be sorted from slowest to fastest by target frame rate:\n//   If the current display doesn't support a user chosen refresh rate, we'll try\n//   previous entries until we find one that works\n//\n// Note that this will usually be set from platform-specific ini files, not via the UI\n" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceSettings.h" },
		{ "ToolTip", "The list of device profile variations to allow users to choose from in settings\n\nThese should be sorted from slowest to fastest by target frame rate:\n  If the current display doesn't support a user chosen refresh rate, we'll try\n  previous entries until we find one that works\n\nNote that this will usually be set from platform-specific ini files, not via the UI" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_UserFacingDeviceProfileOptions = { "UserFacingDeviceProfileOptions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPlatformSpecificRenderingSettings, UserFacingDeviceProfileOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_UserFacingDeviceProfileOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_UserFacingDeviceProfileOptions_MetaData)) }; // 3781646523
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_bSupportsGranularVideoQualitySettings_MetaData[] = {
		{ "Category", "VideoSettings" },
		{ "Comment", "// Does the platform support granular video quality settings?\n" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceSettings.h" },
		{ "ToolTip", "Does the platform support granular video quality settings?" },
	};
#endif
	void Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_bSupportsGranularVideoQualitySettings_SetBit(void* Obj)
	{
		((ULyraPlatformSpecificRenderingSettings*)Obj)->bSupportsGranularVideoQualitySettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_bSupportsGranularVideoQualitySettings = { "bSupportsGranularVideoQualitySettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraPlatformSpecificRenderingSettings), &Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_bSupportsGranularVideoQualitySettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_bSupportsGranularVideoQualitySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_bSupportsGranularVideoQualitySettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_bSupportsAutomaticVideoQualityBenchmark_MetaData[] = {
		{ "Category", "VideoSettings" },
		{ "Comment", "// Does the platform support running the automatic quality benchmark (typically this should only be true if bSupportsGranularVideoQualitySettings is also true)\n" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceSettings.h" },
		{ "ToolTip", "Does the platform support running the automatic quality benchmark (typically this should only be true if bSupportsGranularVideoQualitySettings is also true)" },
	};
#endif
	void Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_bSupportsAutomaticVideoQualityBenchmark_SetBit(void* Obj)
	{
		((ULyraPlatformSpecificRenderingSettings*)Obj)->bSupportsAutomaticVideoQualityBenchmark = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_bSupportsAutomaticVideoQualityBenchmark = { "bSupportsAutomaticVideoQualityBenchmark", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraPlatformSpecificRenderingSettings), &Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_bSupportsAutomaticVideoQualityBenchmark_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_bSupportsAutomaticVideoQualityBenchmark_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_bSupportsAutomaticVideoQualityBenchmark_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_FramePacingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_FramePacingMode_MetaData[] = {
		{ "Category", "VideoSettings" },
		{ "Comment", "// How is frame pacing controlled\n" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceSettings.h" },
		{ "ToolTip", "How is frame pacing controlled" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_FramePacingMode = { "FramePacingMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPlatformSpecificRenderingSettings, FramePacingMode), Z_Construct_UEnum_LyraGame_ELyraFramePacingMode, METADATA_PARAMS(Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_FramePacingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_FramePacingMode_MetaData)) }; // 984178835
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_MobileFrameRateLimits_Inner = { "MobileFrameRateLimits", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_MobileFrameRateLimits_MetaData[] = {
		{ "Category", "VideoSettings" },
		{ "Comment", "// Potential frame rates to display for mobile\n// Note: This is further limited by Lyra.DeviceProfile.Mobile.MaxFrameRate from the\n// platform-specific device profile and what the platform frame pacer reports as supported\n" },
		{ "EditCondition", "FramePacingMode==ELyraFramePacingMode::MobileStyle" },
		{ "ForceUnits", "Hz" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceSettings.h" },
		{ "ToolTip", "Potential frame rates to display for mobile\nNote: This is further limited by Lyra.DeviceProfile.Mobile.MaxFrameRate from the\nplatform-specific device profile and what the platform frame pacer reports as supported" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_MobileFrameRateLimits = { "MobileFrameRateLimits", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPlatformSpecificRenderingSettings, MobileFrameRateLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_MobileFrameRateLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_MobileFrameRateLimits_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_DefaultDeviceProfileSuffix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_UserFacingDeviceProfileOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_UserFacingDeviceProfileOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_bSupportsGranularVideoQualitySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_bSupportsAutomaticVideoQualityBenchmark,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_FramePacingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_FramePacingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_MobileFrameRateLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::NewProp_MobileFrameRateLimits,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraPlatformSpecificRenderingSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::ClassParams = {
		&ULyraPlatformSpecificRenderingSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::PropPointers),
		0,
		0x000004A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings()
	{
		if (!Z_Registration_Info_UClass_ULyraPlatformSpecificRenderingSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraPlatformSpecificRenderingSettings.OuterSingleton, Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraPlatformSpecificRenderingSettings.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraPlatformSpecificRenderingSettings>()
	{
		return ULyraPlatformSpecificRenderingSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraPlatformSpecificRenderingSettings);
	ULyraPlatformSpecificRenderingSettings::~ULyraPlatformSpecificRenderingSettings() {}
	void ULyraPerformanceSettings::StaticRegisterNativesULyraPerformanceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraPerformanceSettings);
	UClass* Z_Construct_UClass_ULyraPerformanceSettings_NoRegister()
	{
		return ULyraPerformanceSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULyraPerformanceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerPlatformSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerPlatformSettings;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DesktopFrameRateLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesktopFrameRateLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DesktopFrameRateLimits;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserFacingPerformanceStats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserFacingPerformanceStats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserFacingPerformanceStats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraPerformanceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPerformanceSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Project-specific performance profile settings.\n */" },
		{ "DisplayName", "Lyra Performance Settings" },
		{ "IncludePath", "Performance/LyraPerformanceSettings.h" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceSettings.h" },
		{ "ToolTip", "Project-specific performance profile settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPerformanceSettings_Statics::NewProp_PerPlatformSettings_MetaData[] = {
		{ "Category", "PlatformSpecific" },
		{ "Comment", "// This is a special helper to expose the per-platform settings so they can be edited in the project settings\n// It never needs to be directly accessed\n" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceSettings.h" },
		{ "ToolTip", "This is a special helper to expose the per-platform settings so they can be edited in the project settings\nIt never needs to be directly accessed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraPerformanceSettings_Statics::NewProp_PerPlatformSettings = { "PerPlatformSettings", nullptr, (EPropertyFlags)0x0040008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPerformanceSettings, PerPlatformSettings), Z_Construct_UScriptStruct_FPerPlatformSettings, METADATA_PARAMS(Z_Construct_UClass_ULyraPerformanceSettings_Statics::NewProp_PerPlatformSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPerformanceSettings_Statics::NewProp_PerPlatformSettings_MetaData)) }; // 145519765
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraPerformanceSettings_Statics::NewProp_DesktopFrameRateLimits_Inner = { "DesktopFrameRateLimits", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPerformanceSettings_Statics::NewProp_DesktopFrameRateLimits_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "// The list of frame rates to allow users to choose from in the various\n// \"frame rate limit\" video settings on desktop platforms\n" },
		{ "ForceUnits", "Hz" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceSettings.h" },
		{ "ToolTip", "The list of frame rates to allow users to choose from in the various\n\"frame rate limit\" video settings on desktop platforms" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraPerformanceSettings_Statics::NewProp_DesktopFrameRateLimits = { "DesktopFrameRateLimits", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPerformanceSettings, DesktopFrameRateLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraPerformanceSettings_Statics::NewProp_DesktopFrameRateLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPerformanceSettings_Statics::NewProp_DesktopFrameRateLimits_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraPerformanceSettings_Statics::NewProp_UserFacingPerformanceStats_Inner = { "UserFacingPerformanceStats", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraPerformanceStatGroup, METADATA_PARAMS(nullptr, 0) }; // 1199640610
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPerformanceSettings_Statics::NewProp_UserFacingPerformanceStats_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// The list of performance stats that can be enabled in Options by the user\n" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceSettings.h" },
		{ "ToolTip", "The list of performance stats that can be enabled in Options by the user" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraPerformanceSettings_Statics::NewProp_UserFacingPerformanceStats = { "UserFacingPerformanceStats", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPerformanceSettings, UserFacingPerformanceStats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraPerformanceSettings_Statics::NewProp_UserFacingPerformanceStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPerformanceSettings_Statics::NewProp_UserFacingPerformanceStats_MetaData)) }; // 1199640610
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraPerformanceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPerformanceSettings_Statics::NewProp_PerPlatformSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPerformanceSettings_Statics::NewProp_DesktopFrameRateLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPerformanceSettings_Statics::NewProp_DesktopFrameRateLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPerformanceSettings_Statics::NewProp_UserFacingPerformanceStats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPerformanceSettings_Statics::NewProp_UserFacingPerformanceStats,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraPerformanceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraPerformanceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraPerformanceSettings_Statics::ClassParams = {
		&ULyraPerformanceSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraPerformanceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPerformanceSettings_Statics::PropPointers),
		0,
		0x008000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraPerformanceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPerformanceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraPerformanceSettings()
	{
		if (!Z_Registration_Info_UClass_ULyraPerformanceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraPerformanceSettings.OuterSingleton, Z_Construct_UClass_ULyraPerformanceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraPerformanceSettings.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraPerformanceSettings>()
	{
		return ULyraPerformanceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraPerformanceSettings);
	ULyraPerformanceSettings::~ULyraPerformanceSettings() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_Statics::EnumInfo[] = {
		{ ELyraFramePacingMode_StaticEnum, TEXT("ELyraFramePacingMode"), &Z_Registration_Info_UEnum_ELyraFramePacingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 984178835U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_Statics::ScriptStructInfo[] = {
		{ FLyraQualityDeviceProfileVariant::StaticStruct, Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics::NewStructOps, TEXT("LyraQualityDeviceProfileVariant"), &Z_Registration_Info_UScriptStruct_LyraQualityDeviceProfileVariant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraQualityDeviceProfileVariant), 3781646523U) },
		{ FLyraPerformanceStatGroup::StaticStruct, Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics::NewStructOps, TEXT("LyraPerformanceStatGroup"), &Z_Registration_Info_UScriptStruct_LyraPerformanceStatGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraPerformanceStatGroup), 1199640610U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings, ULyraPlatformSpecificRenderingSettings::StaticClass, TEXT("ULyraPlatformSpecificRenderingSettings"), &Z_Registration_Info_UClass_ULyraPlatformSpecificRenderingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraPlatformSpecificRenderingSettings), 2600151971U) },
		{ Z_Construct_UClass_ULyraPerformanceSettings, ULyraPerformanceSettings::StaticClass, TEXT("ULyraPerformanceSettings"), &Z_Registration_Info_UClass_ULyraPerformanceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraPerformanceSettings), 1312973731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_3162455242(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
