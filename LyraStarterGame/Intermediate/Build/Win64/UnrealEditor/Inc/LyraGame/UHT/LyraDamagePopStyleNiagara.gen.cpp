// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Feedback/NumberPops/LyraDamagePopStyleNiagara.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraDamagePopStyleNiagara() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraDamagePopStyleNiagara();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraDamagePopStyleNiagara_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraDamagePopStyleNiagara::StaticRegisterNativesULyraDamagePopStyleNiagara()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraDamagePopStyleNiagara);
	UClass* Z_Construct_UClass_ULyraDamagePopStyleNiagara_NoRegister()
	{
		return ULyraDamagePopStyleNiagara::StaticClass();
	}
	struct Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraArrayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NiagaraArrayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextNiagara_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextNiagara;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*PopStyle is used to define what Niagara asset should be used for the Damage System representation*/" },
		{ "IncludePath", "Feedback/NumberPops/LyraDamagePopStyleNiagara.h" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraDamagePopStyleNiagara.h" },
		{ "ToolTip", "PopStyle is used to define what Niagara asset should be used for the Damage System representation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::NewProp_NiagaraArrayName_MetaData[] = {
		{ "Category", "DamagePop" },
		{ "Comment", "//Name of the Niagra Array to set the Damage informations\n" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraDamagePopStyleNiagara.h" },
		{ "ToolTip", "Name of the Niagra Array to set the Damage informations" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::NewProp_NiagaraArrayName = { "NiagaraArrayName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraDamagePopStyleNiagara, NiagaraArrayName), METADATA_PARAMS(Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::NewProp_NiagaraArrayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::NewProp_NiagaraArrayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::NewProp_TextNiagara_MetaData[] = {
		{ "Category", "DamagePop" },
		{ "Comment", "//Niagara System used to display the damages\n" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraDamagePopStyleNiagara.h" },
		{ "ToolTip", "Niagara System used to display the damages" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::NewProp_TextNiagara = { "TextNiagara", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraDamagePopStyleNiagara, TextNiagara), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::NewProp_TextNiagara_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::NewProp_TextNiagara_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::NewProp_NiagaraArrayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::NewProp_TextNiagara,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraDamagePopStyleNiagara>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::ClassParams = {
		&ULyraDamagePopStyleNiagara::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraDamagePopStyleNiagara()
	{
		if (!Z_Registration_Info_UClass_ULyraDamagePopStyleNiagara.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraDamagePopStyleNiagara.OuterSingleton, Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraDamagePopStyleNiagara.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraDamagePopStyleNiagara>()
	{
		return ULyraDamagePopStyleNiagara::StaticClass();
	}
	ULyraDamagePopStyleNiagara::ULyraDamagePopStyleNiagara(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraDamagePopStyleNiagara);
	ULyraDamagePopStyleNiagara::~ULyraDamagePopStyleNiagara() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraDamagePopStyleNiagara_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraDamagePopStyleNiagara_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraDamagePopStyleNiagara, ULyraDamagePopStyleNiagara::StaticClass, TEXT("ULyraDamagePopStyleNiagara"), &Z_Registration_Info_UClass_ULyraDamagePopStyleNiagara, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraDamagePopStyleNiagara), 470689110U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraDamagePopStyleNiagara_h_204508730(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraDamagePopStyleNiagara_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraDamagePopStyleNiagara_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
