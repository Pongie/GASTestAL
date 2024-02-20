// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Frontend/ApplyFrontendPerfSettingsAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApplyFrontendPerfSettingsAction() {}
// Cross Module References
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
	LYRAGAME_API UClass* Z_Construct_UClass_UApplyFrontendPerfSettingsAction();
	LYRAGAME_API UClass* Z_Construct_UClass_UApplyFrontendPerfSettingsAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void UApplyFrontendPerfSettingsAction::StaticRegisterNativesUApplyFrontendPerfSettingsAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApplyFrontendPerfSettingsAction);
	UClass* Z_Construct_UClass_UApplyFrontendPerfSettingsAction_NoRegister()
	{
		return UApplyFrontendPerfSettingsAction::StaticClass();
	}
	struct Z_Construct_UClass_UApplyFrontendPerfSettingsAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UApplyFrontendPerfSettingsAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApplyFrontendPerfSettingsAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * GameFeatureAction responsible for telling the user settings to apply frontend/menu specific performance settings\n */" },
		{ "DisplayName", "Use Frontend Perf Settings" },
		{ "IncludePath", "UI/Frontend/ApplyFrontendPerfSettingsAction.h" },
		{ "ModuleRelativePath", "UI/Frontend/ApplyFrontendPerfSettingsAction.h" },
		{ "ToolTip", "GameFeatureAction responsible for telling the user settings to apply frontend/menu specific performance settings" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApplyFrontendPerfSettingsAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApplyFrontendPerfSettingsAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApplyFrontendPerfSettingsAction_Statics::ClassParams = {
		&UApplyFrontendPerfSettingsAction::StaticClass,
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
		0x002810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApplyFrontendPerfSettingsAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApplyFrontendPerfSettingsAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApplyFrontendPerfSettingsAction()
	{
		if (!Z_Registration_Info_UClass_UApplyFrontendPerfSettingsAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApplyFrontendPerfSettingsAction.OuterSingleton, Z_Construct_UClass_UApplyFrontendPerfSettingsAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApplyFrontendPerfSettingsAction.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UApplyFrontendPerfSettingsAction>()
	{
		return UApplyFrontendPerfSettingsAction::StaticClass();
	}
	UApplyFrontendPerfSettingsAction::UApplyFrontendPerfSettingsAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApplyFrontendPerfSettingsAction);
	UApplyFrontendPerfSettingsAction::~UApplyFrontendPerfSettingsAction() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Frontend_ApplyFrontendPerfSettingsAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Frontend_ApplyFrontendPerfSettingsAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApplyFrontendPerfSettingsAction, UApplyFrontendPerfSettingsAction::StaticClass, TEXT("UApplyFrontendPerfSettingsAction"), &Z_Registration_Info_UClass_UApplyFrontendPerfSettingsAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApplyFrontendPerfSettingsAction), 987590998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Frontend_ApplyFrontendPerfSettingsAction_h_926098216(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Frontend_ApplyFrontendPerfSettingsAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Frontend_ApplyFrontendPerfSettingsAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
