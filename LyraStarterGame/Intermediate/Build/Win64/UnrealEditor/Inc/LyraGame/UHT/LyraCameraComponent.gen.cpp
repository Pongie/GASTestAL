// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Camera/LyraCameraComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCameraComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraModeStack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraCameraComponent::execFindCameraComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULyraCameraComponent**)Z_Param__Result=ULyraCameraComponent::FindCameraComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	void ULyraCameraComponent::StaticRegisterNativesULyraCameraComponent()
	{
		UClass* Class = ULyraCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindCameraComponent", &ULyraCameraComponent::execFindCameraComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics
	{
		struct LyraCameraComponent_eventFindCameraComponent_Parms
		{
			const AActor* Actor;
			ULyraCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCameraComponent_eventFindCameraComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraCameraComponent_eventFindCameraComponent_Parms, ReturnValue), Z_Construct_UClass_ULyraCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lyra|Camera" },
		{ "Comment", "// Returns the camera component if one exists on the specified actor.\n" },
		{ "ModuleRelativePath", "Camera/LyraCameraComponent.h" },
		{ "ToolTip", "Returns the camera component if one exists on the specified actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCameraComponent, nullptr, "FindCameraComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics::LyraCameraComponent_eventFindCameraComponent_Parms), Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraCameraComponent);
	UClass* Z_Construct_UClass_ULyraCameraComponent_NoRegister()
	{
		return ULyraCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULyraCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeStack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraModeStack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraCameraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraCameraComponent_FindCameraComponent, "FindCameraComponent" }, // 3121407913
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULyraCameraComponent\n *\n *\x09The base camera component class used by this project.\n */" },
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Camera/LyraCameraComponent.h" },
		{ "ModuleRelativePath", "Camera/LyraCameraComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULyraCameraComponent\n\n    The base camera component class used by this project." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraComponent_Statics::NewProp_CameraModeStack_MetaData[] = {
		{ "Comment", "// Stack used to blend the camera modes.\n" },
		{ "ModuleRelativePath", "Camera/LyraCameraComponent.h" },
		{ "ToolTip", "Stack used to blend the camera modes." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraCameraComponent_Statics::NewProp_CameraModeStack = { "CameraModeStack", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraCameraComponent, CameraModeStack), Z_Construct_UClass_ULyraCameraModeStack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraCameraComponent_Statics::NewProp_CameraModeStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraComponent_Statics::NewProp_CameraModeStack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraComponent_Statics::NewProp_CameraModeStack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraCameraComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraCameraComponent_Statics::ClassParams = {
		&ULyraCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraCameraComponent()
	{
		if (!Z_Registration_Info_UClass_ULyraCameraComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraCameraComponent.OuterSingleton, Z_Construct_UClass_ULyraCameraComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraCameraComponent.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraCameraComponent>()
	{
		return ULyraCameraComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraCameraComponent);
	ULyraCameraComponent::~ULyraCameraComponent() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraCameraComponent, ULyraCameraComponent::StaticClass, TEXT("ULyraCameraComponent"), &Z_Registration_Info_UClass_ULyraCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraCameraComponent), 2592699613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraComponent_h_4168668480(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Camera_LyraCameraComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
