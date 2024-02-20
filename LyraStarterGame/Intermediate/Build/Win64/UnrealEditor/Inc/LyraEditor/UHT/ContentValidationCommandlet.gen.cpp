// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Commandlets/ContentValidationCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentValidationCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	LYRAEDITOR_API UClass* Z_Construct_UClass_UContentValidationCommandlet();
	LYRAEDITOR_API UClass* Z_Construct_UClass_UContentValidationCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraEditor();
// End Cross Module References
	void UContentValidationCommandlet::StaticRegisterNativesUContentValidationCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentValidationCommandlet);
	UClass* Z_Construct_UClass_UContentValidationCommandlet_NoRegister()
	{
		return UContentValidationCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UContentValidationCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentValidationCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentValidationCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/ContentValidationCommandlet.h" },
		{ "ModuleRelativePath", "Commandlets/ContentValidationCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentValidationCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentValidationCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentValidationCommandlet_Statics::ClassParams = {
		&UContentValidationCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UContentValidationCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentValidationCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentValidationCommandlet()
	{
		if (!Z_Registration_Info_UClass_UContentValidationCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentValidationCommandlet.OuterSingleton, Z_Construct_UClass_UContentValidationCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentValidationCommandlet.OuterSingleton;
	}
	template<> LYRAEDITOR_API UClass* StaticClass<UContentValidationCommandlet>()
	{
		return UContentValidationCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentValidationCommandlet);
	UContentValidationCommandlet::~UContentValidationCommandlet() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Commandlets_ContentValidationCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Commandlets_ContentValidationCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContentValidationCommandlet, UContentValidationCommandlet::StaticClass, TEXT("UContentValidationCommandlet"), &Z_Registration_Info_UClass_UContentValidationCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentValidationCommandlet), 3548000069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Commandlets_ContentValidationCommandlet_h_1843051712(TEXT("/Script/LyraEditor"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Commandlets_ContentValidationCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Commandlets_ContentValidationCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
