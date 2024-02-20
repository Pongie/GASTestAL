// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/LyraHUDLayout.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraHUDLayout() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraActivatableWidget();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraHUDLayout();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraHUDLayout_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraHUDLayout::StaticRegisterNativesULyraHUDLayout()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraHUDLayout);
	UClass* Z_Construct_UClass_ULyraHUDLayout_NoRegister()
	{
		return ULyraHUDLayout::StaticClass();
	}
	struct Z_Construct_UClass_ULyraHUDLayout_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EscapeMenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_EscapeMenuClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraHUDLayout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraHUDLayout_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Lyra|HUD" },
		{ "Comment", "/**\n * ULyraHUDLayout\n *\n *\x09Widget used to lay out the player's HUD (typically specified by an Add Widgets action in the experience)\n */" },
		{ "DisplayName", "Lyra HUD Layout" },
		{ "IncludePath", "UI/LyraHUDLayout.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/LyraHUDLayout.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraHUDLayout\n\n    Widget used to lay out the player's HUD (typically specified by an Add Widgets action in the experience)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraHUDLayout_Statics::NewProp_EscapeMenuClass_MetaData[] = {
		{ "Category", "LyraHUDLayout" },
		{ "ModuleRelativePath", "UI/LyraHUDLayout.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULyraHUDLayout_Statics::NewProp_EscapeMenuClass = { "EscapeMenuClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraHUDLayout, EscapeMenuClass), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraHUDLayout_Statics::NewProp_EscapeMenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHUDLayout_Statics::NewProp_EscapeMenuClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraHUDLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraHUDLayout_Statics::NewProp_EscapeMenuClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraHUDLayout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraHUDLayout>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraHUDLayout_Statics::ClassParams = {
		&ULyraHUDLayout::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraHUDLayout_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHUDLayout_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraHUDLayout_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHUDLayout_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraHUDLayout()
	{
		if (!Z_Registration_Info_UClass_ULyraHUDLayout.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraHUDLayout.OuterSingleton, Z_Construct_UClass_ULyraHUDLayout_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraHUDLayout.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraHUDLayout>()
	{
		return ULyraHUDLayout::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraHUDLayout);
	ULyraHUDLayout::~ULyraHUDLayout() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraHUDLayout_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraHUDLayout_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraHUDLayout, ULyraHUDLayout::StaticClass, TEXT("ULyraHUDLayout"), &Z_Registration_Info_UClass_ULyraHUDLayout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraHUDLayout), 3361131107U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraHUDLayout_h_2648428071(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraHUDLayout_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraHUDLayout_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
