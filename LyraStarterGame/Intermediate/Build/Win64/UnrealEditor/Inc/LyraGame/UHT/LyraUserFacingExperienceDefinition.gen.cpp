// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/LyraUserFacingExperienceDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraUserFacingExperienceDefinition() {}
// Cross Module References
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraUserFacingExperienceDefinition();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraUserFacingExperienceDefinition_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	DEFINE_FUNCTION(ULyraUserFacingExperienceDefinition::execCreateHostingRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonSession_HostSessionRequest**)Z_Param__Result=P_THIS->CreateHostingRequest();
		P_NATIVE_END;
	}
	void ULyraUserFacingExperienceDefinition::StaticRegisterNativesULyraUserFacingExperienceDefinition()
	{
		UClass* Class = ULyraUserFacingExperienceDefinition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateHostingRequest", &ULyraUserFacingExperienceDefinition::execCreateHostingRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics
	{
		struct LyraUserFacingExperienceDefinition_eventCreateHostingRequest_Parms
		{
			UCommonSession_HostSessionRequest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraUserFacingExperienceDefinition_eventCreateHostingRequest_Parms, ReturnValue), Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Create a request object that is used to actually start a session with these settings */" },
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
		{ "ToolTip", "Create a request object that is used to actually start a session with these settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraUserFacingExperienceDefinition, nullptr, "CreateHostingRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::LyraUserFacingExperienceDefinition_eventCreateHostingRequest_Parms), Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraUserFacingExperienceDefinition);
	UClass* Z_Construct_UClass_ULyraUserFacingExperienceDefinition_NoRegister()
	{
		return ULyraUserFacingExperienceDefinition::StaticClass();
	}
	struct Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExperienceID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraArgs_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraArgs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraArgs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExtraArgs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileTitle_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TileTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSubTitle_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TileSubTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TileDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TileIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenWidget_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_LoadingScreenWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDefaultExperience_MetaData[];
#endif
		static void NewProp_bIsDefaultExperience_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefaultExperience;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowInFrontEnd_MetaData[];
#endif
		static void NewProp_bShowInFrontEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInFrontEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordReplay_MetaData[];
#endif
		static void NewProp_bRecordReplay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordReplay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayerCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayerCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraUserFacingExperienceDefinition_CreateHostingRequest, "CreateHostingRequest" }, // 2717464687
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Description of settings used to display experiences in the UI and start a new session */" },
		{ "IncludePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
		{ "ToolTip", "Description of settings used to display experiences in the UI and start a new session" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_MapID_MetaData[] = {
		{ "AllowedTypes", "Map" },
		{ "Category", "Experience" },
		{ "Comment", "/** The specific map to load */" },
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
		{ "ToolTip", "The specific map to load" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_MapID = { "MapID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraUserFacingExperienceDefinition, MapID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_MapID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_MapID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExperienceID_MetaData[] = {
		{ "AllowedTypes", "LyraExperienceDefinition" },
		{ "Category", "Experience" },
		{ "Comment", "/** The gameplay experience to load */" },
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
		{ "ToolTip", "The gameplay experience to load" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExperienceID = { "ExperienceID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraUserFacingExperienceDefinition, ExperienceID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExperienceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExperienceID_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_ValueProp = { "ExtraArgs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_Key_KeyProp = { "ExtraArgs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_MetaData[] = {
		{ "Category", "Experience" },
		{ "Comment", "/** Extra arguments passed as URL options to the game */" },
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
		{ "ToolTip", "Extra arguments passed as URL options to the game" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs = { "ExtraArgs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraUserFacingExperienceDefinition, ExtraArgs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileTitle_MetaData[] = {
		{ "Category", "Experience" },
		{ "Comment", "/** Primary title in the UI */" },
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
		{ "ToolTip", "Primary title in the UI" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileTitle = { "TileTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraUserFacingExperienceDefinition, TileTitle), METADATA_PARAMS(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileSubTitle_MetaData[] = {
		{ "Category", "Experience" },
		{ "Comment", "/** Secondary title */" },
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
		{ "ToolTip", "Secondary title" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileSubTitle = { "TileSubTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraUserFacingExperienceDefinition, TileSubTitle), METADATA_PARAMS(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileSubTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileSubTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileDescription_MetaData[] = {
		{ "Category", "Experience" },
		{ "Comment", "/** Full description */" },
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
		{ "ToolTip", "Full description" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileDescription = { "TileDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraUserFacingExperienceDefinition, TileDescription), METADATA_PARAMS(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileIcon_MetaData[] = {
		{ "Category", "Experience" },
		{ "Comment", "/** Icon used in the UI */" },
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
		{ "ToolTip", "Icon used in the UI" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileIcon = { "TileIcon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraUserFacingExperienceDefinition, TileIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_LoadingScreenWidget_MetaData[] = {
		{ "Category", "LoadingScreen" },
		{ "Comment", "/** The loading screen widget to show when loading into (or back out of) a given experience */" },
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
		{ "ToolTip", "The loading screen widget to show when loading into (or back out of) a given experience" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_LoadingScreenWidget = { "LoadingScreenWidget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraUserFacingExperienceDefinition, LoadingScreenWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_LoadingScreenWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_LoadingScreenWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience_MetaData[] = {
		{ "Category", "Experience" },
		{ "Comment", "/** If true, this is a default experience that should be used for quick play and given priority in the UI */" },
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
		{ "ToolTip", "If true, this is a default experience that should be used for quick play and given priority in the UI" },
	};
#endif
	void Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience_SetBit(void* Obj)
	{
		((ULyraUserFacingExperienceDefinition*)Obj)->bIsDefaultExperience = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience = { "bIsDefaultExperience", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraUserFacingExperienceDefinition), &Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd_MetaData[] = {
		{ "Category", "Experience" },
		{ "Comment", "/** If true, this will show up in the experiences list in the front-end */" },
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
		{ "ToolTip", "If true, this will show up in the experiences list in the front-end" },
	};
#endif
	void Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd_SetBit(void* Obj)
	{
		((ULyraUserFacingExperienceDefinition*)Obj)->bShowInFrontEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd = { "bShowInFrontEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraUserFacingExperienceDefinition), &Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay_MetaData[] = {
		{ "Category", "Experience" },
		{ "Comment", "/** If true, a replay will be recorded of the game */" },
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
		{ "ToolTip", "If true, a replay will be recorded of the game" },
	};
#endif
	void Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay_SetBit(void* Obj)
	{
		((ULyraUserFacingExperienceDefinition*)Obj)->bRecordReplay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay = { "bRecordReplay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULyraUserFacingExperienceDefinition), &Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_MaxPlayerCount_MetaData[] = {
		{ "Category", "Experience" },
		{ "Comment", "/** Max number of players for this session */" },
		{ "ModuleRelativePath", "GameModes/LyraUserFacingExperienceDefinition.h" },
		{ "ToolTip", "Max number of players for this session" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_MaxPlayerCount = { "MaxPlayerCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraUserFacingExperienceDefinition, MaxPlayerCount), METADATA_PARAMS(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_MaxPlayerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_MaxPlayerCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_MapID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExperienceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileSubTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_TileIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_LoadingScreenWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::NewProp_MaxPlayerCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraUserFacingExperienceDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::ClassParams = {
		&ULyraUserFacingExperienceDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraUserFacingExperienceDefinition()
	{
		if (!Z_Registration_Info_UClass_ULyraUserFacingExperienceDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraUserFacingExperienceDefinition.OuterSingleton, Z_Construct_UClass_ULyraUserFacingExperienceDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraUserFacingExperienceDefinition.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraUserFacingExperienceDefinition>()
	{
		return ULyraUserFacingExperienceDefinition::StaticClass();
	}
	ULyraUserFacingExperienceDefinition::ULyraUserFacingExperienceDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraUserFacingExperienceDefinition);
	ULyraUserFacingExperienceDefinition::~ULyraUserFacingExperienceDefinition() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraUserFacingExperienceDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraUserFacingExperienceDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraUserFacingExperienceDefinition, ULyraUserFacingExperienceDefinition::StaticClass, TEXT("ULyraUserFacingExperienceDefinition"), &Z_Registration_Info_UClass_ULyraUserFacingExperienceDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraUserFacingExperienceDefinition), 155679357U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraUserFacingExperienceDefinition_h_3978264031(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraUserFacingExperienceDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_GameModes_LyraUserFacingExperienceDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
