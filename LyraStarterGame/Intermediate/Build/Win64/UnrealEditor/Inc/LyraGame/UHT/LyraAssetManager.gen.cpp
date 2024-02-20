// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "System/LyraAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAssetManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAssetManager();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAssetManager_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameData_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraAssetManager::StaticRegisterNativesULyraAssetManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAssetManager);
	UClass* Z_Construct_UClass_ULyraAssetManager_NoRegister()
	{
		return ULyraAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_ULyraAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LyraGameDataPath_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LyraGameDataPath;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameDataMap_ValueProp;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_GameDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameDataMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GameDataMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPawnData_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultPawnData;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LoadedAssets_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedAssets_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_LoadedAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetManager,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAssetManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraAssetManager\n *\n *\x09Game implementation of the asset manager that overrides functionality and stores game-specific types.\n *\x09It is expected that most games will want to override AssetManager as it provides a good place for game-specific loading logic.\n *\x09This class is used by setting 'AssetManagerClassName' in DefaultEngine.ini.\n */" },
		{ "IncludePath", "System/LyraAssetManager.h" },
		{ "ModuleRelativePath", "System/LyraAssetManager.h" },
		{ "ToolTip", "ULyraAssetManager\n\n    Game implementation of the asset manager that overrides functionality and stores game-specific types.\n    It is expected that most games will want to override AssetManager as it provides a good place for game-specific loading logic.\n    This class is used by setting 'AssetManagerClassName' in DefaultEngine.ini." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_LyraGameDataPath_MetaData[] = {
		{ "Comment", "// Global game data asset to use.\n" },
		{ "ModuleRelativePath", "System/LyraAssetManager.h" },
		{ "ToolTip", "Global game data asset to use." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_LyraGameDataPath = { "LyraGameDataPath", nullptr, (EPropertyFlags)0x0024080000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAssetManager, LyraGameDataPath), Z_Construct_UClass_ULyraGameData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_LyraGameDataPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_LyraGameDataPath_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_GameDataMap_ValueProp = { "GameDataMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UPrimaryDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_GameDataMap_Key_KeyProp = { "GameDataMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_GameDataMap_MetaData[] = {
		{ "Comment", "// Loaded version of the game data\n" },
		{ "ModuleRelativePath", "System/LyraAssetManager.h" },
		{ "ToolTip", "Loaded version of the game data" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_GameDataMap = { "GameDataMap", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAssetManager, GameDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_GameDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_GameDataMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_DefaultPawnData_MetaData[] = {
		{ "Comment", "// Pawn data used when spawning player pawns if there isn't one set on the player state.\n" },
		{ "ModuleRelativePath", "System/LyraAssetManager.h" },
		{ "ToolTip", "Pawn data used when spawning player pawns if there isn't one set on the player state." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_DefaultPawnData = { "DefaultPawnData", nullptr, (EPropertyFlags)0x0024080000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAssetManager, DefaultPawnData), Z_Construct_UClass_ULyraPawnData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_DefaultPawnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_DefaultPawnData_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_LoadedAssets_ElementProp = { "LoadedAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_LoadedAssets_MetaData[] = {
		{ "Comment", "// Assets loaded and tracked by the asset manager.\n" },
		{ "ModuleRelativePath", "System/LyraAssetManager.h" },
		{ "ToolTip", "Assets loaded and tracked by the asset manager." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_LoadedAssets = { "LoadedAssets", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAssetManager, LoadedAssets), METADATA_PARAMS(Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_LoadedAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_LoadedAssets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAssetManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_LyraGameDataPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_GameDataMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_GameDataMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_GameDataMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_DefaultPawnData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_LoadedAssets_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAssetManager_Statics::NewProp_LoadedAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAssetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAssetManager_Statics::ClassParams = {
		&ULyraAssetManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraAssetManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAssetManager_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraAssetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAssetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraAssetManager()
	{
		if (!Z_Registration_Info_UClass_ULyraAssetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAssetManager.OuterSingleton, Z_Construct_UClass_ULyraAssetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraAssetManager.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraAssetManager>()
	{
		return ULyraAssetManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAssetManager);
	ULyraAssetManager::~ULyraAssetManager() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraAssetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraAssetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAssetManager, ULyraAssetManager::StaticClass, TEXT("ULyraAssetManager"), &Z_Registration_Info_UClass_ULyraAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAssetManager), 4285336390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraAssetManager_h_2995533073(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraAssetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
