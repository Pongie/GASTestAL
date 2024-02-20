// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/LyraTestControllerBootTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTestControllerBootTest() {}
// Cross Module References
	GAUNTLET_API UClass* Z_Construct_UClass_UGauntletTestControllerBootTest();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTestControllerBootTest();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTestControllerBootTest_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraTestControllerBootTest::StaticRegisterNativesULyraTestControllerBootTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraTestControllerBootTest);
	UClass* Z_Construct_UClass_ULyraTestControllerBootTest_NoRegister()
	{
		return ULyraTestControllerBootTest::StaticClass();
	}
	struct Z_Construct_UClass_ULyraTestControllerBootTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraTestControllerBootTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGauntletTestControllerBootTest,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTestControllerBootTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/LyraTestControllerBootTest.h" },
		{ "ModuleRelativePath", "Tests/LyraTestControllerBootTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraTestControllerBootTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraTestControllerBootTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraTestControllerBootTest_Statics::ClassParams = {
		&ULyraTestControllerBootTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraTestControllerBootTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTestControllerBootTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraTestControllerBootTest()
	{
		if (!Z_Registration_Info_UClass_ULyraTestControllerBootTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraTestControllerBootTest.OuterSingleton, Z_Construct_UClass_ULyraTestControllerBootTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraTestControllerBootTest.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraTestControllerBootTest>()
	{
		return ULyraTestControllerBootTest::StaticClass();
	}
	ULyraTestControllerBootTest::ULyraTestControllerBootTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraTestControllerBootTest);
	ULyraTestControllerBootTest::~ULyraTestControllerBootTest() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Tests_LyraTestControllerBootTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Tests_LyraTestControllerBootTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraTestControllerBootTest, ULyraTestControllerBootTest::StaticClass, TEXT("ULyraTestControllerBootTest"), &Z_Registration_Info_UClass_ULyraTestControllerBootTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraTestControllerBootTest), 1836409589U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Tests_LyraTestControllerBootTest_h_790716602(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Tests_LyraTestControllerBootTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Tests_LyraTestControllerBootTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
