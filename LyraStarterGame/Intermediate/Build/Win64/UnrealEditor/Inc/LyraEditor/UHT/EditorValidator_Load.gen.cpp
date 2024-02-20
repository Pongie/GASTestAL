// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Validation/EditorValidator_Load.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorValidator_Load() {}
// Cross Module References
	LYRAEDITOR_API UClass* Z_Construct_UClass_UEditorValidator();
	LYRAEDITOR_API UClass* Z_Construct_UClass_UEditorValidator_Load();
	LYRAEDITOR_API UClass* Z_Construct_UClass_UEditorValidator_Load_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraEditor();
// End Cross Module References
	void UEditorValidator_Load::StaticRegisterNativesUEditorValidator_Load()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorValidator_Load);
	UClass* Z_Construct_UClass_UEditorValidator_Load_NoRegister()
	{
		return UEditorValidator_Load::StaticClass();
	}
	struct Z_Construct_UClass_UEditorValidator_Load_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorValidator_Load_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorValidator,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorValidator_Load_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Validation/EditorValidator_Load.h" },
		{ "ModuleRelativePath", "Validation/EditorValidator_Load.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorValidator_Load_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorValidator_Load>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorValidator_Load_Statics::ClassParams = {
		&UEditorValidator_Load::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorValidator_Load_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidator_Load_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorValidator_Load()
	{
		if (!Z_Registration_Info_UClass_UEditorValidator_Load.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorValidator_Load.OuterSingleton, Z_Construct_UClass_UEditorValidator_Load_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorValidator_Load.OuterSingleton;
	}
	template<> LYRAEDITOR_API UClass* StaticClass<UEditorValidator_Load>()
	{
		return UEditorValidator_Load::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorValidator_Load);
	UEditorValidator_Load::~UEditorValidator_Load() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_Load_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_Load_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorValidator_Load, UEditorValidator_Load::StaticClass, TEXT("UEditorValidator_Load"), &Z_Registration_Info_UClass_UEditorValidator_Load, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorValidator_Load), 3209560263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_Load_h_3562391456(TEXT("/Script/LyraEditor"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_Load_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraEditor_Validation_EditorValidator_Load_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
