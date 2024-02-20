// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Feedback/ContextEffects/LyraContextEffectComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraContextEffectComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectsInterface_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraContextEffectsLibrary_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraContextEffectComponent::execUpdateLibraries)
	{
		P_GET_TSET(TSoftObjectPtr<ULyraContextEffectsLibrary>,Z_Param_NewContextEffectsLibraries);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLibraries(Z_Param_NewContextEffectsLibraries);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraContextEffectComponent::execUpdateEffectContexts)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_NewEffectContexts);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEffectContexts(Z_Param_NewEffectContexts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraContextEffectComponent::execAnimMotionEffect_Implementation)
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
	void ULyraContextEffectComponent::StaticRegisterNativesULyraContextEffectComponent()
	{
		UClass* Class = ULyraContextEffectComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimMotionEffect_Implementation", &ULyraContextEffectComponent::execAnimMotionEffect_Implementation },
			{ "UpdateEffectContexts", &ULyraContextEffectComponent::execUpdateEffectContexts },
			{ "UpdateLibraries", &ULyraContextEffectComponent::execUpdateLibraries },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics
	{
		struct LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_Bone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, Bone), METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_MotionEffect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_MotionEffect = { "MotionEffect", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, MotionEffect), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_MotionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_MotionEffect_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, StaticMeshComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_LocationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_AnimationSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_bHitSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_bHitSuccess_SetBit(void* Obj)
	{
		((LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms*)Obj)->bHitSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_bHitSuccess = { "bHitSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms), &Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_bHitSuccess_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_bHitSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_bHitSuccess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_HitResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_Contexts = { "Contexts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, Contexts), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_VFXScale = { "VFXScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, VFXScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_AudioVolume = { "AudioVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, AudioVolume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_AudioPitch = { "AudioPitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms, AudioPitch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_MotionEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_RotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_bHitSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_Contexts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_VFXScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_AudioVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::NewProp_AudioPitch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// AnimMotionEffect Implementation\n" },
		{ "CPP_Default_AudioPitch", "1.000000" },
		{ "CPP_Default_AudioVolume", "1.000000" },
		{ "CPP_Default_VFXScale", "1.000000,1.000000,1.000000" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
		{ "ToolTip", "AnimMotionEffect Implementation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraContextEffectComponent, nullptr, "AnimMotionEffect_Implementation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::LyraContextEffectComponent_eventAnimMotionEffect_Implementation_Parms), Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics
	{
		struct LyraContextEffectComponent_eventUpdateEffectContexts_Parms
		{
			FGameplayTagContainer NewEffectContexts;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewEffectContexts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::NewProp_NewEffectContexts = { "NewEffectContexts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectComponent_eventUpdateEffectContexts_Parms, NewEffectContexts), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::NewProp_NewEffectContexts,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraContextEffectComponent, nullptr, "UpdateEffectContexts", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::LyraContextEffectComponent_eventUpdateEffectContexts_Parms), Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics
	{
		struct LyraContextEffectComponent_eventUpdateLibraries_Parms
		{
			TSet<TSoftObjectPtr<ULyraContextEffectsLibrary> > NewContextEffectsLibraries;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NewContextEffectsLibraries_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_NewContextEffectsLibraries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::NewProp_NewContextEffectsLibraries_ElementProp = { "NewContextEffectsLibraries", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraContextEffectsLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::NewProp_NewContextEffectsLibraries = { "NewContextEffectsLibraries", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraContextEffectComponent_eventUpdateLibraries_Parms, NewContextEffectsLibraries), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::NewProp_NewContextEffectsLibraries_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::NewProp_NewContextEffectsLibraries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraContextEffectComponent, nullptr, "UpdateLibraries", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::LyraContextEffectComponent_eventUpdateLibraries_Parms), Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraContextEffectComponent);
	UClass* Z_Construct_UClass_ULyraContextEffectComponent_NoRegister()
	{
		return ULyraContextEffectComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULyraContextEffectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConvertPhysicalSurfaceToContext_MetaData[];
#endif
		static void NewProp_bConvertPhysicalSurfaceToContext_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertPhysicalSurfaceToContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEffectContexts_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultEffectContexts;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultContextEffectsLibraries_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultContextEffectsLibraries_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_DefaultContextEffectsLibraries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentContexts_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentContexts;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CurrentContextEffectsLibraries_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentContextEffectsLibraries_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CurrentContextEffectsLibraries;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveAudioComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAudioComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveAudioComponents;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveNiagaraComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveNiagaraComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveNiagaraComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraContextEffectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraContextEffectComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraContextEffectComponent_AnimMotionEffect_Implementation, "AnimMotionEffect_Implementation" }, // 4282132993
		{ &Z_Construct_UFunction_ULyraContextEffectComponent_UpdateEffectContexts, "UpdateEffectContexts" }, // 1114139121
		{ &Z_Construct_UFunction_ULyraContextEffectComponent_UpdateLibraries, "UpdateLibraries" }, // 3183761890
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraContextEffectComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Variable Tags ComponentTick ComponentReplication Activation Cooking AssetUserData Collision" },
		{ "IncludePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_bConvertPhysicalSurfaceToContext_MetaData[] = {
		{ "Category", "LyraContextEffectComponent" },
		{ "Comment", "// Auto-Convert Physical Surface from Trace Result to Context\n" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
		{ "ToolTip", "Auto-Convert Physical Surface from Trace Result to Context" },
	};
#endif
	void Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_bConvertPhysicalSurfaceToContext_SetBit(void* Obj)
	{
		((ULyraContextEffectComponent*)Obj)->bConvertPhysicalSurfaceToContext = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_bConvertPhysicalSurfaceToContext = { "bConvertPhysicalSurfaceToContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraContextEffectComponent), &Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_bConvertPhysicalSurfaceToContext_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_bConvertPhysicalSurfaceToContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_bConvertPhysicalSurfaceToContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_DefaultEffectContexts_MetaData[] = {
		{ "Category", "LyraContextEffectComponent" },
		{ "Comment", "// Default Contexts\n" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
		{ "ToolTip", "Default Contexts" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_DefaultEffectContexts = { "DefaultEffectContexts", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraContextEffectComponent, DefaultEffectContexts), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_DefaultEffectContexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_DefaultEffectContexts_MetaData)) }; // 3057219007
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_DefaultContextEffectsLibraries_ElementProp = { "DefaultContextEffectsLibraries", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraContextEffectsLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_DefaultContextEffectsLibraries_MetaData[] = {
		{ "Category", "LyraContextEffectComponent" },
		{ "Comment", "// Default Libraries for this Actor\n" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
		{ "ToolTip", "Default Libraries for this Actor" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_DefaultContextEffectsLibraries = { "DefaultContextEffectsLibraries", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraContextEffectComponent, DefaultContextEffectsLibraries), METADATA_PARAMS(Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_DefaultContextEffectsLibraries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_DefaultContextEffectsLibraries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_CurrentContexts_MetaData[] = {
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_CurrentContexts = { "CurrentContexts", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraContextEffectComponent, CurrentContexts), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_CurrentContexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_CurrentContexts_MetaData)) }; // 3057219007
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_CurrentContextEffectsLibraries_ElementProp = { "CurrentContextEffectsLibraries", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraContextEffectsLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_CurrentContextEffectsLibraries_MetaData[] = {
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_CurrentContextEffectsLibraries = { "CurrentContextEffectsLibraries", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraContextEffectComponent, CurrentContextEffectsLibraries), METADATA_PARAMS(Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_CurrentContextEffectsLibraries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_CurrentContextEffectsLibraries_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveAudioComponents_Inner = { "ActiveAudioComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveAudioComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveAudioComponents = { "ActiveAudioComponents", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraContextEffectComponent, ActiveAudioComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveAudioComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveAudioComponents_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveNiagaraComponents_Inner = { "ActiveNiagaraComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveNiagaraComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Feedback/ContextEffects/LyraContextEffectComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveNiagaraComponents = { "ActiveNiagaraComponents", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraContextEffectComponent, ActiveNiagaraComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveNiagaraComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveNiagaraComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraContextEffectComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_bConvertPhysicalSurfaceToContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_DefaultEffectContexts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_DefaultContextEffectsLibraries_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_DefaultContextEffectsLibraries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_CurrentContexts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_CurrentContextEffectsLibraries_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_CurrentContextEffectsLibraries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveAudioComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveAudioComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveNiagaraComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraContextEffectComponent_Statics::NewProp_ActiveNiagaraComponents,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULyraContextEffectsInterface_NoRegister, (int32)VTABLE_OFFSET(ULyraContextEffectComponent, ILyraContextEffectsInterface), false },  // 1797892453
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraContextEffectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraContextEffectComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraContextEffectComponent_Statics::ClassParams = {
		&ULyraContextEffectComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraContextEffectComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B020A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraContextEffectComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraContextEffectComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraContextEffectComponent()
	{
		if (!Z_Registration_Info_UClass_ULyraContextEffectComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraContextEffectComponent.OuterSingleton, Z_Construct_UClass_ULyraContextEffectComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraContextEffectComponent.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraContextEffectComponent>()
	{
		return ULyraContextEffectComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraContextEffectComponent);
	ULyraContextEffectComponent::~ULyraContextEffectComponent() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraContextEffectComponent, ULyraContextEffectComponent::StaticClass, TEXT("ULyraContextEffectComponent"), &Z_Registration_Info_UClass_ULyraContextEffectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraContextEffectComponent), 3110525025U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectComponent_h_1720258912(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
