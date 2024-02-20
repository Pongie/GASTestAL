// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraNumberPopComponent_MeshText() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraDamagePopStyle_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraNumberPopComponent();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraNumberPopComponent_MeshText();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraNumberPopComponent_MeshText_NoRegister();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLiveNumberPopEntry();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPooledNumberPopComponentList();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PooledNumberPopComponentList;
class UScriptStruct* FPooledNumberPopComponentList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PooledNumberPopComponentList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PooledNumberPopComponentList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPooledNumberPopComponentList, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("PooledNumberPopComponentList"));
	}
	return Z_Registration_Info_UScriptStruct_PooledNumberPopComponentList.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FPooledNumberPopComponentList>()
{
	return FPooledNumberPopComponentList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Components_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Components;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPooledNumberPopComponentList>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::NewProp_Components_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0014008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPooledNumberPopComponentList, Components), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::NewProp_Components_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::NewProp_Components_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::NewProp_Components_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::NewProp_Components,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"PooledNumberPopComponentList",
		sizeof(FPooledNumberPopComponentList),
		alignof(FPooledNumberPopComponentList),
		Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPooledNumberPopComponentList()
	{
		if (!Z_Registration_Info_UScriptStruct_PooledNumberPopComponentList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PooledNumberPopComponentList.InnerSingleton, Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PooledNumberPopComponentList.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveNumberPopEntry;
class UScriptStruct* FLiveNumberPopEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveNumberPopEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveNumberPopEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveNumberPopEntry, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LiveNumberPopEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LiveNumberPopEntry.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLiveNumberPopEntry>()
{
	return FLiveNumberPopEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveNumberPopEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::NewProp_Component_MetaData[] = {
		{ "Comment", "/** The component that is currently live */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
		{ "ToolTip", "The component that is currently live" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0014000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveNumberPopEntry, Component), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::NewProp_Component,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		nullptr,
		&NewStructOps,
		"LiveNumberPopEntry",
		sizeof(FLiveNumberPopEntry),
		alignof(FLiveNumberPopEntry),
		Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveNumberPopEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveNumberPopEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveNumberPopEntry.InnerSingleton, Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveNumberPopEntry.InnerSingleton;
	}
	void ULyraNumberPopComponent_MeshText::StaticRegisterNativesULyraNumberPopComponent_MeshText()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraNumberPopComponent_MeshText);
	UClass* Z_Construct_UClass_ULyraNumberPopComponent_MeshText_NoRegister()
	{
		return ULyraNumberPopComponent_MeshText::StaticClass();
	}
	struct Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Styles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Styles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Styles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentLifespan_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ComponentLifespan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromCameraBeforeDoublingSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFromCameraBeforeDoublingSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitSizeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalHitSizeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontXSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FontXSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontYSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FontYSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpacingPercentageForOnes_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpacingPercentageForOnes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfNumberRotations_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NumberOfNumberRotations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SignDigitParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SignDigitParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ColorParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationLifespanParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationLifespanParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsCriticalHitParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IsCriticalHitParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveToCameraParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MoveToCameraParameterName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PositionParameterNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionParameterNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PositionParameterNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ScaleRotationAngleParameterNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleRotationAngleParameterNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScaleRotationAngleParameterNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DurationParameterNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationParameterNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DurationParameterNames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PooledComponentMap_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PooledComponentMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PooledComponentMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PooledComponentMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LiveComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiveComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LiveComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraNumberPopComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_Styles_Inner = { "Styles", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULyraDamagePopStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_Styles_MetaData[] = {
		{ "Category", "Number Pop|Style" },
		{ "Comment", "/** Style patterns to attempt to apply to the incoming number pops */" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
		{ "ToolTip", "Style patterns to attempt to apply to the incoming number pops" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_Styles = { "Styles", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, Styles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_Styles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_Styles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ComponentLifespan_MetaData[] = {
		{ "Category", "Number Pop|Style" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ComponentLifespan = { "ComponentLifespan", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, ComponentLifespan), METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ComponentLifespan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ComponentLifespan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_DistanceFromCameraBeforeDoublingSize_MetaData[] = {
		{ "Category", "Number Pop|Style" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_DistanceFromCameraBeforeDoublingSize = { "DistanceFromCameraBeforeDoublingSize", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, DistanceFromCameraBeforeDoublingSize), METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_DistanceFromCameraBeforeDoublingSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_DistanceFromCameraBeforeDoublingSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_CriticalHitSizeMultiplier_MetaData[] = {
		{ "Category", "Number Pop|Style" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_CriticalHitSizeMultiplier = { "CriticalHitSizeMultiplier", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, CriticalHitSizeMultiplier), METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_CriticalHitSizeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_CriticalHitSizeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_FontXSize_MetaData[] = {
		{ "Category", "Number Pop|Font" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_FontXSize = { "FontXSize", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, FontXSize), METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_FontXSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_FontXSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_FontYSize_MetaData[] = {
		{ "Category", "Number Pop|Font" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_FontYSize = { "FontYSize", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, FontYSize), METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_FontYSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_FontYSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_SpacingPercentageForOnes_MetaData[] = {
		{ "Category", "Number Pop|Font" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_SpacingPercentageForOnes = { "SpacingPercentageForOnes", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, SpacingPercentageForOnes), METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_SpacingPercentageForOnes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_SpacingPercentageForOnes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_NumberOfNumberRotations_MetaData[] = {
		{ "Category", "Number Pop|Style" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_NumberOfNumberRotations = { "NumberOfNumberRotations", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, NumberOfNumberRotations), METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_NumberOfNumberRotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_NumberOfNumberRotations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_SignDigitParameterName_MetaData[] = {
		{ "Category", "Number Pop|Material Bindings" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_SignDigitParameterName = { "SignDigitParameterName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, SignDigitParameterName), METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_SignDigitParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_SignDigitParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ColorParameterName_MetaData[] = {
		{ "Category", "Number Pop|Material Bindings" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ColorParameterName = { "ColorParameterName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, ColorParameterName), METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ColorParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ColorParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_AnimationLifespanParameterName_MetaData[] = {
		{ "Category", "Number Pop|Material Bindings" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_AnimationLifespanParameterName = { "AnimationLifespanParameterName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, AnimationLifespanParameterName), METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_AnimationLifespanParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_AnimationLifespanParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_IsCriticalHitParameterName_MetaData[] = {
		{ "Category", "Number Pop|Material Bindings" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_IsCriticalHitParameterName = { "IsCriticalHitParameterName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, IsCriticalHitParameterName), METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_IsCriticalHitParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_IsCriticalHitParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_MoveToCameraParameterName_MetaData[] = {
		{ "Category", "Number Pop|Material Bindings" },
		{ "Comment", "/** Damage numbers by default are given a depth close to the camera in the material to make sure they are never occluded. This can be toggled off here, should only be 0/1. */" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
		{ "ToolTip", "Damage numbers by default are given a depth close to the camera in the material to make sure they are never occluded. This can be toggled off here, should only be 0/1." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_MoveToCameraParameterName = { "MoveToCameraParameterName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, MoveToCameraParameterName), METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_MoveToCameraParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_MoveToCameraParameterName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PositionParameterNames_Inner = { "PositionParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PositionParameterNames_MetaData[] = {
		{ "Category", "Number Pop|Material Bindings" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PositionParameterNames = { "PositionParameterNames", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, PositionParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PositionParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PositionParameterNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ScaleRotationAngleParameterNames_Inner = { "ScaleRotationAngleParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ScaleRotationAngleParameterNames_MetaData[] = {
		{ "Category", "Number Pop|Material Bindings" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ScaleRotationAngleParameterNames = { "ScaleRotationAngleParameterNames", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, ScaleRotationAngleParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ScaleRotationAngleParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ScaleRotationAngleParameterNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_DurationParameterNames_Inner = { "DurationParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_DurationParameterNames_MetaData[] = {
		{ "Category", "Number Pop|Material Bindings" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_DurationParameterNames = { "DurationParameterNames", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, DurationParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_DurationParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_DurationParameterNames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PooledComponentMap_ValueProp = { "PooledComponentMap", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPooledNumberPopComponentList, METADATA_PARAMS(nullptr, 0) }; // 3195489323
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PooledComponentMap_Key_KeyProp = { "PooledComponentMap_Key", nullptr, (EPropertyFlags)0x0004008000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PooledComponentMap_MetaData[] = {
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PooledComponentMap = { "PooledComponentMap", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, PooledComponentMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PooledComponentMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PooledComponentMap_MetaData)) }; // 3195489323
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_LiveComponents_Inner = { "LiveComponents", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLiveNumberPopEntry, METADATA_PARAMS(nullptr, 0) }; // 197063082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_LiveComponents_MetaData[] = {
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraNumberPopComponent_MeshText.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_LiveComponents = { "LiveComponents", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraNumberPopComponent_MeshText, LiveComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_LiveComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_LiveComponents_MetaData)) }; // 197063082
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_Styles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_Styles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ComponentLifespan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_DistanceFromCameraBeforeDoublingSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_CriticalHitSizeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_FontXSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_FontYSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_SpacingPercentageForOnes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_NumberOfNumberRotations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_SignDigitParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ColorParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_AnimationLifespanParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_IsCriticalHitParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_MoveToCameraParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PositionParameterNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PositionParameterNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ScaleRotationAngleParameterNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_ScaleRotationAngleParameterNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_DurationParameterNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_DurationParameterNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PooledComponentMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PooledComponentMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_PooledComponentMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_LiveComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::NewProp_LiveComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraNumberPopComponent_MeshText>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::ClassParams = {
		&ULyraNumberPopComponent_MeshText::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraNumberPopComponent_MeshText()
	{
		if (!Z_Registration_Info_UClass_ULyraNumberPopComponent_MeshText.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraNumberPopComponent_MeshText.OuterSingleton, Z_Construct_UClass_ULyraNumberPopComponent_MeshText_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraNumberPopComponent_MeshText.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraNumberPopComponent_MeshText>()
	{
		return ULyraNumberPopComponent_MeshText::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraNumberPopComponent_MeshText);
	ULyraNumberPopComponent_MeshText::~ULyraNumberPopComponent_MeshText() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_MeshText_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_MeshText_h_Statics::ScriptStructInfo[] = {
		{ FPooledNumberPopComponentList::StaticStruct, Z_Construct_UScriptStruct_FPooledNumberPopComponentList_Statics::NewStructOps, TEXT("PooledNumberPopComponentList"), &Z_Registration_Info_UScriptStruct_PooledNumberPopComponentList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPooledNumberPopComponentList), 3195489323U) },
		{ FLiveNumberPopEntry::StaticStruct, Z_Construct_UScriptStruct_FLiveNumberPopEntry_Statics::NewStructOps, TEXT("LiveNumberPopEntry"), &Z_Registration_Info_UScriptStruct_LiveNumberPopEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveNumberPopEntry), 197063082U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_MeshText_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraNumberPopComponent_MeshText, ULyraNumberPopComponent_MeshText::StaticClass, TEXT("ULyraNumberPopComponent_MeshText"), &Z_Registration_Info_UClass_ULyraNumberPopComponent_MeshText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraNumberPopComponent_MeshText), 3067207787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_MeshText_h_3402172111(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_MeshText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_MeshText_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_MeshText_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_MeshText_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
