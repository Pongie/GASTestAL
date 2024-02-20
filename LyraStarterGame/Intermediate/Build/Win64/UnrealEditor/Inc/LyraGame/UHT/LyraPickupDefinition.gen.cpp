// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Equipment/LyraPickupDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPickupDefinition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPickupDefinition();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPickupDefinition_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponPickupDefinition();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponPickupDefinition_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraPickupDefinition::StaticRegisterNativesULyraPickupDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraPickupDefinition);
	UClass* Z_Construct_UClass_ULyraPickupDefinition_NoRegister()
	{
		return ULyraPickupDefinition::StaticClass();
	}
	struct Z_Construct_UClass_ULyraPickupDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryItemDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InventoryItemDefinition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DisplayMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCoolDownSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnCoolDownSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickedUpSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PickedUpSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RespawnedSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RespawnedSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickedUpEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PickedUpEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RespawnedEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RespawnedEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraPickupDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPickupDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Lyra Pickup Data" },
		{ "IncludePath", "Equipment/LyraPickupDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
		{ "ShortTooltip", "Data asset used to configure a pickup." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_InventoryItemDefinition_MetaData[] = {
		{ "Category", "Lyra|Pickup|Equipment" },
		{ "Comment", "//Defines the pickup's actors to spawn, abilities to grant, and tags to add\n" },
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
		{ "ToolTip", "Defines the pickup's actors to spawn, abilities to grant, and tags to add" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_InventoryItemDefinition = { "InventoryItemDefinition", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPickupDefinition, InventoryItemDefinition), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_InventoryItemDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_InventoryItemDefinition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_DisplayMesh_MetaData[] = {
		{ "Category", "Lyra|Pickup|Mesh" },
		{ "Comment", "//Visual representation of the pickup\n" },
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
		{ "ToolTip", "Visual representation of the pickup" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_DisplayMesh = { "DisplayMesh", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPickupDefinition, DisplayMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_DisplayMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_DisplayMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_SpawnCoolDownSeconds_MetaData[] = {
		{ "Category", "Lyra|Pickup" },
		{ "Comment", "//Cool down time between pickups in seconds\n" },
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
		{ "ToolTip", "Cool down time between pickups in seconds" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_SpawnCoolDownSeconds = { "SpawnCoolDownSeconds", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPickupDefinition, SpawnCoolDownSeconds), METADATA_PARAMS(Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_SpawnCoolDownSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_SpawnCoolDownSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_PickedUpSound_MetaData[] = {
		{ "Category", "Lyra|Pickup" },
		{ "Comment", "//Sound to play when picked up\n" },
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
		{ "ToolTip", "Sound to play when picked up" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_PickedUpSound = { "PickedUpSound", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPickupDefinition, PickedUpSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_PickedUpSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_PickedUpSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_RespawnedSound_MetaData[] = {
		{ "Category", "Lyra|Pickup" },
		{ "Comment", "//Sound to play when pickup is respawned\n" },
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
		{ "ToolTip", "Sound to play when pickup is respawned" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_RespawnedSound = { "RespawnedSound", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPickupDefinition, RespawnedSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_RespawnedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_RespawnedSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_PickedUpEffect_MetaData[] = {
		{ "Category", "Lyra|Pickup" },
		{ "Comment", "//Particle FX to play when picked up\n" },
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
		{ "ToolTip", "Particle FX to play when picked up" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_PickedUpEffect = { "PickedUpEffect", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPickupDefinition, PickedUpEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_PickedUpEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_PickedUpEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_RespawnedEffect_MetaData[] = {
		{ "Category", "Lyra|Pickup" },
		{ "Comment", "//Particle FX to play when pickup is respawned\n" },
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
		{ "ToolTip", "Particle FX to play when pickup is respawned" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_RespawnedEffect = { "RespawnedEffect", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPickupDefinition, RespawnedEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_RespawnedEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_RespawnedEffect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraPickupDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_InventoryItemDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_DisplayMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_SpawnCoolDownSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_PickedUpSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_RespawnedSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_PickedUpEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPickupDefinition_Statics::NewProp_RespawnedEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraPickupDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraPickupDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraPickupDefinition_Statics::ClassParams = {
		&ULyraPickupDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraPickupDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPickupDefinition_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraPickupDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPickupDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraPickupDefinition()
	{
		if (!Z_Registration_Info_UClass_ULyraPickupDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraPickupDefinition.OuterSingleton, Z_Construct_UClass_ULyraPickupDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraPickupDefinition.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraPickupDefinition>()
	{
		return ULyraPickupDefinition::StaticClass();
	}
	ULyraPickupDefinition::ULyraPickupDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraPickupDefinition);
	ULyraPickupDefinition::~ULyraPickupDefinition() {}
	void ULyraWeaponPickupDefinition::StaticRegisterNativesULyraWeaponPickupDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraWeaponPickupDefinition);
	UClass* Z_Construct_UClass_ULyraWeaponPickupDefinition_NoRegister()
	{
		return ULyraWeaponPickupDefinition::StaticClass();
	}
	struct Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMeshOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponMeshOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMeshScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponMeshScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraPickupDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Lyra Weapon Pickup Data" },
		{ "IncludePath", "Equipment/LyraPickupDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
		{ "ShortTooltip", "Data asset used to configure a weapon pickup." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::NewProp_WeaponMeshOffset_MetaData[] = {
		{ "Category", "Lyra|Pickup|Mesh" },
		{ "Comment", "//Sets the height of the display mesh above the Weapon spawner\n" },
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
		{ "ToolTip", "Sets the height of the display mesh above the Weapon spawner" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::NewProp_WeaponMeshOffset = { "WeaponMeshOffset", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraWeaponPickupDefinition, WeaponMeshOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::NewProp_WeaponMeshOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::NewProp_WeaponMeshOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::NewProp_WeaponMeshScale_MetaData[] = {
		{ "Category", "Lyra|Pickup|Mesh" },
		{ "Comment", "//Sets the height of the display mesh above the Weapon spawner\n" },
		{ "ModuleRelativePath", "Equipment/LyraPickupDefinition.h" },
		{ "ToolTip", "Sets the height of the display mesh above the Weapon spawner" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::NewProp_WeaponMeshScale = { "WeaponMeshScale", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraWeaponPickupDefinition, WeaponMeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::NewProp_WeaponMeshScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::NewProp_WeaponMeshScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::NewProp_WeaponMeshOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::NewProp_WeaponMeshScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraWeaponPickupDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::ClassParams = {
		&ULyraWeaponPickupDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraWeaponPickupDefinition()
	{
		if (!Z_Registration_Info_UClass_ULyraWeaponPickupDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraWeaponPickupDefinition.OuterSingleton, Z_Construct_UClass_ULyraWeaponPickupDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraWeaponPickupDefinition.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraWeaponPickupDefinition>()
	{
		return ULyraWeaponPickupDefinition::StaticClass();
	}
	ULyraWeaponPickupDefinition::ULyraWeaponPickupDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraWeaponPickupDefinition);
	ULyraWeaponPickupDefinition::~ULyraWeaponPickupDefinition() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraPickupDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraPickupDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraPickupDefinition, ULyraPickupDefinition::StaticClass, TEXT("ULyraPickupDefinition"), &Z_Registration_Info_UClass_ULyraPickupDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraPickupDefinition), 22056385U) },
		{ Z_Construct_UClass_ULyraWeaponPickupDefinition, ULyraWeaponPickupDefinition::StaticClass, TEXT("ULyraWeaponPickupDefinition"), &Z_Registration_Info_UClass_ULyraWeaponPickupDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraWeaponPickupDefinition), 4049626634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraPickupDefinition_h_332025324(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraPickupDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Equipment_LyraPickupDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
