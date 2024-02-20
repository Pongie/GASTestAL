// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Foundation/LyraActionWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraActionWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActionWidget();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraActionWidget();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraActionWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraActionWidget::StaticRegisterNativesULyraActionWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraActionWidget);
	UClass* Z_Construct_UClass_ULyraActionWidget_NoRegister()
	{
		return ULyraActionWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULyraActionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssociatedInputAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraActionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActionWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraActionWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** An action widget that will get the icon of key that is currently assigned to the common input action on this widget */" },
		{ "IncludePath", "UI/Foundation/LyraActionWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/Foundation/LyraActionWidget.h" },
		{ "ToolTip", "An action widget that will get the icon of key that is currently assigned to the common input action on this widget" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraActionWidget_Statics::NewProp_AssociatedInputAction_MetaData[] = {
		{ "Category", "LyraActionWidget" },
		{ "Comment", "/** The Enhanced Input Action that is associated with this Common Input action. */" },
		{ "ModuleRelativePath", "UI/Foundation/LyraActionWidget.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "The Enhanced Input Action that is associated with this Common Input action." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraActionWidget_Statics::NewProp_AssociatedInputAction = { "AssociatedInputAction", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraActionWidget, AssociatedInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraActionWidget_Statics::NewProp_AssociatedInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActionWidget_Statics::NewProp_AssociatedInputAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraActionWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraActionWidget_Statics::NewProp_AssociatedInputAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraActionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraActionWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraActionWidget_Statics::ClassParams = {
		&ULyraActionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraActionWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActionWidget_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraActionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraActionWidget()
	{
		if (!Z_Registration_Info_UClass_ULyraActionWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraActionWidget.OuterSingleton, Z_Construct_UClass_ULyraActionWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraActionWidget.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraActionWidget>()
	{
		return ULyraActionWidget::StaticClass();
	}
	ULyraActionWidget::ULyraActionWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraActionWidget);
	ULyraActionWidget::~ULyraActionWidget() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraActionWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraActionWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraActionWidget, ULyraActionWidget::StaticClass, TEXT("ULyraActionWidget"), &Z_Registration_Info_UClass_ULyraActionWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraActionWidget), 2041942012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraActionWidget_h_2164772635(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraActionWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraActionWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
