// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/LyraPlayerBotController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPlayerBotController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerBotController();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerBotController_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularAIController();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ALyraPlayerBotController::execOnPlayerStateChangedTeam)
	{
		P_GET_OBJECT(UObject,Z_Param_TeamAgent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OldTeam);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerStateChangedTeam(Z_Param_TeamAgent,Z_Param_OldTeam,Z_Param_NewTeam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraPlayerBotController::execUpdateTeamAttitude)
	{
		P_GET_OBJECT(UAIPerceptionComponent,Z_Param_AIPerception);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTeamAttitude(Z_Param_AIPerception);
		P_NATIVE_END;
	}
	void ALyraPlayerBotController::StaticRegisterNativesALyraPlayerBotController()
	{
		UClass* Class = ALyraPlayerBotController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerStateChangedTeam", &ALyraPlayerBotController::execOnPlayerStateChangedTeam },
			{ "UpdateTeamAttitude", &ALyraPlayerBotController::execUpdateTeamAttitude },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics
	{
		struct LyraPlayerBotController_eventOnPlayerStateChangedTeam_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::NewProp_TeamAgent = { "TeamAgent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerBotController_eventOnPlayerStateChangedTeam_Parms, TeamAgent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::NewProp_OldTeam = { "OldTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerBotController_eventOnPlayerStateChangedTeam_Parms, OldTeam), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerBotController_eventOnPlayerStateChangedTeam_Parms, NewTeam), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::NewProp_TeamAgent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::NewProp_OldTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::NewProp_NewTeam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerBotController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerBotController, nullptr, "OnPlayerStateChangedTeam", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::LyraPlayerBotController_eventOnPlayerStateChangedTeam_Parms), Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics
	{
		struct LyraPlayerBotController_eventUpdateTeamAttitude_Parms
		{
			UAIPerceptionComponent* AIPerception;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIPerception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerception;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::NewProp_AIPerception_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::NewProp_AIPerception = { "AIPerception", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPlayerBotController_eventUpdateTeamAttitude_Parms, AIPerception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::NewProp_AIPerception_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::NewProp_AIPerception_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::NewProp_AIPerception,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra AI Player Controller" },
		{ "Comment", "//Update Team Attitude for the AI\n" },
		{ "ModuleRelativePath", "Player/LyraPlayerBotController.h" },
		{ "ToolTip", "Update Team Attitude for the AI" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPlayerBotController, nullptr, "UpdateTeamAttitude", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::LyraPlayerBotController_eventUpdateTeamAttitude_Parms), Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraPlayerBotController);
	UClass* Z_Construct_UClass_ALyraPlayerBotController_NoRegister()
	{
		return ALyraPlayerBotController::StaticClass();
	}
	struct Z_Construct_UClass_ALyraPlayerBotController_Statics
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
	UObject* (*const Z_Construct_UClass_ALyraPlayerBotController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AModularAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALyraPlayerBotController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALyraPlayerBotController_OnPlayerStateChangedTeam, "OnPlayerStateChangedTeam" }, // 1405277547
		{ &Z_Construct_UFunction_ALyraPlayerBotController_UpdateTeamAttitude, "UpdateTeamAttitude" }, // 2259973184
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerBotController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ALyraPlayerBotController\n *\n *\x09The controller class used by player bots in this project.\n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/LyraPlayerBotController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Player/LyraPlayerBotController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ALyraPlayerBotController\n\n    The controller class used by player bots in this project." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerBotController_Statics::NewProp_OnTeamChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerBotController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALyraPlayerBotController_Statics::NewProp_OnTeamChangedDelegate = { "OnTeamChangedDelegate", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraPlayerBotController, OnTeamChangedDelegate), Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerBotController_Statics::NewProp_OnTeamChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerBotController_Statics::NewProp_OnTeamChangedDelegate_MetaData)) }; // 4103646683
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraPlayerBotController_Statics::NewProp_LastSeenPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Player/LyraPlayerBotController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALyraPlayerBotController_Statics::NewProp_LastSeenPlayerState = { "LastSeenPlayerState", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraPlayerBotController, LastSeenPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerBotController_Statics::NewProp_LastSeenPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerBotController_Statics::NewProp_LastSeenPlayerState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraPlayerBotController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerBotController_Statics::NewProp_OnTeamChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerBotController_Statics::NewProp_LastSeenPlayerState,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALyraPlayerBotController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraPlayerBotController, ILyraTeamAgentInterface), false },  // 3166716212
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALyraPlayerBotController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraPlayerBotController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraPlayerBotController_Statics::ClassParams = {
		&ALyraPlayerBotController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALyraPlayerBotController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerBotController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALyraPlayerBotController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerBotController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALyraPlayerBotController()
	{
		if (!Z_Registration_Info_UClass_ALyraPlayerBotController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraPlayerBotController.OuterSingleton, Z_Construct_UClass_ALyraPlayerBotController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALyraPlayerBotController.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ALyraPlayerBotController>()
	{
		return ALyraPlayerBotController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraPlayerBotController);
	ALyraPlayerBotController::~ALyraPlayerBotController() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALyraPlayerBotController, ALyraPlayerBotController::StaticClass, TEXT("ALyraPlayerBotController"), &Z_Registration_Info_UClass_ALyraPlayerBotController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraPlayerBotController), 1237963020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_3177852649(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerBotController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
