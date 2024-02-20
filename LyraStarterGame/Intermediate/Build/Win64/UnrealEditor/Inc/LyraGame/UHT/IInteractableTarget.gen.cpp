// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IInteractableTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIInteractableTarget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	LYRAGAME_API UClass* Z_Construct_UClass_UInteractableTarget();
	LYRAGAME_API UClass* Z_Construct_UClass_UInteractableTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void UInteractableTarget::StaticRegisterNativesUInteractableTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractableTarget);
	UClass* Z_Construct_UClass_UInteractableTarget_NoRegister()
	{
		return UInteractableTarget::StaticClass();
	}
	struct Z_Construct_UClass_UInteractableTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractableTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableTarget_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Interaction/IInteractableTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractableTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractableTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractableTarget_Statics::ClassParams = {
		&UInteractableTarget::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractableTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractableTarget()
	{
		if (!Z_Registration_Info_UClass_UInteractableTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractableTarget.OuterSingleton, Z_Construct_UClass_UInteractableTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractableTarget.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UInteractableTarget>()
	{
		return UInteractableTarget::StaticClass();
	}
	UInteractableTarget::UInteractableTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableTarget);
	UInteractableTarget::~UInteractableTarget() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_IInteractableTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_IInteractableTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractableTarget, UInteractableTarget::StaticClass, TEXT("UInteractableTarget"), &Z_Registration_Info_UClass_UInteractableTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractableTarget), 2201191718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_IInteractableTarget_h_1874587738(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_IInteractableTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_IInteractableTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
