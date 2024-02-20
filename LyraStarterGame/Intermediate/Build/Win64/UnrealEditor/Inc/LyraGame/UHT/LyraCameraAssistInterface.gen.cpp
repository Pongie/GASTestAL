// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Camera/LyraCameraAssistInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCameraAssistInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraAssistInterface();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraAssistInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraCameraAssistInterface::StaticRegisterNativesULyraCameraAssistInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraCameraAssistInterface);
	UClass* Z_Construct_UClass_ULyraCameraAssistInterface_NoRegister()
	{
		return ULyraCameraAssistInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULyraCameraAssistInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraCameraAssistInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraAssistInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Camera/LyraCameraAssistInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraCameraAssistInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILyraCameraAssistInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraCameraAssistInterface_Statics::ClassParams = {
		&ULyraCameraAssistInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraCameraAssistInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraAssistInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraCameraAssistInterface()
	{
		if (!Z_Registration_Info_UClass_ULyraCameraAssistInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraCameraAssistInterface.OuterSingleton, Z_Construct_UClass_ULyraCameraAssistInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraCameraAssistInterface.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraCameraAssistInterface>()
	{
		return ULyraCameraAssistInterface::StaticClass();
	}
	ULyraCameraAssistInterface::ULyraCameraAssistInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraCameraAssistInterface);
	ULyraCameraAssistInterface::~ULyraCameraAssistInterface() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraAssistInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraAssistInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraCameraAssistInterface, ULyraCameraAssistInterface::StaticClass, TEXT("ULyraCameraAssistInterface"), &Z_Registration_Info_UClass_ULyraCameraAssistInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraCameraAssistInterface), 1863486355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraAssistInterface_h_2870684183(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraAssistInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraAssistInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
