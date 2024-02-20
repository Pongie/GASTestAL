// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/LyraActivatableWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraActivatableWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraActivatableWidget();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraActivatableWidget_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraWidgetInputMode;
	static UEnum* ELyraWidgetInputMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELyraWidgetInputMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELyraWidgetInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraWidgetInputMode"));
		}
		return Z_Registration_Info_UEnum_ELyraWidgetInputMode.OuterSingleton;
	}
	template<> LYRAGAME_API UEnum* StaticEnum<ELyraWidgetInputMode>()
	{
		return ELyraWidgetInputMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode_Statics::Enumerators[] = {
		{ "ELyraWidgetInputMode::Default", (int64)ELyraWidgetInputMode::Default },
		{ "ELyraWidgetInputMode::GameAndMenu", (int64)ELyraWidgetInputMode::GameAndMenu },
		{ "ELyraWidgetInputMode::Game", (int64)ELyraWidgetInputMode::Game },
		{ "ELyraWidgetInputMode::Menu", (int64)ELyraWidgetInputMode::Menu },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Name", "ELyraWidgetInputMode::Default" },
		{ "Game.Name", "ELyraWidgetInputMode::Game" },
		{ "GameAndMenu.Name", "ELyraWidgetInputMode::GameAndMenu" },
		{ "Menu.Name", "ELyraWidgetInputMode::Menu" },
		{ "ModuleRelativePath", "UI/LyraActivatableWidget.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		"ELyraWidgetInputMode",
		"ELyraWidgetInputMode",
		Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode()
	{
		if (!Z_Registration_Info_UEnum_ELyraWidgetInputMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraWidgetInputMode.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELyraWidgetInputMode.InnerSingleton;
	}
	void ULyraActivatableWidget::StaticRegisterNativesULyraActivatableWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraActivatableWidget);
	UClass* Z_Construct_UClass_ULyraActivatableWidget_NoRegister()
	{
		return ULyraActivatableWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULyraActivatableWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputConfig_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputConfig;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GameMouseCaptureMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameMouseCaptureMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GameMouseCaptureMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraActivatableWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraActivatableWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// An activatable widget that automatically drives the desired input config when activated\n" },
		{ "IncludePath", "UI/LyraActivatableWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/LyraActivatableWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An activatable widget that automatically drives the desired input config when activated" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_InputConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_InputConfig_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The desired input mode to use while this UI is activated, for example do you want key presses to still reach the game/player controller? */" },
		{ "ModuleRelativePath", "UI/LyraActivatableWidget.h" },
		{ "ToolTip", "The desired input mode to use while this UI is activated, for example do you want key presses to still reach the game/player controller?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraActivatableWidget, InputConfig), Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode, METADATA_PARAMS(Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_InputConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_InputConfig_MetaData)) }; // 833083852
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_GameMouseCaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_GameMouseCaptureMode_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The desired mouse behavior when the game gets input. */" },
		{ "ModuleRelativePath", "UI/LyraActivatableWidget.h" },
		{ "ToolTip", "The desired mouse behavior when the game gets input." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_GameMouseCaptureMode = { "GameMouseCaptureMode", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraActivatableWidget, GameMouseCaptureMode), Z_Construct_UEnum_Engine_EMouseCaptureMode, METADATA_PARAMS(Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_GameMouseCaptureMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_GameMouseCaptureMode_MetaData)) }; // 1275285483
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraActivatableWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_InputConfig_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_InputConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_GameMouseCaptureMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_GameMouseCaptureMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraActivatableWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraActivatableWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraActivatableWidget_Statics::ClassParams = {
		&ULyraActivatableWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraActivatableWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActivatableWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraActivatableWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActivatableWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraActivatableWidget()
	{
		if (!Z_Registration_Info_UClass_ULyraActivatableWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraActivatableWidget.OuterSingleton, Z_Construct_UClass_ULyraActivatableWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraActivatableWidget.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraActivatableWidget>()
	{
		return ULyraActivatableWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraActivatableWidget);
	ULyraActivatableWidget::~ULyraActivatableWidget() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_Statics::EnumInfo[] = {
		{ ELyraWidgetInputMode_StaticEnum, TEXT("ELyraWidgetInputMode"), &Z_Registration_Info_UEnum_ELyraWidgetInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 833083852U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraActivatableWidget, ULyraActivatableWidget::StaticClass, TEXT("ULyraActivatableWidget"), &Z_Registration_Info_UClass_ULyraActivatableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraActivatableWidget), 1443581175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_3360291452(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
