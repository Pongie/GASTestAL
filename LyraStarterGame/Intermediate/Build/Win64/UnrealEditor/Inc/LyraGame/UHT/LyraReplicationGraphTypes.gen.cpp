// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "System/LyraReplicationGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraReplicationGraphTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_EClassRepNodeMapping();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRepGraphActorClassSettings();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClassRepNodeMapping;
	static UEnum* EClassRepNodeMapping_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EClassRepNodeMapping.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EClassRepNodeMapping.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_EClassRepNodeMapping, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("EClassRepNodeMapping"));
		}
		return Z_Registration_Info_UEnum_EClassRepNodeMapping.OuterSingleton;
	}
	template<> LYRAGAME_API UEnum* StaticEnum<EClassRepNodeMapping>()
	{
		return EClassRepNodeMapping_StaticEnum();
	}
	struct Z_Construct_UEnum_LyraGame_EClassRepNodeMapping_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LyraGame_EClassRepNodeMapping_Statics::Enumerators[] = {
		{ "EClassRepNodeMapping::NotRouted", (int64)EClassRepNodeMapping::NotRouted },
		{ "EClassRepNodeMapping::RelevantAllConnections", (int64)EClassRepNodeMapping::RelevantAllConnections },
		{ "EClassRepNodeMapping::Spatialize_Static", (int64)EClassRepNodeMapping::Spatialize_Static },
		{ "EClassRepNodeMapping::Spatialize_Dynamic", (int64)EClassRepNodeMapping::Spatialize_Dynamic },
		{ "EClassRepNodeMapping::Spatialize_Dormancy", (int64)EClassRepNodeMapping::Spatialize_Dormancy },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LyraGame_EClassRepNodeMapping_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// This is the main enum we use to route actors to the right replication node. Each class maps to one enum.\n" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphTypes.h" },
		{ "NotRouted.Name", "EClassRepNodeMapping::NotRouted" },
		{ "RelevantAllConnections.Comment", "// Doesn't map to any node. Used for special case actors that handled by special case nodes (ULyraReplicationGraphNode_PlayerStateFrequencyLimiter)\n" },
		{ "RelevantAllConnections.Name", "EClassRepNodeMapping::RelevantAllConnections" },
		{ "RelevantAllConnections.ToolTip", "Doesn't map to any node. Used for special case actors that handled by special case nodes (ULyraReplicationGraphNode_PlayerStateFrequencyLimiter)" },
		{ "Spatialize_Dormancy.Comment", "// Routes to GridNode: these actors mode frequently and are updated once per frame.\n" },
		{ "Spatialize_Dormancy.Name", "EClassRepNodeMapping::Spatialize_Dormancy" },
		{ "Spatialize_Dormancy.ToolTip", "Routes to GridNode: these actors mode frequently and are updated once per frame." },
		{ "Spatialize_Dynamic.Comment", "// Routes to GridNode: these actors don't move and don't need to be updated every frame.\n" },
		{ "Spatialize_Dynamic.Name", "EClassRepNodeMapping::Spatialize_Dynamic" },
		{ "Spatialize_Dynamic.ToolTip", "Routes to GridNode: these actors don't move and don't need to be updated every frame." },
		{ "Spatialize_Static.Comment", "// ONLY SPATIALIZED Enums below here! See ULyraReplicationGraph::IsSpatialized\n" },
		{ "Spatialize_Static.Name", "EClassRepNodeMapping::Spatialize_Static" },
		{ "Spatialize_Static.ToolTip", "ONLY SPATIALIZED Enums below here! See ULyraReplicationGraph::IsSpatialized" },
		{ "ToolTip", "This is the main enum we use to route actors to the right replication node. Each class maps to one enum." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_EClassRepNodeMapping_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		"EClassRepNodeMapping",
		"EClassRepNodeMapping",
		Z_Construct_UEnum_LyraGame_EClassRepNodeMapping_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EClassRepNodeMapping_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LyraGame_EClassRepNodeMapping_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EClassRepNodeMapping_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LyraGame_EClassRepNodeMapping()
	{
		if (!Z_Registration_Info_UEnum_EClassRepNodeMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClassRepNodeMapping.InnerSingleton, Z_Construct_UEnum_LyraGame_EClassRepNodeMapping_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EClassRepNodeMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RepGraphActorClassSettings;
class UScriptStruct* FRepGraphActorClassSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RepGraphActorClassSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RepGraphActorClassSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepGraphActorClassSettings, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("RepGraphActorClassSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RepGraphActorClassSettings.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FRepGraphActorClassSettings>()
{
	return FRepGraphActorClassSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddClassRepInfoToMap_MetaData[];
#endif
		static void NewProp_bAddClassRepInfoToMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddClassRepInfoToMap;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ClassNodeMapping_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassNodeMapping_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ClassNodeMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddToRPC_Multicast_OpenChannelForClassMap_MetaData[];
#endif
		static void NewProp_bAddToRPC_Multicast_OpenChannelForClassMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToRPC_Multicast_OpenChannelForClassMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRPC_Multicast_OpenChannelForClass_MetaData[];
#endif
		static void NewProp_bRPC_Multicast_OpenChannelForClass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRPC_Multicast_OpenChannelForClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Actor Class Settings that can be assigned directly to a Class.  Can also be mapped to a FRepGraphActorTemplateSettings \n" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphTypes.h" },
		{ "ToolTip", "Actor Class Settings that can be assigned directly to a Class.  Can also be mapped to a FRepGraphActorTemplateSettings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepGraphActorClassSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "RepGraphActorClassSettings" },
		{ "Comment", "// Name of the Class the settings will be applied to\n" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphTypes.h" },
		{ "ToolTip", "Name of the Class the settings will be applied to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepGraphActorClassSettings, ActorClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddClassRepInfoToMap_MetaData[] = {
		{ "Category", "RepGraphActorClassSettings" },
		{ "Comment", "// If we should add this Class' RepInfo to the ClassRepNodePolicies Map\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphTypes.h" },
		{ "ToolTip", "If we should add this Class' RepInfo to the ClassRepNodePolicies Map" },
	};
#endif
	void Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddClassRepInfoToMap_SetBit(void* Obj)
	{
		((FRepGraphActorClassSettings*)Obj)->bAddClassRepInfoToMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddClassRepInfoToMap = { "bAddClassRepInfoToMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRepGraphActorClassSettings), &Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddClassRepInfoToMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddClassRepInfoToMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddClassRepInfoToMap_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_ClassNodeMapping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_ClassNodeMapping_MetaData[] = {
		{ "Category", "RepGraphActorClassSettings" },
		{ "Comment", "// What ClassNodeMapping we should use when adding Class to ClassRepNodePolicies Map\n" },
		{ "EditCondition", "bAddClassRepInfoToMap" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphTypes.h" },
		{ "ToolTip", "What ClassNodeMapping we should use when adding Class to ClassRepNodePolicies Map" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_ClassNodeMapping = { "ClassNodeMapping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepGraphActorClassSettings, ClassNodeMapping), Z_Construct_UEnum_LyraGame_EClassRepNodeMapping, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_ClassNodeMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_ClassNodeMapping_MetaData)) }; // 2893894572
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddToRPC_Multicast_OpenChannelForClassMap_MetaData[] = {
		{ "Category", "RepGraphActorClassSettings" },
		{ "Comment", "// Should we add this to the RPC_Multicast_OpenChannelForClass map\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphTypes.h" },
		{ "ToolTip", "Should we add this to the RPC_Multicast_OpenChannelForClass map" },
	};
#endif
	void Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddToRPC_Multicast_OpenChannelForClassMap_SetBit(void* Obj)
	{
		((FRepGraphActorClassSettings*)Obj)->bAddToRPC_Multicast_OpenChannelForClassMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddToRPC_Multicast_OpenChannelForClassMap = { "bAddToRPC_Multicast_OpenChannelForClassMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRepGraphActorClassSettings), &Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddToRPC_Multicast_OpenChannelForClassMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddToRPC_Multicast_OpenChannelForClassMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddToRPC_Multicast_OpenChannelForClassMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bRPC_Multicast_OpenChannelForClass_MetaData[] = {
		{ "Category", "RepGraphActorClassSettings" },
		{ "Comment", "// If this is added to RPC_Multicast_OpenChannelForClass map then should we actually open a channel or not\n" },
		{ "EditCondition", "bAddToRPC_Multicast_OpenChannelForClassMap" },
		{ "ModuleRelativePath", "System/LyraReplicationGraphTypes.h" },
		{ "ToolTip", "If this is added to RPC_Multicast_OpenChannelForClass map then should we actually open a channel or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bRPC_Multicast_OpenChannelForClass_SetBit(void* Obj)
	{
		((FRepGraphActorClassSettings*)Obj)->bRPC_Multicast_OpenChannelForClass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bRPC_Multicast_OpenChannelForClass = { "bRPC_Multicast_OpenChannelForClass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRepGraphActorClassSettings), &Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bRPC_Multicast_OpenChannelForClass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bRPC_Multicast_OpenChannelForClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bRPC_Multicast_OpenChannelForClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddClassRepInfoToMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_ClassNodeMapping_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_ClassNodeMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bAddToRPC_Multicast_OpenChannelForClassMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewProp_bRPC_Multicast_OpenChannelForClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"RepGraphActorClassSettings",
		sizeof(FRepGraphActorClassSettings),
		alignof(FRepGraphActorClassSettings),
		Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRepGraphActorClassSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RepGraphActorClassSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RepGraphActorClassSettings.InnerSingleton, Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RepGraphActorClassSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphTypes_h_Statics::EnumInfo[] = {
		{ EClassRepNodeMapping_StaticEnum, TEXT("EClassRepNodeMapping"), &Z_Registration_Info_UEnum_EClassRepNodeMapping, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2893894572U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphTypes_h_Statics::ScriptStructInfo[] = {
		{ FRepGraphActorClassSettings::StaticStruct, Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics::NewStructOps, TEXT("RepGraphActorClassSettings"), &Z_Registration_Info_UScriptStruct_RepGraphActorClassSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRepGraphActorClassSettings), 540532678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphTypes_h_2639546120(TEXT("/Script/LyraGame"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
