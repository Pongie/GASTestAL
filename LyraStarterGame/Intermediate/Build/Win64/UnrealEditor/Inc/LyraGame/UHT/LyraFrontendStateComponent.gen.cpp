// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Frontend/LyraFrontendStateComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraFrontendStateComponent() {}
// Cross Module References
	COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingProcessInterface_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserInfo_NoRegister();
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext();
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserPrivilege();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraFrontendStateComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraFrontendStateComponent_NoRegister();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraFrontendStateComponent::execOnUserInitialized)
	{
		P_GET_OBJECT(UCommonUserInfo,Z_Param_UserInfo);
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_PROPERTY(FTextProperty,Z_Param_Error);
		P_GET_ENUM(ECommonUserPrivilege,Z_Param_RequestedPrivilege);
		P_GET_ENUM(ECommonUserOnlineContext,Z_Param_OnlineContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUserInitialized(Z_Param_UserInfo,Z_Param_bSuccess,Z_Param_Error,ECommonUserPrivilege(Z_Param_RequestedPrivilege),ECommonUserOnlineContext(Z_Param_OnlineContext));
		P_NATIVE_END;
	}
	void ULyraFrontendStateComponent::StaticRegisterNativesULyraFrontendStateComponent()
	{
		UClass* Class = ULyraFrontendStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnUserInitialized", &ULyraFrontendStateComponent::execOnUserInitialized },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics
	{
		struct LyraFrontendStateComponent_eventOnUserInitialized_Parms
		{
			const UCommonUserInfo* UserInfo;
			bool bSuccess;
			FText Error;
			ECommonUserPrivilege RequestedPrivilege;
			ECommonUserOnlineContext OnlineContext;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UserInfo;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Error;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RequestedPrivilege_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RequestedPrivilege;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OnlineContext_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OnlineContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::NewProp_UserInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::NewProp_UserInfo = { "UserInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraFrontendStateComponent_eventOnUserInitialized_Parms, UserInfo), Z_Construct_UClass_UCommonUserInfo_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::NewProp_UserInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::NewProp_UserInfo_MetaData)) };
	void Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((LyraFrontendStateComponent_eventOnUserInitialized_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LyraFrontendStateComponent_eventOnUserInitialized_Parms), &Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraFrontendStateComponent_eventOnUserInitialized_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::NewProp_RequestedPrivilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::NewProp_RequestedPrivilege = { "RequestedPrivilege", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraFrontendStateComponent_eventOnUserInitialized_Parms, RequestedPrivilege), Z_Construct_UEnum_CommonUser_ECommonUserPrivilege, METADATA_PARAMS(nullptr, 0) }; // 3520582230
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::NewProp_OnlineContext_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::NewProp_OnlineContext = { "OnlineContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraFrontendStateComponent_eventOnUserInitialized_Parms, OnlineContext), Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext, METADATA_PARAMS(nullptr, 0) }; // 2680643188
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::NewProp_UserInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::NewProp_RequestedPrivilege_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::NewProp_RequestedPrivilege,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::NewProp_OnlineContext_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::NewProp_OnlineContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Frontend/LyraFrontendStateComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraFrontendStateComponent, nullptr, "OnUserInitialized", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::LyraFrontendStateComponent_eventOnUserInitialized_Parms), Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraFrontendStateComponent);
	UClass* Z_Construct_UClass_ULyraFrontendStateComponent_NoRegister()
	{
		return ULyraFrontendStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULyraFrontendStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressStartScreenClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PressStartScreenClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainScreenClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_MainScreenClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraFrontendStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameStateComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraFrontendStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraFrontendStateComponent_OnUserInitialized, "OnUserInitialized" }, // 104309905
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraFrontendStateComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "UI/Frontend/LyraFrontendStateComponent.h" },
		{ "ModuleRelativePath", "UI/Frontend/LyraFrontendStateComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraFrontendStateComponent_Statics::NewProp_PressStartScreenClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/Frontend/LyraFrontendStateComponent.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULyraFrontendStateComponent_Statics::NewProp_PressStartScreenClass = { "PressStartScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraFrontendStateComponent, PressStartScreenClass), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraFrontendStateComponent_Statics::NewProp_PressStartScreenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraFrontendStateComponent_Statics::NewProp_PressStartScreenClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraFrontendStateComponent_Statics::NewProp_MainScreenClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/Frontend/LyraFrontendStateComponent.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULyraFrontendStateComponent_Statics::NewProp_MainScreenClass = { "MainScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraFrontendStateComponent, MainScreenClass), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraFrontendStateComponent_Statics::NewProp_MainScreenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraFrontendStateComponent_Statics::NewProp_MainScreenClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraFrontendStateComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraFrontendStateComponent_Statics::NewProp_PressStartScreenClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraFrontendStateComponent_Statics::NewProp_MainScreenClass,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULyraFrontendStateComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULoadingProcessInterface_NoRegister, (int32)VTABLE_OFFSET(ULyraFrontendStateComponent, ILoadingProcessInterface), false },  // 4079525349
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraFrontendStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraFrontendStateComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraFrontendStateComponent_Statics::ClassParams = {
		&ULyraFrontendStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraFrontendStateComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraFrontendStateComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraFrontendStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraFrontendStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraFrontendStateComponent()
	{
		if (!Z_Registration_Info_UClass_ULyraFrontendStateComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraFrontendStateComponent.OuterSingleton, Z_Construct_UClass_ULyraFrontendStateComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraFrontendStateComponent.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraFrontendStateComponent>()
	{
		return ULyraFrontendStateComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraFrontendStateComponent);
	ULyraFrontendStateComponent::~ULyraFrontendStateComponent() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Frontend_LyraFrontendStateComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Frontend_LyraFrontendStateComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraFrontendStateComponent, ULyraFrontendStateComponent::StaticClass, TEXT("ULyraFrontendStateComponent"), &Z_Registration_Info_UClass_ULyraFrontendStateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraFrontendStateComponent), 1003554988U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Frontend_LyraFrontendStateComponent_h_2733051552(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Frontend_LyraFrontendStateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Frontend_LyraFrontendStateComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
