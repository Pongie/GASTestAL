// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/LyraInputModifiers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraInputModifiers() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EDeadZoneType();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAimSensitivityData_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputModifierAimInversion();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputModifierAimInversion_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputModifierDeadZone();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputModifierDeadZone_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputModifierGamepadSensitivity();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingBasedScalar();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingBasedScalar_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_EDeadzoneStick();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraTargetingType();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraSettingBasedScalar::StaticRegisterNativesULyraSettingBasedScalar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSettingBasedScalar);
	UClass* Z_Construct_UClass_ULyraSettingBasedScalar_NoRegister()
	{
		return ULyraSettingBasedScalar::StaticClass();
	}
	struct Z_Construct_UClass_ULyraSettingBasedScalar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XAxisScalarSettingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_XAxisScalarSettingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YAxisScalarSettingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_YAxisScalarSettingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZAxisScalarSettingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ZAxisScalarSettingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxValueClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxValueClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinValueClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinValueClamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraSettingBasedScalar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingBasedScalar_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n*  Scales input basedon a double property in the SharedUserSettings\n*/" },
		{ "DisplayName", "Setting Based Scalar" },
		{ "IncludePath", "Input/LyraInputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
		{ "ToolTip", "Scales input basedon a double property in the SharedUserSettings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_XAxisScalarSettingName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the property that will be used to clamp the X Axis of this value */" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
		{ "ToolTip", "Name of the property that will be used to clamp the X Axis of this value" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_XAxisScalarSettingName = { "XAxisScalarSettingName", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingBasedScalar, XAxisScalarSettingName), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_XAxisScalarSettingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_XAxisScalarSettingName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_YAxisScalarSettingName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the property that will be used to clamp the Y Axis of this value */" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
		{ "ToolTip", "Name of the property that will be used to clamp the Y Axis of this value" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_YAxisScalarSettingName = { "YAxisScalarSettingName", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingBasedScalar, YAxisScalarSettingName), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_YAxisScalarSettingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_YAxisScalarSettingName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_ZAxisScalarSettingName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the property that will be used to clamp the Z Axis of this value */" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
		{ "ToolTip", "Name of the property that will be used to clamp the Z Axis of this value" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_ZAxisScalarSettingName = { "ZAxisScalarSettingName", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingBasedScalar, ZAxisScalarSettingName), METADATA_PARAMS(Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_ZAxisScalarSettingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_ZAxisScalarSettingName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_MaxValueClamp_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Set the maximium value of this setting on each axis. */" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
		{ "ToolTip", "Set the maximium value of this setting on each axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_MaxValueClamp = { "MaxValueClamp", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingBasedScalar, MaxValueClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_MaxValueClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_MaxValueClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_MinValueClamp_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Set the minimum value of this setting on each axis. */" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
		{ "ToolTip", "Set the minimum value of this setting on each axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_MinValueClamp = { "MinValueClamp", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraSettingBasedScalar, MinValueClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_MinValueClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_MinValueClamp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraSettingBasedScalar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_XAxisScalarSettingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_YAxisScalarSettingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_ZAxisScalarSettingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_MaxValueClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraSettingBasedScalar_Statics::NewProp_MinValueClamp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraSettingBasedScalar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSettingBasedScalar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSettingBasedScalar_Statics::ClassParams = {
		&ULyraSettingBasedScalar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraSettingBasedScalar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingBasedScalar_Statics::PropPointers),
		0,
		0x400830A2u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraSettingBasedScalar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSettingBasedScalar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraSettingBasedScalar()
	{
		if (!Z_Registration_Info_UClass_ULyraSettingBasedScalar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSettingBasedScalar.OuterSingleton, Z_Construct_UClass_ULyraSettingBasedScalar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraSettingBasedScalar.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraSettingBasedScalar>()
	{
		return ULyraSettingBasedScalar::StaticClass();
	}
	ULyraSettingBasedScalar::ULyraSettingBasedScalar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSettingBasedScalar);
	ULyraSettingBasedScalar::~ULyraSettingBasedScalar() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDeadzoneStick;
	static UEnum* EDeadzoneStick_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDeadzoneStick.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDeadzoneStick.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_EDeadzoneStick, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("EDeadzoneStick"));
		}
		return Z_Registration_Info_UEnum_EDeadzoneStick.OuterSingleton;
	}
	template<> LYRAGAME_API UEnum* StaticEnum<EDeadzoneStick>()
	{
		return EDeadzoneStick_StaticEnum();
	}
	struct Z_Construct_UEnum_LyraGame_EDeadzoneStick_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LyraGame_EDeadzoneStick_Statics::Enumerators[] = {
		{ "EDeadzoneStick::MoveStick", (int64)EDeadzoneStick::MoveStick },
		{ "EDeadzoneStick::LookStick", (int64)EDeadzoneStick::LookStick },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LyraGame_EDeadzoneStick_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Represents which stick that this deadzone is for, either the move or the look stick */" },
		{ "LookStick.Comment", "/** Deadzone for the looking stick */" },
		{ "LookStick.Name", "EDeadzoneStick::LookStick" },
		{ "LookStick.ToolTip", "Deadzone for the looking stick" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
		{ "MoveStick.Comment", "/** Deadzone for the movement stick */" },
		{ "MoveStick.Name", "EDeadzoneStick::MoveStick" },
		{ "MoveStick.ToolTip", "Deadzone for the movement stick" },
		{ "ToolTip", "Represents which stick that this deadzone is for, either the move or the look stick" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_EDeadzoneStick_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		"EDeadzoneStick",
		"EDeadzoneStick",
		Z_Construct_UEnum_LyraGame_EDeadzoneStick_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EDeadzoneStick_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LyraGame_EDeadzoneStick_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EDeadzoneStick_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LyraGame_EDeadzoneStick()
	{
		if (!Z_Registration_Info_UEnum_EDeadzoneStick.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDeadzoneStick.InnerSingleton, Z_Construct_UEnum_LyraGame_EDeadzoneStick_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDeadzoneStick.InnerSingleton;
	}
	void ULyraInputModifierDeadZone::StaticRegisterNativesULyraInputModifierDeadZone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInputModifierDeadZone);
	UClass* Z_Construct_UClass_ULyraInputModifierDeadZone_NoRegister()
	{
		return ULyraInputModifierDeadZone::StaticClass();
	}
	struct Z_Construct_UClass_ULyraInputModifierDeadZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpperThreshold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeadzoneStick_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadzoneStick_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeadzoneStick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This is a deadzone input modifier that will have it's thresholds driven by what is in the Lyra Shared game settings. \n */" },
		{ "DisplayName", "Lyra Settings Driven Dead Zone" },
		{ "IncludePath", "Input/LyraInputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
		{ "ToolTip", "This is a deadzone input modifier that will have it's thresholds driven by what is in the Lyra Shared game settings." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraInputModifierDeadZone, Type), Z_Construct_UEnum_EnhancedInput_EDeadZoneType, METADATA_PARAMS(Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_Type_MetaData)) }; // 124335324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_UpperThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Threshold above which input is clamped to 1\n" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
		{ "ToolTip", "Threshold above which input is clamped to 1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_UpperThreshold = { "UpperThreshold", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraInputModifierDeadZone, UpperThreshold), METADATA_PARAMS(Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_UpperThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_UpperThreshold_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_DeadzoneStick_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_DeadzoneStick_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which stick this deadzone is for. This controls which setting will be used when calculating the deadzone */" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
		{ "ToolTip", "Which stick this deadzone is for. This controls which setting will be used when calculating the deadzone" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_DeadzoneStick = { "DeadzoneStick", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraInputModifierDeadZone, DeadzoneStick), Z_Construct_UEnum_LyraGame_EDeadzoneStick, METADATA_PARAMS(Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_DeadzoneStick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_DeadzoneStick_MetaData)) }; // 3594922386
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_UpperThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_DeadzoneStick_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::NewProp_DeadzoneStick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInputModifierDeadZone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::ClassParams = {
		&ULyraInputModifierDeadZone::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::PropPointers),
		0,
		0x400830A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraInputModifierDeadZone()
	{
		if (!Z_Registration_Info_UClass_ULyraInputModifierDeadZone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInputModifierDeadZone.OuterSingleton, Z_Construct_UClass_ULyraInputModifierDeadZone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraInputModifierDeadZone.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraInputModifierDeadZone>()
	{
		return ULyraInputModifierDeadZone::StaticClass();
	}
	ULyraInputModifierDeadZone::ULyraInputModifierDeadZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInputModifierDeadZone);
	ULyraInputModifierDeadZone::~ULyraInputModifierDeadZone() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraTargetingType;
	static UEnum* ELyraTargetingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELyraTargetingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELyraTargetingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraTargetingType, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraTargetingType"));
		}
		return Z_Registration_Info_UEnum_ELyraTargetingType.OuterSingleton;
	}
	template<> LYRAGAME_API UEnum* StaticEnum<ELyraTargetingType>()
	{
		return ELyraTargetingType_StaticEnum();
	}
	struct Z_Construct_UEnum_LyraGame_ELyraTargetingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LyraGame_ELyraTargetingType_Statics::Enumerators[] = {
		{ "ELyraTargetingType::Normal", (int64)ELyraTargetingType::Normal },
		{ "ELyraTargetingType::ADS", (int64)ELyraTargetingType::ADS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LyraGame_ELyraTargetingType_Statics::Enum_MetaDataParams[] = {
		{ "ADS.Comment", "/** The sensitivity that should be applied while Aiming Down Sights */" },
		{ "ADS.Name", "ELyraTargetingType::ADS" },
		{ "ADS.ToolTip", "The sensitivity that should be applied while Aiming Down Sights" },
		{ "Comment", "/** The type of targeting sensitity that should be considered */" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
		{ "Normal.Comment", "/** Sensitivity to be applied why normally looking around */" },
		{ "Normal.Name", "ELyraTargetingType::Normal" },
		{ "Normal.ToolTip", "Sensitivity to be applied why normally looking around" },
		{ "ToolTip", "The type of targeting sensitity that should be considered" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraTargetingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		"ELyraTargetingType",
		"ELyraTargetingType",
		Z_Construct_UEnum_LyraGame_ELyraTargetingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraTargetingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LyraGame_ELyraTargetingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraTargetingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LyraGame_ELyraTargetingType()
	{
		if (!Z_Registration_Info_UEnum_ELyraTargetingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraTargetingType.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraTargetingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELyraTargetingType.InnerSingleton;
	}
	void ULyraInputModifierGamepadSensitivity::StaticRegisterNativesULyraInputModifierGamepadSensitivity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInputModifierGamepadSensitivity);
	UClass* Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_NoRegister()
	{
		return ULyraInputModifierGamepadSensitivity::StaticClass();
	}
	struct Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensitivityLevelTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SensitivityLevelTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Applies a scalar modifier based on the current gamepad settings in Lyra Shared game settings.  */" },
		{ "DisplayName", "Lyra Gamepad Sensitivity" },
		{ "IncludePath", "Input/LyraInputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
		{ "ToolTip", "Applies a scalar modifier based on the current gamepad settings in Lyra Shared game settings." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::NewProp_TargetingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::NewProp_TargetingType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The type of targeting to use for this Sensitivity */" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
		{ "ToolTip", "The type of targeting to use for this Sensitivity" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::NewProp_TargetingType = { "TargetingType", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraInputModifierGamepadSensitivity, TargetingType), Z_Construct_UEnum_LyraGame_ELyraTargetingType, METADATA_PARAMS(Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::NewProp_TargetingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::NewProp_TargetingType_MetaData)) }; // 1325749967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::NewProp_SensitivityLevelTable_MetaData[] = {
		{ "AssetBundles", "Client,Server" },
		{ "Category", "LyraInputModifierGamepadSensitivity" },
		{ "Comment", "/** Asset that gives us access to the float scalar value being used for sensitivty */" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Asset that gives us access to the float scalar value being used for sensitivty" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::NewProp_SensitivityLevelTable = { "SensitivityLevelTable", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraInputModifierGamepadSensitivity, SensitivityLevelTable), Z_Construct_UClass_ULyraAimSensitivityData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::NewProp_SensitivityLevelTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::NewProp_SensitivityLevelTable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::NewProp_TargetingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::NewProp_TargetingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::NewProp_SensitivityLevelTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInputModifierGamepadSensitivity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::ClassParams = {
		&ULyraInputModifierGamepadSensitivity::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::PropPointers),
		0,
		0x400830A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraInputModifierGamepadSensitivity()
	{
		if (!Z_Registration_Info_UClass_ULyraInputModifierGamepadSensitivity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInputModifierGamepadSensitivity.OuterSingleton, Z_Construct_UClass_ULyraInputModifierGamepadSensitivity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraInputModifierGamepadSensitivity.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraInputModifierGamepadSensitivity>()
	{
		return ULyraInputModifierGamepadSensitivity::StaticClass();
	}
	ULyraInputModifierGamepadSensitivity::ULyraInputModifierGamepadSensitivity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInputModifierGamepadSensitivity);
	ULyraInputModifierGamepadSensitivity::~ULyraInputModifierGamepadSensitivity() {}
	void ULyraInputModifierAimInversion::StaticRegisterNativesULyraInputModifierAimInversion()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInputModifierAimInversion);
	UClass* Z_Construct_UClass_ULyraInputModifierAimInversion_NoRegister()
	{
		return ULyraInputModifierAimInversion::StaticClass();
	}
	struct Z_Construct_UClass_ULyraInputModifierAimInversion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraInputModifierAimInversion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInputModifierAimInversion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Applies an inversion of axis values based on a setting in the Lyra Shared game settings */" },
		{ "DisplayName", "Lyra Aim Inversion Setting" },
		{ "IncludePath", "Input/LyraInputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Input/LyraInputModifiers.h" },
		{ "ToolTip", "Applies an inversion of axis values based on a setting in the Lyra Shared game settings" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraInputModifierAimInversion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInputModifierAimInversion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInputModifierAimInversion_Statics::ClassParams = {
		&ULyraInputModifierAimInversion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x400830A2u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraInputModifierAimInversion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInputModifierAimInversion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraInputModifierAimInversion()
	{
		if (!Z_Registration_Info_UClass_ULyraInputModifierAimInversion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInputModifierAimInversion.OuterSingleton, Z_Construct_UClass_ULyraInputModifierAimInversion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraInputModifierAimInversion.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraInputModifierAimInversion>()
	{
		return ULyraInputModifierAimInversion::StaticClass();
	}
	ULyraInputModifierAimInversion::ULyraInputModifierAimInversion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInputModifierAimInversion);
	ULyraInputModifierAimInversion::~ULyraInputModifierAimInversion() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputModifiers_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputModifiers_h_Statics::EnumInfo[] = {
		{ EDeadzoneStick_StaticEnum, TEXT("EDeadzoneStick"), &Z_Registration_Info_UEnum_EDeadzoneStick, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3594922386U) },
		{ ELyraTargetingType_StaticEnum, TEXT("ELyraTargetingType"), &Z_Registration_Info_UEnum_ELyraTargetingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1325749967U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputModifiers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSettingBasedScalar, ULyraSettingBasedScalar::StaticClass, TEXT("ULyraSettingBasedScalar"), &Z_Registration_Info_UClass_ULyraSettingBasedScalar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSettingBasedScalar), 1370239128U) },
		{ Z_Construct_UClass_ULyraInputModifierDeadZone, ULyraInputModifierDeadZone::StaticClass, TEXT("ULyraInputModifierDeadZone"), &Z_Registration_Info_UClass_ULyraInputModifierDeadZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInputModifierDeadZone), 35141226U) },
		{ Z_Construct_UClass_ULyraInputModifierGamepadSensitivity, ULyraInputModifierGamepadSensitivity::StaticClass, TEXT("ULyraInputModifierGamepadSensitivity"), &Z_Registration_Info_UClass_ULyraInputModifierGamepadSensitivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInputModifierGamepadSensitivity), 4036970405U) },
		{ Z_Construct_UClass_ULyraInputModifierAimInversion, ULyraInputModifierAimInversion::StaticClass, TEXT("ULyraInputModifierAimInversion"), &Z_Registration_Info_UClass_ULyraInputModifierAimInversion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInputModifierAimInversion), 1901851597U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputModifiers_h_1667451775(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputModifiers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputModifiers_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputModifiers_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Input_LyraInputModifiers_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
