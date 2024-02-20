// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "System/LyraGameSession.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameSession() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameSession();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraGameSession();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraGameSession_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ALyraGameSession::StaticRegisterNativesALyraGameSession()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraGameSession);
	UClass* Z_Construct_UClass_ALyraGameSession_NoRegister()
	{
		return ALyraGameSession::StaticClass();
	}
	struct Z_Construct_UClass_ALyraGameSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALyraGameSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameSession,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraGameSession_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "System/LyraGameSession.h" },
		{ "ModuleRelativePath", "System/LyraGameSession.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALyraGameSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraGameSession>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraGameSession_Statics::ClassParams = {
		&ALyraGameSession::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALyraGameSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraGameSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALyraGameSession()
	{
		if (!Z_Registration_Info_UClass_ALyraGameSession.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraGameSession.OuterSingleton, Z_Construct_UClass_ALyraGameSession_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALyraGameSession.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ALyraGameSession>()
	{
		return ALyraGameSession::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraGameSession);
	ALyraGameSession::~ALyraGameSession() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraGameSession_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraGameSession_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALyraGameSession, ALyraGameSession::StaticClass, TEXT("ALyraGameSession"), &Z_Registration_Info_UClass_ALyraGameSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraGameSession), 1842520354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraGameSession_h_4113306369(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraGameSession_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraGameSession_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
