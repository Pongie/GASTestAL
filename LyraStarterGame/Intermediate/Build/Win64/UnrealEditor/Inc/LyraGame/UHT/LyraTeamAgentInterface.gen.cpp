// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Teams/LyraTeamAgentInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTeamAgentInterface() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamAgentInterface();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_LyraGame_eventOnLyraTeamIndexChangedDelegate_Parms
		{
			UObject* ObjectChangingTeam;
			int32 OldTeamID;
			int32 NewTeamID;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectChangingTeam;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldTeamID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewTeamID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature_Statics::NewProp_ObjectChangingTeam = { "ObjectChangingTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LyraGame_eventOnLyraTeamIndexChangedDelegate_Parms, ObjectChangingTeam), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature_Statics::NewProp_OldTeamID = { "OldTeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LyraGame_eventOnLyraTeamIndexChangedDelegate_Parms, OldTeamID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature_Statics::NewProp_NewTeamID = { "NewTeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LyraGame_eventOnLyraTeamIndexChangedDelegate_Parms, NewTeamID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature_Statics::NewProp_ObjectChangingTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature_Statics::NewProp_OldTeamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature_Statics::NewProp_NewTeamID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Teams/LyraTeamAgentInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LyraGame, nullptr, "OnLyraTeamIndexChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature_Statics::_Script_LyraGame_eventOnLyraTeamIndexChangedDelegate_Parms), Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLyraTeamIndexChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLyraTeamIndexChangedDelegate, UObject* ObjectChangingTeam, int32 OldTeamID, int32 NewTeamID)
{
	struct _Script_LyraGame_eventOnLyraTeamIndexChangedDelegate_Parms
	{
		UObject* ObjectChangingTeam;
		int32 OldTeamID;
		int32 NewTeamID;
	};
	_Script_LyraGame_eventOnLyraTeamIndexChangedDelegate_Parms Parms;
	Parms.ObjectChangingTeam=ObjectChangingTeam;
	Parms.OldTeamID=OldTeamID;
	Parms.NewTeamID=NewTeamID;
	OnLyraTeamIndexChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void ULyraTeamAgentInterface::StaticRegisterNativesULyraTeamAgentInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraTeamAgentInterface);
	UClass* Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister()
	{
		return ULyraTeamAgentInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULyraTeamAgentInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraTeamAgentInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericTeamAgentInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraTeamAgentInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Teams/LyraTeamAgentInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraTeamAgentInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILyraTeamAgentInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraTeamAgentInterface_Statics::ClassParams = {
		&ULyraTeamAgentInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULyraTeamAgentInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamAgentInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraTeamAgentInterface()
	{
		if (!Z_Registration_Info_UClass_ULyraTeamAgentInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraTeamAgentInterface.OuterSingleton, Z_Construct_UClass_ULyraTeamAgentInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraTeamAgentInterface.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraTeamAgentInterface>()
	{
		return ULyraTeamAgentInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraTeamAgentInterface);
	ULyraTeamAgentInterface::~ULyraTeamAgentInterface() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraTeamAgentInterface, ULyraTeamAgentInterface::StaticClass, TEXT("ULyraTeamAgentInterface"), &Z_Registration_Info_UClass_ULyraTeamAgentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraTeamAgentInterface), 3166716212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_1803866500(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
