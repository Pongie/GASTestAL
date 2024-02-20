// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/LyraGameplayAbility_Death.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameplayAbility_Death() {}
// Cross Module References
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_Death();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_Death_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraGameplayAbility_Death::execFinishDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraGameplayAbility_Death::execStartDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartDeath();
		P_NATIVE_END;
	}
	void ULyraGameplayAbility_Death::StaticRegisterNativesULyraGameplayAbility_Death()
	{
		UClass* Class = ULyraGameplayAbility_Death::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishDeath", &ULyraGameplayAbility_Death::execFinishDeath },
			{ "StartDeath", &ULyraGameplayAbility_Death::execStartDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraGameplayAbility_Death_FinishDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_Death_FinishDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "Comment", "// Finishes the death sequence.\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility_Death.h" },
		{ "ToolTip", "Finishes the death sequence." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_Death_FinishDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_Death, nullptr, "FinishDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_Death_FinishDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_Death_FinishDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGameplayAbility_Death_FinishDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_Death_FinishDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraGameplayAbility_Death_StartDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraGameplayAbility_Death_StartDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "Comment", "// Starts the death sequence.\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility_Death.h" },
		{ "ToolTip", "Starts the death sequence." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_Death_StartDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_Death, nullptr, "StartDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraGameplayAbility_Death_StartDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_Death_StartDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraGameplayAbility_Death_StartDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_Death_StartDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameplayAbility_Death);
	UClass* Z_Construct_UClass_ULyraGameplayAbility_Death_NoRegister()
	{
		return ULyraGameplayAbility_Death::StaticClass();
	}
	struct Z_Construct_UClass_ULyraGameplayAbility_Death_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartDeath_MetaData[];
#endif
		static void NewProp_bAutoStartDeath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartDeath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraGameplayAbility_Death_FinishDeath, "FinishDeath" }, // 904346623
		{ &Z_Construct_UFunction_ULyraGameplayAbility_Death_StartDeath, "StartDeath" }, // 1998374899
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraGameplayAbility_Death\n *\n *\x09Gameplay ability used for handling death.\n *\x09""Ability is activated automatically via the \"GameplayEvent.Death\" ability trigger tag.\n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "AbilitySystem/Abilities/LyraGameplayAbility_Death.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility_Death.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraGameplayAbility_Death\n\n    Gameplay ability used for handling death.\n    Ability is activated automatically via the \"GameplayEvent.Death\" ability trigger tag." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::NewProp_bAutoStartDeath_MetaData[] = {
		{ "Category", "Lyra|Death" },
		{ "Comment", "// If enabled, the ability will automatically call StartDeath.  FinishDeath is always called when the ability ends if the death was started.\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility_Death.h" },
		{ "ToolTip", "If enabled, the ability will automatically call StartDeath.  FinishDeath is always called when the ability ends if the death was started." },
	};
#endif
	void Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::NewProp_bAutoStartDeath_SetBit(void* Obj)
	{
		((ULyraGameplayAbility_Death*)Obj)->bAutoStartDeath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::NewProp_bAutoStartDeath = { "bAutoStartDeath", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraGameplayAbility_Death), &Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::NewProp_bAutoStartDeath_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::NewProp_bAutoStartDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::NewProp_bAutoStartDeath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::NewProp_bAutoStartDeath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameplayAbility_Death>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::ClassParams = {
		&ULyraGameplayAbility_Death::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraGameplayAbility_Death()
	{
		if (!Z_Registration_Info_UClass_ULyraGameplayAbility_Death.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameplayAbility_Death.OuterSingleton, Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraGameplayAbility_Death.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraGameplayAbility_Death>()
	{
		return ULyraGameplayAbility_Death::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameplayAbility_Death);
	ULyraGameplayAbility_Death::~ULyraGameplayAbility_Death() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Death_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Death_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameplayAbility_Death, ULyraGameplayAbility_Death::StaticClass, TEXT("ULyraGameplayAbility_Death"), &Z_Registration_Info_UClass_ULyraGameplayAbility_Death, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameplayAbility_Death), 1198339085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Death_h_111526828(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Death_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Death_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
