// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/LyraHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraHUD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraHUD();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraHUD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ALyraHUD::StaticRegisterNativesALyraHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraHUD);
	UClass* Z_Construct_UClass_ALyraHUD_NoRegister()
	{
		return ALyraHUD::StaticClass();
	}
	struct Z_Construct_UClass_ALyraHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALyraHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ALyraHUD\n *\n *  Note that you typically do not need to extend or modify this class, instead you would\n *  use an \"Add Widget\" action in your experience to add a HUD layout and widgets to it\n * \n *  This class exists primarily for debug rendering\n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/LyraHUD.h" },
		{ "ModuleRelativePath", "UI/LyraHUD.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "ALyraHUD\n\n Note that you typically do not need to extend or modify this class, instead you would\n use an \"Add Widget\" action in your experience to add a HUD layout and widgets to it\n\n This class exists primarily for debug rendering" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALyraHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraHUD_Statics::ClassParams = {
		&ALyraHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALyraHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALyraHUD()
	{
		if (!Z_Registration_Info_UClass_ALyraHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraHUD.OuterSingleton, Z_Construct_UClass_ALyraHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALyraHUD.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ALyraHUD>()
	{
		return ALyraHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraHUD);
	ALyraHUD::~ALyraHUD() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALyraHUD, ALyraHUD::StaticClass, TEXT("ALyraHUD"), &Z_Registration_Info_UClass_ALyraHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraHUD), 1729218066U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_4062540645(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
