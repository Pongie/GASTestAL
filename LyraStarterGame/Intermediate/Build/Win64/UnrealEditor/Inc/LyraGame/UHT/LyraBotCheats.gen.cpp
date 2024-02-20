// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Development/LyraBotCheats.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/CheatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraBotCheats() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCheatManagerExtension();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraBotCheats();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraBotCheats_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraBotCheats::execRemovePlayerBot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePlayerBot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraBotCheats::execAddPlayerBot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPlayerBot();
		P_NATIVE_END;
	}
	void ULyraBotCheats::StaticRegisterNativesULyraBotCheats()
	{
		UClass* Class = ULyraBotCheats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPlayerBot", &ULyraBotCheats::execAddPlayerBot },
			{ "RemovePlayerBot", &ULyraBotCheats::execRemovePlayerBot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraBotCheats_AddPlayerBot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraBotCheats_AddPlayerBot_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Adds a bot player\n" },
		{ "ModuleRelativePath", "Development/LyraBotCheats.h" },
		{ "ToolTip", "Adds a bot player" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraBotCheats_AddPlayerBot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraBotCheats, nullptr, "AddPlayerBot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020605, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraBotCheats_AddPlayerBot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraBotCheats_AddPlayerBot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraBotCheats_AddPlayerBot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraBotCheats_AddPlayerBot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraBotCheats_RemovePlayerBot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraBotCheats_RemovePlayerBot_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Removes a random bot player\n" },
		{ "ModuleRelativePath", "Development/LyraBotCheats.h" },
		{ "ToolTip", "Removes a random bot player" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraBotCheats_RemovePlayerBot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraBotCheats, nullptr, "RemovePlayerBot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020605, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraBotCheats_RemovePlayerBot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraBotCheats_RemovePlayerBot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraBotCheats_RemovePlayerBot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraBotCheats_RemovePlayerBot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraBotCheats);
	UClass* Z_Construct_UClass_ULyraBotCheats_NoRegister()
	{
		return ULyraBotCheats::StaticClass();
	}
	struct Z_Construct_UClass_ULyraBotCheats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraBotCheats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCheatManagerExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraBotCheats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraBotCheats_AddPlayerBot, "AddPlayerBot" }, // 2825439631
		{ &Z_Construct_UFunction_ULyraBotCheats_RemovePlayerBot, "RemovePlayerBot" }, // 2736040650
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraBotCheats_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Cheats related to bots */" },
		{ "IncludePath", "Development/LyraBotCheats.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Development/LyraBotCheats.h" },
		{ "ToolTip", "Cheats related to bots" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraBotCheats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraBotCheats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraBotCheats_Statics::ClassParams = {
		&ULyraBotCheats::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULyraBotCheats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBotCheats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraBotCheats()
	{
		if (!Z_Registration_Info_UClass_ULyraBotCheats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraBotCheats.OuterSingleton, Z_Construct_UClass_ULyraBotCheats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraBotCheats.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraBotCheats>()
	{
		return ULyraBotCheats::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraBotCheats);
	ULyraBotCheats::~ULyraBotCheats() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraBotCheats_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraBotCheats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraBotCheats, ULyraBotCheats::StaticClass, TEXT("ULyraBotCheats"), &Z_Registration_Info_UClass_ULyraBotCheats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraBotCheats), 4045112080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraBotCheats_h_451555120(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraBotCheats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Development_LyraBotCheats_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
