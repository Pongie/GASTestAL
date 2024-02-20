// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Development/LyraPlatformEmulationSettings.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPlatformEmulationSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPlatformEmulationSettings();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPlatformEmulationSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraPlatformEmulationSettings::execGetKnownDeviceProfiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetKnownDeviceProfiles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraPlatformEmulationSettings::execGetKnownPlatformIds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetKnownPlatformIds();
		P_NATIVE_END;
	}
	void ULyraPlatformEmulationSettings::StaticRegisterNativesULyraPlatformEmulationSettings()
	{
		UClass* Class = ULyraPlatformEmulationSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetKnownDeviceProfiles", &ULyraPlatformEmulationSettings::execGetKnownDeviceProfiles },
			{ "GetKnownPlatformIds", &ULyraPlatformEmulationSettings::execGetKnownPlatformIds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics
	{
		struct LyraPlatformEmulationSettings_eventGetKnownDeviceProfiles_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlatformEmulationSettings_eventGetKnownDeviceProfiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPlatformEmulationSettings, nullptr, "GetKnownDeviceProfiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::LyraPlatformEmulationSettings_eventGetKnownDeviceProfiles_Parms), Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics
	{
		struct LyraPlatformEmulationSettings_eventGetKnownPlatformIds_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlatformEmulationSettings_eventGetKnownPlatformIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPlatformEmulationSettings, nullptr, "GetKnownPlatformIds", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::LyraPlatformEmulationSettings_eventGetKnownPlatformIds_Parms), Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraPlatformEmulationSettings);
	UClass* Z_Construct_UClass_ULyraPlatformEmulationSettings_NoRegister()
	{
		return ULyraPlatformEmulationSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPlatformTraitsToEnable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalPlatformTraitsToEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPlatformTraitsToSuppress_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalPlatformTraitsToSuppress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PretendPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PretendPlatform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PretendBaseDeviceProfile_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PretendBaseDeviceProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyFrameRateSettingsInPIE_MetaData[];
#endif
		static void NewProp_bApplyFrameRateSettingsInPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyFrameRateSettingsInPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyFrontEndPerformanceOptionsInPIE_MetaData[];
#endif
		static void NewProp_bApplyFrontEndPerformanceOptionsInPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyFrontEndPerformanceOptionsInPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyDeviceProfilesInPIE_MetaData[];
#endif
		static void NewProp_bApplyDeviceProfilesInPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyDeviceProfilesInPIE;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownDeviceProfiles, "GetKnownDeviceProfiles" }, // 2074786652
		{ &Z_Construct_UFunction_ULyraPlatformEmulationSettings_GetKnownPlatformIds, "GetKnownPlatformIds" }, // 2821864848
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Platform emulation settings\n */" },
		{ "IncludePath", "Development/LyraPlatformEmulationSettings.h" },
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
		{ "ToolTip", "Platform emulation settings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_AdditionalPlatformTraitsToEnable_MetaData[] = {
		{ "Categories", "Input,Platform.Trait" },
		{ "Category", "PlatformEmulation" },
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_AdditionalPlatformTraitsToEnable = { "AdditionalPlatformTraitsToEnable", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPlatformEmulationSettings, AdditionalPlatformTraitsToEnable), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_AdditionalPlatformTraitsToEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_AdditionalPlatformTraitsToEnable_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_AdditionalPlatformTraitsToSuppress_MetaData[] = {
		{ "Categories", "Input,Platform.Trait" },
		{ "Category", "PlatformEmulation" },
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_AdditionalPlatformTraitsToSuppress = { "AdditionalPlatformTraitsToSuppress", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPlatformEmulationSettings, AdditionalPlatformTraitsToSuppress), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_AdditionalPlatformTraitsToSuppress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_AdditionalPlatformTraitsToSuppress_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_PretendPlatform_MetaData[] = {
		{ "Category", "PlatformEmulation" },
		{ "GetOptions", "GetKnownPlatformIds" },
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_PretendPlatform = { "PretendPlatform", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPlatformEmulationSettings, PretendPlatform), METADATA_PARAMS(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_PretendPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_PretendPlatform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_PretendBaseDeviceProfile_MetaData[] = {
		{ "Category", "PlatformEmulation" },
		{ "Comment", "// The base device profile to pretend we are using when emulating device-specific device profiles applied from ULyraSettingsLocal\n" },
		{ "EditCondition", "bApplyDeviceProfilesInPIE" },
		{ "GetOptions", "GetKnownDeviceProfiles" },
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
		{ "ToolTip", "The base device profile to pretend we are using when emulating device-specific device profiles applied from ULyraSettingsLocal" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_PretendBaseDeviceProfile = { "PretendBaseDeviceProfile", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPlatformEmulationSettings, PretendBaseDeviceProfile), METADATA_PARAMS(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_PretendBaseDeviceProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_PretendBaseDeviceProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrameRateSettingsInPIE_MetaData[] = {
		{ "Category", "PlatformEmulation" },
		{ "Comment", "// Do we apply desktop-style frame rate settings in PIE?\n// (frame rate limits are an engine-wide setting so it's not always desirable to have enabled in the editor)\n// You may also want to disable the editor preference \"Use Less CPU when in Background\" if testing background frame rate limits\n" },
		{ "ConsoleVariable", "Lyra.Settings.ApplyFrameRateSettingsInPIE" },
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
		{ "ToolTip", "Do we apply desktop-style frame rate settings in PIE?\n(frame rate limits are an engine-wide setting so it's not always desirable to have enabled in the editor)\nYou may also want to disable the editor preference \"Use Less CPU when in Background\" if testing background frame rate limits" },
	};
#endif
	void Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrameRateSettingsInPIE_SetBit(void* Obj)
	{
		((ULyraPlatformEmulationSettings*)Obj)->bApplyFrameRateSettingsInPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrameRateSettingsInPIE = { "bApplyFrameRateSettingsInPIE", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraPlatformEmulationSettings), &Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrameRateSettingsInPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrameRateSettingsInPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrameRateSettingsInPIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrontEndPerformanceOptionsInPIE_MetaData[] = {
		{ "Category", "PlatformEmulation" },
		{ "Comment", "// Do we apply front-end specific performance options in PIE?\n// Most engine performance/scalability settings they drive are global, so if one PIE window\n// is in the front-end and the other is in-game one will win and the other gets stuck with those settings\n" },
		{ "ConsoleVariable", "Lyra.Settings.ApplyFrontEndPerformanceOptionsInPIE" },
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
		{ "ToolTip", "Do we apply front-end specific performance options in PIE?\nMost engine performance/scalability settings they drive are global, so if one PIE window\nis in the front-end and the other is in-game one will win and the other gets stuck with those settings" },
	};
#endif
	void Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrontEndPerformanceOptionsInPIE_SetBit(void* Obj)
	{
		((ULyraPlatformEmulationSettings*)Obj)->bApplyFrontEndPerformanceOptionsInPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrontEndPerformanceOptionsInPIE = { "bApplyFrontEndPerformanceOptionsInPIE", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraPlatformEmulationSettings), &Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrontEndPerformanceOptionsInPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrontEndPerformanceOptionsInPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrontEndPerformanceOptionsInPIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyDeviceProfilesInPIE_MetaData[] = {
		{ "Category", "PlatformEmulation" },
		{ "Comment", "// Should we apply experience/platform emulated device profiles in PIE?\n" },
		{ "ConsoleVariable", "Lyra.Settings.ApplyDeviceProfilesInPIE" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Development/LyraPlatformEmulationSettings.h" },
		{ "ToolTip", "Should we apply experience/platform emulated device profiles in PIE?" },
	};
#endif
	void Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyDeviceProfilesInPIE_SetBit(void* Obj)
	{
		((ULyraPlatformEmulationSettings*)Obj)->bApplyDeviceProfilesInPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyDeviceProfilesInPIE = { "bApplyDeviceProfilesInPIE", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraPlatformEmulationSettings), &Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyDeviceProfilesInPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyDeviceProfilesInPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyDeviceProfilesInPIE_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_AdditionalPlatformTraitsToEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_AdditionalPlatformTraitsToSuppress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_PretendPlatform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_PretendBaseDeviceProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrameRateSettingsInPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyFrontEndPerformanceOptionsInPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::NewProp_bApplyDeviceProfilesInPIE,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraPlatformEmulationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::ClassParams = {
		&ULyraPlatformEmulationSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraPlatformEmulationSettings()
	{
		if (!Z_Registration_Info_UClass_ULyraPlatformEmulationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraPlatformEmulationSettings.OuterSingleton, Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraPlatformEmulationSettings.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraPlatformEmulationSettings>()
	{
		return ULyraPlatformEmulationSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraPlatformEmulationSettings);
	ULyraPlatformEmulationSettings::~ULyraPlatformEmulationSettings() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraPlatformEmulationSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraPlatformEmulationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraPlatformEmulationSettings, ULyraPlatformEmulationSettings::StaticClass, TEXT("ULyraPlatformEmulationSettings"), &Z_Registration_Info_UClass_ULyraPlatformEmulationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraPlatformEmulationSettings), 4294587233U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraPlatformEmulationSettings_h_2427602208(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraPlatformEmulationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraPlatformEmulationSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
