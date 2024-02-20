// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/LyraAimSensitivityData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAimSensitivityData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAimSensitivityData();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAimSensitivityData_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraAimSensitivityData::StaticRegisterNativesULyraAimSensitivityData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAimSensitivityData);
	UClass* Z_Construct_UClass_ULyraAimSensitivityData_NoRegister()
	{
		return ULyraAimSensitivityData::StaticClass();
	}
	struct Z_Construct_UClass_ULyraAimSensitivityData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SensitivityMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SensitivityMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SensitivityMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensitivityMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SensitivityMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraAimSensitivityData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAimSensitivityData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Defines a set of gamepad sensitivity to a float value. */" },
		{ "DisplayName", "Lyra Aim Sensitivity Data" },
		{ "IncludePath", "Input/LyraAimSensitivityData.h" },
		{ "ModuleRelativePath", "Input/LyraAimSensitivityData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "Data asset used to define a map of Gamepad Sensitivty to a float value." },
		{ "ToolTip", "Defines a set of gamepad sensitivity to a float value." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraAimSensitivityData_Statics::NewProp_SensitivityMap_ValueProp = { "SensitivityMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraAimSensitivityData_Statics::NewProp_SensitivityMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraAimSensitivityData_Statics::NewProp_SensitivityMap_Key_KeyProp = { "SensitivityMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_LyraGame_ELyraGamepadSensitivity, METADATA_PARAMS(nullptr, 0) }; // 3332460360
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAimSensitivityData_Statics::NewProp_SensitivityMap_MetaData[] = {
		{ "Category", "LyraAimSensitivityData" },
		{ "Comment", "/** Map of SensitivityMap settings to their corresponding float */" },
		{ "ModuleRelativePath", "Input/LyraAimSensitivityData.h" },
		{ "ToolTip", "Map of SensitivityMap settings to their corresponding float" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraAimSensitivityData_Statics::NewProp_SensitivityMap = { "SensitivityMap", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraAimSensitivityData, SensitivityMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraAimSensitivityData_Statics::NewProp_SensitivityMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAimSensitivityData_Statics::NewProp_SensitivityMap_MetaData)) }; // 3332460360
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAimSensitivityData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAimSensitivityData_Statics::NewProp_SensitivityMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAimSensitivityData_Statics::NewProp_SensitivityMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAimSensitivityData_Statics::NewProp_SensitivityMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAimSensitivityData_Statics::NewProp_SensitivityMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraAimSensitivityData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAimSensitivityData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAimSensitivityData_Statics::ClassParams = {
		&ULyraAimSensitivityData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraAimSensitivityData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAimSensitivityData_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraAimSensitivityData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAimSensitivityData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraAimSensitivityData()
	{
		if (!Z_Registration_Info_UClass_ULyraAimSensitivityData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAimSensitivityData.OuterSingleton, Z_Construct_UClass_ULyraAimSensitivityData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraAimSensitivityData.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraAimSensitivityData>()
	{
		return ULyraAimSensitivityData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAimSensitivityData);
	ULyraAimSensitivityData::~ULyraAimSensitivityData() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraAimSensitivityData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraAimSensitivityData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAimSensitivityData, ULyraAimSensitivityData::StaticClass, TEXT("ULyraAimSensitivityData"), &Z_Registration_Info_UClass_ULyraAimSensitivityData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAimSensitivityData), 360243379U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraAimSensitivityData_h_459245180(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraAimSensitivityData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraAimSensitivityData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
