// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/LyraTaggedWidget.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTaggedWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTaggedWidget();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTaggedWidget_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraTaggedWidget::StaticRegisterNativesULyraTaggedWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraTaggedWidget);
	UClass* Z_Construct_UClass_ULyraTaggedWidget_NoRegister()
	{
		return ULyraTaggedWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULyraTaggedWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenByTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HiddenByTags;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShownVisibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShownVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShownVisibility;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HiddenVisibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HiddenVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraTaggedWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTaggedWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An widget in a layout that has been tagged (can be hidden or shown via tags on the owning player)\n */" },
		{ "IncludePath", "UI/LyraTaggedWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/LyraTaggedWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An widget in a layout that has been tagged (can be hidden or shown via tags on the owning player)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTaggedWidget_Statics::NewProp_HiddenByTags_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** If the owning player has any of these tags, this widget will be hidden (using HiddenVisibility) */" },
		{ "ModuleRelativePath", "UI/LyraTaggedWidget.h" },
		{ "ToolTip", "If the owning player has any of these tags, this widget will be hidden (using HiddenVisibility)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraTaggedWidget_Statics::NewProp_HiddenByTags = { "HiddenByTags", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraTaggedWidget, HiddenByTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ULyraTaggedWidget_Statics::NewProp_HiddenByTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTaggedWidget_Statics::NewProp_HiddenByTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraTaggedWidget_Statics::NewProp_ShownVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTaggedWidget_Statics::NewProp_ShownVisibility_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** The visibility to use when this widget is shown (not hidden by gameplay tags). */" },
		{ "ModuleRelativePath", "UI/LyraTaggedWidget.h" },
		{ "ToolTip", "The visibility to use when this widget is shown (not hidden by gameplay tags)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraTaggedWidget_Statics::NewProp_ShownVisibility = { "ShownVisibility", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraTaggedWidget, ShownVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_ULyraTaggedWidget_Statics::NewProp_ShownVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTaggedWidget_Statics::NewProp_ShownVisibility_MetaData)) }; // 2244982430
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraTaggedWidget_Statics::NewProp_HiddenVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTaggedWidget_Statics::NewProp_HiddenVisibility_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** The visibility to use when this widget is hidden by gameplay tags. */" },
		{ "ModuleRelativePath", "UI/LyraTaggedWidget.h" },
		{ "ToolTip", "The visibility to use when this widget is hidden by gameplay tags." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraTaggedWidget_Statics::NewProp_HiddenVisibility = { "HiddenVisibility", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraTaggedWidget, HiddenVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_ULyraTaggedWidget_Statics::NewProp_HiddenVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTaggedWidget_Statics::NewProp_HiddenVisibility_MetaData)) }; // 2244982430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraTaggedWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTaggedWidget_Statics::NewProp_HiddenByTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTaggedWidget_Statics::NewProp_ShownVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTaggedWidget_Statics::NewProp_ShownVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTaggedWidget_Statics::NewProp_HiddenVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTaggedWidget_Statics::NewProp_HiddenVisibility,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraTaggedWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraTaggedWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraTaggedWidget_Statics::ClassParams = {
		&ULyraTaggedWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraTaggedWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTaggedWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraTaggedWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTaggedWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraTaggedWidget()
	{
		if (!Z_Registration_Info_UClass_ULyraTaggedWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraTaggedWidget.OuterSingleton, Z_Construct_UClass_ULyraTaggedWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraTaggedWidget.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraTaggedWidget>()
	{
		return ULyraTaggedWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraTaggedWidget);
	ULyraTaggedWidget::~ULyraTaggedWidget() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraTaggedWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraTaggedWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraTaggedWidget, ULyraTaggedWidget::StaticClass, TEXT("ULyraTaggedWidget"), &Z_Registration_Info_UClass_ULyraTaggedWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraTaggedWidget), 1797481109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraTaggedWidget_h_568293859(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraTaggedWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraTaggedWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
