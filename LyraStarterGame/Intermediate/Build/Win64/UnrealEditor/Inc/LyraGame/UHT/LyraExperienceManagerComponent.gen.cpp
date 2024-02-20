// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/LyraExperienceManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraExperienceManagerComponent() {}
// Cross Module References
	COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingProcessInterface_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraExperienceDefinition_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraExperienceManagerComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraExperienceManagerComponent_NoRegister();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraExperienceManagerComponent::execOnRep_CurrentExperience)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentExperience();
		P_NATIVE_END;
	}
	void ULyraExperienceManagerComponent::StaticRegisterNativesULyraExperienceManagerComponent()
	{
		UClass* Class = ULyraExperienceManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_CurrentExperience", &ULyraExperienceManagerComponent::execOnRep_CurrentExperience },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraExperienceManagerComponent_OnRep_CurrentExperience_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraExperienceManagerComponent_OnRep_CurrentExperience_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameModes/LyraExperienceManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraExperienceManagerComponent_OnRep_CurrentExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraExperienceManagerComponent, nullptr, "OnRep_CurrentExperience", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraExperienceManagerComponent_OnRep_CurrentExperience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraExperienceManagerComponent_OnRep_CurrentExperience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraExperienceManagerComponent_OnRep_CurrentExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraExperienceManagerComponent_OnRep_CurrentExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraExperienceManagerComponent);
	UClass* Z_Construct_UClass_ULyraExperienceManagerComponent_NoRegister()
	{
		return ULyraExperienceManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULyraExperienceManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentExperience_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentExperience;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraExperienceManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameStateComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraExperienceManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraExperienceManagerComponent_OnRep_CurrentExperience, "OnRep_CurrentExperience" }, // 1885769900
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraExperienceManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GameModes/LyraExperienceManagerComponent.h" },
		{ "ModuleRelativePath", "GameModes/LyraExperienceManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraExperienceManagerComponent_Statics::NewProp_CurrentExperience_MetaData[] = {
		{ "ModuleRelativePath", "GameModes/LyraExperienceManagerComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraExperienceManagerComponent_Statics::NewProp_CurrentExperience = { "CurrentExperience", "OnRep_CurrentExperience", (EPropertyFlags)0x0044000100000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraExperienceManagerComponent, CurrentExperience), Z_Construct_UClass_ULyraExperienceDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraExperienceManagerComponent_Statics::NewProp_CurrentExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceManagerComponent_Statics::NewProp_CurrentExperience_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraExperienceManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraExperienceManagerComponent_Statics::NewProp_CurrentExperience,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULyraExperienceManagerComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULoadingProcessInterface_NoRegister, (int32)VTABLE_OFFSET(ULyraExperienceManagerComponent, ILoadingProcessInterface), false },  // 4079525349
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraExperienceManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraExperienceManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraExperienceManagerComponent_Statics::ClassParams = {
		&ULyraExperienceManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraExperienceManagerComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceManagerComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraExperienceManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraExperienceManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraExperienceManagerComponent()
	{
		if (!Z_Registration_Info_UClass_ULyraExperienceManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraExperienceManagerComponent.OuterSingleton, Z_Construct_UClass_ULyraExperienceManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraExperienceManagerComponent.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraExperienceManagerComponent>()
	{
		return ULyraExperienceManagerComponent::StaticClass();
	}

	void ULyraExperienceManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentExperience(TEXT("CurrentExperience"));

		const bool bIsValid = true
			&& Name_CurrentExperience == ClassReps[(int32)ENetFields_Private::CurrentExperience].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULyraExperienceManagerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraExperienceManagerComponent);
	ULyraExperienceManagerComponent::~ULyraExperienceManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraExperienceManagerComponent, ULyraExperienceManagerComponent::StaticClass, TEXT("ULyraExperienceManagerComponent"), &Z_Registration_Info_UClass_ULyraExperienceManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraExperienceManagerComponent), 3636894415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceManagerComponent_h_2894726145(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
