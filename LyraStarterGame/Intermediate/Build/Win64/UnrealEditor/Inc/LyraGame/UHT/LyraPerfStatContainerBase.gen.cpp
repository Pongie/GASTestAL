// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/PerformanceStats/LyraPerfStatContainerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPerfStatContainerBase() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPerfStatContainerBase();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPerfStatContainerBase_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraStatDisplayMode();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraPerfStatContainerBase::execUpdateVisibilityOfChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVisibilityOfChildren();
		P_NATIVE_END;
	}
	void ULyraPerfStatContainerBase::StaticRegisterNativesULyraPerfStatContainerBase()
	{
		UClass* Class = ULyraPerfStatContainerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateVisibilityOfChildren", &ULyraPerfStatContainerBase::execUpdateVisibilityOfChildren },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraPerfStatContainerBase_UpdateVisibilityOfChildren_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraPerfStatContainerBase_UpdateVisibilityOfChildren_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//~End of UUserWidget interface\n" },
		{ "ModuleRelativePath", "UI/PerformanceStats/LyraPerfStatContainerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPerfStatContainerBase_UpdateVisibilityOfChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPerfStatContainerBase, nullptr, "UpdateVisibilityOfChildren", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraPerfStatContainerBase_UpdateVisibilityOfChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPerfStatContainerBase_UpdateVisibilityOfChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraPerfStatContainerBase_UpdateVisibilityOfChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPerfStatContainerBase_UpdateVisibilityOfChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraPerfStatContainerBase);
	UClass* Z_Construct_UClass_ULyraPerfStatContainerBase_NoRegister()
	{
		return ULyraPerfStatContainerBase::StaticClass();
	}
	struct Z_Construct_UClass_ULyraPerfStatContainerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_StatDisplayModeFilter_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatDisplayModeFilter_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StatDisplayModeFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraPerfStatContainerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraPerfStatContainerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraPerfStatContainerBase_UpdateVisibilityOfChildren, "UpdateVisibilityOfChildren" }, // 1305300489
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPerfStatContainerBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraPerfStatsContainerBase\n *\n * Panel that contains a set of ULyraPerfStatWidgetBase widgets and manages\n * their visibility based on user settings.\n */" },
		{ "IncludePath", "UI/PerformanceStats/LyraPerfStatContainerBase.h" },
		{ "ModuleRelativePath", "UI/PerformanceStats/LyraPerfStatContainerBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraPerfStatsContainerBase\n\nPanel that contains a set of ULyraPerfStatWidgetBase widgets and manages\ntheir visibility based on user settings." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraPerfStatContainerBase_Statics::NewProp_StatDisplayModeFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPerfStatContainerBase_Statics::NewProp_StatDisplayModeFilter_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "// Are we showing text or graph stats?\n" },
		{ "ModuleRelativePath", "UI/PerformanceStats/LyraPerfStatContainerBase.h" },
		{ "ToolTip", "Are we showing text or graph stats?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraPerfStatContainerBase_Statics::NewProp_StatDisplayModeFilter = { "StatDisplayModeFilter", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPerfStatContainerBase, StatDisplayModeFilter), Z_Construct_UEnum_LyraGame_ELyraStatDisplayMode, METADATA_PARAMS(Z_Construct_UClass_ULyraPerfStatContainerBase_Statics::NewProp_StatDisplayModeFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPerfStatContainerBase_Statics::NewProp_StatDisplayModeFilter_MetaData)) }; // 3946329104
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraPerfStatContainerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPerfStatContainerBase_Statics::NewProp_StatDisplayModeFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPerfStatContainerBase_Statics::NewProp_StatDisplayModeFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraPerfStatContainerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraPerfStatContainerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraPerfStatContainerBase_Statics::ClassParams = {
		&ULyraPerfStatContainerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraPerfStatContainerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPerfStatContainerBase_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraPerfStatContainerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPerfStatContainerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraPerfStatContainerBase()
	{
		if (!Z_Registration_Info_UClass_ULyraPerfStatContainerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraPerfStatContainerBase.OuterSingleton, Z_Construct_UClass_ULyraPerfStatContainerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraPerfStatContainerBase.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraPerfStatContainerBase>()
	{
		return ULyraPerfStatContainerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraPerfStatContainerBase);
	ULyraPerfStatContainerBase::~ULyraPerfStatContainerBase() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatContainerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatContainerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraPerfStatContainerBase, ULyraPerfStatContainerBase::StaticClass, TEXT("ULyraPerfStatContainerBase"), &Z_Registration_Info_UClass_ULyraPerfStatContainerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraPerfStatContainerBase), 2666656461U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatContainerBase_h_1768743015(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatContainerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatContainerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
