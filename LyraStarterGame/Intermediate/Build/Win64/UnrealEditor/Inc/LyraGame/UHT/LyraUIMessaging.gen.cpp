// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Subsystem/LyraUIMessaging.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraUIMessaging() {}
// Cross Module References
	COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameDialog_NoRegister();
	COMMONGAME_API UClass* Z_Construct_UClass_UCommonMessagingSubsystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraUIMessaging();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraUIMessaging_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraUIMessaging::StaticRegisterNativesULyraUIMessaging()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraUIMessaging);
	UClass* Z_Construct_UClass_ULyraUIMessaging_NoRegister()
	{
		return ULyraUIMessaging::StaticClass();
	}
	struct Z_Construct_UClass_ULyraUIMessaging_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmationDialogClassPtr_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ConfirmationDialogClassPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorDialogClassPtr_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ErrorDialogClassPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmationDialogClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ConfirmationDialogClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorDialogClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ErrorDialogClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraUIMessaging_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonMessagingSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUIMessaging_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Subsystem/LyraUIMessaging.h" },
		{ "ModuleRelativePath", "UI/Subsystem/LyraUIMessaging.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ConfirmationDialogClassPtr_MetaData[] = {
		{ "ModuleRelativePath", "UI/Subsystem/LyraUIMessaging.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ConfirmationDialogClassPtr = { "ConfirmationDialogClassPtr", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraUIMessaging, ConfirmationDialogClassPtr), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonGameDialog_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ConfirmationDialogClassPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ConfirmationDialogClassPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ErrorDialogClassPtr_MetaData[] = {
		{ "ModuleRelativePath", "UI/Subsystem/LyraUIMessaging.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ErrorDialogClassPtr = { "ErrorDialogClassPtr", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraUIMessaging, ErrorDialogClassPtr), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonGameDialog_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ErrorDialogClassPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ErrorDialogClassPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ConfirmationDialogClass_MetaData[] = {
		{ "ModuleRelativePath", "UI/Subsystem/LyraUIMessaging.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ConfirmationDialogClass = { "ConfirmationDialogClass", nullptr, (EPropertyFlags)0x0044000000004000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraUIMessaging, ConfirmationDialogClass), Z_Construct_UClass_UCommonGameDialog_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ConfirmationDialogClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ConfirmationDialogClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ErrorDialogClass_MetaData[] = {
		{ "ModuleRelativePath", "UI/Subsystem/LyraUIMessaging.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ErrorDialogClass = { "ErrorDialogClass", nullptr, (EPropertyFlags)0x0044000000004000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraUIMessaging, ErrorDialogClass), Z_Construct_UClass_UCommonGameDialog_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ErrorDialogClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ErrorDialogClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraUIMessaging_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ConfirmationDialogClassPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ErrorDialogClassPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ConfirmationDialogClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ErrorDialogClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraUIMessaging_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraUIMessaging>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraUIMessaging_Statics::ClassParams = {
		&ULyraUIMessaging::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraUIMessaging_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUIMessaging_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraUIMessaging_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUIMessaging_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraUIMessaging()
	{
		if (!Z_Registration_Info_UClass_ULyraUIMessaging.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraUIMessaging.OuterSingleton, Z_Construct_UClass_ULyraUIMessaging_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraUIMessaging.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraUIMessaging>()
	{
		return ULyraUIMessaging::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraUIMessaging);
	ULyraUIMessaging::~ULyraUIMessaging() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Subsystem_LyraUIMessaging_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Subsystem_LyraUIMessaging_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraUIMessaging, ULyraUIMessaging::StaticClass, TEXT("ULyraUIMessaging"), &Z_Registration_Info_UClass_ULyraUIMessaging, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraUIMessaging), 738005898U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Subsystem_LyraUIMessaging_h_1234780703(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Subsystem_LyraUIMessaging_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Subsystem_LyraUIMessaging_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
