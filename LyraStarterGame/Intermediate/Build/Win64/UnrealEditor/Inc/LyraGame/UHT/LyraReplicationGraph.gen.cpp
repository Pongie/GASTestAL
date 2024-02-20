// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "System/LyraReplicationGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraReplicationGraph() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplicationGraph();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplicationGraph_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraph();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraReplicationGraph::StaticRegisterNativesULyraReplicationGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraReplicationGraph);
	UClass* Z_Construct_UClass_ULyraReplicationGraph_NoRegister()
	{
		return ULyraReplicationGraph::StaticClass();
	}
	struct Z_Construct_UClass_ULyraReplicationGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_AlwaysRelevantClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlwaysRelevantClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AlwaysRelevantClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GridNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlwaysRelevantNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AlwaysRelevantNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraReplicationGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplicationGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Lyra Replication Graph implementation. See additional notes in LyraReplicationGraph.cpp! */" },
		{ "IncludePath", "System/LyraReplicationGraph.h" },
		{ "ModuleRelativePath", "System/LyraReplicationGraph.h" },
		{ "ToolTip", "Lyra Replication Graph implementation. See additional notes in LyraReplicationGraph.cpp!" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_AlwaysRelevantClasses_Inner = { "AlwaysRelevantClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_AlwaysRelevantClasses_MetaData[] = {
		{ "ModuleRelativePath", "System/LyraReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_AlwaysRelevantClasses = { "AlwaysRelevantClasses", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraReplicationGraph, AlwaysRelevantClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_AlwaysRelevantClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_AlwaysRelevantClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_GridNode_MetaData[] = {
		{ "ModuleRelativePath", "System/LyraReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_GridNode = { "GridNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraReplicationGraph, GridNode), Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_GridNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_GridNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_AlwaysRelevantNode_MetaData[] = {
		{ "ModuleRelativePath", "System/LyraReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_AlwaysRelevantNode = { "AlwaysRelevantNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraReplicationGraph, AlwaysRelevantNode), Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_AlwaysRelevantNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_AlwaysRelevantNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraReplicationGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_AlwaysRelevantClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_AlwaysRelevantClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_GridNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraReplicationGraph_Statics::NewProp_AlwaysRelevantNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraReplicationGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraReplicationGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraReplicationGraph_Statics::ClassParams = {
		&ULyraReplicationGraph::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraReplicationGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraph_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_ULyraReplicationGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraReplicationGraph()
	{
		if (!Z_Registration_Info_UClass_ULyraReplicationGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraReplicationGraph.OuterSingleton, Z_Construct_UClass_ULyraReplicationGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraReplicationGraph.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraReplicationGraph>()
	{
		return ULyraReplicationGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraReplicationGraph);
	ULyraReplicationGraph::~ULyraReplicationGraph() {}
	void ULyraReplicationGraphNode_AlwaysRelevant_ForConnection::StaticRegisterNativesULyraReplicationGraphNode_AlwaysRelevant_ForConnection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraReplicationGraphNode_AlwaysRelevant_ForConnection);
	UClass* Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister()
	{
		return ULyraReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass();
	}
	struct Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "System/LyraReplicationGraph.h" },
		{ "ModuleRelativePath", "System/LyraReplicationGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraReplicationGraphNode_AlwaysRelevant_ForConnection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::ClassParams = {
		&ULyraReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection()
	{
		if (!Z_Registration_Info_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection.OuterSingleton, Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraReplicationGraphNode_AlwaysRelevant_ForConnection>()
	{
		return ULyraReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass();
	}
	ULyraReplicationGraphNode_AlwaysRelevant_ForConnection::ULyraReplicationGraphNode_AlwaysRelevant_ForConnection() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraReplicationGraphNode_AlwaysRelevant_ForConnection);
	ULyraReplicationGraphNode_AlwaysRelevant_ForConnection::~ULyraReplicationGraphNode_AlwaysRelevant_ForConnection() {}
	void ULyraReplicationGraphNode_PlayerStateFrequencyLimiter::StaticRegisterNativesULyraReplicationGraphNode_PlayerStateFrequencyLimiter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraReplicationGraphNode_PlayerStateFrequencyLimiter);
	UClass* Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter_NoRegister()
	{
		return ULyraReplicationGraphNode_PlayerStateFrequencyLimiter::StaticClass();
	}
	struct Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n\x09This is a specialized node for handling PlayerState replication in a frequency limited fashion. It tracks all player states but only returns a subset of them to the replication driver each frame. \n\x09This is an optimization for large player connection counts, and not a requirement.\n*/" },
		{ "IncludePath", "System/LyraReplicationGraph.h" },
		{ "ModuleRelativePath", "System/LyraReplicationGraph.h" },
		{ "ToolTip", "This is a specialized node for handling PlayerState replication in a frequency limited fashion. It tracks all player states but only returns a subset of them to the replication driver each frame.\nThis is an optimization for large player connection counts, and not a requirement." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraReplicationGraphNode_PlayerStateFrequencyLimiter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::ClassParams = {
		&ULyraReplicationGraphNode_PlayerStateFrequencyLimiter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter()
	{
		if (!Z_Registration_Info_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter.OuterSingleton, Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraReplicationGraphNode_PlayerStateFrequencyLimiter>()
	{
		return ULyraReplicationGraphNode_PlayerStateFrequencyLimiter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraReplicationGraphNode_PlayerStateFrequencyLimiter);
	ULyraReplicationGraphNode_PlayerStateFrequencyLimiter::~ULyraReplicationGraphNode_PlayerStateFrequencyLimiter() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraReplicationGraph, ULyraReplicationGraph::StaticClass, TEXT("ULyraReplicationGraph"), &Z_Registration_Info_UClass_ULyraReplicationGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraReplicationGraph), 1465236451U) },
		{ Z_Construct_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection, ULyraReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass, TEXT("ULyraReplicationGraphNode_AlwaysRelevant_ForConnection"), &Z_Registration_Info_UClass_ULyraReplicationGraphNode_AlwaysRelevant_ForConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraReplicationGraphNode_AlwaysRelevant_ForConnection), 968672110U) },
		{ Z_Construct_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter, ULyraReplicationGraphNode_PlayerStateFrequencyLimiter::StaticClass, TEXT("ULyraReplicationGraphNode_PlayerStateFrequencyLimiter"), &Z_Registration_Info_UClass_ULyraReplicationGraphNode_PlayerStateFrequencyLimiter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraReplicationGraphNode_PlayerStateFrequencyLimiter), 3334661113U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraph_h_181117400(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
