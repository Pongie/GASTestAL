// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/LyraHeroComponent.h"
#include "Input/LyraMappableConfigPair.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraHeroComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraMode_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraHeroComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraHeroComponent_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FMappableConfigPair();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraHeroComponent::execFindHeroComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraHeroComponent**)Z_Param__Result=ULyraHeroComponent::FindHeroComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	void ULyraHeroComponent::StaticRegisterNativesULyraHeroComponent()
	{
		UClass* Class = ULyraHeroComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindHeroComponent", &ULyraHeroComponent::execFindHeroComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics
	{
		struct LyraHeroComponent_eventFindHeroComponent_Parms
		{
			const AActor* Actor;
			ULyraHeroComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraHeroComponent_eventFindHeroComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraHeroComponent_eventFindHeroComponent_Parms, ReturnValue), Z_Construct_UClass_ULyraHeroComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Hero" },
		{ "Comment", "/** Returns the hero component if one exists on the specified actor. */" },
		{ "ModuleRelativePath", "Character/LyraHeroComponent.h" },
		{ "ToolTip", "Returns the hero component if one exists on the specified actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraHeroComponent, nullptr, "FindHeroComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::LyraHeroComponent_eventFindHeroComponent_Parms), Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraHeroComponent);
	UClass* Z_Construct_UClass_ULyraHeroComponent_NoRegister()
	{
		return ULyraHeroComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULyraHeroComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInputConfigs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultInputConfigs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCameraMode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityCameraMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraHeroComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraHeroComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraHeroComponent_FindHeroComponent, "FindHeroComponent" }, // 777152341
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraHeroComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Component that sets up input and camera handling for player controlled pawns (or bots that simulate players).\n * This depends on a PawnExtensionComponent to coordinate initialization.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Character/LyraHeroComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Character/LyraHeroComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Component that sets up input and camera handling for player controlled pawns (or bots that simulate players).\nThis depends on a PawnExtensionComponent to coordinate initialization." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraHeroComponent_Statics::NewProp_DefaultInputConfigs_Inner = { "DefaultInputConfigs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMappableConfigPair, METADATA_PARAMS(nullptr, 0) }; // 2889537211
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraHeroComponent_Statics::NewProp_DefaultInputConfigs_MetaData[] = {
		{ "Category", "LyraHeroComponent" },
		{ "Comment", "/**\n\x09 * Input Configs that should be added to this player when initializing the input. These configs\n\x09 * will NOT be registered with the settings because they are added at runtime. If you want the config\n\x09 * pair to be in the settings, then add it via the GameFeatureAction_AddInputConfig\n\x09 * \n\x09 * NOTE: You should only add to this if you do not have a game feature plugin accessible to you.\n\x09 * If you do, then use the GameFeatureAction_AddInputConfig instead. \n\x09 */" },
		{ "ModuleRelativePath", "Character/LyraHeroComponent.h" },
		{ "ToolTip", "Input Configs that should be added to this player when initializing the input. These configs\nwill NOT be registered with the settings because they are added at runtime. If you want the config\npair to be in the settings, then add it via the GameFeatureAction_AddInputConfig\n\nNOTE: You should only add to this if you do not have a game feature plugin accessible to you.\nIf you do, then use the GameFeatureAction_AddInputConfig instead." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraHeroComponent_Statics::NewProp_DefaultInputConfigs = { "DefaultInputConfigs", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraHeroComponent, DefaultInputConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraHeroComponent_Statics::NewProp_DefaultInputConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHeroComponent_Statics::NewProp_DefaultInputConfigs_MetaData)) }; // 2889537211
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraHeroComponent_Statics::NewProp_AbilityCameraMode_MetaData[] = {
		{ "Comment", "/** Camera mode set by an ability. */" },
		{ "ModuleRelativePath", "Character/LyraHeroComponent.h" },
		{ "ToolTip", "Camera mode set by an ability." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraHeroComponent_Statics::NewProp_AbilityCameraMode = { "AbilityCameraMode", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraHeroComponent, AbilityCameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraCameraMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraHeroComponent_Statics::NewProp_AbilityCameraMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHeroComponent_Statics::NewProp_AbilityCameraMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraHeroComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraHeroComponent_Statics::NewProp_DefaultInputConfigs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraHeroComponent_Statics::NewProp_DefaultInputConfigs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraHeroComponent_Statics::NewProp_AbilityCameraMode,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULyraHeroComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister, (int32)VTABLE_OFFSET(ULyraHeroComponent, IGameFrameworkInitStateInterface), false },  // 4121220673
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraHeroComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraHeroComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraHeroComponent_Statics::ClassParams = {
		&ULyraHeroComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraHeroComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHeroComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraHeroComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraHeroComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraHeroComponent()
	{
		if (!Z_Registration_Info_UClass_ULyraHeroComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraHeroComponent.OuterSingleton, Z_Construct_UClass_ULyraHeroComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraHeroComponent.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraHeroComponent>()
	{
		return ULyraHeroComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraHeroComponent);
	ULyraHeroComponent::~ULyraHeroComponent() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraHeroComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraHeroComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraHeroComponent, ULyraHeroComponent::StaticClass, TEXT("ULyraHeroComponent"), &Z_Registration_Info_UClass_ULyraHeroComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraHeroComponent), 3419002818U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraHeroComponent_h_2228475562(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraHeroComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraHeroComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
