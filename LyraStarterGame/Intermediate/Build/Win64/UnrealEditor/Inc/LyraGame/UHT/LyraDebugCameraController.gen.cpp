// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/LyraDebugCameraController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraDebugCameraController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ADebugCameraController();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraDebugCameraController();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraDebugCameraController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ALyraDebugCameraController::StaticRegisterNativesALyraDebugCameraController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraDebugCameraController);
	UClass* Z_Construct_UClass_ALyraDebugCameraController_NoRegister()
	{
		return ALyraDebugCameraController::StaticClass();
	}
	struct Z_Construct_UClass_ALyraDebugCameraController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALyraDebugCameraController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADebugCameraController,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraDebugCameraController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ALyraDebugCameraController\n *\n *\x09Used for controlling the debug camera when it is enabled via the cheat manager.\n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/LyraDebugCameraController.h" },
		{ "ModuleRelativePath", "Player/LyraDebugCameraController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ALyraDebugCameraController\n\n    Used for controlling the debug camera when it is enabled via the cheat manager." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALyraDebugCameraController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraDebugCameraController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraDebugCameraController_Statics::ClassParams = {
		&ALyraDebugCameraController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALyraDebugCameraController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraDebugCameraController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALyraDebugCameraController()
	{
		if (!Z_Registration_Info_UClass_ALyraDebugCameraController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraDebugCameraController.OuterSingleton, Z_Construct_UClass_ALyraDebugCameraController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALyraDebugCameraController.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ALyraDebugCameraController>()
	{
		return ALyraDebugCameraController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraDebugCameraController);
	ALyraDebugCameraController::~ALyraDebugCameraController() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraDebugCameraController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraDebugCameraController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALyraDebugCameraController, ALyraDebugCameraController::StaticClass, TEXT("ALyraDebugCameraController"), &Z_Registration_Info_UClass_ALyraDebugCameraController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraDebugCameraController), 1000762776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraDebugCameraController_h_2889940873(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraDebugCameraController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraDebugCameraController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
