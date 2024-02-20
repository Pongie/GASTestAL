// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Equipment/LyraEquipmentInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraEquipmentInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentInstance();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraEquipmentInstance::execOnRep_Instigator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Instigator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraEquipmentInstance::execGetSpawnedActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetSpawnedActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraEquipmentInstance::execGetTypedPawn)
	{
		P_GET_OBJECT(UClass,Z_Param_PawnType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetTypedPawn(Z_Param_PawnType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraEquipmentInstance::execGetPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraEquipmentInstance::execGetInstigator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetInstigator();
		P_NATIVE_END;
	}
	static FName NAME_ULyraEquipmentInstance_K2_OnEquipped = FName(TEXT("K2_OnEquipped"));
	void ULyraEquipmentInstance::K2_OnEquipped()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULyraEquipmentInstance_K2_OnEquipped),NULL);
	}
	static FName NAME_ULyraEquipmentInstance_K2_OnUnequipped = FName(TEXT("K2_OnUnequipped"));
	void ULyraEquipmentInstance::K2_OnUnequipped()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULyraEquipmentInstance_K2_OnUnequipped),NULL);
	}
	void ULyraEquipmentInstance::StaticRegisterNativesULyraEquipmentInstance()
	{
		UClass* Class = ULyraEquipmentInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInstigator", &ULyraEquipmentInstance::execGetInstigator },
			{ "GetPawn", &ULyraEquipmentInstance::execGetPawn },
			{ "GetSpawnedActors", &ULyraEquipmentInstance::execGetSpawnedActors },
			{ "GetTypedPawn", &ULyraEquipmentInstance::execGetTypedPawn },
			{ "OnRep_Instigator", &ULyraEquipmentInstance::execOnRep_Instigator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics
	{
		struct LyraEquipmentInstance_eventGetInstigator_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraEquipmentInstance_eventGetInstigator_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "Comment", "//~End of UObject interface\n" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentInstance, nullptr, "GetInstigator", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::LyraEquipmentInstance_eventGetInstigator_Parms), Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics
	{
		struct LyraEquipmentInstance_eventGetPawn_Parms
		{
			APawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraEquipmentInstance_eventGetPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentInstance, nullptr, "GetPawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::LyraEquipmentInstance_eventGetPawn_Parms), Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics
	{
		struct LyraEquipmentInstance_eventGetSpawnedActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraEquipmentInstance_eventGetSpawnedActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentInstance, nullptr, "GetSpawnedActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::LyraEquipmentInstance_eventGetSpawnedActors_Parms), Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics
	{
		struct LyraEquipmentInstance_eventGetTypedPawn_Parms
		{
			TSubclassOf<APawn>  PawnType;
			APawn* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_PawnType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::NewProp_PawnType = { "PawnType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraEquipmentInstance_eventGetTypedPawn_Parms, PawnType), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraEquipmentInstance_eventGetTypedPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::NewProp_PawnType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "DeterminesOutputType", "PawnType" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentInstance, nullptr, "GetTypedPawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::LyraEquipmentInstance_eventGetTypedPawn_Parms), Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnEquipped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnEquipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "DisplayName", "OnEquipped" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentInstance, nullptr, "K2_OnEquipped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnUnequipped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnUnequipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "DisplayName", "OnUnequipped" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnUnequipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentInstance, nullptr, "K2_OnUnequipped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnUnequipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnUnequipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnUnequipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnUnequipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraEquipmentInstance_OnRep_Instigator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraEquipmentInstance_OnRep_Instigator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraEquipmentInstance_OnRep_Instigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraEquipmentInstance, nullptr, "OnRep_Instigator", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraEquipmentInstance_OnRep_Instigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraEquipmentInstance_OnRep_Instigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraEquipmentInstance_OnRep_Instigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraEquipmentInstance_OnRep_Instigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraEquipmentInstance);
	UClass* Z_Construct_UClass_ULyraEquipmentInstance_NoRegister()
	{
		return ULyraEquipmentInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULyraEquipmentInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpawnedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraEquipmentInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraEquipmentInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraEquipmentInstance_GetInstigator, "GetInstigator" }, // 4091817850
		{ &Z_Construct_UFunction_ULyraEquipmentInstance_GetPawn, "GetPawn" }, // 295639268
		{ &Z_Construct_UFunction_ULyraEquipmentInstance_GetSpawnedActors, "GetSpawnedActors" }, // 32639792
		{ &Z_Construct_UFunction_ULyraEquipmentInstance_GetTypedPawn, "GetTypedPawn" }, // 4243891850
		{ &Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnEquipped, "K2_OnEquipped" }, // 2662471157
		{ &Z_Construct_UFunction_ULyraEquipmentInstance_K2_OnUnequipped, "K2_OnUnequipped" }, // 3358748016
		{ &Z_Construct_UFunction_ULyraEquipmentInstance_OnRep_Instigator, "OnRep_Instigator" }, // 1486935740
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraEquipmentInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULyraEquipmentInstance\n *\n * A piece of equipment spawned and applied to a pawn\n */" },
		{ "IncludePath", "Equipment/LyraEquipmentInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraEquipmentInstance\n\nA piece of equipment spawned and applied to a pawn" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraEquipmentInstance_Statics::NewProp_Instigator_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraEquipmentInstance_Statics::NewProp_Instigator = { "Instigator", "OnRep_Instigator", (EPropertyFlags)0x0044000100000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraEquipmentInstance, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraEquipmentInstance_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentInstance_Statics::NewProp_Instigator_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraEquipmentInstance_Statics::NewProp_SpawnedActors_Inner = { "SpawnedActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraEquipmentInstance_Statics::NewProp_SpawnedActors_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/LyraEquipmentInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraEquipmentInstance_Statics::NewProp_SpawnedActors = { "SpawnedActors", nullptr, (EPropertyFlags)0x0044000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraEquipmentInstance, SpawnedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraEquipmentInstance_Statics::NewProp_SpawnedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentInstance_Statics::NewProp_SpawnedActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraEquipmentInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraEquipmentInstance_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraEquipmentInstance_Statics::NewProp_SpawnedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraEquipmentInstance_Statics::NewProp_SpawnedActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraEquipmentInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraEquipmentInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraEquipmentInstance_Statics::ClassParams = {
		&ULyraEquipmentInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraEquipmentInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentInstance_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraEquipmentInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraEquipmentInstance()
	{
		if (!Z_Registration_Info_UClass_ULyraEquipmentInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraEquipmentInstance.OuterSingleton, Z_Construct_UClass_ULyraEquipmentInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraEquipmentInstance.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraEquipmentInstance>()
	{
		return ULyraEquipmentInstance::StaticClass();
	}

	void ULyraEquipmentInstance::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Instigator(TEXT("Instigator"));
		static const FName Name_SpawnedActors(TEXT("SpawnedActors"));

		const bool bIsValid = true
			&& Name_Instigator == ClassReps[(int32)ENetFields_Private::Instigator].Property->GetFName()
			&& Name_SpawnedActors == ClassReps[(int32)ENetFields_Private::SpawnedActors].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULyraEquipmentInstance"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraEquipmentInstance);
	ULyraEquipmentInstance::~ULyraEquipmentInstance() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraEquipmentInstance, ULyraEquipmentInstance::StaticClass, TEXT("ULyraEquipmentInstance"), &Z_Registration_Info_UClass_ULyraEquipmentInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraEquipmentInstance), 680618658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h_1429782008(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
