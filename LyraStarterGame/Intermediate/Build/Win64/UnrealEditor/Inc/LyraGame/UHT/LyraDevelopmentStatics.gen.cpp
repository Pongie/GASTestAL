// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "System/LyraDevelopmentStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraDevelopmentStatics() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraDevelopmentStatics();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraDevelopmentStatics_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraDevelopmentStatics::execCanPlayerBotsAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULyraDevelopmentStatics::CanPlayerBotsAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraDevelopmentStatics::execShouldLoadCosmeticBackgrounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULyraDevelopmentStatics::ShouldLoadCosmeticBackgrounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraDevelopmentStatics::execShouldSkipDirectlyToGameplay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULyraDevelopmentStatics::ShouldSkipDirectlyToGameplay();
		P_NATIVE_END;
	}
	void ULyraDevelopmentStatics::StaticRegisterNativesULyraDevelopmentStatics()
	{
		UClass* Class = ULyraDevelopmentStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanPlayerBotsAttack", &ULyraDevelopmentStatics::execCanPlayerBotsAttack },
			{ "ShouldLoadCosmeticBackgrounds", &ULyraDevelopmentStatics::execShouldLoadCosmeticBackgrounds },
			{ "ShouldSkipDirectlyToGameplay", &ULyraDevelopmentStatics::execShouldSkipDirectlyToGameplay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics
	{
		struct LyraDevelopmentStatics_eventCanPlayerBotsAttack_Parms
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
	void Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraDevelopmentStatics_eventCanPlayerBotsAttack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraDevelopmentStatics_eventCanPlayerBotsAttack_Parms), &Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "Comment", "// Should game logic load cosmetic backgrounds in the editor?\n// Will always return true except when playing in the editor and bSkipLoadingCosmeticBackgroundsInPIE (in Lyra Developer Settings) is true\n" },
		{ "ModuleRelativePath", "System/LyraDevelopmentStatics.h" },
		{ "ToolTip", "Should game logic load cosmetic backgrounds in the editor?\nWill always return true except when playing in the editor and bSkipLoadingCosmeticBackgroundsInPIE (in Lyra Developer Settings) is true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraDevelopmentStatics, nullptr, "CanPlayerBotsAttack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::LyraDevelopmentStatics_eventCanPlayerBotsAttack_Parms), Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics
	{
		struct LyraDevelopmentStatics_eventShouldLoadCosmeticBackgrounds_Parms
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
	void Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraDevelopmentStatics_eventShouldLoadCosmeticBackgrounds_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraDevelopmentStatics_eventShouldLoadCosmeticBackgrounds_Parms), &Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "Comment", "// Should game logic load cosmetic backgrounds in the editor?\n// Will always return true except when playing in the editor and bSkipLoadingCosmeticBackgroundsInPIE (in Lyra Developer Settings) is true\n" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "System/LyraDevelopmentStatics.h" },
		{ "ToolTip", "Should game logic load cosmetic backgrounds in the editor?\nWill always return true except when playing in the editor and bSkipLoadingCosmeticBackgroundsInPIE (in Lyra Developer Settings) is true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraDevelopmentStatics, nullptr, "ShouldLoadCosmeticBackgrounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::LyraDevelopmentStatics_eventShouldLoadCosmeticBackgrounds_Parms), Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics
	{
		struct LyraDevelopmentStatics_eventShouldSkipDirectlyToGameplay_Parms
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
	void Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LyraDevelopmentStatics_eventShouldSkipDirectlyToGameplay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraDevelopmentStatics_eventShouldSkipDirectlyToGameplay_Parms), &Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
		{ "Comment", "// Should game logic skip directly to gameplay (skipping any match warmup / waiting for players / etc... aspects)\n// Will always return false except when playing in the editor and bTestFullGameFlowInPIE (in Lyra Developer Settings) is false\n" },
		{ "ModuleRelativePath", "System/LyraDevelopmentStatics.h" },
		{ "ToolTip", "Should game logic skip directly to gameplay (skipping any match warmup / waiting for players / etc... aspects)\nWill always return false except when playing in the editor and bTestFullGameFlowInPIE (in Lyra Developer Settings) is false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraDevelopmentStatics, nullptr, "ShouldSkipDirectlyToGameplay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::LyraDevelopmentStatics_eventShouldSkipDirectlyToGameplay_Parms), Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraDevelopmentStatics);
	UClass* Z_Construct_UClass_ULyraDevelopmentStatics_NoRegister()
	{
		return ULyraDevelopmentStatics::StaticClass();
	}
	struct Z_Construct_UClass_ULyraDevelopmentStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraDevelopmentStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraDevelopmentStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack, "CanPlayerBotsAttack" }, // 1408670792
		{ &Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds, "ShouldLoadCosmeticBackgrounds" }, // 3927177973
		{ &Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay, "ShouldSkipDirectlyToGameplay" }, // 1040346279
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraDevelopmentStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "System/LyraDevelopmentStatics.h" },
		{ "ModuleRelativePath", "System/LyraDevelopmentStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraDevelopmentStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraDevelopmentStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraDevelopmentStatics_Statics::ClassParams = {
		&ULyraDevelopmentStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULyraDevelopmentStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDevelopmentStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraDevelopmentStatics()
	{
		if (!Z_Registration_Info_UClass_ULyraDevelopmentStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraDevelopmentStatics.OuterSingleton, Z_Construct_UClass_ULyraDevelopmentStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraDevelopmentStatics.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraDevelopmentStatics>()
	{
		return ULyraDevelopmentStatics::StaticClass();
	}
	ULyraDevelopmentStatics::ULyraDevelopmentStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraDevelopmentStatics);
	ULyraDevelopmentStatics::~ULyraDevelopmentStatics() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraDevelopmentStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraDevelopmentStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraDevelopmentStatics, ULyraDevelopmentStatics::StaticClass, TEXT("ULyraDevelopmentStatics"), &Z_Registration_Info_UClass_ULyraDevelopmentStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraDevelopmentStatics), 2221007297U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraDevelopmentStatics_h_1381690593(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraDevelopmentStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_System_LyraDevelopmentStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
