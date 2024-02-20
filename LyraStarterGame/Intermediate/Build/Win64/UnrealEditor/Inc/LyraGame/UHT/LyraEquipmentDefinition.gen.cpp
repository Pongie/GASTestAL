// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Equipment/LyraEquipmentDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraEquipmentDefinition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySet_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentDefinition();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentDefinition_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentInstance_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraEquipmentActorToSpawn;
class UScriptStruct* FLyraEquipmentActorToSpawn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraEquipmentActorToSpawn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraEquipmentActorToSpawn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraEquipmentActorToSpawn"));
	}
	return Z_Registration_Info_UScriptStruct_LyraEquipmentActorToSpawn.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraEquipmentActorToSpawn>()
{
	return FLyraEquipmentActorToSpawn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/LyraEquipmentDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraEquipmentActorToSpawn>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentDefinition.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraEquipmentActorToSpawn, ActorToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::NewProp_ActorToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::NewProp_ActorToSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::NewProp_AttachSocket_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentDefinition.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::NewProp_AttachSocket = { "AttachSocket", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraEquipmentActorToSpawn, AttachSocket), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::NewProp_AttachSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::NewProp_AttachSocket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::NewProp_AttachTransform_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::NewProp_AttachTransform = { "AttachTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraEquipmentActorToSpawn, AttachTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::NewProp_AttachTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::NewProp_AttachTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::NewProp_ActorToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::NewProp_AttachSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::NewProp_AttachTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraEquipmentActorToSpawn",
		sizeof(FLyraEquipmentActorToSpawn),
		alignof(FLyraEquipmentActorToSpawn),
		Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraEquipmentActorToSpawn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraEquipmentActorToSpawn.InnerSingleton, Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraEquipmentActorToSpawn.InnerSingleton;
	}
	void ULyraEquipmentDefinition::StaticRegisterNativesULyraEquipmentDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraEquipmentDefinition);
	UClass* Z_Construct_UClass_ULyraEquipmentDefinition_NoRegister()
	{
		return ULyraEquipmentDefinition::StaticClass();
	}
	struct Z_Construct_UClass_ULyraEquipmentDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InstanceType;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySetsToGrant_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySetsToGrant_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySetsToGrant;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorsToSpawn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraEquipmentDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraEquipmentDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULyraEquipmentDefinition\n *\n * Definition of a piece of equipment that can be applied to a pawn\n */" },
		{ "IncludePath", "Equipment/LyraEquipmentDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentDefinition.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraEquipmentDefinition\n\nDefinition of a piece of equipment that can be applied to a pawn" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraEquipmentDefinition_Statics::NewProp_InstanceType_MetaData[] = {
		{ "Category", "Equipment" },
		{ "Comment", "// Class to spawn\n" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentDefinition.h" },
		{ "ToolTip", "Class to spawn" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraEquipmentDefinition_Statics::NewProp_InstanceType = { "InstanceType", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraEquipmentDefinition, InstanceType), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraEquipmentDefinition_Statics::NewProp_InstanceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentDefinition_Statics::NewProp_InstanceType_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraEquipmentDefinition_Statics::NewProp_AbilitySetsToGrant_Inner = { "AbilitySetsToGrant", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraAbilitySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraEquipmentDefinition_Statics::NewProp_AbilitySetsToGrant_MetaData[] = {
		{ "Category", "Equipment" },
		{ "Comment", "// Gameplay ability sets to grant when this is equipped\n" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentDefinition.h" },
		{ "ToolTip", "Gameplay ability sets to grant when this is equipped" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraEquipmentDefinition_Statics::NewProp_AbilitySetsToGrant = { "AbilitySetsToGrant", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraEquipmentDefinition, AbilitySetsToGrant), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraEquipmentDefinition_Statics::NewProp_AbilitySetsToGrant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentDefinition_Statics::NewProp_AbilitySetsToGrant_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraEquipmentDefinition_Statics::NewProp_ActorsToSpawn_Inner = { "ActorsToSpawn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn, METADATA_PARAMS(nullptr, 0) }; // 1607926880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraEquipmentDefinition_Statics::NewProp_ActorsToSpawn_MetaData[] = {
		{ "Category", "Equipment" },
		{ "Comment", "// Actors to spawn on the pawn when this is equipped\n" },
		{ "ModuleRelativePath", "Equipment/LyraEquipmentDefinition.h" },
		{ "ToolTip", "Actors to spawn on the pawn when this is equipped" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraEquipmentDefinition_Statics::NewProp_ActorsToSpawn = { "ActorsToSpawn", nullptr, (EPropertyFlags)0x0010000000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraEquipmentDefinition, ActorsToSpawn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraEquipmentDefinition_Statics::NewProp_ActorsToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentDefinition_Statics::NewProp_ActorsToSpawn_MetaData)) }; // 1607926880
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraEquipmentDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraEquipmentDefinition_Statics::NewProp_InstanceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraEquipmentDefinition_Statics::NewProp_AbilitySetsToGrant_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraEquipmentDefinition_Statics::NewProp_AbilitySetsToGrant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraEquipmentDefinition_Statics::NewProp_ActorsToSpawn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraEquipmentDefinition_Statics::NewProp_ActorsToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraEquipmentDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraEquipmentDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraEquipmentDefinition_Statics::ClassParams = {
		&ULyraEquipmentDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraEquipmentDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentDefinition_Statics::PropPointers),
		0,
		0x000100A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraEquipmentDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraEquipmentDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraEquipmentDefinition()
	{
		if (!Z_Registration_Info_UClass_ULyraEquipmentDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraEquipmentDefinition.OuterSingleton, Z_Construct_UClass_ULyraEquipmentDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraEquipmentDefinition.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraEquipmentDefinition>()
	{
		return ULyraEquipmentDefinition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraEquipmentDefinition);
	ULyraEquipmentDefinition::~ULyraEquipmentDefinition() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentDefinition_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentDefinition_h_Statics::ScriptStructInfo[] = {
		{ FLyraEquipmentActorToSpawn::StaticStruct, Z_Construct_UScriptStruct_FLyraEquipmentActorToSpawn_Statics::NewStructOps, TEXT("LyraEquipmentActorToSpawn"), &Z_Registration_Info_UScriptStruct_LyraEquipmentActorToSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraEquipmentActorToSpawn), 1607926880U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraEquipmentDefinition, ULyraEquipmentDefinition::StaticClass, TEXT("ULyraEquipmentDefinition"), &Z_Registration_Info_UClass_ULyraEquipmentDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraEquipmentDefinition), 98073229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentDefinition_h_2290971037(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentDefinition_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentDefinition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentDefinition_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
