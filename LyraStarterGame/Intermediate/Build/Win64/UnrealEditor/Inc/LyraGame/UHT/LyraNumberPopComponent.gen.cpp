// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Feedback/NumberPops/LyraNumberPopComponent.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraNumberPopComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraNumberPopComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraNumberPopComponent_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraNumberPopRequest();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UControllerComponent();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraNumberPopRequest;
class UScriptStruct* FLyraNumberPopRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraNumberPopRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraNumberPopRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraNumberPopRequest, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraNumberPopRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LyraNumberPopRequest.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraNumberPopRequest>()
{
	return FLyraNumberPopRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberToDisplay_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberToDisplay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCriticalDamage_MetaData[];
#endif
		static void NewProp_bIsCriticalDamage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCriticalDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraNumberPopRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "Category", "Lyra|Number Pops" },
		{ "Comment", "// The world location to create the number pop at\n" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent.h" },
		{ "ToolTip", "The world location to create the number pop at" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraNumberPopRequest, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_WorldLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_SourceTags_MetaData[] = {
		{ "Category", "Lyra|Number Pops" },
		{ "Comment", "// Tags related to the source/cause of the number pop (for determining a style)\n" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent.h" },
		{ "ToolTip", "Tags related to the source/cause of the number pop (for determining a style)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraNumberPopRequest, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_SourceTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_SourceTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_TargetTags_MetaData[] = {
		{ "Category", "Lyra|Number Pops" },
		{ "Comment", "// Tags related to the target of the number pop (for determining a style)\n" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent.h" },
		{ "ToolTip", "Tags related to the target of the number pop (for determining a style)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraNumberPopRequest, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_TargetTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_TargetTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_NumberToDisplay_MetaData[] = {
		{ "Category", "Lyra|Number Pops" },
		{ "Comment", "// The number to display\n" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent.h" },
		{ "ToolTip", "The number to display" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_NumberToDisplay = { "NumberToDisplay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraNumberPopRequest, NumberToDisplay), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_NumberToDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_NumberToDisplay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_bIsCriticalDamage_MetaData[] = {
		{ "Category", "Lyra|Number Pops" },
		{ "Comment", "// Whether the number is 'critical' or not (@TODO: move to a tag)\n" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent.h" },
		{ "ToolTip", "Whether the number is 'critical' or not (@TODO: move to a tag)" },
	};
#endif
	void Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_bIsCriticalDamage_SetBit(void* Obj)
	{
		((FLyraNumberPopRequest*)Obj)->bIsCriticalDamage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_bIsCriticalDamage = { "bIsCriticalDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLyraNumberPopRequest), &Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_bIsCriticalDamage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_bIsCriticalDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_bIsCriticalDamage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_SourceTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_TargetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_NumberToDisplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewProp_bIsCriticalDamage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraNumberPopRequest",
		sizeof(FLyraNumberPopRequest),
		alignof(FLyraNumberPopRequest),
		Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraNumberPopRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraNumberPopRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraNumberPopRequest.InnerSingleton, Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraNumberPopRequest.InnerSingleton;
	}
	DEFINE_FUNCTION(ULyraNumberPopComponent::execAddNumberPop)
	{
		P_GET_STRUCT_REF(FLyraNumberPopRequest,Z_Param_Out_NewRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddNumberPop(Z_Param_Out_NewRequest);
		P_NATIVE_END;
	}
	void ULyraNumberPopComponent::StaticRegisterNativesULyraNumberPopComponent()
	{
		UClass* Class = ULyraNumberPopComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNumberPop", &ULyraNumberPopComponent::execAddNumberPop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraNumberPopComponent_AddNumberPop_Statics
	{
		struct LyraNumberPopComponent_eventAddNumberPop_Parms
		{
			FLyraNumberPopRequest NewRequest;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRequest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraNumberPopComponent_AddNumberPop_Statics::NewProp_NewRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraNumberPopComponent_AddNumberPop_Statics::NewProp_NewRequest = { "NewRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraNumberPopComponent_eventAddNumberPop_Parms, NewRequest), Z_Construct_UScriptStruct_FLyraNumberPopRequest, METADATA_PARAMS(Z_Construct_UFunction_ULyraNumberPopComponent_AddNumberPop_Statics::NewProp_NewRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraNumberPopComponent_AddNumberPop_Statics::NewProp_NewRequest_MetaData)) }; // 839232802
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraNumberPopComponent_AddNumberPop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraNumberPopComponent_AddNumberPop_Statics::NewProp_NewRequest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraNumberPopComponent_AddNumberPop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Foo" },
		{ "Comment", "/** Adds a damage number to the damage number list for visualization */" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent.h" },
		{ "ToolTip", "Adds a damage number to the damage number list for visualization" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraNumberPopComponent_AddNumberPop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraNumberPopComponent, nullptr, "AddNumberPop", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraNumberPopComponent_AddNumberPop_Statics::LyraNumberPopComponent_eventAddNumberPop_Parms), Z_Construct_UFunction_ULyraNumberPopComponent_AddNumberPop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraNumberPopComponent_AddNumberPop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraNumberPopComponent_AddNumberPop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraNumberPopComponent_AddNumberPop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraNumberPopComponent_AddNumberPop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraNumberPopComponent_AddNumberPop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraNumberPopComponent);
	UClass* Z_Construct_UClass_ULyraNumberPopComponent_NoRegister()
	{
		return ULyraNumberPopComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULyraNumberPopComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraNumberPopComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControllerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraNumberPopComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraNumberPopComponent_AddNumberPop, "AddNumberPop" }, // 2404038947
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Feedback/NumberPops/LyraNumberPopComponent.h" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraNumberPopComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraNumberPopComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraNumberPopComponent_Statics::ClassParams = {
		&ULyraNumberPopComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraNumberPopComponent()
	{
		if (!Z_Registration_Info_UClass_ULyraNumberPopComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraNumberPopComponent.OuterSingleton, Z_Construct_UClass_ULyraNumberPopComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraNumberPopComponent.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraNumberPopComponent>()
	{
		return ULyraNumberPopComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraNumberPopComponent);
	ULyraNumberPopComponent::~ULyraNumberPopComponent() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_h_Statics::ScriptStructInfo[] = {
		{ FLyraNumberPopRequest::StaticStruct, Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics::NewStructOps, TEXT("LyraNumberPopRequest"), &Z_Registration_Info_UScriptStruct_LyraNumberPopRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraNumberPopRequest), 839232802U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraNumberPopComponent, ULyraNumberPopComponent::StaticClass, TEXT("ULyraNumberPopComponent"), &Z_Registration_Info_UClass_ULyraNumberPopComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraNumberPopComponent), 4197919104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_h_2084381916(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
