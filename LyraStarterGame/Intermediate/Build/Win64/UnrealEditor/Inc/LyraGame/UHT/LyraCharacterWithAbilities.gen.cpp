// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/LyraCharacterWithAbilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCharacterWithAbilities() {}
// Cross Module References
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraCharacter();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraCharacterWithAbilities();
	LYRAGAME_API UClass* Z_Construct_UClass_ALyraCharacterWithAbilities_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ALyraCharacterWithAbilities::StaticRegisterNativesALyraCharacterWithAbilities()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraCharacterWithAbilities);
	UClass* Z_Construct_UClass_ALyraCharacterWithAbilities_NoRegister()
	{
		return ALyraCharacterWithAbilities::StaticClass();
	}
	struct Z_Construct_UClass_ALyraCharacterWithAbilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALyraCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ALyraCharacter typically gets the ability system component from the possessing player state\n// This represents a character with a self-contained ability system component.\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/LyraCharacterWithAbilities.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Character/LyraCharacterWithAbilities.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ALyraCharacter typically gets the ability system component from the possessing player state\nThis represents a character with a self-contained ability system component." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Lyra|PlayerState" },
		{ "Comment", "// The ability system component sub-object used by player characters.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LyraCharacterWithAbilities.h" },
		{ "ToolTip", "The ability system component sub-object used by player characters." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALyraCharacterWithAbilities, AbilitySystemComponent), Z_Construct_UClass_ULyraAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::NewProp_AbilitySystemComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraCharacterWithAbilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::ClassParams = {
		&ALyraCharacterWithAbilities::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALyraCharacterWithAbilities()
	{
		if (!Z_Registration_Info_UClass_ALyraCharacterWithAbilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraCharacterWithAbilities.OuterSingleton, Z_Construct_UClass_ALyraCharacterWithAbilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALyraCharacterWithAbilities.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ALyraCharacterWithAbilities>()
	{
		return ALyraCharacterWithAbilities::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraCharacterWithAbilities);
	ALyraCharacterWithAbilities::~ALyraCharacterWithAbilities() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacterWithAbilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacterWithAbilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALyraCharacterWithAbilities, ALyraCharacterWithAbilities::StaticClass, TEXT("ALyraCharacterWithAbilities"), &Z_Registration_Info_UClass_ALyraCharacterWithAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraCharacterWithAbilities), 3024065985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacterWithAbilities_h_1127861107(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacterWithAbilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Character_LyraCharacterWithAbilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
