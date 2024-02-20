// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/AsyncAction_ExperienceReady.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncAction_ExperienceReady() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	LYRAGAME_API UClass* Z_Construct_UClass_UAsyncAction_ExperienceReady();
	LYRAGAME_API UClass* Z_Construct_UClass_UAsyncAction_ExperienceReady_NoRegister();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_ExperienceReadyAsyncDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LyraGame_ExperienceReadyAsyncDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_ExperienceReadyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameModes/AsyncAction_ExperienceReady.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LyraGame_ExperienceReadyAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LyraGame, nullptr, "ExperienceReadyAsyncDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_ExperienceReadyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_ExperienceReadyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LyraGame_ExperienceReadyAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LyraGame_ExperienceReadyAsyncDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FExperienceReadyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& ExperienceReadyAsyncDelegate)
{
	ExperienceReadyAsyncDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAsyncAction_ExperienceReady::execWaitForExperienceReady)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncAction_ExperienceReady**)Z_Param__Result=UAsyncAction_ExperienceReady::WaitForExperienceReady(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UAsyncAction_ExperienceReady::StaticRegisterNativesUAsyncAction_ExperienceReady()
	{
		UClass* Class = UAsyncAction_ExperienceReady::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitForExperienceReady", &UAsyncAction_ExperienceReady::execWaitForExperienceReady },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics
	{
		struct AsyncAction_ExperienceReady_eventWaitForExperienceReady_Parms
		{
			UObject* WorldContextObject;
			UAsyncAction_ExperienceReady* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_ExperienceReady_eventWaitForExperienceReady_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_ExperienceReady_eventWaitForExperienceReady_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_ExperienceReady_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "// Waits for the experience to be determined and loaded\n" },
		{ "ModuleRelativePath", "GameModes/AsyncAction_ExperienceReady.h" },
		{ "ToolTip", "Waits for the experience to be determined and loaded" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_ExperienceReady, nullptr, "WaitForExperienceReady", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::AsyncAction_ExperienceReady_eventWaitForExperienceReady_Parms), Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncAction_ExperienceReady);
	UClass* Z_Construct_UClass_UAsyncAction_ExperienceReady_NoRegister()
	{
		return UAsyncAction_ExperienceReady::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReady_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReady;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_ExperienceReady_WaitForExperienceReady, "WaitForExperienceReady" }, // 4283005472
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Asynchronously waits for the game state to be ready and valid and then calls the OnReady event.  Will call OnReady\n * immediately if the game state is valid already.\n */" },
		{ "IncludePath", "GameModes/AsyncAction_ExperienceReady.h" },
		{ "ModuleRelativePath", "GameModes/AsyncAction_ExperienceReady.h" },
		{ "ToolTip", "Asynchronously waits for the game state to be ready and valid and then calls the OnReady event.  Will call OnReady\nimmediately if the game state is valid already." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::NewProp_OnReady_MetaData[] = {
		{ "Comment", "// Called when the experience has been determined and is ready/loaded\n" },
		{ "ModuleRelativePath", "GameModes/AsyncAction_ExperienceReady.h" },
		{ "ToolTip", "Called when the experience has been determined and is ready/loaded" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::NewProp_OnReady = { "OnReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncAction_ExperienceReady, OnReady), Z_Construct_UDelegateFunction_LyraGame_ExperienceReadyAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::NewProp_OnReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::NewProp_OnReady_MetaData)) }; // 1294378325
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::NewProp_OnReady,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_ExperienceReady>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::ClassParams = {
		&UAsyncAction_ExperienceReady::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncAction_ExperienceReady()
	{
		if (!Z_Registration_Info_UClass_UAsyncAction_ExperienceReady.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_ExperienceReady.OuterSingleton, Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncAction_ExperienceReady.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UAsyncAction_ExperienceReady>()
	{
		return UAsyncAction_ExperienceReady::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_ExperienceReady);
	UAsyncAction_ExperienceReady::~UAsyncAction_ExperienceReady() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_AsyncAction_ExperienceReady_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_AsyncAction_ExperienceReady_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAction_ExperienceReady, UAsyncAction_ExperienceReady::StaticClass, TEXT("UAsyncAction_ExperienceReady"), &Z_Registration_Info_UClass_UAsyncAction_ExperienceReady, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_ExperienceReady), 2466116787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_AsyncAction_ExperienceReady_h_3936636553(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_AsyncAction_ExperienceReady_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_AsyncAction_ExperienceReady_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
