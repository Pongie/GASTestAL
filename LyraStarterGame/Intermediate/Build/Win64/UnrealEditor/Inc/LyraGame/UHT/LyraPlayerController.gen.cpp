// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/LyraPlayerController.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPlayerController() {}
// Cross Module References
	COMMONGAME_API UClass* Z_Construct_UClass_ACommonPlayerController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraHUD_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerController();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerController_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerState_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraReplayPlayerController();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraReplayPlayerController_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraAssistInterface_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ALyraPlayerController::execOnPlayerStateChangedTeam)
	{
		P_GET_OBJECT(UObject,Z_Param_TeamAgent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OldTeam);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerStateChangedTeam(Z_Param_TeamAgent,Z_Param_OldTeam,Z_Param_NewTeam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraPlayerController::execGetIsAutoRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsAutoRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraPlayerController::execSetIsAutoRunning)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsAutoRunning(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraPlayerController::execServerCheatAll)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerCheatAll_Validate(Z_Param_Msg))
		{
			RPC_ValidateFailed(TEXT("ServerCheatAll_Validate"));
			return;
		}
		P_THIS->ServerCheatAll_Implementation(Z_Param_Msg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraPlayerController::execServerCheat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerCheat_Validate(Z_Param_Msg))
		{
			RPC_ValidateFailed(TEXT("ServerCheat_Validate"));
			return;
		}
		P_THIS->ServerCheat_Implementation(Z_Param_Msg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraPlayerController::execGetLyraHUD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALyraHUD**)Z_Param__Result=P_THIS->GetLyraHUD();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraPlayerController::execGetLyraAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraAbilitySystemComponent**)Z_Param__Result=P_THIS->GetLyraAbilitySystemComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraPlayerController::execGetLyraPlayerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALyraPlayerState**)Z_Param__Result=P_THIS->GetLyraPlayerState();
		P_NATIVE_END;
	}
	struct LyraPlayerController_eventServerCheat_Parms
	{
		FString Msg;
	};
	struct LyraPlayerController_eventServerCheatAll_Parms
	{
		FString Msg;
	};
	static FName NAME_ALyraPlayerController_K2_OnEndAutoRun = FName(TEXT("K2_OnEndAutoRun"));
	void ALyraPlayerController::K2_OnEndAutoRun()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALyraPlayerController_K2_OnEndAutoRun),NULL);
	}
	static FName NAME_ALyraPlayerController_K2_OnStartAutoRun = FName(TEXT("K2_OnStartAutoRun"));
	void ALyraPlayerController::K2_OnStartAutoRun()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALyraPlayerController_K2_OnStartAutoRun),NULL);
	}
	static FName NAME_ALyraPlayerController_ServerCheat = FName(TEXT("ServerCheat"));
	void ALyraPlayerController::ServerCheat(const FString& Msg)
	{
		LyraPlayerController_eventServerCheat_Parms Parms;
		Parms.Msg=Msg;
		ProcessEvent(FindFunctionChecked(NAME_ALyraPlayerController_ServerCheat),&Parms);
	}
	static FName NAME_ALyraPlayerController_ServerCheatAll = FName(TEXT("ServerCheatAll"));
	void ALyraPlayerController::ServerCheatAll(const FString& Msg)
	{
		LyraPlayerController_eventServerCheatAll_Parms Parms;
		Parms.Msg=Msg;
		ProcessEvent(FindFunctionChecked(NAME_ALyraPlayerController_ServerCheatAll),&Parms);
	}
	void ALyraPlayerController::StaticRegisterNativesALyraPlayerController()
	{
		UClass* Class = ALyraPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsAutoRunning", &ALyraPlayerController::execGetIsAutoRunning },
			{ "GetLyraAbilitySystemComponent", &ALyraPlayerController::execGetLyraAbilitySystemComponent },
			{ "GetLyraHUD", &ALyraPlayerController::execGetLyraHUD },
			{ "GetLyraPlayerState", &ALyraPlayerController::execGetLyraPlayerState },
			{ "OnPlayerStateChangedTeam", &ALyraPlayerController::execOnPlayerStateChangedTeam },
			{ "ServerCheat", &ALyraPlayerController::execServerCheat },
			{ "ServerCheatAll", &ALyraPlayerController::execServerCheatAll },
			{ "SetIsAutoRunning", &ALyraPlayerController::execSetIsAutoRunning },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics
	{
		struct LyraPlayerController_eventGetIsAutoRunning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraPlayerController_eventGetIsAutoRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraPlayerController_eventGetIsAutoRunning_Parms), &Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Character" },
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "GetIsAutoRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::LyraPlayerController_eventGetIsAutoRunning_Parms), Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics
	{
		struct LyraPlayerController_eventGetLyraAbilitySystemComponent_Parms
		{
			ULyraAbilitySystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerController_eventGetLyraAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|PlayerController" },
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "GetLyraAbilitySystemComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::LyraPlayerController_eventGetLyraAbilitySystemComponent_Parms), Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics
	{
		struct LyraPlayerController_eventGetLyraHUD_Parms
		{
			ALyraHUD* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerController_eventGetLyraHUD_Parms, ReturnValue), Z_Construct_UClass_ALyraHUD_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|PlayerController" },
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "GetLyraHUD", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::LyraPlayerController_eventGetLyraHUD_Parms), Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics
	{
		struct LyraPlayerController_eventGetLyraPlayerState_Parms
		{
			ALyraPlayerState* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerController_eventGetLyraPlayerState_Parms, ReturnValue), Z_Construct_UClass_ALyraPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|PlayerController" },
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "GetLyraPlayerState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::LyraPlayerController_eventGetLyraPlayerState_Parms), Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerController_K2_OnEndAutoRun_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerController_K2_OnEndAutoRun_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnEndAutoRun" },
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_K2_OnEndAutoRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "K2_OnEndAutoRun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerController_K2_OnEndAutoRun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_K2_OnEndAutoRun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerController_K2_OnEndAutoRun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_K2_OnEndAutoRun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerController_K2_OnStartAutoRun_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerController_K2_OnStartAutoRun_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnStartAutoRun" },
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_K2_OnStartAutoRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "K2_OnStartAutoRun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerController_K2_OnStartAutoRun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_K2_OnStartAutoRun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerController_K2_OnStartAutoRun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_K2_OnStartAutoRun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics
	{
		struct LyraPlayerController_eventOnPlayerStateChangedTeam_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::NewProp_TeamAgent = { "TeamAgent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerController_eventOnPlayerStateChangedTeam_Parms, TeamAgent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::NewProp_OldTeam = { "OldTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerController_eventOnPlayerStateChangedTeam_Parms, OldTeam), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerController_eventOnPlayerStateChangedTeam_Parms, NewTeam), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::NewProp_TeamAgent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::NewProp_OldTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::NewProp_NewTeam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "OnPlayerStateChangedTeam", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::LyraPlayerController_eventOnPlayerStateChangedTeam_Parms), Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Msg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerController_eventServerCheat_Parms, Msg), METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::NewProp_Msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::NewProp_Msg_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::NewProp_Msg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Run a cheat command on the server.\n" },
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
		{ "ToolTip", "Run a cheat command on the server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "ServerCheat", nullptr, nullptr, sizeof(LyraPlayerController_eventServerCheat_Parms), Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerController_ServerCheat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_ServerCheat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Msg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerController_eventServerCheatAll_Parms, Msg), METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::NewProp_Msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::NewProp_Msg_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::NewProp_Msg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Run a cheat command on the server for all players.\n" },
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
		{ "ToolTip", "Run a cheat command on the server for all players." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "ServerCheatAll", nullptr, nullptr, sizeof(LyraPlayerController_eventServerCheatAll_Parms), Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics
	{
		struct LyraPlayerController_eventSetIsAutoRunning_Parms
		{
			bool bEnabled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((LyraPlayerController_eventSetIsAutoRunning_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraPlayerController_eventSetIsAutoRunning_Parms), &Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Character" },
		{ "Comment", "//~End of ILyraTeamAgentInterface interface\n" },
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerController, nullptr, "SetIsAutoRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::LyraPlayerController_eventSetIsAutoRunning_Parms), Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraPlayerController);
	UClass* Z_Construct_UClass_ALyraPlayerController_NoRegister()
	{
		return ALyraPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ALyraPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSeenPlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LastSeenPlayerState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALyraPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACommonPlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALyraPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALyraPlayerController_GetIsAutoRunning, "GetIsAutoRunning" }, // 1881166978
		{ &Z_Construct_UFunction_ALyraPlayerController_GetLyraAbilitySystemComponent, "GetLyraAbilitySystemComponent" }, // 3184209124
		{ &Z_Construct_UFunction_ALyraPlayerController_GetLyraHUD, "GetLyraHUD" }, // 1842702630
		{ &Z_Construct_UFunction_ALyraPlayerController_GetLyraPlayerState, "GetLyraPlayerState" }, // 3360569047
		{ &Z_Construct_UFunction_ALyraPlayerController_K2_OnEndAutoRun, "K2_OnEndAutoRun" }, // 2705063346
		{ &Z_Construct_UFunction_ALyraPlayerController_K2_OnStartAutoRun, "K2_OnStartAutoRun" }, // 1314459643
		{ &Z_Construct_UFunction_ALyraPlayerController_OnPlayerStateChangedTeam, "OnPlayerStateChangedTeam" }, // 930527557
		{ &Z_Construct_UFunction_ALyraPlayerController_ServerCheat, "ServerCheat" }, // 3683814394
		{ &Z_Construct_UFunction_ALyraPlayerController_ServerCheatAll, "ServerCheatAll" }, // 4256826600
		{ &Z_Construct_UFunction_ALyraPlayerController_SetIsAutoRunning, "SetIsAutoRunning" }, // 540020487
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ALyraPlayerController\n *\n *\x09The base player controller class used by this project.\n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/LyraPlayerController.h" },
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base player controller class used by this project." },
		{ "ToolTip", "ALyraPlayerController\n\n    The base player controller class used by this project." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerController_Statics::NewProp_OnTeamChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALyraPlayerController_Statics::NewProp_OnTeamChangedDelegate = { "OnTeamChangedDelegate", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraPlayerController, OnTeamChangedDelegate), Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerController_Statics::NewProp_OnTeamChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerController_Statics::NewProp_OnTeamChangedDelegate_MetaData)) }; // 4103646683
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerController_Statics::NewProp_LastSeenPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALyraPlayerController_Statics::NewProp_LastSeenPlayerState = { "LastSeenPlayerState", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraPlayerController, LastSeenPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerController_Statics::NewProp_LastSeenPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerController_Statics::NewProp_LastSeenPlayerState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerController_Statics::NewProp_OnTeamChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerController_Statics::NewProp_LastSeenPlayerState,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALyraPlayerController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULyraCameraAssistInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraPlayerController, ILyraCameraAssistInterface), false },  // 1863486355
			{ Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraPlayerController, ILyraTeamAgentInterface), false },  // 3166716212
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALyraPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraPlayerController_Statics::ClassParams = {
		&ALyraPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALyraPlayerController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALyraPlayerController()
	{
		if (!Z_Registration_Info_UClass_ALyraPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraPlayerController.OuterSingleton, Z_Construct_UClass_ALyraPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALyraPlayerController.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ALyraPlayerController>()
	{
		return ALyraPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraPlayerController);
	ALyraPlayerController::~ALyraPlayerController() {}
	void ALyraReplayPlayerController::StaticRegisterNativesALyraReplayPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraReplayPlayerController);
	UClass* Z_Construct_UClass_ALyraReplayPlayerController_NoRegister()
	{
		return ALyraReplayPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ALyraReplayPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALyraReplayPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALyraPlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraReplayPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// A player controller used for replay capture and playback\n" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/LyraPlayerController.h" },
		{ "ModuleRelativePath", "Player/LyraPlayerController.h" },
		{ "ToolTip", "A player controller used for replay capture and playback" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALyraReplayPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraReplayPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraReplayPlayerController_Statics::ClassParams = {
		&ALyraReplayPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALyraReplayPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraReplayPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALyraReplayPlayerController()
	{
		if (!Z_Registration_Info_UClass_ALyraReplayPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraReplayPlayerController.OuterSingleton, Z_Construct_UClass_ALyraReplayPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALyraReplayPlayerController.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ALyraReplayPlayerController>()
	{
		return ALyraReplayPlayerController::StaticClass();
	}
	ALyraReplayPlayerController::ALyraReplayPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraReplayPlayerController);
	ALyraReplayPlayerController::~ALyraReplayPlayerController() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALyraPlayerController, ALyraPlayerController::StaticClass, TEXT("ALyraPlayerController"), &Z_Registration_Info_UClass_ALyraPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraPlayerController), 2389261794U) },
		{ Z_Construct_UClass_ALyraReplayPlayerController, ALyraReplayPlayerController::StaticClass, TEXT("ALyraReplayPlayerController"), &Z_Registration_Info_UClass_ALyraReplayPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraReplayPlayerController), 3280607001U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_2010974049(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
