// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/InteractionQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionQuery() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionQuery();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractionQuery;
class UScriptStruct* FInteractionQuery::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionQuery.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractionQuery.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionQuery, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("InteractionQuery"));
	}
	return Z_Registration_Info_UScriptStruct_InteractionQuery.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FInteractionQuery>()
{
	return FInteractionQuery::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInteractionQuery_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestingAvatar_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RequestingAvatar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestingController_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RequestingController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalObjectData_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OptionalObjectData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionQuery_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Interaction/InteractionQuery.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionQuery>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_RequestingAvatar_MetaData[] = {
		{ "Category", "InteractionQuery" },
		{ "Comment", "/** The requesting pawn. */" },
		{ "ModuleRelativePath", "Interaction/InteractionQuery.h" },
		{ "ToolTip", "The requesting pawn." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_RequestingAvatar = { "RequestingAvatar", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionQuery, RequestingAvatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_RequestingAvatar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_RequestingAvatar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_RequestingController_MetaData[] = {
		{ "Category", "InteractionQuery" },
		{ "Comment", "/** Allow us to specify a controller - does not need to match the owner of the requesting avatar. */" },
		{ "ModuleRelativePath", "Interaction/InteractionQuery.h" },
		{ "ToolTip", "Allow us to specify a controller - does not need to match the owner of the requesting avatar." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_RequestingController = { "RequestingController", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionQuery, RequestingController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_RequestingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_RequestingController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_OptionalObjectData_MetaData[] = {
		{ "Category", "InteractionQuery" },
		{ "Comment", "/** A generic UObject to shove in extra data required for the interaction */" },
		{ "ModuleRelativePath", "Interaction/InteractionQuery.h" },
		{ "ToolTip", "A generic UObject to shove in extra data required for the interaction" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_OptionalObjectData = { "OptionalObjectData", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionQuery, OptionalObjectData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_OptionalObjectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_OptionalObjectData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_RequestingAvatar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_RequestingController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewProp_OptionalObjectData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionQuery_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"InteractionQuery",
		sizeof(FInteractionQuery),
		alignof(FInteractionQuery),
		Z_Construct_UScriptStruct_FInteractionQuery_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionQuery_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionQuery_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionQuery_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractionQuery()
	{
		if (!Z_Registration_Info_UScriptStruct_InteractionQuery.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractionQuery.InnerSingleton, Z_Construct_UScriptStruct_FInteractionQuery_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InteractionQuery.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_InteractionQuery_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_InteractionQuery_h_Statics::ScriptStructInfo[] = {
		{ FInteractionQuery::StaticStruct, Z_Construct_UScriptStruct_FInteractionQuery_Statics::NewStructOps, TEXT("InteractionQuery"), &Z_Registration_Info_UScriptStruct_InteractionQuery, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractionQuery), 362567133U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_InteractionQuery_h_1239866707(TEXT("/Script/LyraGame"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_InteractionQuery_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Interaction_InteractionQuery_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
