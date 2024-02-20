// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/InteractionStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionStatics() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LYRAGAME_API UClass* Z_Construct_UClass_UInteractableTarget_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_UInteractionStatics();
	LYRAGAME_API UClass* Z_Construct_UClass_UInteractionStatics_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(UInteractionStatics::execGetInteractableTargetsFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_TARRAY_REF(TScriptInterface<IInteractableTarget>,Z_Param_Out_OutInteractableTargets);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInteractionStatics::GetInteractableTargetsFromActor(Z_Param_Actor,Z_Param_Out_OutInteractableTargets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionStatics::execGetActorFromInteractableTarget)
	{
		P_GET_TINTERFACE(IInteractableTarget,Z_Param_InteractableTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UInteractionStatics::GetActorFromInteractableTarget(Z_Param_InteractableTarget);
		P_NATIVE_END;
	}
	void UInteractionStatics::StaticRegisterNativesUInteractionStatics()
	{
		UClass* Class = UInteractionStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorFromInteractableTarget", &UInteractionStatics::execGetActorFromInteractableTarget },
			{ "GetInteractableTargetsFromActor", &UInteractionStatics::execGetInteractableTargetsFromActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics
	{
		struct InteractionStatics_eventGetActorFromInteractableTarget_Parms
		{
			TScriptInterface<IInteractableTarget> InteractableTarget;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InteractableTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::NewProp_InteractableTarget = { "InteractableTarget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractionStatics_eventGetActorFromInteractableTarget_Parms, InteractableTarget), Z_Construct_UClass_UInteractableTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractionStatics_eventGetActorFromInteractableTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::NewProp_InteractableTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interaction/InteractionStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionStatics, nullptr, "GetActorFromInteractableTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::InteractionStatics_eventGetActorFromInteractableTarget_Parms), Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics
	{
		struct InteractionStatics_eventGetInteractableTargetsFromActor_Parms
		{
			AActor* Actor;
			TArray<TScriptInterface<IInteractableTarget> > OutInteractableTargets;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_OutInteractableTargets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutInteractableTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractionStatics_eventGetInteractableTargetsFromActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::NewProp_OutInteractableTargets_Inner = { "OutInteractableTargets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInteractableTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::NewProp_OutInteractableTargets = { "OutInteractableTargets", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractionStatics_eventGetInteractableTargetsFromActor_Parms, OutInteractableTargets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::NewProp_OutInteractableTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::NewProp_OutInteractableTargets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interaction/InteractionStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionStatics, nullptr, "GetInteractableTargetsFromActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::InteractionStatics_eventGetInteractableTargetsFromActor_Parms), Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionStatics);
	UClass* Z_Construct_UClass_UInteractionStatics_NoRegister()
	{
		return UInteractionStatics::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionStatics_GetActorFromInteractableTarget, "GetActorFromInteractableTarget" }, // 3092595040
		{ &Z_Construct_UFunction_UInteractionStatics_GetInteractableTargetsFromActor, "GetInteractableTargetsFromActor" }, // 548630679
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**  */" },
		{ "IncludePath", "Interaction/InteractionStatics.h" },
		{ "ModuleRelativePath", "Interaction/InteractionStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionStatics_Statics::ClassParams = {
		&UInteractionStatics::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionStatics()
	{
		if (!Z_Registration_Info_UClass_UInteractionStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionStatics.OuterSingleton, Z_Construct_UClass_UInteractionStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractionStatics.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UInteractionStatics>()
	{
		return UInteractionStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionStatics);
	UInteractionStatics::~UInteractionStatics() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_InteractionStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_InteractionStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionStatics, UInteractionStatics::StaticClass, TEXT("UInteractionStatics"), &Z_Registration_Info_UClass_UInteractionStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionStatics), 2732171874U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_InteractionStatics_h_3026972842(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_InteractionStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_InteractionStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
