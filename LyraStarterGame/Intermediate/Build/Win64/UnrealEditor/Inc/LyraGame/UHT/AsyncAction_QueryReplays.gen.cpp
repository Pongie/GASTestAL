// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Replays/AsyncAction_QueryReplays.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncAction_QueryReplays() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	LYRAGAME_API UClass* Z_Construct_UClass_UAsyncAction_QueryReplays();
	LYRAGAME_API UClass* Z_Construct_UClass_UAsyncAction_QueryReplays_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraReplayList_NoRegister();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_LyraGame_eventQueryReplayAsyncDelegate_Parms
		{
			ULyraReplayList* Results;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Results;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LyraGame_eventQueryReplayAsyncDelegate_Parms, Results), Z_Construct_UClass_ULyraReplayList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::NewProp_Results,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replays/AsyncAction_QueryReplays.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LyraGame, nullptr, "QueryReplayAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::_Script_LyraGame_eventQueryReplayAsyncDelegate_Parms), Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FQueryReplayAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& QueryReplayAsyncDelegate, ULyraReplayList* Results)
{
	struct _Script_LyraGame_eventQueryReplayAsyncDelegate_Parms
	{
		ULyraReplayList* Results;
	};
	_Script_LyraGame_eventQueryReplayAsyncDelegate_Parms Parms;
	Parms.Results=Results;
	QueryReplayAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAsyncAction_QueryReplays::execQueryReplays)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncAction_QueryReplays**)Z_Param__Result=UAsyncAction_QueryReplays::QueryReplays(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	void UAsyncAction_QueryReplays::StaticRegisterNativesUAsyncAction_QueryReplays()
	{
		UClass* Class = UAsyncAction_QueryReplays::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryReplays", &UAsyncAction_QueryReplays::execQueryReplays },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics
	{
		struct AsyncAction_QueryReplays_eventQueryReplays_Parms
		{
			APlayerController* PlayerController;
			UAsyncAction_QueryReplays* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_QueryReplays_eventQueryReplays_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_QueryReplays_eventQueryReplays_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_QueryReplays_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "// Watches for team changes in the specified player controller\n" },
		{ "ModuleRelativePath", "Replays/AsyncAction_QueryReplays.h" },
		{ "ToolTip", "Watches for team changes in the specified player controller" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_QueryReplays, nullptr, "QueryReplays", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::AsyncAction_QueryReplays_eventQueryReplays_Parms), Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncAction_QueryReplays);
	UClass* Z_Construct_UClass_UAsyncAction_QueryReplays_NoRegister()
	{
		return UAsyncAction_QueryReplays::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncAction_QueryReplays_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QueryComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultList_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ResultList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_QueryReplays_QueryReplays, "QueryReplays" }, // 162304311
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Watches for team changes in the specified player controller\n */" },
		{ "IncludePath", "Replays/AsyncAction_QueryReplays.h" },
		{ "ModuleRelativePath", "Replays/AsyncAction_QueryReplays.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Watches for team changes in the specified player controller" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::NewProp_QueryComplete_MetaData[] = {
		{ "Comment", "// Called when the replay query completes\n" },
		{ "ModuleRelativePath", "Replays/AsyncAction_QueryReplays.h" },
		{ "ToolTip", "Called when the replay query completes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::NewProp_QueryComplete = { "QueryComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncAction_QueryReplays, QueryComplete), Z_Construct_UDelegateFunction_LyraGame_QueryReplayAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::NewProp_QueryComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::NewProp_QueryComplete_MetaData)) }; // 901664014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::NewProp_ResultList_MetaData[] = {
		{ "ModuleRelativePath", "Replays/AsyncAction_QueryReplays.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::NewProp_ResultList = { "ResultList", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncAction_QueryReplays, ResultList), Z_Construct_UClass_ULyraReplayList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::NewProp_ResultList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::NewProp_ResultList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::NewProp_QueryComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::NewProp_ResultList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_QueryReplays>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::ClassParams = {
		&UAsyncAction_QueryReplays::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncAction_QueryReplays()
	{
		if (!Z_Registration_Info_UClass_UAsyncAction_QueryReplays.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_QueryReplays.OuterSingleton, Z_Construct_UClass_UAsyncAction_QueryReplays_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncAction_QueryReplays.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UAsyncAction_QueryReplays>()
	{
		return UAsyncAction_QueryReplays::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_QueryReplays);
	UAsyncAction_QueryReplays::~UAsyncAction_QueryReplays() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Replays_AsyncAction_QueryReplays_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Replays_AsyncAction_QueryReplays_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAction_QueryReplays, UAsyncAction_QueryReplays::StaticClass, TEXT("UAsyncAction_QueryReplays"), &Z_Registration_Info_UClass_UAsyncAction_QueryReplays, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_QueryReplays), 2063745190U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Replays_AsyncAction_QueryReplays_h_3726405692(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Replays_AsyncAction_QueryReplays_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Replays_AsyncAction_QueryReplays_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
