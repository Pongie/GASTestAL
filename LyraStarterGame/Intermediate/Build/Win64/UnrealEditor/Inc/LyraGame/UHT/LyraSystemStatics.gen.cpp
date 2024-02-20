// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "System/LyraSystemStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraSystemStatics() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSystemStatics();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSystemStatics_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraSystemStatics::execFindComponentsByClass)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_OBJECT(UClass,Z_Param_ComponentClass);
		P_GET_UBOOL(Z_Param_bIncludeChildActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UActorComponent*>*)Z_Param__Result=ULyraSystemStatics::FindComponentsByClass(Z_Param_TargetActor,Z_Param_ComponentClass,Z_Param_bIncludeChildActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSystemStatics::execSetColorParameterValueOnAllMeshComponents)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FLinearColor,Z_Param_ParameterValue);
		P_GET_UBOOL(Z_Param_bIncludeChildActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULyraSystemStatics::SetColorParameterValueOnAllMeshComponents(Z_Param_TargetActor,Z_Param_ParameterName,Z_Param_ParameterValue,Z_Param_bIncludeChildActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSystemStatics::execSetVectorParameterValueOnAllMeshComponents)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FVector,Z_Param_ParameterValue);
		P_GET_UBOOL(Z_Param_bIncludeChildActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULyraSystemStatics::SetVectorParameterValueOnAllMeshComponents(Z_Param_TargetActor,Z_Param_ParameterName,Z_Param_ParameterValue,Z_Param_bIncludeChildActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSystemStatics::execSetScalarParameterValueOnAllMeshComponents)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ParameterValue);
		P_GET_UBOOL(Z_Param_bIncludeChildActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULyraSystemStatics::SetScalarParameterValueOnAllMeshComponents(Z_Param_TargetActor,Z_Param_ParameterName,Z_Param_ParameterValue,Z_Param_bIncludeChildActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSystemStatics::execPlayNextGame)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULyraSystemStatics::PlayNextGame(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSystemStatics::execGetPrimaryAssetIdFromUserFacingExperienceName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AdvertisedExperienceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPrimaryAssetId*)Z_Param__Result=ULyraSystemStatics::GetPrimaryAssetIdFromUserFacingExperienceName(Z_Param_AdvertisedExperienceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraSystemStatics::execGetTypedSoftObjectReferenceFromPrimaryAssetId)
	{
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_PrimaryAssetId);
		P_GET_OBJECT(UClass,Z_Param_ExpectedAssetType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UObject>*)Z_Param__Result=ULyraSystemStatics::GetTypedSoftObjectReferenceFromPrimaryAssetId(Z_Param_PrimaryAssetId,Z_Param_ExpectedAssetType);
		P_NATIVE_END;
	}
	void ULyraSystemStatics::StaticRegisterNativesULyraSystemStatics()
	{
		UClass* Class = ULyraSystemStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindComponentsByClass", &ULyraSystemStatics::execFindComponentsByClass },
			{ "GetPrimaryAssetIdFromUserFacingExperienceName", &ULyraSystemStatics::execGetPrimaryAssetIdFromUserFacingExperienceName },
			{ "GetTypedSoftObjectReferenceFromPrimaryAssetId", &ULyraSystemStatics::execGetTypedSoftObjectReferenceFromPrimaryAssetId },
			{ "PlayNextGame", &ULyraSystemStatics::execPlayNextGame },
			{ "SetColorParameterValueOnAllMeshComponents", &ULyraSystemStatics::execSetColorParameterValueOnAllMeshComponents },
			{ "SetScalarParameterValueOnAllMeshComponents", &ULyraSystemStatics::execSetScalarParameterValueOnAllMeshComponents },
			{ "SetVectorParameterValueOnAllMeshComponents", &ULyraSystemStatics::execSetVectorParameterValueOnAllMeshComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics
	{
		struct LyraSystemStatics_eventFindComponentsByClass_Parms
		{
			AActor* TargetActor;
			TSubclassOf<UActorComponent>  ComponentClass;
			bool bIncludeChildActors;
			TArray<UActorComponent*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static void NewProp_bIncludeChildActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildActors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSystemStatics_eventFindComponentsByClass_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSystemStatics_eventFindComponentsByClass_Parms, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::NewProp_bIncludeChildActors_SetBit(void* Obj)
	{
		((LyraSystemStatics_eventFindComponentsByClass_Parms*)Obj)->bIncludeChildActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::NewProp_bIncludeChildActors = { "bIncludeChildActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraSystemStatics_eventFindComponentsByClass_Parms), &Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::NewProp_bIncludeChildActors_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSystemStatics_eventFindComponentsByClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::NewProp_ComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::NewProp_bIncludeChildActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "// Gets all the components that inherit from the given class\n" },
		{ "ComponentClass", "/Script/Engine.ActorComponent" },
		{ "CPP_Default_bIncludeChildActors", "true" },
		{ "DefaultToSelf", "TargetActor" },
		{ "DeterminesOutputType", "ComponentClass" },
		{ "ModuleRelativePath", "System/LyraSystemStatics.h" },
		{ "ToolTip", "Gets all the components that inherit from the given class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSystemStatics, nullptr, "FindComponentsByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::LyraSystemStatics_eventFindComponentsByClass_Parms), Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSystemStatics_GetPrimaryAssetIdFromUserFacingExperienceName_Statics
	{
		struct LyraSystemStatics_eventGetPrimaryAssetIdFromUserFacingExperienceName_Parms
		{
			FString AdvertisedExperienceID;
			FPrimaryAssetId ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvertisedExperienceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdvertisedExperienceID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSystemStatics_GetPrimaryAssetIdFromUserFacingExperienceName_Statics::NewProp_AdvertisedExperienceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraSystemStatics_GetPrimaryAssetIdFromUserFacingExperienceName_Statics::NewProp_AdvertisedExperienceID = { "AdvertisedExperienceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSystemStatics_eventGetPrimaryAssetIdFromUserFacingExperienceName_Parms, AdvertisedExperienceID), METADATA_PARAMS(Z_Construct_UFunction_ULyraSystemStatics_GetPrimaryAssetIdFromUserFacingExperienceName_Statics::NewProp_AdvertisedExperienceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_GetPrimaryAssetIdFromUserFacingExperienceName_Statics::NewProp_AdvertisedExperienceID_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraSystemStatics_GetPrimaryAssetIdFromUserFacingExperienceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSystemStatics_eventGetPrimaryAssetIdFromUserFacingExperienceName_Parms, ReturnValue), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSystemStatics_GetPrimaryAssetIdFromUserFacingExperienceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_GetPrimaryAssetIdFromUserFacingExperienceName_Statics::NewProp_AdvertisedExperienceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_GetPrimaryAssetIdFromUserFacingExperienceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSystemStatics_GetPrimaryAssetIdFromUserFacingExperienceName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/LyraSystemStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSystemStatics_GetPrimaryAssetIdFromUserFacingExperienceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSystemStatics, nullptr, "GetPrimaryAssetIdFromUserFacingExperienceName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSystemStatics_GetPrimaryAssetIdFromUserFacingExperienceName_Statics::LyraSystemStatics_eventGetPrimaryAssetIdFromUserFacingExperienceName_Parms), Z_Construct_UFunction_ULyraSystemStatics_GetPrimaryAssetIdFromUserFacingExperienceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_GetPrimaryAssetIdFromUserFacingExperienceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSystemStatics_GetPrimaryAssetIdFromUserFacingExperienceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_GetPrimaryAssetIdFromUserFacingExperienceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSystemStatics_GetPrimaryAssetIdFromUserFacingExperienceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSystemStatics_GetPrimaryAssetIdFromUserFacingExperienceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSystemStatics_GetTypedSoftObjectReferenceFromPrimaryAssetId_Statics
	{
		struct LyraSystemStatics_eventGetTypedSoftObjectReferenceFromPrimaryAssetId_Parms
		{
			FPrimaryAssetId PrimaryAssetId;
			TSubclassOf<UObject>  ExpectedAssetType;
			TSoftObjectPtr<UObject> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetId;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ExpectedAssetType;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraSystemStatics_GetTypedSoftObjectReferenceFromPrimaryAssetId_Statics::NewProp_PrimaryAssetId = { "PrimaryAssetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSystemStatics_eventGetTypedSoftObjectReferenceFromPrimaryAssetId_Parms, PrimaryAssetId), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraSystemStatics_GetTypedSoftObjectReferenceFromPrimaryAssetId_Statics::NewProp_ExpectedAssetType = { "ExpectedAssetType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSystemStatics_eventGetTypedSoftObjectReferenceFromPrimaryAssetId_Parms, ExpectedAssetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULyraSystemStatics_GetTypedSoftObjectReferenceFromPrimaryAssetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSystemStatics_eventGetTypedSoftObjectReferenceFromPrimaryAssetId_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSystemStatics_GetTypedSoftObjectReferenceFromPrimaryAssetId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_GetTypedSoftObjectReferenceFromPrimaryAssetId_Statics::NewProp_PrimaryAssetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_GetTypedSoftObjectReferenceFromPrimaryAssetId_Statics::NewProp_ExpectedAssetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_GetTypedSoftObjectReferenceFromPrimaryAssetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSystemStatics_GetTypedSoftObjectReferenceFromPrimaryAssetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetManager" },
		{ "Comment", "/** Returns the soft object reference associated with a Primary Asset Id, this works even if the asset is not loaded */" },
		{ "DeterminesOutputType", "ExpectedAssetType" },
		{ "ModuleRelativePath", "System/LyraSystemStatics.h" },
		{ "ToolTip", "Returns the soft object reference associated with a Primary Asset Id, this works even if the asset is not loaded" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSystemStatics_GetTypedSoftObjectReferenceFromPrimaryAssetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSystemStatics, nullptr, "GetTypedSoftObjectReferenceFromPrimaryAssetId", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSystemStatics_GetTypedSoftObjectReferenceFromPrimaryAssetId_Statics::LyraSystemStatics_eventGetTypedSoftObjectReferenceFromPrimaryAssetId_Parms), Z_Construct_UFunction_ULyraSystemStatics_GetTypedSoftObjectReferenceFromPrimaryAssetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_GetTypedSoftObjectReferenceFromPrimaryAssetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSystemStatics_GetTypedSoftObjectReferenceFromPrimaryAssetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_GetTypedSoftObjectReferenceFromPrimaryAssetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSystemStatics_GetTypedSoftObjectReferenceFromPrimaryAssetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSystemStatics_GetTypedSoftObjectReferenceFromPrimaryAssetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSystemStatics_PlayNextGame_Statics
	{
		struct LyraSystemStatics_eventPlayNextGame_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSystemStatics_PlayNextGame_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraSystemStatics_PlayNextGame_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSystemStatics_eventPlayNextGame_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraSystemStatics_PlayNextGame_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_PlayNextGame_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSystemStatics_PlayNextGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_PlayNextGame_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSystemStatics_PlayNextGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "System/LyraSystemStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSystemStatics_PlayNextGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSystemStatics, nullptr, "PlayNextGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSystemStatics_PlayNextGame_Statics::LyraSystemStatics_eventPlayNextGame_Parms), Z_Construct_UFunction_ULyraSystemStatics_PlayNextGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_PlayNextGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSystemStatics_PlayNextGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_PlayNextGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSystemStatics_PlayNextGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSystemStatics_PlayNextGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics
	{
		struct LyraSystemStatics_eventSetColorParameterValueOnAllMeshComponents_Parms
		{
			AActor* TargetActor;
			FName ParameterName;
			FLinearColor ParameterValue;
			bool bIncludeChildActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
		static void NewProp_bIncludeChildActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSystemStatics_eventSetColorParameterValueOnAllMeshComponents_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSystemStatics_eventSetColorParameterValueOnAllMeshComponents_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSystemStatics_eventSetColorParameterValueOnAllMeshComponents_Parms, ParameterValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterValue_MetaData)) };
	void Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors_SetBit(void* Obj)
	{
		((LyraSystemStatics_eventSetColorParameterValueOnAllMeshComponents_Parms*)Obj)->bIncludeChildActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors = { "bIncludeChildActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraSystemStatics_eventSetColorParameterValueOnAllMeshComponents_Parms), &Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "// Sets ParameterName to ParameterValue on all sections of all mesh components found on the TargetActor\n" },
		{ "CPP_Default_bIncludeChildActors", "true" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "System/LyraSystemStatics.h" },
		{ "ToolTip", "Sets ParameterName to ParameterValue on all sections of all mesh components found on the TargetActor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSystemStatics, nullptr, "SetColorParameterValueOnAllMeshComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::LyraSystemStatics_eventSetColorParameterValueOnAllMeshComponents_Parms), Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics
	{
		struct LyraSystemStatics_eventSetScalarParameterValueOnAllMeshComponents_Parms
		{
			AActor* TargetActor;
			FName ParameterName;
			float ParameterValue;
			bool bIncludeChildActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParameterValue;
		static void NewProp_bIncludeChildActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSystemStatics_eventSetScalarParameterValueOnAllMeshComponents_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSystemStatics_eventSetScalarParameterValueOnAllMeshComponents_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSystemStatics_eventSetScalarParameterValueOnAllMeshComponents_Parms, ParameterValue), METADATA_PARAMS(Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::NewProp_ParameterValue_MetaData)) };
	void Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors_SetBit(void* Obj)
	{
		((LyraSystemStatics_eventSetScalarParameterValueOnAllMeshComponents_Parms*)Obj)->bIncludeChildActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors = { "bIncludeChildActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraSystemStatics_eventSetScalarParameterValueOnAllMeshComponents_Parms), &Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::NewProp_ParameterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "// Sets ParameterName to ParameterValue on all sections of all mesh components found on the TargetActor\n" },
		{ "CPP_Default_bIncludeChildActors", "true" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "System/LyraSystemStatics.h" },
		{ "ToolTip", "Sets ParameterName to ParameterValue on all sections of all mesh components found on the TargetActor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSystemStatics, nullptr, "SetScalarParameterValueOnAllMeshComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::LyraSystemStatics_eventSetScalarParameterValueOnAllMeshComponents_Parms), Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics
	{
		struct LyraSystemStatics_eventSetVectorParameterValueOnAllMeshComponents_Parms
		{
			AActor* TargetActor;
			FName ParameterName;
			FVector ParameterValue;
			bool bIncludeChildActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
		static void NewProp_bIncludeChildActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSystemStatics_eventSetVectorParameterValueOnAllMeshComponents_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSystemStatics_eventSetVectorParameterValueOnAllMeshComponents_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraSystemStatics_eventSetVectorParameterValueOnAllMeshComponents_Parms, ParameterValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterValue_MetaData)) };
	void Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors_SetBit(void* Obj)
	{
		((LyraSystemStatics_eventSetVectorParameterValueOnAllMeshComponents_Parms*)Obj)->bIncludeChildActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors = { "bIncludeChildActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraSystemStatics_eventSetVectorParameterValueOnAllMeshComponents_Parms), &Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "// Sets ParameterName to ParameterValue on all sections of all mesh components found on the TargetActor\n" },
		{ "CPP_Default_bIncludeChildActors", "true" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "System/LyraSystemStatics.h" },
		{ "ToolTip", "Sets ParameterName to ParameterValue on all sections of all mesh components found on the TargetActor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraSystemStatics, nullptr, "SetVectorParameterValueOnAllMeshComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::LyraSystemStatics_eventSetVectorParameterValueOnAllMeshComponents_Parms), Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraSystemStatics);
	UClass* Z_Construct_UClass_ULyraSystemStatics_NoRegister()
	{
		return ULyraSystemStatics::StaticClass();
	}
	struct Z_Construct_UClass_ULyraSystemStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraSystemStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraSystemStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraSystemStatics_FindComponentsByClass, "FindComponentsByClass" }, // 304475740
		{ &Z_Construct_UFunction_ULyraSystemStatics_GetPrimaryAssetIdFromUserFacingExperienceName, "GetPrimaryAssetIdFromUserFacingExperienceName" }, // 3658425591
		{ &Z_Construct_UFunction_ULyraSystemStatics_GetTypedSoftObjectReferenceFromPrimaryAssetId, "GetTypedSoftObjectReferenceFromPrimaryAssetId" }, // 3173774027
		{ &Z_Construct_UFunction_ULyraSystemStatics_PlayNextGame, "PlayNextGame" }, // 827616290
		{ &Z_Construct_UFunction_ULyraSystemStatics_SetColorParameterValueOnAllMeshComponents, "SetColorParameterValueOnAllMeshComponents" }, // 3770142194
		{ &Z_Construct_UFunction_ULyraSystemStatics_SetScalarParameterValueOnAllMeshComponents, "SetScalarParameterValueOnAllMeshComponents" }, // 3759760652
		{ &Z_Construct_UFunction_ULyraSystemStatics_SetVectorParameterValueOnAllMeshComponents, "SetVectorParameterValueOnAllMeshComponents" }, // 452199533
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraSystemStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "System/LyraSystemStatics.h" },
		{ "ModuleRelativePath", "System/LyraSystemStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraSystemStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraSystemStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraSystemStatics_Statics::ClassParams = {
		&ULyraSystemStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULyraSystemStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraSystemStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraSystemStatics()
	{
		if (!Z_Registration_Info_UClass_ULyraSystemStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraSystemStatics.OuterSingleton, Z_Construct_UClass_ULyraSystemStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraSystemStatics.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraSystemStatics>()
	{
		return ULyraSystemStatics::StaticClass();
	}
	ULyraSystemStatics::ULyraSystemStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraSystemStatics);
	ULyraSystemStatics::~ULyraSystemStatics() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraSystemStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraSystemStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraSystemStatics, ULyraSystemStatics::StaticClass, TEXT("ULyraSystemStatics"), &Z_Registration_Info_UClass_ULyraSystemStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraSystemStatics), 1175075963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraSystemStatics_h_3695208877(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraSystemStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraSystemStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
