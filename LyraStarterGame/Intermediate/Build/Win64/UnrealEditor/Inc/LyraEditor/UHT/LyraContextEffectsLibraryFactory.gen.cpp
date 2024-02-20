// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/LyraContextEffectsLibraryFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraContextEffectsLibraryFactory() {}
// Cross Module References
	LYRAEDITOR_API UClass* Z_Construct_UClass_ULyraContextEffectsLibraryFactory();
	LYRAEDITOR_API UClass* Z_Construct_UClass_ULyraContextEffectsLibraryFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_LyraEditor();
// End Cross Module References
	void ULyraContextEffectsLibraryFactory::StaticRegisterNativesULyraContextEffectsLibraryFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraContextEffectsLibraryFactory);
	UClass* Z_Construct_UClass_ULyraContextEffectsLibraryFactory_NoRegister()
	{
		return ULyraContextEffectsLibraryFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULyraContextEffectsLibraryFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraContextEffectsLibraryFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraContextEffectsLibraryFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "LyraContextEffectsLibraryFactory.h" },
		{ "ModuleRelativePath", "Private/LyraContextEffectsLibraryFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraContextEffectsLibraryFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraContextEffectsLibraryFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraContextEffectsLibraryFactory_Statics::ClassParams = {
		&ULyraContextEffectsLibraryFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraContextEffectsLibraryFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsLibraryFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraContextEffectsLibraryFactory()
	{
		if (!Z_Registration_Info_UClass_ULyraContextEffectsLibraryFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraContextEffectsLibraryFactory.OuterSingleton, Z_Construct_UClass_ULyraContextEffectsLibraryFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraContextEffectsLibraryFactory.OuterSingleton;
	}
	template<> LYRAEDITOR_API UClass* StaticClass<ULyraContextEffectsLibraryFactory>()
	{
		return ULyraContextEffectsLibraryFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraContextEffectsLibraryFactory);
	ULyraContextEffectsLibraryFactory::~ULyraContextEffectsLibraryFactory() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Private_LyraContextEffectsLibraryFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Private_LyraContextEffectsLibraryFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraContextEffectsLibraryFactory, ULyraContextEffectsLibraryFactory::StaticClass, TEXT("ULyraContextEffectsLibraryFactory"), &Z_Registration_Info_UClass_ULyraContextEffectsLibraryFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraContextEffectsLibraryFactory), 3463468916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Private_LyraContextEffectsLibraryFactory_h_1190625863(TEXT("/Script/LyraEditor"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Private_LyraContextEffectsLibraryFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Private_LyraContextEffectsLibraryFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
