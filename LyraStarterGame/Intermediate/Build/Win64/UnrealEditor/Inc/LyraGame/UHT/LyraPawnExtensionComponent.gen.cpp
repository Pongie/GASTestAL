// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/LyraPawnExtensionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPawnExtensionComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnData_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnExtensionComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnExtensionComponent_NoRegister();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraPawnExtensionComponent::execOnRep_PawnData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PawnData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraPawnExtensionComponent::execGetLyraAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraAbilitySystemComponent**)Z_Param__Result=P_THIS->GetLyraAbilitySystemComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraPawnExtensionComponent::execFindPawnExtensionComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraPawnExtensionComponent**)Z_Param__Result=ULyraPawnExtensionComponent::FindPawnExtensionComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	void ULyraPawnExtensionComponent::StaticRegisterNativesULyraPawnExtensionComponent()
	{
		UClass* Class = ULyraPawnExtensionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindPawnExtensionComponent", &ULyraPawnExtensionComponent::execFindPawnExtensionComponent },
			{ "GetLyraAbilitySystemComponent", &ULyraPawnExtensionComponent::execGetLyraAbilitySystemComponent },
			{ "OnRep_PawnData", &ULyraPawnExtensionComponent::execOnRep_PawnData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics
	{
		struct LyraPawnExtensionComponent_eventFindPawnExtensionComponent_Parms
		{
			const AActor* Actor;
			ULyraPawnExtensionComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPawnExtensionComponent_eventFindPawnExtensionComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPawnExtensionComponent_eventFindPawnExtensionComponent_Parms, ReturnValue), Z_Construct_UClass_ULyraPawnExtensionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Pawn" },
		{ "Comment", "/** Returns the pawn extension component if one exists on the specified actor. */" },
		{ "ModuleRelativePath", "Character/LyraPawnExtensionComponent.h" },
		{ "ToolTip", "Returns the pawn extension component if one exists on the specified actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPawnExtensionComponent, nullptr, "FindPawnExtensionComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::LyraPawnExtensionComponent_eventFindPawnExtensionComponent_Parms), Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics
	{
		struct LyraPawnExtensionComponent_eventGetLyraAbilitySystemComponent_Parms
		{
			ULyraAbilitySystemComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPawnExtensionComponent_eventGetLyraAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Pawn" },
		{ "Comment", "/** Gets the current ability system component, which may be owned by a different actor */" },
		{ "ModuleRelativePath", "Character/LyraPawnExtensionComponent.h" },
		{ "ToolTip", "Gets the current ability system component, which may be owned by a different actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPawnExtensionComponent, nullptr, "GetLyraAbilitySystemComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::LyraPawnExtensionComponent_eventGetLyraAbilitySystemComponent_Parms), Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraPawnExtensionComponent_OnRep_PawnData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraPawnExtensionComponent_OnRep_PawnData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LyraPawnExtensionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPawnExtensionComponent_OnRep_PawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPawnExtensionComponent, nullptr, "OnRep_PawnData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraPawnExtensionComponent_OnRep_PawnData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnExtensionComponent_OnRep_PawnData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraPawnExtensionComponent_OnRep_PawnData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPawnExtensionComponent_OnRep_PawnData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraPawnExtensionComponent);
	UClass* Z_Construct_UClass_ULyraPawnExtensionComponent_NoRegister()
	{
		return ULyraPawnExtensionComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULyraPawnExtensionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PawnData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraPawnExtensionComponent_FindPawnExtensionComponent, "FindPawnExtensionComponent" }, // 4103751118
		{ &Z_Construct_UFunction_ULyraPawnExtensionComponent_GetLyraAbilitySystemComponent, "GetLyraAbilitySystemComponent" }, // 1536414460
		{ &Z_Construct_UFunction_ULyraPawnExtensionComponent_OnRep_PawnData, "OnRep_PawnData" }, // 214568258
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Component that adds functionality to all Pawn classes so it can be used for characters/vehicles/etc.\n * This coordinates the initialization of other components.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Character/LyraPawnExtensionComponent.h" },
		{ "ModuleRelativePath", "Character/LyraPawnExtensionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Component that adds functionality to all Pawn classes so it can be used for characters/vehicles/etc.\nThis coordinates the initialization of other components." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::NewProp_PawnData_MetaData[] = {
		{ "Category", "Lyra|Pawn" },
		{ "Comment", "/** Pawn data used to create the pawn. Specified from a spawn function or on a placed instance. */" },
		{ "ModuleRelativePath", "Character/LyraPawnExtensionComponent.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Pawn data used to create the pawn. Specified from a spawn function or on a placed instance." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::NewProp_PawnData = { "PawnData", "OnRep_PawnData", (EPropertyFlags)0x0024080100000821, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPawnExtensionComponent, PawnData), Z_Construct_UClass_ULyraPawnData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::NewProp_PawnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::NewProp_PawnData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Comment", "/** Pointer to the ability system component that is cached for convenience. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LyraPawnExtensionComponent.h" },
		{ "ToolTip", "Pointer to the ability system component that is cached for convenience." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPawnExtensionComponent, AbilitySystemComponent), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::NewProp_PawnData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::NewProp_AbilitySystemComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister, (int32)VTABLE_OFFSET(ULyraPawnExtensionComponent, IGameFrameworkInitStateInterface), false },  // 4121220673
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraPawnExtensionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::ClassParams = {
		&ULyraPawnExtensionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraPawnExtensionComponent()
	{
		if (!Z_Registration_Info_UClass_ULyraPawnExtensionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraPawnExtensionComponent.OuterSingleton, Z_Construct_UClass_ULyraPawnExtensionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraPawnExtensionComponent.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraPawnExtensionComponent>()
	{
		return ULyraPawnExtensionComponent::StaticClass();
	}

	void ULyraPawnExtensionComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PawnData(TEXT("PawnData"));

		const bool bIsValid = true
			&& Name_PawnData == ClassReps[(int32)ENetFields_Private::PawnData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULyraPawnExtensionComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraPawnExtensionComponent);
	ULyraPawnExtensionComponent::~ULyraPawnExtensionComponent() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraPawnExtensionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraPawnExtensionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraPawnExtensionComponent, ULyraPawnExtensionComponent::StaticClass, TEXT("ULyraPawnExtensionComponent"), &Z_Registration_Info_UClass_ULyraPawnExtensionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraPawnExtensionComponent), 2923999587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraPawnExtensionComponent_h_2146767985(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraPawnExtensionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraPawnExtensionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
