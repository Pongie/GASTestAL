// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cosmetics/LyraCharacterPartTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCharacterPartTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterPart();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterPartHandle();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterCustomizationCollisionMode;
	static UEnum* ECharacterCustomizationCollisionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterCustomizationCollisionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterCustomizationCollisionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ECharacterCustomizationCollisionMode"));
		}
		return Z_Registration_Info_UEnum_ECharacterCustomizationCollisionMode.OuterSingleton;
	}
	template<> LYRAGAME_API UEnum* StaticEnum<ECharacterCustomizationCollisionMode>()
	{
		return ECharacterCustomizationCollisionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode_Statics::Enumerators[] = {
		{ "ECharacterCustomizationCollisionMode::NoCollision", (int64)ECharacterCustomizationCollisionMode::NoCollision },
		{ "ECharacterCustomizationCollisionMode::UseCollisionFromCharacterPart", (int64)ECharacterCustomizationCollisionMode::UseCollisionFromCharacterPart },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// How should collision be configured on the spawned part actor\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraCharacterPartTypes.h" },
		{ "NoCollision.Comment", "// Disable collision on spawned character parts\n" },
		{ "NoCollision.Name", "ECharacterCustomizationCollisionMode::NoCollision" },
		{ "NoCollision.ToolTip", "Disable collision on spawned character parts" },
		{ "ToolTip", "How should collision be configured on the spawned part actor" },
		{ "UseCollisionFromCharacterPart.Comment", "// Leave the collision settings on character parts alone\n" },
		{ "UseCollisionFromCharacterPart.Name", "ECharacterCustomizationCollisionMode::UseCollisionFromCharacterPart" },
		{ "UseCollisionFromCharacterPart.ToolTip", "Leave the collision settings on character parts alone" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		"ECharacterCustomizationCollisionMode",
		"ECharacterCustomizationCollisionMode",
		Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode()
	{
		if (!Z_Registration_Info_UEnum_ECharacterCustomizationCollisionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterCustomizationCollisionMode.InnerSingleton, Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterCustomizationCollisionMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraCharacterPartHandle;
class UScriptStruct* FLyraCharacterPartHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraCharacterPartHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraCharacterPartHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraCharacterPartHandle, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraCharacterPartHandle"));
	}
	return Z_Registration_Info_UScriptStruct_LyraCharacterPartHandle.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraCharacterPartHandle>()
{
	return FLyraCharacterPartHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartHandle_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A handle created by adding a character part entry, can be used to remove it later\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraCharacterPartTypes.h" },
		{ "ToolTip", "A handle created by adding a character part entry, can be used to remove it later" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraCharacterPartHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::NewProp_PartHandle_MetaData[] = {
		{ "ModuleRelativePath", "Cosmetics/LyraCharacterPartTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::NewProp_PartHandle = { "PartHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraCharacterPartHandle, PartHandle), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::NewProp_PartHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::NewProp_PartHandle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::NewProp_PartHandle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraCharacterPartHandle",
		sizeof(FLyraCharacterPartHandle),
		alignof(FLyraCharacterPartHandle),
		Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterPartHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraCharacterPartHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraCharacterPartHandle.InnerSingleton, Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraCharacterPartHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraCharacterPart;
class UScriptStruct* FLyraCharacterPart::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraCharacterPart.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraCharacterPart.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraCharacterPart, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraCharacterPart"));
	}
	return Z_Registration_Info_UScriptStruct_LyraCharacterPart.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraCharacterPart>()
{
	return FLyraCharacterPart::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraCharacterPart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PartClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n// A character part request\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraCharacterPartTypes.h" },
		{ "ToolTip", "/\n A character part request" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraCharacterPart>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_PartClass_MetaData[] = {
		{ "Category", "LyraCharacterPart" },
		{ "Comment", "// The part to spawn\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraCharacterPartTypes.h" },
		{ "ToolTip", "The part to spawn" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_PartClass = { "PartClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraCharacterPart, PartClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_PartClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_PartClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "LyraCharacterPart" },
		{ "Comment", "// The socket to attach the part to (if any)\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraCharacterPartTypes.h" },
		{ "ToolTip", "The socket to attach the part to (if any)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraCharacterPart, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_SocketName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_CollisionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_CollisionMode_MetaData[] = {
		{ "Category", "LyraCharacterPart" },
		{ "Comment", "// How to handle collision for the primitive components in the part\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraCharacterPartTypes.h" },
		{ "ToolTip", "How to handle collision for the primitive components in the part" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_CollisionMode = { "CollisionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraCharacterPart, CollisionMode), Z_Construct_UEnum_LyraGame_ECharacterCustomizationCollisionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_CollisionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_CollisionMode_MetaData)) }; // 2155091871
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_PartClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_CollisionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewProp_CollisionMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LyraCharacterPart",
		sizeof(FLyraCharacterPart),
		alignof(FLyraCharacterPart),
		Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterPart()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraCharacterPart.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraCharacterPart.InnerSingleton, Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraCharacterPart.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCharacterPartTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCharacterPartTypes_h_Statics::EnumInfo[] = {
		{ ECharacterCustomizationCollisionMode_StaticEnum, TEXT("ECharacterCustomizationCollisionMode"), &Z_Registration_Info_UEnum_ECharacterCustomizationCollisionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2155091871U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCharacterPartTypes_h_Statics::ScriptStructInfo[] = {
		{ FLyraCharacterPartHandle::StaticStruct, Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics::NewStructOps, TEXT("LyraCharacterPartHandle"), &Z_Registration_Info_UScriptStruct_LyraCharacterPartHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraCharacterPartHandle), 2856288301U) },
		{ FLyraCharacterPart::StaticStruct, Z_Construct_UScriptStruct_FLyraCharacterPart_Statics::NewStructOps, TEXT("LyraCharacterPart"), &Z_Registration_Info_UScriptStruct_LyraCharacterPart, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraCharacterPart), 3613829318U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCharacterPartTypes_h_598015191(TEXT("/Script/LyraGame"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCharacterPartTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCharacterPartTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCharacterPartTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCharacterPartTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
