// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Common/LyraListView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraListView() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonListView();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraListView();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraListView_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraWidgetFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraListView::StaticRegisterNativesULyraListView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraListView);
	UClass* Z_Construct_UClass_ULyraListView_NoRegister()
	{
		return ULyraListView::StaticClass();
	}
	struct Z_Construct_UClass_ULyraListView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FactoryRules_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FactoryRules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FactoryRules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FactoryRules;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraListView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonListView,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraListView_Statics::Class_MetaDataParams[] = {
		{ "DisableNativeTick", "" },
		{ "IncludePath", "UI/Common/LyraListView.h" },
		{ "ModuleRelativePath", "UI/Common/LyraListView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraListView_Statics::NewProp_FactoryRules_Inner_MetaData[] = {
		{ "Category", "Entry Creation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Common/LyraListView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraListView_Statics::NewProp_FactoryRules_Inner = { "FactoryRules", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraWidgetFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraListView_Statics::NewProp_FactoryRules_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraListView_Statics::NewProp_FactoryRules_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraListView_Statics::NewProp_FactoryRules_MetaData[] = {
		{ "Category", "Entry Creation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Common/LyraListView.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraListView_Statics::NewProp_FactoryRules = { "FactoryRules", nullptr, (EPropertyFlags)0x0024088000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraListView, FactoryRules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraListView_Statics::NewProp_FactoryRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraListView_Statics::NewProp_FactoryRules_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraListView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraListView_Statics::NewProp_FactoryRules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraListView_Statics::NewProp_FactoryRules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraListView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraListView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraListView_Statics::ClassParams = {
		&ULyraListView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraListView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraListView_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraListView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraListView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraListView()
	{
		if (!Z_Registration_Info_UClass_ULyraListView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraListView.OuterSingleton, Z_Construct_UClass_ULyraListView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraListView.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraListView>()
	{
		return ULyraListView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraListView);
	ULyraListView::~ULyraListView() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraListView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraListView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraListView, ULyraListView::StaticClass, TEXT("ULyraListView"), &Z_Registration_Info_UClass_ULyraListView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraListView), 1863182959U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraListView_h_891822964(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraListView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Common_LyraListView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
