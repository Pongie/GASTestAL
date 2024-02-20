// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Messages/LyraVerbMessageHelpers.h"
#include "GameplayEffectTypes.h"
#include "Messages/LyraVerbMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraVerbMessageHelpers() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraVerbMessageHelpers();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraVerbMessageHelpers_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraVerbMessage();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraVerbMessageHelpers::execCueParametersToVerbMessage)
	{
		P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLyraVerbMessage*)Z_Param__Result=ULyraVerbMessageHelpers::CueParametersToVerbMessage(Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraVerbMessageHelpers::execVerbMessageToCueParameters)
	{
		P_GET_STRUCT_REF(FLyraVerbMessage,Z_Param_Out_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayCueParameters*)Z_Param__Result=ULyraVerbMessageHelpers::VerbMessageToCueParameters(Z_Param_Out_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraVerbMessageHelpers::execGetPlayerControllerFromObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=ULyraVerbMessageHelpers::GetPlayerControllerFromObject(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraVerbMessageHelpers::execGetPlayerStateFromObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerState**)Z_Param__Result=ULyraVerbMessageHelpers::GetPlayerStateFromObject(Z_Param_Object);
		P_NATIVE_END;
	}
	void ULyraVerbMessageHelpers::StaticRegisterNativesULyraVerbMessageHelpers()
	{
		UClass* Class = ULyraVerbMessageHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CueParametersToVerbMessage", &ULyraVerbMessageHelpers::execCueParametersToVerbMessage },
			{ "GetPlayerControllerFromObject", &ULyraVerbMessageHelpers::execGetPlayerControllerFromObject },
			{ "GetPlayerStateFromObject", &ULyraVerbMessageHelpers::execGetPlayerStateFromObject },
			{ "VerbMessageToCueParameters", &ULyraVerbMessageHelpers::execVerbMessageToCueParameters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics
	{
		struct LyraVerbMessageHelpers_eventCueParametersToVerbMessage_Parms
		{
			FGameplayCueParameters Params;
			FLyraVerbMessage ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraVerbMessageHelpers_eventCueParametersToVerbMessage_Parms, Params), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::NewProp_Params_MetaData)) }; // 3089669807
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraVerbMessageHelpers_eventCueParametersToVerbMessage_Parms, ReturnValue), Z_Construct_UScriptStruct_FLyraVerbMessage, METADATA_PARAMS(nullptr, 0) }; // 3769208837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "Messages/LyraVerbMessageHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraVerbMessageHelpers, nullptr, "CueParametersToVerbMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::LyraVerbMessageHelpers_eventCueParametersToVerbMessage_Parms), Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics
	{
		struct LyraVerbMessageHelpers_eventGetPlayerControllerFromObject_Parms
		{
			UObject* Object;
			APlayerController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraVerbMessageHelpers_eventGetPlayerControllerFromObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraVerbMessageHelpers_eventGetPlayerControllerFromObject_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "Messages/LyraVerbMessageHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraVerbMessageHelpers, nullptr, "GetPlayerControllerFromObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::LyraVerbMessageHelpers_eventGetPlayerControllerFromObject_Parms), Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics
	{
		struct LyraVerbMessageHelpers_eventGetPlayerStateFromObject_Parms
		{
			UObject* Object;
			APlayerState* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraVerbMessageHelpers_eventGetPlayerStateFromObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraVerbMessageHelpers_eventGetPlayerStateFromObject_Parms, ReturnValue), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "Messages/LyraVerbMessageHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraVerbMessageHelpers, nullptr, "GetPlayerStateFromObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::LyraVerbMessageHelpers_eventGetPlayerStateFromObject_Parms), Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics
	{
		struct LyraVerbMessageHelpers_eventVerbMessageToCueParameters_Parms
		{
			FLyraVerbMessage Message;
			FGameplayCueParameters ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraVerbMessageHelpers_eventVerbMessageToCueParameters_Parms, Message), Z_Construct_UScriptStruct_FLyraVerbMessage, METADATA_PARAMS(Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::NewProp_Message_MetaData)) }; // 3769208837
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraVerbMessageHelpers_eventVerbMessageToCueParameters_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(nullptr, 0) }; // 3089669807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "Messages/LyraVerbMessageHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraVerbMessageHelpers, nullptr, "VerbMessageToCueParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::LyraVerbMessageHelpers_eventVerbMessageToCueParameters_Parms), Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraVerbMessageHelpers);
	UClass* Z_Construct_UClass_ULyraVerbMessageHelpers_NoRegister()
	{
		return ULyraVerbMessageHelpers::StaticClass();
	}
	struct Z_Construct_UClass_ULyraVerbMessageHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraVerbMessageHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraVerbMessageHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraVerbMessageHelpers_CueParametersToVerbMessage, "CueParametersToVerbMessage" }, // 2442281062
		{ &Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerControllerFromObject, "GetPlayerControllerFromObject" }, // 4043073993
		{ &Z_Construct_UFunction_ULyraVerbMessageHelpers_GetPlayerStateFromObject, "GetPlayerStateFromObject" }, // 3197102042
		{ &Z_Construct_UFunction_ULyraVerbMessageHelpers_VerbMessageToCueParameters, "VerbMessageToCueParameters" }, // 1757305008
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraVerbMessageHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Messages/LyraVerbMessageHelpers.h" },
		{ "ModuleRelativePath", "Messages/LyraVerbMessageHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraVerbMessageHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraVerbMessageHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraVerbMessageHelpers_Statics::ClassParams = {
		&ULyraVerbMessageHelpers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraVerbMessageHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraVerbMessageHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraVerbMessageHelpers()
	{
		if (!Z_Registration_Info_UClass_ULyraVerbMessageHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraVerbMessageHelpers.OuterSingleton, Z_Construct_UClass_ULyraVerbMessageHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraVerbMessageHelpers.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraVerbMessageHelpers>()
	{
		return ULyraVerbMessageHelpers::StaticClass();
	}
	ULyraVerbMessageHelpers::ULyraVerbMessageHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraVerbMessageHelpers);
	ULyraVerbMessageHelpers::~ULyraVerbMessageHelpers() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageHelpers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraVerbMessageHelpers, ULyraVerbMessageHelpers::StaticClass, TEXT("ULyraVerbMessageHelpers"), &Z_Registration_Info_UClass_ULyraVerbMessageHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraVerbMessageHelpers), 474610521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageHelpers_h_1731282941(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
