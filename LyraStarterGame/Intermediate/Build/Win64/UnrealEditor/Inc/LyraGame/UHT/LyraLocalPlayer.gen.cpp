// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/LyraLocalPlayer.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Engine.h"
#include "../Public/AudioMixerBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraLocalPlayer() {}
// Cross Module References
	AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSwapAudioOutputResult();
	COMMONGAME_API UClass* Z_Construct_UClass_UCommonLocalPlayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraLocalPlayer();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraLocalPlayer_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingsLocal_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraSettingsShared_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraLocalPlayer::execOnControllerChangedTeam)
	{
		P_GET_OBJECT(UObject,Z_Param_TeamAgent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OldTeam);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnControllerChangedTeam(Z_Param_TeamAgent,Z_Param_OldTeam,Z_Param_NewTeam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraLocalPlayer::execOnCompletedAudioDeviceSwap)
	{
		P_GET_STRUCT_REF(FSwapAudioOutputResult,Z_Param_Out_SwapResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompletedAudioDeviceSwap(Z_Param_Out_SwapResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraLocalPlayer::execGetSharedSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraSettingsShared**)Z_Param__Result=P_THIS->GetSharedSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraLocalPlayer::execGetLocalSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraSettingsLocal**)Z_Param__Result=P_THIS->GetLocalSettings();
		P_NATIVE_END;
	}
	void ULyraLocalPlayer::StaticRegisterNativesULyraLocalPlayer()
	{
		UClass* Class = ULyraLocalPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocalSettings", &ULyraLocalPlayer::execGetLocalSettings },
			{ "GetSharedSettings", &ULyraLocalPlayer::execGetSharedSettings },
			{ "OnCompletedAudioDeviceSwap", &ULyraLocalPlayer::execOnCompletedAudioDeviceSwap },
			{ "OnControllerChangedTeam", &ULyraLocalPlayer::execOnControllerChangedTeam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics
	{
		struct LyraLocalPlayer_eventGetLocalSettings_Parms
		{
			ULyraSettingsLocal* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraLocalPlayer_eventGetLocalSettings_Parms, ReturnValue), Z_Construct_UClass_ULyraSettingsLocal_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLocalPlayer, nullptr, "GetLocalSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::LyraLocalPlayer_eventGetLocalSettings_Parms), Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics
	{
		struct LyraLocalPlayer_eventGetSharedSettings_Parms
		{
			ULyraSettingsShared* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraLocalPlayer_eventGetSharedSettings_Parms, ReturnValue), Z_Construct_UClass_ULyraSettingsShared_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLocalPlayer, nullptr, "GetSharedSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::LyraLocalPlayer_eventGetSharedSettings_Parms), Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics
	{
		struct LyraLocalPlayer_eventOnCompletedAudioDeviceSwap_Parms
		{
			FSwapAudioOutputResult SwapResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwapResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwapResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::NewProp_SwapResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::NewProp_SwapResult = { "SwapResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraLocalPlayer_eventOnCompletedAudioDeviceSwap_Parms, SwapResult), Z_Construct_UScriptStruct_FSwapAudioOutputResult, METADATA_PARAMS(Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::NewProp_SwapResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::NewProp_SwapResult_MetaData)) }; // 1166732641
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::NewProp_SwapResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLocalPlayer, nullptr, "OnCompletedAudioDeviceSwap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::LyraLocalPlayer_eventOnCompletedAudioDeviceSwap_Parms), Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics
	{
		struct LyraLocalPlayer_eventOnControllerChangedTeam_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::NewProp_TeamAgent = { "TeamAgent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraLocalPlayer_eventOnControllerChangedTeam_Parms, TeamAgent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::NewProp_OldTeam = { "OldTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraLocalPlayer_eventOnControllerChangedTeam_Parms, OldTeam), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraLocalPlayer_eventOnControllerChangedTeam_Parms, NewTeam), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::NewProp_TeamAgent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::NewProp_OldTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::NewProp_NewTeam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraLocalPlayer, nullptr, "OnControllerChangedTeam", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::LyraLocalPlayer_eventOnControllerChangedTeam_Parms), Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraLocalPlayer);
	UClass* Z_Construct_UClass_ULyraLocalPlayer_NoRegister()
	{
		return ULyraLocalPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ULyraLocalPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SharedSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastBoundPC_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LastBoundPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraLocalPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonLocalPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraLocalPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraLocalPlayer_GetLocalSettings, "GetLocalSettings" }, // 2689884333
		{ &Z_Construct_UFunction_ULyraLocalPlayer_GetSharedSettings, "GetSharedSettings" }, // 3735357407
		{ &Z_Construct_UFunction_ULyraLocalPlayer_OnCompletedAudioDeviceSwap, "OnCompletedAudioDeviceSwap" }, // 1734176150
		{ &Z_Construct_UFunction_ULyraLocalPlayer_OnControllerChangedTeam, "OnControllerChangedTeam" }, // 1835312714
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraLocalPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraLocalPlayer\n */" },
		{ "IncludePath", "Player/LyraLocalPlayer.h" },
		{ "ModuleRelativePath", "Player/LyraLocalPlayer.h" },
		{ "ToolTip", "ULyraLocalPlayer" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_SharedSettings_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_SharedSettings = { "SharedSettings", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraLocalPlayer, SharedSettings), Z_Construct_UClass_ULyraSettingsShared_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_SharedSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_SharedSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraLocalPlayer.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraLocalPlayer, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_InputMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_InputMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_OnTeamChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_OnTeamChangedDelegate = { "OnTeamChangedDelegate", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraLocalPlayer, OnTeamChangedDelegate), Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_OnTeamChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_OnTeamChangedDelegate_MetaData)) }; // 4103646683
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_LastBoundPC_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_LastBoundPC = { "LastBoundPC", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraLocalPlayer, LastBoundPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_LastBoundPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_LastBoundPC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraLocalPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_SharedSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_OnTeamChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraLocalPlayer_Statics::NewProp_LastBoundPC,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULyraLocalPlayer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ULyraLocalPlayer, ILyraTeamAgentInterface), false },  // 3166716212
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraLocalPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraLocalPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraLocalPlayer_Statics::ClassParams = {
		&ULyraLocalPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraLocalPlayer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLocalPlayer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000ACu,
		METADATA_PARAMS(Z_Construct_UClass_ULyraLocalPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraLocalPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraLocalPlayer()
	{
		if (!Z_Registration_Info_UClass_ULyraLocalPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraLocalPlayer.OuterSingleton, Z_Construct_UClass_ULyraLocalPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraLocalPlayer.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraLocalPlayer>()
	{
		return ULyraLocalPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraLocalPlayer);
	ULyraLocalPlayer::~ULyraLocalPlayer() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraLocalPlayer, ULyraLocalPlayer::StaticClass, TEXT("ULyraLocalPlayer"), &Z_Registration_Info_UClass_ULyraLocalPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraLocalPlayer), 3718099853U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_3916213727(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
