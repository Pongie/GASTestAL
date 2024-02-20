// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Weapons/SCircumferenceMarkerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCircumferenceMarkerWidget() {}
// Cross Module References
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCircumferenceMarkerEntry();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CircumferenceMarkerEntry;
class UScriptStruct* FCircumferenceMarkerEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CircumferenceMarkerEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CircumferenceMarkerEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCircumferenceMarkerEntry, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("CircumferenceMarkerEntry"));
	}
	return Z_Registration_Info_UScriptStruct_CircumferenceMarkerEntry.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FCircumferenceMarkerEntry>()
{
	return FCircumferenceMarkerEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageRotationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImageRotationAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UI/Weapons/SCircumferenceMarkerWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCircumferenceMarkerEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::NewProp_PositionAngle_MetaData[] = {
		{ "Category", "CircumferenceMarkerEntry" },
		{ "Comment", "// The angle to place this marker around the circle (in degrees)\n" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "UI/Weapons/SCircumferenceMarkerWidget.h" },
		{ "ToolTip", "The angle to place this marker around the circle (in degrees)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::NewProp_PositionAngle = { "PositionAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCircumferenceMarkerEntry, PositionAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::NewProp_PositionAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::NewProp_PositionAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::NewProp_ImageRotationAngle_MetaData[] = {
		{ "Category", "CircumferenceMarkerEntry" },
		{ "Comment", "// The angle to rotate the marker image (in degrees)\n" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "UI/Weapons/SCircumferenceMarkerWidget.h" },
		{ "ToolTip", "The angle to rotate the marker image (in degrees)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::NewProp_ImageRotationAngle = { "ImageRotationAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCircumferenceMarkerEntry, ImageRotationAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::NewProp_ImageRotationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::NewProp_ImageRotationAngle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::NewProp_PositionAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::NewProp_ImageRotationAngle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"CircumferenceMarkerEntry",
		sizeof(FCircumferenceMarkerEntry),
		alignof(FCircumferenceMarkerEntry),
		Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCircumferenceMarkerEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_CircumferenceMarkerEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CircumferenceMarkerEntry.InnerSingleton, Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CircumferenceMarkerEntry.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_SCircumferenceMarkerWidget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_SCircumferenceMarkerWidget_h_Statics::ScriptStructInfo[] = {
		{ FCircumferenceMarkerEntry::StaticStruct, Z_Construct_UScriptStruct_FCircumferenceMarkerEntry_Statics::NewStructOps, TEXT("CircumferenceMarkerEntry"), &Z_Registration_Info_UScriptStruct_CircumferenceMarkerEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCircumferenceMarkerEntry), 2704765841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_SCircumferenceMarkerWidget_h_3595713433(TEXT("/Script/LyraGame"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_SCircumferenceMarkerWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_UI_Weapons_SCircumferenceMarkerWidget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
