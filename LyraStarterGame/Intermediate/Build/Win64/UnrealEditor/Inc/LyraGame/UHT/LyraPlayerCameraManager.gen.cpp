// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Camera/LyraPlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPlayerCameraManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerCameraManager();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerCameraManager_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraUICameraManagerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ALyraPlayerCameraManager::StaticRegisterNativesALyraPlayerCameraManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraPlayerCameraManager);
	UClass* Z_Construct_UClass_ALyraPlayerCameraManager_NoRegister()
	{
		return ALyraPlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_ALyraPlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UICamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UICamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALyraPlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ALyraPlayerCameraManager\n *\n *\x09The base player camera manager class used by this project.\n */" },
		{ "IncludePath", "Camera/LyraPlayerCameraManager.h" },
		{ "ModuleRelativePath", "Camera/LyraPlayerCameraManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ALyraPlayerCameraManager\n\n    The base player camera manager class used by this project." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerCameraManager_Statics::NewProp_UICamera_MetaData[] = {
		{ "Comment", "/** The UI Camera Component, controls the camera when UI is doing something important that gameplay doesn't get priority over. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/LyraPlayerCameraManager.h" },
		{ "ToolTip", "The UI Camera Component, controls the camera when UI is doing something important that gameplay doesn't get priority over." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALyraPlayerCameraManager_Statics::NewProp_UICamera = { "UICamera", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraPlayerCameraManager, UICamera), Z_Construct_UClass_ULyraUICameraManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerCameraManager_Statics::NewProp_UICamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerCameraManager_Statics::NewProp_UICamera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraPlayerCameraManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerCameraManager_Statics::NewProp_UICamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALyraPlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraPlayerCameraManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraPlayerCameraManager_Statics::ClassParams = {
		&ALyraPlayerCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALyraPlayerCameraManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerCameraManager_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALyraPlayerCameraManager()
	{
		if (!Z_Registration_Info_UClass_ALyraPlayerCameraManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraPlayerCameraManager.OuterSingleton, Z_Construct_UClass_ALyraPlayerCameraManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALyraPlayerCameraManager.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ALyraPlayerCameraManager>()
	{
		return ALyraPlayerCameraManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraPlayerCameraManager);
	ALyraPlayerCameraManager::~ALyraPlayerCameraManager() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraPlayerCameraManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraPlayerCameraManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALyraPlayerCameraManager, ALyraPlayerCameraManager::StaticClass, TEXT("ALyraPlayerCameraManager"), &Z_Registration_Info_UClass_ALyraPlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraPlayerCameraManager), 4205562293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraPlayerCameraManager_h_2456786391(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraPlayerCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraPlayerCameraManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
