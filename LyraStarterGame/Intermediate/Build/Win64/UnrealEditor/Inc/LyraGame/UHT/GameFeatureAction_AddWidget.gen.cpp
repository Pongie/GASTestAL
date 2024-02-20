// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatures/GameFeatureAction_AddWidget.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LYRAGAME_API UClass* Z_Construct_UClass_UGameFeatureAction_AddWidgets();
	LYRAGAME_API UClass* Z_Construct_UClass_UGameFeatureAction_AddWidgets_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraHUDElementEntry();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraHUDLayoutRequest();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraHUDLayoutRequest;
class UScriptStruct* FLyraHUDLayoutRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraHUDLayoutRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraHUDLayoutRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraHUDLayoutRequest, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraHUDLayoutRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LyraHUDLayoutRequest.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraHUDLayoutRequest>()
{
	return FLyraHUDLayoutRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_LayoutClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraHUDLayoutRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::NewProp_LayoutClass_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "UI" },
		{ "Comment", "// The layout widget to spawn\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
		{ "ToolTip", "The layout widget to spawn" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::NewProp_LayoutClass = { "LayoutClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraHUDLayoutRequest, LayoutClass), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::NewProp_LayoutClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::NewProp_LayoutClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::NewProp_LayerID_MetaData[] = {
		{ "Categories", "UI.Layer" },
		{ "Category", "UI" },
		{ "Comment", "// The layer to insert the widget in\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
		{ "ToolTip", "The layer to insert the widget in" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::NewProp_LayerID = { "LayerID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraHUDLayoutRequest, LayerID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::NewProp_LayerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::NewProp_LayerID_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::NewProp_LayoutClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::NewProp_LayerID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraHUDLayoutRequest",
		sizeof(FLyraHUDLayoutRequest),
		alignof(FLyraHUDLayoutRequest),
		Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraHUDLayoutRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraHUDLayoutRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraHUDLayoutRequest.InnerSingleton, Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraHUDLayoutRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraHUDElementEntry;
class UScriptStruct* FLyraHUDElementEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraHUDElementEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraHUDElementEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraHUDElementEntry, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraHUDElementEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LyraHUDElementEntry.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraHUDElementEntry>()
{
	return FLyraHUDElementEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraHUDElementEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "UI" },
		{ "Comment", "// The widget to spawn\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
		{ "ToolTip", "The widget to spawn" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraHUDElementEntry, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::NewProp_SlotID_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "// The slot ID where we should place this widget\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
		{ "ToolTip", "The slot ID where we should place this widget" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::NewProp_SlotID = { "SlotID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraHUDElementEntry, SlotID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::NewProp_SlotID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::NewProp_SlotID_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::NewProp_SlotID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraHUDElementEntry",
		sizeof(FLyraHUDElementEntry),
		alignof(FLyraHUDElementEntry),
		Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraHUDElementEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraHUDElementEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraHUDElementEntry.InnerSingleton, Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraHUDElementEntry.InnerSingleton;
	}
	void UGameFeatureAction_AddWidgets::StaticRegisterNativesUGameFeatureAction_AddWidgets()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_AddWidgets);
	UClass* Z_Construct_UClass_UGameFeatureAction_AddWidgets_NoRegister()
	{
		return UGameFeatureAction_AddWidgets::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Layout_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Layout;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Widgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Widgets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction_WorldActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * GameFeatureAction responsible for granting abilities (and attributes) to actors of a specified type.\n */" },
		{ "DisplayName", "Add Widgets" },
		{ "IncludePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
		{ "ToolTip", "GameFeatureAction responsible for granting abilities (and attributes) to actors of a specified type." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout_Inner = { "Layout", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraHUDLayoutRequest, METADATA_PARAMS(nullptr, 0) }; // 289147264
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "// Layout to add to the HUD\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
		{ "TitleProperty", "{LayerID} -> {LayoutClass}" },
		{ "ToolTip", "Layout to add to the HUD" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeatureAction_AddWidgets, Layout), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout_MetaData)) }; // 289147264
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets_Inner = { "Widgets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraHUDElementEntry, METADATA_PARAMS(nullptr, 0) }; // 813360729
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "// Widgets to add to the HUD\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
		{ "TitleProperty", "{SlotID} -> {WidgetClass}" },
		{ "ToolTip", "Widgets to add to the HUD" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets = { "Widgets", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeatureAction_AddWidgets, Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets_MetaData)) }; // 813360729
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddWidgets>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::ClassParams = {
		&UGameFeatureAction_AddWidgets::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::PropPointers),
		0,
		0x002810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeatureAction_AddWidgets()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UGameFeatureAction_AddWidgets>()
	{
		return UGameFeatureAction_AddWidgets::StaticClass();
	}
	UGameFeatureAction_AddWidgets::UGameFeatureAction_AddWidgets(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddWidgets);
	UGameFeatureAction_AddWidgets::~UGameFeatureAction_AddWidgets() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameFeatures_GameFeatureAction_AddWidget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameFeatures_GameFeatureAction_AddWidget_h_Statics::ScriptStructInfo[] = {
		{ FLyraHUDLayoutRequest::StaticStruct, Z_Construct_UScriptStruct_FLyraHUDLayoutRequest_Statics::NewStructOps, TEXT("LyraHUDLayoutRequest"), &Z_Registration_Info_UScriptStruct_LyraHUDLayoutRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraHUDLayoutRequest), 289147264U) },
		{ FLyraHUDElementEntry::StaticStruct, Z_Construct_UScriptStruct_FLyraHUDElementEntry_Statics::NewStructOps, TEXT("LyraHUDElementEntry"), &Z_Registration_Info_UScriptStruct_LyraHUDElementEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraHUDElementEntry), 813360729U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameFeatures_GameFeatureAction_AddWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddWidgets, UGameFeatureAction_AddWidgets::StaticClass, TEXT("UGameFeatureAction_AddWidgets"), &Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddWidgets), 863914629U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameFeatures_GameFeatureAction_AddWidget_h_3577198819(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameFeatures_GameFeatureAction_AddWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameFeatures_GameFeatureAction_AddWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameFeatures_GameFeatureAction_AddWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameFeatures_GameFeatureAction_AddWidget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
