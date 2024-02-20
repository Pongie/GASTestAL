// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Feedback/ContextEffects/LyraContextEffectsInterface.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraContextEffectsInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectsInterface();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectsInterface_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_EEffectsContextMatchType();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectsContextMatchType;
	static UEnum* EEffectsContextMatchType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectsContextMatchType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEffectsContextMatchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_EEffectsContextMatchType, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("EEffectsContextMatchType"));
		}
		return Z_Registration_Info_UEnum_EEffectsContextMatchType.OuterSingleton;
	}
	template<> LYRAGAME_API UEnum* StaticEnum<EEffectsContextMatchType>()
	{
		return EEffectsContextMatchType_StaticEnum();
	}
	struct Z_Construct_UEnum_LyraGame_EEffectsContextMatchType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LyraGame_EEffectsContextMatchType_Statics::Enumerators[] = {
		{ "ExactMatch", (int64)ExactMatch },
		{ "BestMatch", (int64)BestMatch },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LyraGame_EEffectsContextMatchType_Statics::Enum_MetaDataParams[] = {
		{ "BestMatch.Comment", "/**\n *\n */" },
		{ "BestMatch.Name", "BestMatch" },
		{ "Comment", "/**\n *\n */" },
		{ "ExactMatch.Comment", "/**\n *\n */" },
		{ "ExactMatch.Name", "ExactMatch" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsInterface.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_EEffectsContextMatchType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		"EEffectsContextMatchType",
		"EEffectsContextMatchType",
		Z_Construct_UEnum_LyraGame_EEffectsContextMatchType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EEffectsContextMatchType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_LyraGame_EEffectsContextMatchType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EEffectsContextMatchType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LyraGame_EEffectsContextMatchType()
	{
		if (!Z_Registration_Info_UEnum_EEffectsContextMatchType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectsContextMatchType.InnerSingleton, Z_Construct_UEnum_LyraGame_EEffectsContextMatchType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEffectsContextMatchType.InnerSingleton;
	}
	DEFINE_FUNCTION(ILyraContextEffectsInterface::execAnimMotionEffect)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Bone);
		P_GET_STRUCT(FGameplayTag,Z_Param_MotionEffect);
		P_GET_OBJECT(USceneComponent,Z_Param_StaticMeshComponent);
		P_GET_STRUCT(FVector,Z_Param_LocationOffset);
		P_GET_STRUCT(FRotator,Z_Param_RotationOffset);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequence);
		P_GET_UBOOL(Z_Param_bHitSuccess);
		P_GET_STRUCT(FHitResult,Z_Param_HitResult);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_Contexts);
		P_GET_STRUCT(FVector,Z_Param_VFXScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AudioVolume);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AudioPitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimMotionEffect_Implementation(Z_Param_Bone,Z_Param_MotionEffect,Z_Param_StaticMeshComponent,Z_Param_LocationOffset,Z_Param_RotationOffset,Z_Param_AnimationSequence,Z_Param_bHitSuccess,Z_Param_HitResult,Z_Param_Contexts,Z_Param_VFXScale,Z_Param_AudioVolume,Z_Param_AudioPitch);
		P_NATIVE_END;
	}
	struct LyraContextEffectsInterface_eventAnimMotionEffect_Parms
	{
		FName Bone;
		FGameplayTag MotionEffect;
		USceneComponent* StaticMeshComponent;
		FVector LocationOffset;
		FRotator RotationOffset;
		const UAnimSequenceBase* AnimationSequence;
		bool bHitSuccess;
		FHitResult HitResult;
		FGameplayTagContainer Contexts;
		FVector VFXScale;
		float AudioVolume;
		float AudioPitch;
	};
	void ILyraContextEffectsInterface::AnimMotionEffect(const FName Bone, const FGameplayTag MotionEffect, USceneComponent* StaticMeshComponent, const FVector LocationOffset, const FRotator RotationOffset, const UAnimSequenceBase* AnimationSequence, bool bHitSuccess, const FHitResult HitResult, FGameplayTagContainer Contexts, FVector VFXScale, float AudioVolume, float AudioPitch)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AnimMotionEffect instead.");
	}
	void ULyraContextEffectsInterface::StaticRegisterNativesULyraContextEffectsInterface()
	{
		UClass* Class = ULyraContextEffectsInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimMotionEffect", &ILyraContextEffectsInterface::execAnimMotionEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Bone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionEffect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MotionEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitSuccess_MetaData[];
#endif
		static void NewProp_bHitSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Contexts;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VFXScale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioVolume;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioPitch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_Bone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, Bone), METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_MotionEffect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_MotionEffect = { "MotionEffect", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, MotionEffect), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_MotionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_MotionEffect_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, StaticMeshComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_LocationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_AnimationSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_bHitSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_bHitSuccess_SetBit(void* Obj)
	{
		((LyraContextEffectsInterface_eventAnimMotionEffect_Parms*)Obj)->bHitSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_bHitSuccess = { "bHitSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraContextEffectsInterface_eventAnimMotionEffect_Parms), &Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_bHitSuccess_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_bHitSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_bHitSuccess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_HitResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_Contexts = { "Contexts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, Contexts), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_VFXScale = { "VFXScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, VFXScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_AudioVolume = { "AudioVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, AudioVolume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_AudioPitch = { "AudioPitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectsInterface_eventAnimMotionEffect_Parms, AudioPitch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_MotionEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_RotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_bHitSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_Contexts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_VFXScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_AudioVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::NewProp_AudioPitch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "CPP_Default_AudioPitch", "1.000000" },
		{ "CPP_Default_AudioVolume", "1.000000" },
		{ "CPP_Default_VFXScale", "1.000000,1.000000,1.000000" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraContextEffectsInterface, nullptr, "AnimMotionEffect", nullptr, nullptr, sizeof(LyraContextEffectsInterface_eventAnimMotionEffect_Parms), Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraContextEffectsInterface);
	UClass* Z_Construct_UClass_ULyraContextEffectsInterface_NoRegister()
	{
		return ULyraContextEffectsInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULyraContextEffectsInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraContextEffectsInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraContextEffectsInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraContextEffectsInterface_AnimMotionEffect, "AnimMotionEffect" }, // 988687713
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraContextEffectsInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectsInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraContextEffectsInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILyraContextEffectsInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraContextEffectsInterface_Statics::ClassParams = {
		&ULyraContextEffectsInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraContextEffectsInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectsInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraContextEffectsInterface()
	{
		if (!Z_Registration_Info_UClass_ULyraContextEffectsInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraContextEffectsInterface.OuterSingleton, Z_Construct_UClass_ULyraContextEffectsInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraContextEffectsInterface.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraContextEffectsInterface>()
	{
		return ULyraContextEffectsInterface::StaticClass();
	}
	ULyraContextEffectsInterface::ULyraContextEffectsInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraContextEffectsInterface);
	ULyraContextEffectsInterface::~ULyraContextEffectsInterface() {}
	static FName NAME_ULyraContextEffectsInterface_AnimMotionEffect = FName(TEXT("AnimMotionEffect"));
	void ILyraContextEffectsInterface::Execute_AnimMotionEffect(UObject* O, const FName Bone, const FGameplayTag MotionEffect, USceneComponent* StaticMeshComponent, const FVector LocationOffset, const FRotator RotationOffset, const UAnimSequenceBase* AnimationSequence, bool bHitSuccess, const FHitResult HitResult, FGameplayTagContainer Contexts, FVector VFXScale, float AudioVolume, float AudioPitch)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULyraContextEffectsInterface::StaticClass()));
		LyraContextEffectsInterface_eventAnimMotionEffect_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULyraContextEffectsInterface_AnimMotionEffect);
		if (Func)
		{
			Parms.Bone=Bone;
			Parms.MotionEffect=MotionEffect;
			Parms.StaticMeshComponent=StaticMeshComponent;
			Parms.LocationOffset=LocationOffset;
			Parms.RotationOffset=RotationOffset;
			Parms.AnimationSequence=AnimationSequence;
			Parms.bHitSuccess=bHitSuccess;
			Parms.HitResult=HitResult;
			Parms.Contexts=Contexts;
			Parms.VFXScale=VFXScale;
			Parms.AudioVolume=AudioVolume;
			Parms.AudioPitch=AudioPitch;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ILyraContextEffectsInterface*)(O->GetNativeInterfaceAddress(ULyraContextEffectsInterface::StaticClass())))
		{
			I->AnimMotionEffect_Implementation(Bone,MotionEffect,StaticMeshComponent,LocationOffset,RotationOffset,AnimationSequence,bHitSuccess,HitResult,Contexts,VFXScale,AudioVolume,AudioPitch);
		}
	}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_Statics::EnumInfo[] = {
		{ EEffectsContextMatchType_StaticEnum, TEXT("EEffectsContextMatchType"), &Z_Registration_Info_UEnum_EEffectsContextMatchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1390305572U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraContextEffectsInterface, ULyraContextEffectsInterface::StaticClass, TEXT("ULyraContextEffectsInterface"), &Z_Registration_Info_UClass_ULyraContextEffectsInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraContextEffectsInterface), 1797892453U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_4149643356(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
