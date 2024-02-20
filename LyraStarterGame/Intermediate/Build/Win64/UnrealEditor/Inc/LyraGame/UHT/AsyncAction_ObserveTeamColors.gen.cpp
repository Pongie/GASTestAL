// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Teams/AsyncAction_ObserveTeamColors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncAction_ObserveTeamColors() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
	LYRAGAME_API UClass* Z_Construct_UClass_UAsyncAction_ObserveTeamColors();
	LYRAGAME_API UClass* Z_Construct_UClass_UAsyncAction_ObserveTeamColors_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_LyraGame_eventTeamColorObservedAsyncDelegate_Parms
		{
			bool bTeamSet;
			int32 TeamId;
			const ULyraTeamDisplayAsset* DisplayAsset;
		};
		static void NewProp_bTeamSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeamSet;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TeamId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::NewProp_bTeamSet_SetBit(void* Obj)
	{
		((_Script_LyraGame_eventTeamColorObservedAsyncDelegate_Parms*)Obj)->bTeamSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::NewProp_bTeamSet = { "bTeamSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_LyraGame_eventTeamColorObservedAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::NewProp_bTeamSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LyraGame_eventTeamColorObservedAsyncDelegate_Parms, TeamId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::NewProp_DisplayAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::NewProp_DisplayAsset = { "DisplayAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LyraGame_eventTeamColorObservedAsyncDelegate_Parms, DisplayAsset), Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::NewProp_DisplayAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::NewProp_DisplayAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::NewProp_bTeamSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::NewProp_TeamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::NewProp_DisplayAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Teams/AsyncAction_ObserveTeamColors.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LyraGame, nullptr, "TeamColorObservedAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::_Script_LyraGame_eventTeamColorObservedAsyncDelegate_Parms), Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTeamColorObservedAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& TeamColorObservedAsyncDelegate, bool bTeamSet, int32 TeamId, const ULyraTeamDisplayAsset* DisplayAsset)
{
	struct _Script_LyraGame_eventTeamColorObservedAsyncDelegate_Parms
	{
		bool bTeamSet;
		int32 TeamId;
		const ULyraTeamDisplayAsset* DisplayAsset;
	};
	_Script_LyraGame_eventTeamColorObservedAsyncDelegate_Parms Parms;
	Parms.bTeamSet=bTeamSet ? true : false;
	Parms.TeamId=TeamId;
	Parms.DisplayAsset=DisplayAsset;
	TeamColorObservedAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAsyncAction_ObserveTeamColors::execOnDisplayAssetChanged)
	{
		P_GET_OBJECT(ULyraTeamDisplayAsset,Z_Param_DisplayAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDisplayAssetChanged(Z_Param_DisplayAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncAction_ObserveTeamColors::execOnWatchedAgentChangedTeam)
	{
		P_GET_OBJECT(UObject,Z_Param_TeamAgent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OldTeam);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWatchedAgentChangedTeam(Z_Param_TeamAgent,Z_Param_OldTeam,Z_Param_NewTeam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncAction_ObserveTeamColors::execObserveTeamColors)
	{
		P_GET_OBJECT(UObject,Z_Param_TeamAgent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncAction_ObserveTeamColors**)Z_Param__Result=UAsyncAction_ObserveTeamColors::ObserveTeamColors(Z_Param_TeamAgent);
		P_NATIVE_END;
	}
	void UAsyncAction_ObserveTeamColors::StaticRegisterNativesUAsyncAction_ObserveTeamColors()
	{
		UClass* Class = UAsyncAction_ObserveTeamColors::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ObserveTeamColors", &UAsyncAction_ObserveTeamColors::execObserveTeamColors },
			{ "OnDisplayAssetChanged", &UAsyncAction_ObserveTeamColors::execOnDisplayAssetChanged },
			{ "OnWatchedAgentChangedTeam", &UAsyncAction_ObserveTeamColors::execOnWatchedAgentChangedTeam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics
	{
		struct AsyncAction_ObserveTeamColors_eventObserveTeamColors_Parms
		{
			UObject* TeamAgent;
			UAsyncAction_ObserveTeamColors* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamAgent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::NewProp_TeamAgent = { "TeamAgent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_ObserveTeamColors_eventObserveTeamColors_Parms, TeamAgent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_ObserveTeamColors_eventObserveTeamColors_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_ObserveTeamColors_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::NewProp_TeamAgent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "// Watches for team changes on the specified team agent\n//  - It will will fire once immediately to give the current team assignment\n//  - For anything that can ever belong to a team (implements ILyraTeamAgentInterface),\n//    it will also listen for team assignment changes in the future\n" },
		{ "Keywords", "Watch" },
		{ "ModuleRelativePath", "Teams/AsyncAction_ObserveTeamColors.h" },
		{ "ToolTip", "Watches for team changes on the specified team agent\n - It will will fire once immediately to give the current team assignment\n - For anything that can ever belong to a team (implements ILyraTeamAgentInterface),\n   it will also listen for team assignment changes in the future" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_ObserveTeamColors, nullptr, "ObserveTeamColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::AsyncAction_ObserveTeamColors_eventObserveTeamColors_Parms), Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics
	{
		struct AsyncAction_ObserveTeamColors_eventOnDisplayAssetChanged_Parms
		{
			const ULyraTeamDisplayAsset* DisplayAsset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::NewProp_DisplayAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::NewProp_DisplayAsset = { "DisplayAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_ObserveTeamColors_eventOnDisplayAssetChanged_Parms, DisplayAsset), Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::NewProp_DisplayAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::NewProp_DisplayAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::NewProp_DisplayAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Teams/AsyncAction_ObserveTeamColors.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_ObserveTeamColors, nullptr, "OnDisplayAssetChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::AsyncAction_ObserveTeamColors_eventOnDisplayAssetChanged_Parms), Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics
	{
		struct AsyncAction_ObserveTeamColors_eventOnWatchedAgentChangedTeam_Parms
		{
			UObject* TeamAgent;
			int32 OldTeam;
			int32 NewTeam;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamAgent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldTeam;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewTeam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::NewProp_TeamAgent = { "TeamAgent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_ObserveTeamColors_eventOnWatchedAgentChangedTeam_Parms, TeamAgent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::NewProp_OldTeam = { "OldTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_ObserveTeamColors_eventOnWatchedAgentChangedTeam_Parms, OldTeam), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_ObserveTeamColors_eventOnWatchedAgentChangedTeam_Parms, NewTeam), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::NewProp_TeamAgent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::NewProp_OldTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::NewProp_NewTeam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Teams/AsyncAction_ObserveTeamColors.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_ObserveTeamColors, nullptr, "OnWatchedAgentChangedTeam", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::AsyncAction_ObserveTeamColors_eventOnWatchedAgentChangedTeam_Parms), Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncAction_ObserveTeamColors);
	UClass* Z_Construct_UClass_UAsyncAction_ObserveTeamColors_NoRegister()
	{
		return UAsyncAction_ObserveTeamColors::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_ObserveTeamColors, "ObserveTeamColors" }, // 1973642867
		{ &Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnDisplayAssetChanged, "OnDisplayAssetChanged" }, // 3826027309
		{ &Z_Construct_UFunction_UAsyncAction_ObserveTeamColors_OnWatchedAgentChangedTeam, "OnWatchedAgentChangedTeam" }, // 3320960243
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Watches for team color changes in the specified object\n */" },
		{ "IncludePath", "Teams/AsyncAction_ObserveTeamColors.h" },
		{ "ModuleRelativePath", "Teams/AsyncAction_ObserveTeamColors.h" },
		{ "ToolTip", "Watches for team color changes in the specified object" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::NewProp_OnTeamChanged_MetaData[] = {
		{ "Comment", "// Called when the team is set or changed\n" },
		{ "ModuleRelativePath", "Teams/AsyncAction_ObserveTeamColors.h" },
		{ "ToolTip", "Called when the team is set or changed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::NewProp_OnTeamChanged = { "OnTeamChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncAction_ObserveTeamColors, OnTeamChanged), Z_Construct_UDelegateFunction_LyraGame_TeamColorObservedAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::NewProp_OnTeamChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::NewProp_OnTeamChanged_MetaData)) }; // 39121411
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::NewProp_OnTeamChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_ObserveTeamColors>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::ClassParams = {
		&UAsyncAction_ObserveTeamColors::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncAction_ObserveTeamColors()
	{
		if (!Z_Registration_Info_UClass_UAsyncAction_ObserveTeamColors.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_ObserveTeamColors.OuterSingleton, Z_Construct_UClass_UAsyncAction_ObserveTeamColors_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncAction_ObserveTeamColors.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<UAsyncAction_ObserveTeamColors>()
	{
		return UAsyncAction_ObserveTeamColors::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_ObserveTeamColors);
	UAsyncAction_ObserveTeamColors::~UAsyncAction_ObserveTeamColors() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeamColors_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeamColors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAction_ObserveTeamColors, UAsyncAction_ObserveTeamColors::StaticClass, TEXT("UAsyncAction_ObserveTeamColors"), &Z_Registration_Info_UClass_UAsyncAction_ObserveTeamColors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_ObserveTeamColors), 2474996627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeamColors_h_3633272665(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeamColors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeamColors_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
