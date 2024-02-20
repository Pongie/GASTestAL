// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Frontend/LyraLobbyBackground.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraLobbyBackground() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraLobbyBackground();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraLobbyBackground_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraLobbyBackground::StaticRegisterNativesULyraLobbyBackground()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraLobbyBackground);
	UClass* Z_Construct_UClass_ULyraLobbyBackground_NoRegister()
	{
		return ULyraLobbyBackground::StaticClass();
	}
	struct Z_Construct_UClass_ULyraLobbyBackground_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundLevel_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BackgroundLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraLobbyBackground_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraLobbyBackground_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Developer settings / editor cheats\n */" },
		{ "IncludePath", "UI/Frontend/LyraLobbyBackground.h" },
		{ "ModuleRelativePath", "UI/Frontend/LyraLobbyBackground.h" },
		{ "ToolTip", "Developer settings / editor cheats" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraLobbyBackground_Statics::NewProp_BackgroundLevel_MetaData[] = {
		{ "Category", "LyraLobbyBackground" },
		{ "ModuleRelativePath", "UI/Frontend/LyraLobbyBackground.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULyraLobbyBackground_Statics::NewProp_BackgroundLevel = { "BackgroundLevel", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraLobbyBackground, BackgroundLevel), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraLobbyBackground_Statics::NewProp_BackgroundLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLobbyBackground_Statics::NewProp_BackgroundLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraLobbyBackground_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLobbyBackground_Statics::NewProp_BackgroundLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraLobbyBackground_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraLobbyBackground>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraLobbyBackground_Statics::ClassParams = {
		&ULyraLobbyBackground::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraLobbyBackground_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLobbyBackground_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraLobbyBackground_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLobbyBackground_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraLobbyBackground()
	{
		if (!Z_Registration_Info_UClass_ULyraLobbyBackground.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraLobbyBackground.OuterSingleton, Z_Construct_UClass_ULyraLobbyBackground_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraLobbyBackground.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraLobbyBackground>()
	{
		return ULyraLobbyBackground::StaticClass();
	}
	ULyraLobbyBackground::ULyraLobbyBackground(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraLobbyBackground);
	ULyraLobbyBackground::~ULyraLobbyBackground() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Frontend_LyraLobbyBackground_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Frontend_LyraLobbyBackground_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraLobbyBackground, ULyraLobbyBackground::StaticClass, TEXT("ULyraLobbyBackground"), &Z_Registration_Info_UClass_ULyraLobbyBackground, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraLobbyBackground), 213105499U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Frontend_LyraLobbyBackground_h_3311038259(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Frontend_LyraLobbyBackground_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Frontend_LyraLobbyBackground_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
