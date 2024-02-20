// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/LyraSettingScreen.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSettingScreen() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingScreen();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingScreen();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingScreen_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTabListWidgetBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraSettingScreen::StaticRegisterNativesULyraSettingScreen()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSettingScreen);
	UClass* Z_Construct_UClass_ULyraSettingScreen_NoRegister()
	{
		return ULyraSettingScreen::StaticClass();
	}
	struct Z_Construct_UClass_ULyraSettingScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopSettingsTabs_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TopSettingsTabs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackInputActionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackInputActionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyInputActionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ApplyInputActionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CancelChangesInputActionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CancelChangesInputActionData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraSettingScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameSettingScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingScreen_Statics::Class_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "UI/LyraSettingScreen.h" },
		{ "ModuleRelativePath", "UI/LyraSettingScreen.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_TopSettingsTabs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/LyraSettingScreen.h" },
		{ "OptionalWidget", "TRUE" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_TopSettingsTabs = { "TopSettingsTabs", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingScreen, TopSettingsTabs), Z_Construct_UClass_ULyraTabListWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_TopSettingsTabs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_TopSettingsTabs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_BackInputActionData_MetaData[] = {
		{ "Category", "LyraSettingScreen" },
		{ "ModuleRelativePath", "UI/LyraSettingScreen.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_BackInputActionData = { "BackInputActionData", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingScreen, BackInputActionData), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_BackInputActionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_BackInputActionData_MetaData)) }; // 2710926200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_ApplyInputActionData_MetaData[] = {
		{ "Category", "LyraSettingScreen" },
		{ "ModuleRelativePath", "UI/LyraSettingScreen.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_ApplyInputActionData = { "ApplyInputActionData", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingScreen, ApplyInputActionData), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_ApplyInputActionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_ApplyInputActionData_MetaData)) }; // 2710926200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_CancelChangesInputActionData_MetaData[] = {
		{ "Category", "LyraSettingScreen" },
		{ "ModuleRelativePath", "UI/LyraSettingScreen.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_CancelChangesInputActionData = { "CancelChangesInputActionData", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingScreen, CancelChangesInputActionData), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_CancelChangesInputActionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_CancelChangesInputActionData_MetaData)) }; // 2710926200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraSettingScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_TopSettingsTabs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_BackInputActionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_ApplyInputActionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingScreen_Statics::NewProp_CancelChangesInputActionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraSettingScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSettingScreen>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSettingScreen_Statics::ClassParams = {
		&ULyraSettingScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraSettingScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingScreen_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraSettingScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraSettingScreen()
	{
		if (!Z_Registration_Info_UClass_ULyraSettingScreen.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSettingScreen.OuterSingleton, Z_Construct_UClass_ULyraSettingScreen_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraSettingScreen.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraSettingScreen>()
	{
		return ULyraSettingScreen::StaticClass();
	}
	ULyraSettingScreen::ULyraSettingScreen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSettingScreen);
	ULyraSettingScreen::~ULyraSettingScreen() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraSettingScreen_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraSettingScreen_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSettingScreen, ULyraSettingScreen::StaticClass, TEXT("ULyraSettingScreen"), &Z_Registration_Info_UClass_ULyraSettingScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSettingScreen), 1684067855U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraSettingScreen_h_2981749464(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraSettingScreen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraSettingScreen_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
