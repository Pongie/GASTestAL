// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "System/LyraGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameInstance() {}
// Cross Module References
	COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameInstance();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameInstance();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraGameInstance::StaticRegisterNativesULyraGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameInstance);
	UClass* Z_Construct_UClass_ULyraGameInstance_NoRegister()
	{
		return ULyraGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULyraGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "System/LyraGameInstance.h" },
		{ "ModuleRelativePath", "System/LyraGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameInstance_Statics::ClassParams = {
		&ULyraGameInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraGameInstance()
	{
		if (!Z_Registration_Info_UClass_ULyraGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameInstance.OuterSingleton, Z_Construct_UClass_ULyraGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraGameInstance.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraGameInstance>()
	{
		return ULyraGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameInstance);
	ULyraGameInstance::~ULyraGameInstance() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameInstance, ULyraGameInstance::StaticClass, TEXT("ULyraGameInstance"), &Z_Registration_Info_UClass_ULyraGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameInstance), 2873695280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraGameInstance_h_703831611(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
