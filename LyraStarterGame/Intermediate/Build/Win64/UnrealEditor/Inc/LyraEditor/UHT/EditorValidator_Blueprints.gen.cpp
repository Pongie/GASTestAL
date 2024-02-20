// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Validation/EditorValidator_Blueprints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorValidator_Blueprints() {}
// Cross Module References
	LYRAEDITOR_API UClass* Z_Construct_UClass_UEditorValidator();
	LYRAEDITOR_API UClass* Z_Construct_UClass_UEditorValidator_Blueprints();
	LYRAEDITOR_API UClass* Z_Construct_UClass_UEditorValidator_Blueprints_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraEditor();
// End Cross Module References
	void UEditorValidator_Blueprints::StaticRegisterNativesUEditorValidator_Blueprints()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorValidator_Blueprints);
	UClass* Z_Construct_UClass_UEditorValidator_Blueprints_NoRegister()
	{
		return UEditorValidator_Blueprints::StaticClass();
	}
	struct Z_Construct_UClass_UEditorValidator_Blueprints_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorValidator_Blueprints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorValidator,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorValidator_Blueprints_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Validation/EditorValidator_Blueprints.h" },
		{ "ModuleRelativePath", "Validation/EditorValidator_Blueprints.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorValidator_Blueprints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorValidator_Blueprints>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorValidator_Blueprints_Statics::ClassParams = {
		&UEditorValidator_Blueprints::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorValidator_Blueprints_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidator_Blueprints_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorValidator_Blueprints()
	{
		if (!Z_Registration_Info_UClass_UEditorValidator_Blueprints.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorValidator_Blueprints.OuterSingleton, Z_Construct_UClass_UEditorValidator_Blueprints_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorValidator_Blueprints.OuterSingleton;
	}
	template<> LYRAEDITOR_API UClass* StaticClass<UEditorValidator_Blueprints>()
	{
		return UEditorValidator_Blueprints::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorValidator_Blueprints);
	UEditorValidator_Blueprints::~UEditorValidator_Blueprints() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_Blueprints_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_Blueprints_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorValidator_Blueprints, UEditorValidator_Blueprints::StaticClass, TEXT("UEditorValidator_Blueprints"), &Z_Registration_Info_UClass_UEditorValidator_Blueprints, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorValidator_Blueprints), 317168929U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_Blueprints_h_1692863972(TEXT("/Script/LyraEditor"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_Blueprints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_Blueprints_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
