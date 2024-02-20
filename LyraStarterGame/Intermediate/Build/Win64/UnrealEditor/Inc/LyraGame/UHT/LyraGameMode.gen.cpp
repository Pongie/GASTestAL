// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/LyraGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameMode() {}
// Cross Module References
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserInfo_NoRegister();
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext();
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserPrivilege();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraGameMode();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraGameMode_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnData_NoRegister();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ALyraGameMode::execOnUserInitializedForDedicatedServer)
	{
		P_GET_OBJECT(UCommonUserInfo,Z_Param_UserInfo);
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_PROPERTY(FTextProperty,Z_Param_Error);
		P_GET_ENUM(ECommonUserPrivilege,Z_Param_RequestedPrivilege);
		P_GET_ENUM(ECommonUserOnlineContext,Z_Param_OnlineContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUserInitializedForDedicatedServer(Z_Param_UserInfo,Z_Param_bSuccess,Z_Param_Error,ECommonUserPrivilege(Z_Param_RequestedPrivilege),ECommonUserOnlineContext(Z_Param_OnlineContext));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraGameMode::execRequestPlayerRestartNextFrame)
	{
		P_GET_OBJECT(AController,Z_Param_Controller);
		P_GET_UBOOL(Z_Param_bForceReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestPlayerRestartNextFrame(Z_Param_Controller,Z_Param_bForceReset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALyraGameMode::execGetPawnDataForController)
	{
		P_GET_OBJECT(AController,Z_Param_InController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const ULyraPawnData**)Z_Param__Result=P_THIS->GetPawnDataForController(Z_Param_InController);
		P_NATIVE_END;
	}
	void ALyraGameMode::StaticRegisterNativesALyraGameMode()
	{
		UClass* Class = ALyraGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPawnDataForController", &ALyraGameMode::execGetPawnDataForController },
			{ "OnUserInitializedForDedicatedServer", &ALyraGameMode::execOnUserInitializedForDedicatedServer },
			{ "RequestPlayerRestartNextFrame", &ALyraGameMode::execRequestPlayerRestartNextFrame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics
	{
		struct LyraGameMode_eventGetPawnDataForController_Parms
		{
			const AController* InController;
			const ULyraPawnData* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InController;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::NewProp_InController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameMode_eventGetPawnDataForController_Parms, InController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::NewProp_InController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::NewProp_InController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameMode_eventGetPawnDataForController_Parms, ReturnValue), Z_Construct_UClass_ULyraPawnData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::NewProp_InController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Pawn" },
		{ "ModuleRelativePath", "GameModes/LyraGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraGameMode, nullptr, "GetPawnDataForController", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::LyraGameMode_eventGetPawnDataForController_Parms), Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics
	{
		struct LyraGameMode_eventOnUserInitializedForDedicatedServer_Parms
		{
			const UCommonUserInfo* UserInfo;
			bool bSuccess;
			FText Error;
			ECommonUserPrivilege RequestedPrivilege;
			ECommonUserOnlineContext OnlineContext;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UserInfo;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Error;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RequestedPrivilege_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RequestedPrivilege;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OnlineContext_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OnlineContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_UserInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_UserInfo = { "UserInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameMode_eventOnUserInitializedForDedicatedServer_Parms, UserInfo), Z_Construct_UClass_UCommonUserInfo_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_UserInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_UserInfo_MetaData)) };
	void Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((LyraGameMode_eventOnUserInitializedForDedicatedServer_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraGameMode_eventOnUserInitializedForDedicatedServer_Parms), &Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameMode_eventOnUserInitializedForDedicatedServer_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_RequestedPrivilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_RequestedPrivilege = { "RequestedPrivilege", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameMode_eventOnUserInitializedForDedicatedServer_Parms, RequestedPrivilege), Z_Construct_UEnum_CommonUser_ECommonUserPrivilege, METADATA_PARAMS(nullptr, 0) }; // 3520582230
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_OnlineContext_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_OnlineContext = { "OnlineContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameMode_eventOnUserInitializedForDedicatedServer_Parms, OnlineContext), Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext, METADATA_PARAMS(nullptr, 0) }; // 2680643188
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_UserInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_RequestedPrivilege_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_RequestedPrivilege,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_OnlineContext_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_OnlineContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameModes/LyraGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraGameMode, nullptr, "OnUserInitializedForDedicatedServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::LyraGameMode_eventOnUserInitializedForDedicatedServer_Parms), Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics
	{
		struct LyraGameMode_eventRequestPlayerRestartNextFrame_Parms
		{
			AController* Controller;
			bool bForceReset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static void NewProp_bForceReset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceReset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraGameMode_eventRequestPlayerRestartNextFrame_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset_SetBit(void* Obj)
	{
		((LyraGameMode_eventRequestPlayerRestartNextFrame_Parms*)Obj)->bForceReset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset = { "bForceReset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraGameMode_eventRequestPlayerRestartNextFrame_Parms), &Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Restart (respawn) the specified player or bot next frame\n// - If bForceReset is true, the controller will be reset this frame (abandoning the currently possessed pawn, if any)\n" },
		{ "CPP_Default_bForceReset", "false" },
		{ "ModuleRelativePath", "GameModes/LyraGameMode.h" },
		{ "ToolTip", "Restart (respawn) the specified player or bot next frame\n- If bForceReset is true, the controller will be reset this frame (abandoning the currently possessed pawn, if any)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraGameMode, nullptr, "RequestPlayerRestartNextFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::LyraGameMode_eventRequestPlayerRestartNextFrame_Parms), Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraGameMode);
	UClass* Z_Construct_UClass_ALyraGameMode_NoRegister()
	{
		return ALyraGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALyraGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALyraGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AModularGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALyraGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALyraGameMode_GetPawnDataForController, "GetPawnDataForController" }, // 661116531
		{ &Z_Construct_UFunction_ALyraGameMode_OnUserInitializedForDedicatedServer, "OnUserInitializedForDedicatedServer" }, // 2627503881
		{ &Z_Construct_UFunction_ALyraGameMode_RequestPlayerRestartNextFrame, "RequestPlayerRestartNextFrame" }, // 1221117306
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ALyraGameMode\n *\n *\x09The base game mode class used by this project.\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/LyraGameMode.h" },
		{ "ModuleRelativePath", "GameModes/LyraGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base game mode class used by this project." },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "ALyraGameMode\n\n    The base game mode class used by this project." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALyraGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraGameMode_Statics::ClassParams = {
		&ALyraGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALyraGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALyraGameMode()
	{
		if (!Z_Registration_Info_UClass_ALyraGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraGameMode.OuterSingleton, Z_Construct_UClass_ALyraGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALyraGameMode.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ALyraGameMode>()
	{
		return ALyraGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraGameMode);
	ALyraGameMode::~ALyraGameMode() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALyraGameMode, ALyraGameMode::StaticClass, TEXT("ALyraGameMode"), &Z_Registration_Info_UClass_ALyraGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraGameMode), 2388028542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraGameMode_h_386836045(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
