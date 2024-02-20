// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/LyraGameState.h"
#include "Messages/LyraVerbMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameState() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraGameState();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraGameState_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraExperienceManagerComponent_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraVerbMessage();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameStateBase();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ALyraGameState::execMulticastReliableMessageToClients)
	{
		P_GET_STRUCT(FLyraVerbMessage,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastReliableMessageToClients_Implementation(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraGameState::execMulticastMessageToClients)
	{
		P_GET_STRUCT(FLyraVerbMessage,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastMessageToClients_Implementation(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraGameState::execGetLyraAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraAbilitySystemComponent**)Z_Param__Result=P_THIS->GetLyraAbilitySystemComponent();
		P_NATIVE_END;
	}
	struct LyraGameState_eventMulticastMessageToClients_Parms
	{
		FLyraVerbMessage Message;
	};
	struct LyraGameState_eventMulticastReliableMessageToClients_Parms
	{
		FLyraVerbMessage Message;
	};
	static FName NAME_ALyraGameState_MulticastMessageToClients = FName(TEXT("MulticastMessageToClients"));
	void ALyraGameState::MulticastMessageToClients(const FLyraVerbMessage Message)
	{
		LyraGameState_eventMulticastMessageToClients_Parms Parms;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_ALyraGameState_MulticastMessageToClients),&Parms);
	}
	static FName NAME_ALyraGameState_MulticastReliableMessageToClients = FName(TEXT("MulticastReliableMessageToClients"));
	void ALyraGameState::MulticastReliableMessageToClients(const FLyraVerbMessage Message)
	{
		LyraGameState_eventMulticastReliableMessageToClients_Parms Parms;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_ALyraGameState_MulticastReliableMessageToClients),&Parms);
	}
	void ALyraGameState::StaticRegisterNativesALyraGameState()
	{
		UClass* Class = ALyraGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLyraAbilitySystemComponent", &ALyraGameState::execGetLyraAbilitySystemComponent },
			{ "MulticastMessageToClients", &ALyraGameState::execMulticastMessageToClients },
			{ "MulticastReliableMessageToClients", &ALyraGameState::execMulticastReliableMessageToClients },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics
	{
		struct LyraGameState_eventGetLyraAbilitySystemComponent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameState_eventGetLyraAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|GameState" },
		{ "Comment", "//~End of IAbilitySystemInterface\n" },
		{ "ModuleRelativePath", "GameModes/LyraGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraGameState, nullptr, "GetLyraAbilitySystemComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::LyraGameState_eventGetLyraAbilitySystemComponent_Parms), Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameState_eventMulticastMessageToClients_Parms, Message), Z_Construct_UScriptStruct_FLyraVerbMessage, METADATA_PARAMS(Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::NewProp_Message_MetaData)) }; // 3769208837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|GameState" },
		{ "Comment", "// Send a message that all clients will (probably) get\n// (use only for client notifications like eliminations, server join messages, etc... that can handle being lost)\n" },
		{ "ModuleRelativePath", "GameModes/LyraGameState.h" },
		{ "ToolTip", "Send a message that all clients will (probably) get\n(use only for client notifications like eliminations, server join messages, etc... that can handle being lost)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraGameState, nullptr, "MulticastMessageToClients", nullptr, nullptr, sizeof(LyraGameState_eventMulticastMessageToClients_Parms), Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameState_eventMulticastReliableMessageToClients_Parms, Message), Z_Construct_UScriptStruct_FLyraVerbMessage, METADATA_PARAMS(Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::NewProp_Message_MetaData)) }; // 3769208837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|GameState" },
		{ "Comment", "// Send a message that all clients will be guaranteed to get\n// (use only for client notifications that cannot handle being lost)\n" },
		{ "ModuleRelativePath", "GameModes/LyraGameState.h" },
		{ "ToolTip", "Send a message that all clients will be guaranteed to get\n(use only for client notifications that cannot handle being lost)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraGameState, nullptr, "MulticastReliableMessageToClients", nullptr, nullptr, sizeof(LyraGameState_eventMulticastReliableMessageToClients_Parms), Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraGameState);
	UClass* Z_Construct_UClass_ALyraGameState_NoRegister()
	{
		return ALyraGameState::StaticClass();
	}
	struct Z_Construct_UClass_ALyraGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceManagerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExperienceManagerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerFPS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerFPS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALyraGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AModularGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALyraGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALyraGameState_GetLyraAbilitySystemComponent, "GetLyraAbilitySystemComponent" }, // 2661352466
		{ &Z_Construct_UFunction_ALyraGameState_MulticastMessageToClients, "MulticastMessageToClients" }, // 3604152479
		{ &Z_Construct_UFunction_ALyraGameState_MulticastReliableMessageToClients, "MulticastReliableMessageToClients" }, // 2215498421
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ALyraGameState\n *\n *\x09The base game state class used by this project.\n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/LyraGameState.h" },
		{ "ModuleRelativePath", "GameModes/LyraGameState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "ALyraGameState\n\n    The base game state class used by this project." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraGameState_Statics::NewProp_ExperienceManagerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/LyraGameState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALyraGameState_Statics::NewProp_ExperienceManagerComponent = { "ExperienceManagerComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraGameState, ExperienceManagerComponent), Z_Construct_UClass_ULyraExperienceManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALyraGameState_Statics::NewProp_ExperienceManagerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraGameState_Statics::NewProp_ExperienceManagerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraGameState_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Lyra|GameState" },
		{ "Comment", "// The ability system component subobject for game-wide things (primarily gameplay cues)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/LyraGameState.h" },
		{ "ToolTip", "The ability system component subobject for game-wide things (primarily gameplay cues)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALyraGameState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraGameState, AbilitySystemComponent), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALyraGameState_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraGameState_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraGameState_Statics::NewProp_ServerFPS_MetaData[] = {
		{ "ModuleRelativePath", "GameModes/LyraGameState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALyraGameState_Statics::NewProp_ServerFPS = { "ServerFPS", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraGameState, ServerFPS), METADATA_PARAMS(Z_Construct_UClass_ALyraGameState_Statics::NewProp_ServerFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraGameState_Statics::NewProp_ServerFPS_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraGameState_Statics::NewProp_ExperienceManagerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraGameState_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraGameState_Statics::NewProp_ServerFPS,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALyraGameState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraGameState, IAbilitySystemInterface), false },  // 220555618
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALyraGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraGameState_Statics::ClassParams = {
		&ALyraGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALyraGameState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALyraGameState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALyraGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALyraGameState()
	{
		if (!Z_Registration_Info_UClass_ALyraGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraGameState.OuterSingleton, Z_Construct_UClass_ALyraGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALyraGameState.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ALyraGameState>()
	{
		return ALyraGameState::StaticClass();
	}

	void ALyraGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ServerFPS(TEXT("ServerFPS"));

		const bool bIsValid = true
			&& Name_ServerFPS == ClassReps[(int32)ENetFields_Private::ServerFPS].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALyraGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraGameState);
	ALyraGameState::~ALyraGameState() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALyraGameState, ALyraGameState::StaticClass, TEXT("ALyraGameState"), &Z_Registration_Info_UClass_ALyraGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraGameState), 2329385948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraGameState_h_3623779199(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
