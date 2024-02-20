// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cosmetics/LyraCosmeticCheats.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/CheatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCosmeticCheats() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCheatManagerExtension();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCosmeticCheats();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCosmeticCheats_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraCosmeticCheats::execClearCharacterPartOverrides)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCharacterPartOverrides();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraCosmeticCheats::execReplaceCharacterPart)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
		P_GET_UBOOL(Z_Param_bSuppressNaturalParts);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceCharacterPart(Z_Param_AssetName,Z_Param_bSuppressNaturalParts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraCosmeticCheats::execAddCharacterPart)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
		P_GET_UBOOL(Z_Param_bSuppressNaturalParts);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCharacterPart(Z_Param_AssetName,Z_Param_bSuppressNaturalParts);
		P_NATIVE_END;
	}
	void ULyraCosmeticCheats::StaticRegisterNativesULyraCosmeticCheats()
	{
		UClass* Class = ULyraCosmeticCheats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCharacterPart", &ULyraCosmeticCheats::execAddCharacterPart },
			{ "ClearCharacterPartOverrides", &ULyraCosmeticCheats::execClearCharacterPartOverrides },
			{ "ReplaceCharacterPart", &ULyraCosmeticCheats::execReplaceCharacterPart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics
	{
		struct LyraCosmeticCheats_eventAddCharacterPart_Parms
		{
			FString AssetName;
			bool bSuppressNaturalParts;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static void NewProp_bSuppressNaturalParts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressNaturalParts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCosmeticCheats_eventAddCharacterPart_Parms, AssetName), METADATA_PARAMS(Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::NewProp_AssetName_MetaData)) };
	void Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::NewProp_bSuppressNaturalParts_SetBit(void* Obj)
	{
		((LyraCosmeticCheats_eventAddCharacterPart_Parms*)Obj)->bSuppressNaturalParts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::NewProp_bSuppressNaturalParts = { "bSuppressNaturalParts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraCosmeticCheats_eventAddCharacterPart_Parms), &Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::NewProp_bSuppressNaturalParts_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::NewProp_bSuppressNaturalParts,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Adds a character part\n" },
		{ "CPP_Default_bSuppressNaturalParts", "true" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticCheats.h" },
		{ "ToolTip", "Adds a character part" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCosmeticCheats, nullptr, "AddCharacterPart", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::LyraCosmeticCheats_eventAddCharacterPart_Parms), Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020605, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraCosmeticCheats_ClearCharacterPartOverrides_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCosmeticCheats_ClearCharacterPartOverrides_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Clears any existing cheats\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticCheats.h" },
		{ "ToolTip", "Clears any existing cheats" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCosmeticCheats_ClearCharacterPartOverrides_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCosmeticCheats, nullptr, "ClearCharacterPartOverrides", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020605, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraCosmeticCheats_ClearCharacterPartOverrides_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCosmeticCheats_ClearCharacterPartOverrides_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraCosmeticCheats_ClearCharacterPartOverrides()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCosmeticCheats_ClearCharacterPartOverrides_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics
	{
		struct LyraCosmeticCheats_eventReplaceCharacterPart_Parms
		{
			FString AssetName;
			bool bSuppressNaturalParts;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static void NewProp_bSuppressNaturalParts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressNaturalParts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCosmeticCheats_eventReplaceCharacterPart_Parms, AssetName), METADATA_PARAMS(Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::NewProp_AssetName_MetaData)) };
	void Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::NewProp_bSuppressNaturalParts_SetBit(void* Obj)
	{
		((LyraCosmeticCheats_eventReplaceCharacterPart_Parms*)Obj)->bSuppressNaturalParts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::NewProp_bSuppressNaturalParts = { "bSuppressNaturalParts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraCosmeticCheats_eventReplaceCharacterPart_Parms), &Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::NewProp_bSuppressNaturalParts_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::NewProp_bSuppressNaturalParts,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Replaces previous cheat parts with a new one\n" },
		{ "CPP_Default_bSuppressNaturalParts", "true" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticCheats.h" },
		{ "ToolTip", "Replaces previous cheat parts with a new one" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCosmeticCheats, nullptr, "ReplaceCharacterPart", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::LyraCosmeticCheats_eventReplaceCharacterPart_Parms), Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020605, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraCosmeticCheats);
	UClass* Z_Construct_UClass_ULyraCosmeticCheats_NoRegister()
	{
		return ULyraCosmeticCheats::StaticClass();
	}
	struct Z_Construct_UClass_ULyraCosmeticCheats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraCosmeticCheats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCheatManagerExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraCosmeticCheats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart, "AddCharacterPart" }, // 595914469
		{ &Z_Construct_UFunction_ULyraCosmeticCheats_ClearCharacterPartOverrides, "ClearCharacterPartOverrides" }, // 2529581976
		{ &Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart, "ReplaceCharacterPart" }, // 4047297866
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCosmeticCheats_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Cheats related to bots */" },
		{ "IncludePath", "Cosmetics/LyraCosmeticCheats.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticCheats.h" },
		{ "ToolTip", "Cheats related to bots" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraCosmeticCheats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraCosmeticCheats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraCosmeticCheats_Statics::ClassParams = {
		&ULyraCosmeticCheats::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULyraCosmeticCheats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCosmeticCheats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraCosmeticCheats()
	{
		if (!Z_Registration_Info_UClass_ULyraCosmeticCheats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraCosmeticCheats.OuterSingleton, Z_Construct_UClass_ULyraCosmeticCheats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraCosmeticCheats.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraCosmeticCheats>()
	{
		return ULyraCosmeticCheats::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraCosmeticCheats);
	ULyraCosmeticCheats::~ULyraCosmeticCheats() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticCheats_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticCheats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraCosmeticCheats, ULyraCosmeticCheats::StaticClass, TEXT("ULyraCosmeticCheats"), &Z_Registration_Info_UClass_ULyraCosmeticCheats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraCosmeticCheats), 1144577959U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticCheats_h_781602602(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticCheats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticCheats_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
