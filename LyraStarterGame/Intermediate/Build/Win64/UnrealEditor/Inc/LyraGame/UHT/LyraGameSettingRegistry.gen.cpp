// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/LyraGameSettingRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameSettingRegistry() {}
// Cross Module References
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingCollection_NoRegister();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingRegistry();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameSettingRegistry();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameSettingRegistry_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraGameSettingRegistry::StaticRegisterNativesULyraGameSettingRegistry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameSettingRegistry);
	UClass* Z_Construct_UClass_ULyraGameSettingRegistry_NoRegister()
	{
		return ULyraGameSettingRegistry::StaticClass();
	}
	struct Z_Construct_UClass_ULyraGameSettingRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VideoSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AudioSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplaySettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameplaySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseAndKeyboardSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MouseAndKeyboardSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamepadSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GamepadSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraGameSettingRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameSettingRegistry,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameSettingRegistry_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Settings/LyraGameSettingRegistry.h" },
		{ "ModuleRelativePath", "Settings/LyraGameSettingRegistry.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_VideoSettings_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraGameSettingRegistry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_VideoSettings = { "VideoSettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameSettingRegistry, VideoSettings), Z_Construct_UClass_UGameSettingCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_VideoSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_VideoSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_AudioSettings_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraGameSettingRegistry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_AudioSettings = { "AudioSettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameSettingRegistry, AudioSettings), Z_Construct_UClass_UGameSettingCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_AudioSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_AudioSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_GameplaySettings_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraGameSettingRegistry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_GameplaySettings = { "GameplaySettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameSettingRegistry, GameplaySettings), Z_Construct_UClass_UGameSettingCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_GameplaySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_GameplaySettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_MouseAndKeyboardSettings_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraGameSettingRegistry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_MouseAndKeyboardSettings = { "MouseAndKeyboardSettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameSettingRegistry, MouseAndKeyboardSettings), Z_Construct_UClass_UGameSettingCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_MouseAndKeyboardSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_MouseAndKeyboardSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_GamepadSettings_MetaData[] = {
		{ "ModuleRelativePath", "Settings/LyraGameSettingRegistry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_GamepadSettings = { "GamepadSettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraGameSettingRegistry, GamepadSettings), Z_Construct_UClass_UGameSettingCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_GamepadSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_GamepadSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraGameSettingRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_VideoSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_AudioSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_GameplaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_MouseAndKeyboardSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameSettingRegistry_Statics::NewProp_GamepadSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraGameSettingRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameSettingRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameSettingRegistry_Statics::ClassParams = {
		&ULyraGameSettingRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraGameSettingRegistry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameSettingRegistry_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraGameSettingRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameSettingRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraGameSettingRegistry()
	{
		if (!Z_Registration_Info_UClass_ULyraGameSettingRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameSettingRegistry.OuterSingleton, Z_Construct_UClass_ULyraGameSettingRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraGameSettingRegistry.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraGameSettingRegistry>()
	{
		return ULyraGameSettingRegistry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameSettingRegistry);
	ULyraGameSettingRegistry::~ULyraGameSettingRegistry() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_LyraGameSettingRegistry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_LyraGameSettingRegistry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameSettingRegistry, ULyraGameSettingRegistry::StaticClass, TEXT("ULyraGameSettingRegistry"), &Z_Registration_Info_UClass_ULyraGameSettingRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameSettingRegistry), 1641044657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_LyraGameSettingRegistry_h_3233964746(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_LyraGameSettingRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Settings_LyraGameSettingRegistry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
