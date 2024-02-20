// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/PerformanceStats/LyraPerfStatWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPerfStatWidgetBase() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPerformanceStatSubsystem_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPerfStatWidgetBase();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPerfStatWidgetBase_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraPerfStatWidgetBase::execFetchStatValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->FetchStatValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraPerfStatWidgetBase::execGetStatToDisplay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELyraDisplayablePerformanceStat*)Z_Param__Result=P_THIS->GetStatToDisplay();
		P_NATIVE_END;
	}
	void ULyraPerfStatWidgetBase::StaticRegisterNativesULyraPerfStatWidgetBase()
	{
		UClass* Class = ULyraPerfStatWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FetchStatValue", &ULyraPerfStatWidgetBase::execFetchStatValue },
			{ "GetStatToDisplay", &ULyraPerfStatWidgetBase::execGetStatToDisplay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics
	{
		struct LyraPerfStatWidgetBase_eventFetchStatValue_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPerfStatWidgetBase_eventFetchStatValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Polls for the value of this stat (unscaled)\n" },
		{ "ModuleRelativePath", "UI/PerformanceStats/LyraPerfStatWidgetBase.h" },
		{ "ToolTip", "Polls for the value of this stat (unscaled)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPerfStatWidgetBase, nullptr, "FetchStatValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::LyraPerfStatWidgetBase_eventFetchStatValue_Parms), Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics
	{
		struct LyraPerfStatWidgetBase_eventGetStatToDisplay_Parms
		{
			ELyraDisplayablePerformanceStat ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPerfStatWidgetBase_eventGetStatToDisplay_Parms, ReturnValue), Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat, METADATA_PARAMS(nullptr, 0) }; // 2215989194
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returns the stat this widget is supposed to display\n" },
		{ "ModuleRelativePath", "UI/PerformanceStats/LyraPerfStatWidgetBase.h" },
		{ "ToolTip", "Returns the stat this widget is supposed to display" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPerfStatWidgetBase, nullptr, "GetStatToDisplay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::LyraPerfStatWidgetBase_eventGetStatToDisplay_Parms), Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraPerfStatWidgetBase);
	UClass* Z_Construct_UClass_ULyraPerfStatWidgetBase_NoRegister()
	{
		return ULyraPerfStatWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedStatSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedStatSubsystem;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StatToDisplay_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatToDisplay_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StatToDisplay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraPerfStatWidgetBase_FetchStatValue, "FetchStatValue" }, // 1418745371
		{ &Z_Construct_UFunction_ULyraPerfStatWidgetBase_GetStatToDisplay, "GetStatToDisplay" }, // 2890952503
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraPerfStatWidgetBase\n *\n * Base class for a widget that displays a single stat, e.g., FPS, ping, etc...\n */" },
		{ "IncludePath", "UI/PerformanceStats/LyraPerfStatWidgetBase.h" },
		{ "ModuleRelativePath", "UI/PerformanceStats/LyraPerfStatWidgetBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraPerfStatWidgetBase\n\nBase class for a widget that displays a single stat, e.g., FPS, ping, etc..." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::NewProp_CachedStatSubsystem_MetaData[] = {
		{ "Comment", "// Cached subsystem pointer\n" },
		{ "ModuleRelativePath", "UI/PerformanceStats/LyraPerfStatWidgetBase.h" },
		{ "ToolTip", "Cached subsystem pointer" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::NewProp_CachedStatSubsystem = { "CachedStatSubsystem", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPerfStatWidgetBase, CachedStatSubsystem), Z_Construct_UClass_ULyraPerformanceStatSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::NewProp_CachedStatSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::NewProp_CachedStatSubsystem_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::NewProp_StatToDisplay_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::NewProp_StatToDisplay_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "// The stat to display\n" },
		{ "ModuleRelativePath", "UI/PerformanceStats/LyraPerfStatWidgetBase.h" },
		{ "ToolTip", "The stat to display" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::NewProp_StatToDisplay = { "StatToDisplay", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPerfStatWidgetBase, StatToDisplay), Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat, METADATA_PARAMS(Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::NewProp_StatToDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::NewProp_StatToDisplay_MetaData)) }; // 2215989194
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::NewProp_CachedStatSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::NewProp_StatToDisplay_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::NewProp_StatToDisplay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraPerfStatWidgetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::ClassParams = {
		&ULyraPerfStatWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraPerfStatWidgetBase()
	{
		if (!Z_Registration_Info_UClass_ULyraPerfStatWidgetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraPerfStatWidgetBase.OuterSingleton, Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraPerfStatWidgetBase.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraPerfStatWidgetBase>()
	{
		return ULyraPerfStatWidgetBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraPerfStatWidgetBase);
	ULyraPerfStatWidgetBase::~ULyraPerfStatWidgetBase() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraPerfStatWidgetBase, ULyraPerfStatWidgetBase::StaticClass, TEXT("ULyraPerfStatWidgetBase"), &Z_Registration_Info_UClass_ULyraPerfStatWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraPerfStatWidgetBase), 3310981894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_2430444652(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
