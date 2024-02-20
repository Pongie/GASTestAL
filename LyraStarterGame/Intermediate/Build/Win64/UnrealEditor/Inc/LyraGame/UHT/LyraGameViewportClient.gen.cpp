// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/LyraGameViewportClient.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameViewportClient() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonGameViewportClient();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameViewportClient();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameViewportClient_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraGameViewportClient::StaticRegisterNativesULyraGameViewportClient()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameViewportClient);
	UClass* Z_Construct_UClass_ULyraGameViewportClient_NoRegister()
	{
		return ULyraGameViewportClient::StaticClass();
	}
	struct Z_Construct_UClass_ULyraGameViewportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraGameViewportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonGameViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraGameViewportClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/LyraGameViewportClient.h" },
		{ "ModuleRelativePath", "UI/LyraGameViewportClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraGameViewportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameViewportClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameViewportClient_Statics::ClassParams = {
		&ULyraGameViewportClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_ULyraGameViewportClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameViewportClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraGameViewportClient()
	{
		if (!Z_Registration_Info_UClass_ULyraGameViewportClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameViewportClient.OuterSingleton, Z_Construct_UClass_ULyraGameViewportClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraGameViewportClient.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraGameViewportClient>()
	{
		return ULyraGameViewportClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameViewportClient);
	ULyraGameViewportClient::~ULyraGameViewportClient() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraGameViewportClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraGameViewportClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameViewportClient, ULyraGameViewportClient::StaticClass, TEXT("ULyraGameViewportClient"), &Z_Registration_Info_UClass_ULyraGameViewportClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameViewportClient), 3022576660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraGameViewportClient_h_3413949400(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraGameViewportClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_LyraGameViewportClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
