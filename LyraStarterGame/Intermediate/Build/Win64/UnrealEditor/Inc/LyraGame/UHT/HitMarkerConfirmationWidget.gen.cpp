// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Weapons/HitMarkerConfirmationWidget.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitMarkerConfirmationWidget() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LYRAGAME_API UClass* Z_Construct_UClass_UHitMarkerConfirmationWidget();
	LYRAGAME_API UClass* Z_Construct_UClass_UHitMarkerConfirmationWidget_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void UHitMarkerConfirmationWidget::StaticRegisterNativesUHitMarkerConfirmationWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHitMarkerConfirmationWidget);
	UClass* Z_Construct_UClass_UHitMarkerConfirmationWidget_NoRegister()
	{
		return UHitMarkerConfirmationWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitNotifyDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitNotifyDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerHitMarkerImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerHitMarkerImage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerHitMarkerZoneOverrideImages_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerHitMarkerZoneOverrideImages_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerHitMarkerZoneOverrideImages_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerHitMarkerZoneOverrideImages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnyHitsMarkerImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnyHitsMarkerImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Weapons/HitMarkerConfirmationWidget.h" },
		{ "ModuleRelativePath", "UI/Weapons/HitMarkerConfirmationWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_HitNotifyDuration_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The duration (in seconds) to display hit notifies (they fade to transparent over this time)  */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "UI/Weapons/HitMarkerConfirmationWidget.h" },
		{ "ToolTip", "The duration (in seconds) to display hit notifies (they fade to transparent over this time)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_HitNotifyDuration = { "HitNotifyDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHitMarkerConfirmationWidget, HitNotifyDuration), METADATA_PARAMS(Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_HitNotifyDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_HitNotifyDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The marker image to draw for individual hit markers. */" },
		{ "ModuleRelativePath", "UI/Weapons/HitMarkerConfirmationWidget.h" },
		{ "ToolTip", "The marker image to draw for individual hit markers." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerImage = { "PerHitMarkerImage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHitMarkerConfirmationWidget, PerHitMarkerImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerImage_MetaData)) }; // 4256420591
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerZoneOverrideImages_ValueProp = { "PerHitMarkerZoneOverrideImages", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) }; // 4256420591
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerZoneOverrideImages_Key_KeyProp = { "PerHitMarkerZoneOverrideImages_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerZoneOverrideImages_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Map from zone tag (e.g., weak spot) to override marker images for individual location hits. */" },
		{ "ModuleRelativePath", "UI/Weapons/HitMarkerConfirmationWidget.h" },
		{ "ToolTip", "Map from zone tag (e.g., weak spot) to override marker images for individual location hits." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerZoneOverrideImages = { "PerHitMarkerZoneOverrideImages", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHitMarkerConfirmationWidget, PerHitMarkerZoneOverrideImages), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerZoneOverrideImages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerZoneOverrideImages_MetaData)) }; // 1225434376 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_AnyHitsMarkerImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The marker image to draw if there are any hits at all. */" },
		{ "ModuleRelativePath", "UI/Weapons/HitMarkerConfirmationWidget.h" },
		{ "ToolTip", "The marker image to draw if there are any hits at all." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_AnyHitsMarkerImage = { "AnyHitsMarkerImage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHitMarkerConfirmationWidget, AnyHitsMarkerImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_AnyHitsMarkerImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_AnyHitsMarkerImage_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_HitNotifyDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerZoneOverrideImages_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerZoneOverrideImages_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerZoneOverrideImages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_AnyHitsMarkerImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitMarkerConfirmationWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::ClassParams = {
		&UHitMarkerConfirmationWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHitMarkerConfirmationWidget()
	{
		if (!Z_Registration_Info_UClass_UHitMarkerConfirmationWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitMarkerConfirmationWidget.OuterSingleton, Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHitMarkerConfirmationWidget.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UHitMarkerConfirmationWidget>()
	{
		return UHitMarkerConfirmationWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHitMarkerConfirmationWidget);
	UHitMarkerConfirmationWidget::~UHitMarkerConfirmationWidget() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_HitMarkerConfirmationWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_HitMarkerConfirmationWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHitMarkerConfirmationWidget, UHitMarkerConfirmationWidget::StaticClass, TEXT("UHitMarkerConfirmationWidget"), &Z_Registration_Info_UClass_UHitMarkerConfirmationWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitMarkerConfirmationWidget), 347339609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_HitMarkerConfirmationWidget_h_1481015524(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_HitMarkerConfirmationWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_HitMarkerConfirmationWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
