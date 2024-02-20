// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Camera/LyraCameraMode.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCameraMode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraMode();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraMode_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraModeStack();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraModeStack_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraCameraModeBlendFunction;
	static UEnum* ELyraCameraModeBlendFunction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELyraCameraModeBlendFunction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELyraCameraModeBlendFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraCameraModeBlendFunction"));
		}
		return Z_Registration_Info_UEnum_ELyraCameraModeBlendFunction.OuterSingleton;
	}
	template<> LYRAGAME_API UEnum* StaticEnum<ELyraCameraModeBlendFunction>()
	{
		return ELyraCameraModeBlendFunction_StaticEnum();
	}
	struct Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction_Statics::Enumerators[] = {
		{ "ELyraCameraModeBlendFunction::Linear", (int64)ELyraCameraModeBlendFunction::Linear },
		{ "ELyraCameraModeBlendFunction::EaseIn", (int64)ELyraCameraModeBlendFunction::EaseIn },
		{ "ELyraCameraModeBlendFunction::EaseOut", (int64)ELyraCameraModeBlendFunction::EaseOut },
		{ "ELyraCameraModeBlendFunction::EaseInOut", (int64)ELyraCameraModeBlendFunction::EaseInOut },
		{ "ELyraCameraModeBlendFunction::COUNT", (int64)ELyraCameraModeBlendFunction::COUNT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ELyraCameraModeBlendFunction\n *\n *\x09""Blend function used for transitioning between camera modes.\n */" },
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "ELyraCameraModeBlendFunction::COUNT" },
		{ "EaseIn.Comment", "// Immediately accelerates, but smoothly decelerates into the target.  Ease amount controlled by the exponent.\n" },
		{ "EaseIn.Name", "ELyraCameraModeBlendFunction::EaseIn" },
		{ "EaseIn.ToolTip", "Immediately accelerates, but smoothly decelerates into the target.  Ease amount controlled by the exponent." },
		{ "EaseInOut.Comment", "// Smoothly accelerates and decelerates.  Ease amount controlled by the exponent.\n" },
		{ "EaseInOut.Name", "ELyraCameraModeBlendFunction::EaseInOut" },
		{ "EaseInOut.ToolTip", "Smoothly accelerates and decelerates.  Ease amount controlled by the exponent." },
		{ "EaseOut.Comment", "// Smoothly accelerates, but does not decelerate into the target.  Ease amount controlled by the exponent.\n" },
		{ "EaseOut.Name", "ELyraCameraModeBlendFunction::EaseOut" },
		{ "EaseOut.ToolTip", "Smoothly accelerates, but does not decelerate into the target.  Ease amount controlled by the exponent." },
		{ "Linear.Comment", "// Does a simple linear interpolation.\n" },
		{ "Linear.Name", "ELyraCameraModeBlendFunction::Linear" },
		{ "Linear.ToolTip", "Does a simple linear interpolation." },
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
		{ "ToolTip", "ELyraCameraModeBlendFunction\n\n    Blend function used for transitioning between camera modes." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		"ELyraCameraModeBlendFunction",
		"ELyraCameraModeBlendFunction",
		Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction()
	{
		if (!Z_Registration_Info_UEnum_ELyraCameraModeBlendFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraCameraModeBlendFunction.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELyraCameraModeBlendFunction.InnerSingleton;
	}
	void ULyraCameraMode::StaticRegisterNativesULyraCameraMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraCameraMode);
	UClass* Z_Construct_UClass_ULyraCameraMode_NoRegister()
	{
		return ULyraCameraMode::StaticClass();
	}
	struct Z_Construct_UClass_ULyraCameraMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraTypeTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraTypeTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendExponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetInterpolation_MetaData[];
#endif
		static void NewProp_bResetInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetInterpolation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraCameraMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraCameraMode\n *\n *\x09""Base class for all camera modes.\n */" },
		{ "IncludePath", "Camera/LyraCameraMode.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
		{ "ToolTip", "ULyraCameraMode\n\n    Base class for all camera modes." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_CameraTypeTag_MetaData[] = {
		{ "Category", "Blending" },
		{ "Comment", "// A tag that can be queried by gameplay code that cares when a kind of camera mode is active\n// without having to ask about a specific mode (e.g., when aiming downsights to get more accuracy)\n" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
		{ "ToolTip", "A tag that can be queried by gameplay code that cares when a kind of camera mode is active\nwithout having to ask about a specific mode (e.g., when aiming downsights to get more accuracy)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_CameraTypeTag = { "CameraTypeTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraMode, CameraTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_CameraTypeTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_CameraTypeTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_FieldOfView_MetaData[] = {
		{ "Category", "View" },
		{ "ClampMax", "170.0" },
		{ "ClampMin", "5.0" },
		{ "Comment", "// The horizontal field of view (in degrees).\n" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
		{ "ToolTip", "The horizontal field of view (in degrees)." },
		{ "UIMax", "170" },
		{ "UIMin", "5.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraMode, FieldOfView), METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_FieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_FieldOfView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_ViewPitchMin_MetaData[] = {
		{ "Category", "View" },
		{ "ClampMax", "89.9" },
		{ "ClampMin", "-89.9" },
		{ "Comment", "// Minimum view pitch (in degrees).\n" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
		{ "ToolTip", "Minimum view pitch (in degrees)." },
		{ "UIMax", "89.9" },
		{ "UIMin", "-89.9" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_ViewPitchMin = { "ViewPitchMin", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraMode, ViewPitchMin), METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_ViewPitchMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_ViewPitchMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_ViewPitchMax_MetaData[] = {
		{ "Category", "View" },
		{ "ClampMax", "89.9" },
		{ "ClampMin", "-89.9" },
		{ "Comment", "// Maximum view pitch (in degrees).\n" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
		{ "ToolTip", "Maximum view pitch (in degrees)." },
		{ "UIMax", "89.9" },
		{ "UIMin", "-89.9" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_ViewPitchMax = { "ViewPitchMax", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraMode, ViewPitchMax), METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_ViewPitchMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_ViewPitchMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "Blending" },
		{ "Comment", "// How long it takes to blend in this mode.\n" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
		{ "ToolTip", "How long it takes to blend in this mode." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraMode, BlendTime), METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendTime_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendFunction_MetaData[] = {
		{ "Category", "Blending" },
		{ "Comment", "// Function used for blending.\n" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
		{ "ToolTip", "Function used for blending." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendFunction = { "BlendFunction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraMode, BlendFunction), Z_Construct_UEnum_LyraGame_ELyraCameraModeBlendFunction, METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendFunction_MetaData)) }; // 1824332820
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendExponent_MetaData[] = {
		{ "Category", "Blending" },
		{ "Comment", "// Exponent used by blend functions to control the shape of the curve.\n" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
		{ "ToolTip", "Exponent used by blend functions to control the shape of the curve." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendExponent = { "BlendExponent", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraMode, BlendExponent), METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_bResetInterpolation_MetaData[] = {
		{ "Comment", "/** If true, skips all interpolation and puts camera in ideal location.  Automatically set to false next frame. */" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
		{ "ToolTip", "If true, skips all interpolation and puts camera in ideal location.  Automatically set to false next frame." },
	};
#endif
	void Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_bResetInterpolation_SetBit(void* Obj)
	{
		((ULyraCameraMode*)Obj)->bResetInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_bResetInterpolation = { "bResetInterpolation", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULyraCameraMode), &Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_bResetInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_bResetInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_bResetInterpolation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraCameraMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_CameraTypeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_FieldOfView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_ViewPitchMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_ViewPitchMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_BlendExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_Statics::NewProp_bResetInterpolation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraCameraMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraCameraMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraCameraMode_Statics::ClassParams = {
		&ULyraCameraMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraCameraMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraCameraMode()
	{
		if (!Z_Registration_Info_UClass_ULyraCameraMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraCameraMode.OuterSingleton, Z_Construct_UClass_ULyraCameraMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraCameraMode.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraCameraMode>()
	{
		return ULyraCameraMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraCameraMode);
	ULyraCameraMode::~ULyraCameraMode() {}
	void ULyraCameraModeStack::StaticRegisterNativesULyraCameraModeStack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraCameraModeStack);
	UClass* Z_Construct_UClass_ULyraCameraModeStack_NoRegister()
	{
		return ULyraCameraModeStack::StaticClass();
	}
	struct Z_Construct_UClass_ULyraCameraModeStack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraModeInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraModeInstances;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraModeStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraModeStack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraCameraModeStack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraModeStack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraCameraModeStack\n *\n *\x09Stack used for blending camera modes.\n */" },
		{ "IncludePath", "Camera/LyraCameraMode.h" },
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
		{ "ToolTip", "ULyraCameraModeStack\n\n    Stack used for blending camera modes." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeInstances_Inner = { "CameraModeInstances", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraCameraMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeInstances_MetaData[] = {
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeInstances = { "CameraModeInstances", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraModeStack, CameraModeInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeInstances_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeStack_Inner = { "CameraModeStack", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraCameraMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeStack_MetaData[] = {
		{ "ModuleRelativePath", "Camera/LyraCameraMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeStack = { "CameraModeStack", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraModeStack, CameraModeStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeStack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraCameraModeStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraModeStack_Statics::NewProp_CameraModeStack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraCameraModeStack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraCameraModeStack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraCameraModeStack_Statics::ClassParams = {
		&ULyraCameraModeStack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraCameraModeStack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraModeStack_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraCameraModeStack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraModeStack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraCameraModeStack()
	{
		if (!Z_Registration_Info_UClass_ULyraCameraModeStack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraCameraModeStack.OuterSingleton, Z_Construct_UClass_ULyraCameraModeStack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraCameraModeStack.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraCameraModeStack>()
	{
		return ULyraCameraModeStack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraCameraModeStack);
	ULyraCameraModeStack::~ULyraCameraModeStack() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_Statics::EnumInfo[] = {
		{ ELyraCameraModeBlendFunction_StaticEnum, TEXT("ELyraCameraModeBlendFunction"), &Z_Registration_Info_UEnum_ELyraCameraModeBlendFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1824332820U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraCameraMode, ULyraCameraMode::StaticClass, TEXT("ULyraCameraMode"), &Z_Registration_Info_UClass_ULyraCameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraCameraMode), 3136676975U) },
		{ Z_Construct_UClass_ULyraCameraModeStack, ULyraCameraModeStack::StaticClass, TEXT("ULyraCameraModeStack"), &Z_Registration_Info_UClass_ULyraCameraModeStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraCameraModeStack), 2850111658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_973798743(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
