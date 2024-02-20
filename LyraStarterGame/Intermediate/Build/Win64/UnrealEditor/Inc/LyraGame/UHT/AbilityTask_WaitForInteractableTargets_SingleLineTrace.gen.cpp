// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SingleLineTrace.h"
#include "../../Source/Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "Interaction/InteractionQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitForInteractableTargets_SingleLineTrace() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo();
	LYRAGAME_API UClass* Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets();
	LYRAGAME_API UClass* Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace();
	LYRAGAME_API UClass* Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionQuery();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(UAbilityTask_WaitForInteractableTargets_SingleLineTrace::execWaitForInteractableTargets_SingleLineTrace)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_STRUCT(FInteractionQuery,Z_Param_InteractionQuery);
		P_GET_STRUCT(FCollisionProfileName,Z_Param_TraceProfile);
		P_GET_STRUCT(FGameplayAbilityTargetingLocationInfo,Z_Param_StartLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InteractionScanRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InteractionScanRate);
		P_GET_UBOOL(Z_Param_bShowDebug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitForInteractableTargets_SingleLineTrace**)Z_Param__Result=UAbilityTask_WaitForInteractableTargets_SingleLineTrace::WaitForInteractableTargets_SingleLineTrace(Z_Param_OwningAbility,Z_Param_InteractionQuery,Z_Param_TraceProfile,Z_Param_StartLocation,Z_Param_InteractionScanRange,Z_Param_InteractionScanRate,Z_Param_bShowDebug);
		P_NATIVE_END;
	}
	void UAbilityTask_WaitForInteractableTargets_SingleLineTrace::StaticRegisterNativesUAbilityTask_WaitForInteractableTargets_SingleLineTrace()
	{
		UClass* Class = UAbilityTask_WaitForInteractableTargets_SingleLineTrace::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitForInteractableTargets_SingleLineTrace", &UAbilityTask_WaitForInteractableTargets_SingleLineTrace::execWaitForInteractableTargets_SingleLineTrace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics
	{
		struct AbilityTask_WaitForInteractableTargets_SingleLineTrace_eventWaitForInteractableTargets_SingleLineTrace_Parms
		{
			UGameplayAbility* OwningAbility;
			FInteractionQuery InteractionQuery;
			FCollisionProfileName TraceProfile;
			FGameplayAbilityTargetingLocationInfo StartLocation;
			float InteractionScanRange;
			float InteractionScanRate;
			bool bShowDebug;
			UAbilityTask_WaitForInteractableTargets_SingleLineTrace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionQuery;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceProfile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionScanRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionScanRate;
		static void NewProp_bShowDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebug;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitForInteractableTargets_SingleLineTrace_eventWaitForInteractableTargets_SingleLineTrace_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_InteractionQuery = { "InteractionQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitForInteractableTargets_SingleLineTrace_eventWaitForInteractableTargets_SingleLineTrace_Parms, InteractionQuery), Z_Construct_UScriptStruct_FInteractionQuery, METADATA_PARAMS(nullptr, 0) }; // 362567133
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_TraceProfile = { "TraceProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitForInteractableTargets_SingleLineTrace_eventWaitForInteractableTargets_SingleLineTrace_Parms, TraceProfile), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(nullptr, 0) }; // 2816100078
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitForInteractableTargets_SingleLineTrace_eventWaitForInteractableTargets_SingleLineTrace_Parms, StartLocation), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(nullptr, 0) }; // 1075373019
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_InteractionScanRange = { "InteractionScanRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitForInteractableTargets_SingleLineTrace_eventWaitForInteractableTargets_SingleLineTrace_Parms, InteractionScanRange), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_InteractionScanRate = { "InteractionScanRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitForInteractableTargets_SingleLineTrace_eventWaitForInteractableTargets_SingleLineTrace_Parms, InteractionScanRate), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_bShowDebug_SetBit(void* Obj)
	{
		((AbilityTask_WaitForInteractableTargets_SingleLineTrace_eventWaitForInteractableTargets_SingleLineTrace_Parms*)Obj)->bShowDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_bShowDebug = { "bShowDebug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_WaitForInteractableTargets_SingleLineTrace_eventWaitForInteractableTargets_SingleLineTrace_Parms), &Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_bShowDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitForInteractableTargets_SingleLineTrace_eventWaitForInteractableTargets_SingleLineTrace_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_InteractionQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_TraceProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_StartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_InteractionScanRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_InteractionScanRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_bShowDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Wait until we trace new set of interactables.  This task automatically loops. */" },
		{ "CPP_Default_bShowDebug", "false" },
		{ "CPP_Default_InteractionScanRange", "100.000000" },
		{ "CPP_Default_InteractionScanRate", "0.100000" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SingleLineTrace.h" },
		{ "ToolTip", "Wait until we trace new set of interactables.  This task automatically loops." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace, nullptr, "WaitForInteractableTargets_SingleLineTrace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::AbilityTask_WaitForInteractableTargets_SingleLineTrace_eventWaitForInteractableTargets_SingleLineTrace_Parms), Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitForInteractableTargets_SingleLineTrace);
	UClass* Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_NoRegister()
	{
		return UAbilityTask_WaitForInteractableTargets_SingleLineTrace::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_WaitForInteractableTargets_SingleLineTrace, "WaitForInteractableTargets_SingleLineTrace" }, // 1768460224
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SingleLineTrace.h" },
		{ "ModuleRelativePath", "Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SingleLineTrace.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_InteractionQuery_MetaData[] = {
		{ "ModuleRelativePath", "Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SingleLineTrace.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_InteractionQuery = { "InteractionQuery", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitForInteractableTargets_SingleLineTrace, InteractionQuery), Z_Construct_UScriptStruct_FInteractionQuery, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_InteractionQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_InteractionQuery_MetaData)) }; // 362567133
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_StartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Interaction/Tasks/AbilityTask_WaitForInteractableTargets_SingleLineTrace.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitForInteractableTargets_SingleLineTrace, StartLocation), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_StartLocation_MetaData)) }; // 1075373019
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_InteractionQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::NewProp_StartLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitForInteractableTargets_SingleLineTrace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::ClassParams = {
		&UAbilityTask_WaitForInteractableTargets_SingleLineTrace::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UAbilityTask_WaitForInteractableTargets_SingleLineTrace>()
	{
		return UAbilityTask_WaitForInteractableTargets_SingleLineTrace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitForInteractableTargets_SingleLineTrace);
	UAbilityTask_WaitForInteractableTargets_SingleLineTrace::~UAbilityTask_WaitForInteractableTargets_SingleLineTrace() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace, UAbilityTask_WaitForInteractableTargets_SingleLineTrace::StaticClass, TEXT("UAbilityTask_WaitForInteractableTargets_SingleLineTrace"), &Z_Registration_Info_UClass_UAbilityTask_WaitForInteractableTargets_SingleLineTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitForInteractableTargets_SingleLineTrace), 3167526199U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_3296667018(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_SingleLineTrace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
