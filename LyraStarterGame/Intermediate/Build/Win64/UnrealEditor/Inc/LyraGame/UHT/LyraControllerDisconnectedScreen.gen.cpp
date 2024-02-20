// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Foundation/LyraControllerDisconnectedScreen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraControllerDisconnectedScreen() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraControllerDisconnectedScreen();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraControllerDisconnectedScreen_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraControllerDisconnectedScreen::StaticRegisterNativesULyraControllerDisconnectedScreen()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraControllerDisconnectedScreen);
	UClass* Z_Construct_UClass_ULyraControllerDisconnectedScreen_NoRegister()
	{
		return ULyraControllerDisconnectedScreen::StaticClass();
	}
	struct Z_Construct_UClass_ULyraControllerDisconnectedScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HBox_SwitchUser_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HBox_SwitchUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraControllerDisconnectedScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraControllerDisconnectedScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Foundation/LyraControllerDisconnectedScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/Foundation/LyraControllerDisconnectedScreen.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraControllerDisconnectedScreen_Statics::NewProp_HBox_SwitchUser_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Foundation/LyraControllerDisconnectedScreen.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraControllerDisconnectedScreen_Statics::NewProp_HBox_SwitchUser = { "HBox_SwitchUser", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraControllerDisconnectedScreen, HBox_SwitchUser), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraControllerDisconnectedScreen_Statics::NewProp_HBox_SwitchUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraControllerDisconnectedScreen_Statics::NewProp_HBox_SwitchUser_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraControllerDisconnectedScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraControllerDisconnectedScreen_Statics::NewProp_HBox_SwitchUser,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraControllerDisconnectedScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraControllerDisconnectedScreen>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraControllerDisconnectedScreen_Statics::ClassParams = {
		&ULyraControllerDisconnectedScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraControllerDisconnectedScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraControllerDisconnectedScreen_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraControllerDisconnectedScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraControllerDisconnectedScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraControllerDisconnectedScreen()
	{
		if (!Z_Registration_Info_UClass_ULyraControllerDisconnectedScreen.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraControllerDisconnectedScreen.OuterSingleton, Z_Construct_UClass_ULyraControllerDisconnectedScreen_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraControllerDisconnectedScreen.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraControllerDisconnectedScreen>()
	{
		return ULyraControllerDisconnectedScreen::StaticClass();
	}
	ULyraControllerDisconnectedScreen::ULyraControllerDisconnectedScreen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraControllerDisconnectedScreen);
	ULyraControllerDisconnectedScreen::~ULyraControllerDisconnectedScreen() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraControllerDisconnectedScreen_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraControllerDisconnectedScreen_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraControllerDisconnectedScreen, ULyraControllerDisconnectedScreen::StaticClass, TEXT("ULyraControllerDisconnectedScreen"), &Z_Registration_Info_UClass_ULyraControllerDisconnectedScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraControllerDisconnectedScreen), 3794661545U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraControllerDisconnectedScreen_h_2422511190(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraControllerDisconnectedScreen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraControllerDisconnectedScreen_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
