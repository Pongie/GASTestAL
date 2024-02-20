// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Tasks/AbilityTask_GrantNearbyInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_GrantNearbyInteraction() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction();
	LYRAGAME_API UClass* Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(UAbilityTask_GrantNearbyInteraction::execGrantAbilitiesForNearbyInteractors)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InteractionScanRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InteractionScanRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_GrantNearbyInteraction**)Z_Param__Result=UAbilityTask_GrantNearbyInteraction::GrantAbilitiesForNearbyInteractors(Z_Param_OwningAbility,Z_Param_InteractionScanRange,Z_Param_InteractionScanRate);
		P_NATIVE_END;
	}
	void UAbilityTask_GrantNearbyInteraction::StaticRegisterNativesUAbilityTask_GrantNearbyInteraction()
	{
		UClass* Class = UAbilityTask_GrantNearbyInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GrantAbilitiesForNearbyInteractors", &UAbilityTask_GrantNearbyInteraction::execGrantAbilitiesForNearbyInteractors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics
	{
		struct AbilityTask_GrantNearbyInteraction_eventGrantAbilitiesForNearbyInteractors_Parms
		{
			UGameplayAbility* OwningAbility;
			float InteractionScanRange;
			float InteractionScanRate;
			UAbilityTask_GrantNearbyInteraction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionScanRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionScanRate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_GrantNearbyInteraction_eventGrantAbilitiesForNearbyInteractors_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::NewProp_InteractionScanRange = { "InteractionScanRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_GrantNearbyInteraction_eventGrantAbilitiesForNearbyInteractors_Parms, InteractionScanRange), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::NewProp_InteractionScanRate = { "InteractionScanRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_GrantNearbyInteraction_eventGrantAbilitiesForNearbyInteractors_Parms, InteractionScanRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_GrantNearbyInteraction_eventGrantAbilitiesForNearbyInteractors_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::NewProp_InteractionScanRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::NewProp_InteractionScanRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Wait until an overlap occurs. This will need to be better fleshed out so we can specify game specific collision requirements */" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Interaction/Tasks/AbilityTask_GrantNearbyInteraction.h" },
		{ "ToolTip", "Wait until an overlap occurs. This will need to be better fleshed out so we can specify game specific collision requirements" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction, nullptr, "GrantAbilitiesForNearbyInteractors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::AbilityTask_GrantNearbyInteraction_eventGrantAbilitiesForNearbyInteractors_Parms), Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_GrantNearbyInteraction);
	UClass* Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_NoRegister()
	{
		return UAbilityTask_GrantNearbyInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_GrantNearbyInteraction_GrantAbilitiesForNearbyInteractors, "GrantAbilitiesForNearbyInteractors" }, // 2632156040
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interaction/Tasks/AbilityTask_GrantNearbyInteraction.h" },
		{ "ModuleRelativePath", "Interaction/Tasks/AbilityTask_GrantNearbyInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_GrantNearbyInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_Statics::ClassParams = {
		&UAbilityTask_GrantNearbyInteraction::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_GrantNearbyInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_GrantNearbyInteraction.OuterSingleton, Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_GrantNearbyInteraction.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UAbilityTask_GrantNearbyInteraction>()
	{
		return UAbilityTask_GrantNearbyInteraction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_GrantNearbyInteraction);
	UAbilityTask_GrantNearbyInteraction::~UAbilityTask_GrantNearbyInteraction() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_GrantNearbyInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_GrantNearbyInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction, UAbilityTask_GrantNearbyInteraction::StaticClass, TEXT("UAbilityTask_GrantNearbyInteraction"), &Z_Registration_Info_UClass_UAbilityTask_GrantNearbyInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_GrantNearbyInteraction), 3288694145U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_GrantNearbyInteraction_h_4181535064(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_GrantNearbyInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_GrantNearbyInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
