// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/LyraInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraInputComponent() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraInputComponent::StaticRegisterNativesULyraInputComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInputComponent);
	UClass* Z_Construct_UClass_ULyraInputComponent_NoRegister()
	{
		return ULyraInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULyraInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInputComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraInputComponent\n *\n *\x09""Component used to manage input mappings and bindings using an input config data asset.\n */" },
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Input/LyraInputComponent.h" },
		{ "ModuleRelativePath", "Input/LyraInputComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraInputComponent\n\n    Component used to manage input mappings and bindings using an input config data asset." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInputComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInputComponent_Statics::ClassParams = {
		&ULyraInputComponent::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000ACu,
		METADATA_PARAMS(Z_Construct_UClass_ULyraInputComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraInputComponent()
	{
		if (!Z_Registration_Info_UClass_ULyraInputComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInputComponent.OuterSingleton, Z_Construct_UClass_ULyraInputComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraInputComponent.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraInputComponent>()
	{
		return ULyraInputComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInputComponent);
	ULyraInputComponent::~ULyraInputComponent() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraInputComponent, ULyraInputComponent::StaticClass, TEXT("ULyraInputComponent"), &Z_Registration_Info_UClass_ULyraInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInputComponent), 2802820281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputComponent_h_1742564710(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
