// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/IndicatorSystem/IndicatorLayer.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndicatorLayer() {}
// Cross Module References
	LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorLayer();
	LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorLayer_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void UIndicatorLayer::StaticRegisterNativesUIndicatorLayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIndicatorLayer);
	UClass* Z_Construct_UClass_UIndicatorLayer_NoRegister()
	{
		return UIndicatorLayer::StaticClass();
	}
	struct Z_Construct_UClass_UIndicatorLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrowBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIndicatorLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorLayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/IndicatorSystem/IndicatorLayer.h" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorLayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicatorLayer_Statics::NewProp_ArrowBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Default arrow brush to use if UI is clamped to the screen and needs to show an arrow. */" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorLayer.h" },
		{ "ToolTip", "Default arrow brush to use if UI is clamped to the screen and needs to show an arrow." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIndicatorLayer_Statics::NewProp_ArrowBrush = { "ArrowBrush", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIndicatorLayer, ArrowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UIndicatorLayer_Statics::NewProp_ArrowBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorLayer_Statics::NewProp_ArrowBrush_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIndicatorLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorLayer_Statics::NewProp_ArrowBrush,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIndicatorLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIndicatorLayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIndicatorLayer_Statics::ClassParams = {
		&UIndicatorLayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIndicatorLayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorLayer_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIndicatorLayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorLayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIndicatorLayer()
	{
		if (!Z_Registration_Info_UClass_UIndicatorLayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIndicatorLayer.OuterSingleton, Z_Construct_UClass_UIndicatorLayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIndicatorLayer.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UIndicatorLayer>()
	{
		return UIndicatorLayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIndicatorLayer);
	UIndicatorLayer::~UIndicatorLayer() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIndicatorLayer, UIndicatorLayer::StaticClass, TEXT("UIndicatorLayer"), &Z_Registration_Info_UClass_UIndicatorLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIndicatorLayer), 629547934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLayer_h_2589945409(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
