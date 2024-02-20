// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "System/LyraActorUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraActorUtilities() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraActorUtilities();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraActorUtilities_NoRegister();
	LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_EBlueprintExposedNetMode();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlueprintExposedNetMode;
	static UEnum* EBlueprintExposedNetMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintExposedNetMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlueprintExposedNetMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_EBlueprintExposedNetMode, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("EBlueprintExposedNetMode"));
		}
		return Z_Registration_Info_UEnum_EBlueprintExposedNetMode.OuterSingleton;
	}
	template<> LYRAGAME_API UEnum* StaticEnum<EBlueprintExposedNetMode>()
	{
		return EBlueprintExposedNetMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LyraGame_EBlueprintExposedNetMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LyraGame_EBlueprintExposedNetMode_Statics::Enumerators[] = {
		{ "EBlueprintExposedNetMode::Standalone", (int64)EBlueprintExposedNetMode::Standalone },
		{ "EBlueprintExposedNetMode::DedicatedServer", (int64)EBlueprintExposedNetMode::DedicatedServer },
		{ "EBlueprintExposedNetMode::ListenServer", (int64)EBlueprintExposedNetMode::ListenServer },
		{ "EBlueprintExposedNetMode::Client", (int64)EBlueprintExposedNetMode::Client },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LyraGame_EBlueprintExposedNetMode_Statics::Enum_MetaDataParams[] = {
		{ "Client.Comment", "/**\n\x09 * Network client: client connected to a remote server.\n\x09 * Note that every mode less than this value is a kind of server, so checking NetMode < NM_Client is always some variety of server.\n\x09 */" },
		{ "Client.Name", "EBlueprintExposedNetMode::Client" },
		{ "Client.ToolTip", "Network client: client connected to a remote server.\nNote that every mode less than this value is a kind of server, so checking NetMode < NM_Client is always some variety of server." },
		{ "DedicatedServer.Comment", "/** Dedicated server: server with no local players. */" },
		{ "DedicatedServer.Name", "EBlueprintExposedNetMode::DedicatedServer" },
		{ "DedicatedServer.ToolTip", "Dedicated server: server with no local players." },
		{ "ListenServer.Comment", "/** Listen server: a server that also has a local player who is hosting the game, available to other players on the network. */" },
		{ "ListenServer.Name", "EBlueprintExposedNetMode::ListenServer" },
		{ "ListenServer.ToolTip", "Listen server: a server that also has a local player who is hosting the game, available to other players on the network." },
		{ "ModuleRelativePath", "System/LyraActorUtilities.h" },
		{ "Standalone.Comment", "/** Standalone: a game without networking, with one or more local players. Still considered a server because it has all server functionality. */" },
		{ "Standalone.Name", "EBlueprintExposedNetMode::Standalone" },
		{ "Standalone.ToolTip", "Standalone: a game without networking, with one or more local players. Still considered a server because it has all server functionality." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_EBlueprintExposedNetMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		"EBlueprintExposedNetMode",
		"EBlueprintExposedNetMode",
		Z_Construct_UEnum_LyraGame_EBlueprintExposedNetMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EBlueprintExposedNetMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LyraGame_EBlueprintExposedNetMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_EBlueprintExposedNetMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LyraGame_EBlueprintExposedNetMode()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintExposedNetMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlueprintExposedNetMode.InnerSingleton, Z_Construct_UEnum_LyraGame_EBlueprintExposedNetMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlueprintExposedNetMode.InnerSingleton;
	}
	DEFINE_FUNCTION(ULyraActorUtilities::execSwitchOnNetMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBlueprintExposedNetMode*)Z_Param__Result=ULyraActorUtilities::SwitchOnNetMode(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void ULyraActorUtilities::StaticRegisterNativesULyraActorUtilities()
	{
		UClass* Class = ULyraActorUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SwitchOnNetMode", &ULyraActorUtilities::execSwitchOnNetMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode_Statics
	{
		struct LyraActorUtilities_eventSwitchOnNetMode_Parms
		{
			const UObject* WorldContextObject;
			EBlueprintExposedNetMode ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraActorUtilities_eventSwitchOnNetMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraActorUtilities_eventSwitchOnNetMode_Parms, ReturnValue), Z_Construct_UEnum_LyraGame_EBlueprintExposedNetMode, METADATA_PARAMS(nullptr, 0) }; // 801906678
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "Comment", "/**\n\x09 * Get the network mode (dedicated server, client, standalone, etc...) for an actor or component.\n\x09 */" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "System/LyraActorUtilities.h" },
		{ "ToolTip", "Get the network mode (dedicated server, client, standalone, etc...) for an actor or component." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraActorUtilities, nullptr, "SwitchOnNetMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode_Statics::LyraActorUtilities_eventSwitchOnNetMode_Parms), Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraActorUtilities);
	UClass* Z_Construct_UClass_ULyraActorUtilities_NoRegister()
	{
		return ULyraActorUtilities::StaticClass();
	}
	struct Z_Construct_UClass_ULyraActorUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraActorUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraActorUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraActorUtilities_SwitchOnNetMode, "SwitchOnNetMode" }, // 1270907534
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraActorUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "System/LyraActorUtilities.h" },
		{ "ModuleRelativePath", "System/LyraActorUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraActorUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraActorUtilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraActorUtilities_Statics::ClassParams = {
		&ULyraActorUtilities::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraActorUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActorUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraActorUtilities()
	{
		if (!Z_Registration_Info_UClass_ULyraActorUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraActorUtilities.OuterSingleton, Z_Construct_UClass_ULyraActorUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraActorUtilities.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraActorUtilities>()
	{
		return ULyraActorUtilities::StaticClass();
	}
	ULyraActorUtilities::ULyraActorUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraActorUtilities);
	ULyraActorUtilities::~ULyraActorUtilities() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraActorUtilities_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraActorUtilities_h_Statics::EnumInfo[] = {
		{ EBlueprintExposedNetMode_StaticEnum, TEXT("EBlueprintExposedNetMode"), &Z_Registration_Info_UEnum_EBlueprintExposedNetMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 801906678U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraActorUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraActorUtilities, ULyraActorUtilities::StaticClass, TEXT("ULyraActorUtilities"), &Z_Registration_Info_UClass_ULyraActorUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraActorUtilities), 1684079078U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraActorUtilities_h_1133196153(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraActorUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraActorUtilities_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraActorUtilities_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraActorUtilities_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
