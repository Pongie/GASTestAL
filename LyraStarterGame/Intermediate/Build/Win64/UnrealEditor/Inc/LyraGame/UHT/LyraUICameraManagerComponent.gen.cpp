// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Camera/LyraUICameraManagerComponent.h"
#include "Camera/LyraPlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraUICameraManagerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraUICameraManagerComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraUICameraManagerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	void ULyraUICameraManagerComponent::StaticRegisterNativesULyraUICameraManagerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraUICameraManagerComponent);
	UClass* Z_Construct_UClass_ULyraUICameraManagerComponent_NoRegister()
	{
		return ULyraUICameraManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULyraUICameraManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ViewTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatingViewTarget_MetaData[];
#endif
		static void NewProp_bUpdatingViewTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatingViewTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Camera/LyraUICameraManagerComponent.h" },
		{ "ModuleRelativePath", "Camera/LyraUICameraManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::NewProp_ViewTarget_MetaData[] = {
		{ "ModuleRelativePath", "Camera/LyraUICameraManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraUICameraManagerComponent, ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::NewProp_ViewTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::NewProp_ViewTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::NewProp_bUpdatingViewTarget_MetaData[] = {
		{ "ModuleRelativePath", "Camera/LyraUICameraManagerComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::NewProp_bUpdatingViewTarget_SetBit(void* Obj)
	{
		((ULyraUICameraManagerComponent*)Obj)->bUpdatingViewTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::NewProp_bUpdatingViewTarget = { "bUpdatingViewTarget", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraUICameraManagerComponent), &Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::NewProp_bUpdatingViewTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::NewProp_bUpdatingViewTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::NewProp_bUpdatingViewTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::NewProp_ViewTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::NewProp_bUpdatingViewTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraUICameraManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::ClassParams = {
		&ULyraUICameraManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::PropPointers),
		0,
		0x00A000ACu,
		METADATA_PARAMS(Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraUICameraManagerComponent()
	{
		if (!Z_Registration_Info_UClass_ULyraUICameraManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraUICameraManagerComponent.OuterSingleton, Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraUICameraManagerComponent.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraUICameraManagerComponent>()
	{
		return ULyraUICameraManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraUICameraManagerComponent);
	ULyraUICameraManagerComponent::~ULyraUICameraManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraUICameraManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraUICameraManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraUICameraManagerComponent, ULyraUICameraManagerComponent::StaticClass, TEXT("ULyraUICameraManagerComponent"), &Z_Registration_Info_UClass_ULyraUICameraManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraUICameraManagerComponent), 526643229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraUICameraManagerComponent_h_1172981282(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraUICameraManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraUICameraManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
