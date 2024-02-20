// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Feedback/NumberPops/LyraNumberPopComponent_NiagaraText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraNumberPopComponent_NiagaraText() {}
// Cross Module References
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraDamagePopStyleNiagara_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraNumberPopComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraNumberPopComponent_NiagaraText::StaticRegisterNativesULyraNumberPopComponent_NiagaraText()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraNumberPopComponent_NiagaraText);
	UClass* Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_NoRegister()
	{
		return ULyraNumberPopComponent_NiagaraText::StaticClass();
	}
	struct Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Style;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NiagaraComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraNumberPopComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Feedback/NumberPops/LyraNumberPopComponent_NiagaraText.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_NiagaraText.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::NewProp_Style_MetaData[] = {
		{ "Category", "Number Pop|Style" },
		{ "Comment", "/** Style patterns to attempt to apply to the incoming number pops */" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_NiagaraText.h" },
		{ "ToolTip", "Style patterns to attempt to apply to the incoming number pops" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_NiagaraText, Style), Z_Construct_UClass_ULyraDamagePopStyleNiagara_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::NewProp_Style_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::NewProp_NiagaraComp_MetaData[] = {
		{ "Category", "Number Pop|Style" },
		{ "Comment", "//Niagara Component used to display the damage\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_NiagaraText.h" },
		{ "ToolTip", "Niagara Component used to display the damage" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::NewProp_NiagaraComp = { "NiagaraComp", nullptr, (EPropertyFlags)0x0024080000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_NiagaraText, NiagaraComp), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::NewProp_NiagaraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::NewProp_NiagaraComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::NewProp_Style,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::NewProp_NiagaraComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraNumberPopComponent_NiagaraText>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::ClassParams = {
		&ULyraNumberPopComponent_NiagaraText::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText()
	{
		if (!Z_Registration_Info_UClass_ULyraNumberPopComponent_NiagaraText.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraNumberPopComponent_NiagaraText.OuterSingleton, Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraNumberPopComponent_NiagaraText.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraNumberPopComponent_NiagaraText>()
	{
		return ULyraNumberPopComponent_NiagaraText::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraNumberPopComponent_NiagaraText);
	ULyraNumberPopComponent_NiagaraText::~ULyraNumberPopComponent_NiagaraText() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_NiagaraText_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_NiagaraText_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraNumberPopComponent_NiagaraText, ULyraNumberPopComponent_NiagaraText::StaticClass, TEXT("ULyraNumberPopComponent_NiagaraText"), &Z_Registration_Info_UClass_ULyraNumberPopComponent_NiagaraText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraNumberPopComponent_NiagaraText), 2199162969U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_NiagaraText_h_3437062617(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_NiagaraText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_NiagaraText_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
