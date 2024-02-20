// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Common/LyraBoundActionButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraBoundActionButton() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBoundActionButton();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonStyle_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraBoundActionButton();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraBoundActionButton_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraBoundActionButton::StaticRegisterNativesULyraBoundActionButton()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraBoundActionButton);
	UClass* Z_Construct_UClass_ULyraBoundActionButton_NoRegister()
	{
		return ULyraBoundActionButton::StaticClass();
	}
	struct Z_Construct_UClass_ULyraBoundActionButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardStyle_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_KeyboardStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamepadStyle_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GamepadStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchStyle_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TouchStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraBoundActionButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonBoundActionButton,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraBoundActionButton_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "UI/Common/LyraBoundActionButton.h" },
		{ "ModuleRelativePath", "UI/Common/LyraBoundActionButton.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraBoundActionButton_Statics::NewProp_KeyboardStyle_MetaData[] = {
		{ "Category", "Styles" },
		{ "ModuleRelativePath", "UI/Common/LyraBoundActionButton.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraBoundActionButton_Statics::NewProp_KeyboardStyle = { "KeyboardStyle", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraBoundActionButton, KeyboardStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonButtonStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraBoundActionButton_Statics::NewProp_KeyboardStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBoundActionButton_Statics::NewProp_KeyboardStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraBoundActionButton_Statics::NewProp_GamepadStyle_MetaData[] = {
		{ "Category", "Styles" },
		{ "ModuleRelativePath", "UI/Common/LyraBoundActionButton.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraBoundActionButton_Statics::NewProp_GamepadStyle = { "GamepadStyle", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraBoundActionButton, GamepadStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonButtonStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraBoundActionButton_Statics::NewProp_GamepadStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBoundActionButton_Statics::NewProp_GamepadStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraBoundActionButton_Statics::NewProp_TouchStyle_MetaData[] = {
		{ "Category", "Styles" },
		{ "ModuleRelativePath", "UI/Common/LyraBoundActionButton.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraBoundActionButton_Statics::NewProp_TouchStyle = { "TouchStyle", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraBoundActionButton, TouchStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonButtonStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraBoundActionButton_Statics::NewProp_TouchStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBoundActionButton_Statics::NewProp_TouchStyle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraBoundActionButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBoundActionButton_Statics::NewProp_KeyboardStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBoundActionButton_Statics::NewProp_GamepadStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraBoundActionButton_Statics::NewProp_TouchStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraBoundActionButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraBoundActionButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraBoundActionButton_Statics::ClassParams = {
		&ULyraBoundActionButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraBoundActionButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBoundActionButton_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraBoundActionButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBoundActionButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraBoundActionButton()
	{
		if (!Z_Registration_Info_UClass_ULyraBoundActionButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraBoundActionButton.OuterSingleton, Z_Construct_UClass_ULyraBoundActionButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraBoundActionButton.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraBoundActionButton>()
	{
		return ULyraBoundActionButton::StaticClass();
	}
	ULyraBoundActionButton::ULyraBoundActionButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraBoundActionButton);
	ULyraBoundActionButton::~ULyraBoundActionButton() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraBoundActionButton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraBoundActionButton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraBoundActionButton, ULyraBoundActionButton::StaticClass, TEXT("ULyraBoundActionButton"), &Z_Registration_Info_UClass_ULyraBoundActionButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraBoundActionButton), 1741337961U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraBoundActionButton_h_2074963840(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraBoundActionButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraBoundActionButton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
