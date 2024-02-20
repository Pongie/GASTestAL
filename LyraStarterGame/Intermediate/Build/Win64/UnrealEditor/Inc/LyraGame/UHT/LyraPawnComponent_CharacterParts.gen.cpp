// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cosmetics/LyraPawnComponent_CharacterParts.h"
#include "Cosmetics/LyraCharacterPartTypes.h"
#include "Cosmetics/LyraCosmeticAnimationTypes.h"
#include "GameplayTagContainer.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPawnComponent_CharacterParts() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnComponent_CharacterParts();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraPawnComponent_CharacterParts_NoRegister();
	LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_LyraSpawnedCharacterPartsChanged__DelegateSignature();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterPart();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterPartHandle();
	LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterPartList();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LyraGame_LyraSpawnedCharacterPartsChanged__DelegateSignature_Statics
	{
		struct _Script_LyraGame_eventLyraSpawnedCharacterPartsChanged_Parms
		{
			ULyraPawnComponent_CharacterParts* ComponentWithChangedParts;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentWithChangedParts_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentWithChangedParts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_LyraSpawnedCharacterPartsChanged__DelegateSignature_Statics::NewProp_ComponentWithChangedParts_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LyraGame_LyraSpawnedCharacterPartsChanged__DelegateSignature_Statics::NewProp_ComponentWithChangedParts = { "ComponentWithChangedParts", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LyraGame_eventLyraSpawnedCharacterPartsChanged_Parms, ComponentWithChangedParts), Z_Construct_UClass_ULyraPawnComponent_CharacterParts_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_LyraSpawnedCharacterPartsChanged__DelegateSignature_Statics::NewProp_ComponentWithChangedParts_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_LyraSpawnedCharacterPartsChanged__DelegateSignature_Statics::NewProp_ComponentWithChangedParts_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LyraGame_LyraSpawnedCharacterPartsChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LyraGame_LyraSpawnedCharacterPartsChanged__DelegateSignature_Statics::NewProp_ComponentWithChangedParts,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LyraGame_LyraSpawnedCharacterPartsChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cosmetics/LyraPawnComponent_CharacterParts.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LyraGame_LyraSpawnedCharacterPartsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LyraGame, nullptr, "LyraSpawnedCharacterPartsChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LyraGame_LyraSpawnedCharacterPartsChanged__DelegateSignature_Statics::_Script_LyraGame_eventLyraSpawnedCharacterPartsChanged_Parms), Z_Construct_UDelegateFunction_LyraGame_LyraSpawnedCharacterPartsChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_LyraSpawnedCharacterPartsChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LyraGame_LyraSpawnedCharacterPartsChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LyraGame_LyraSpawnedCharacterPartsChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LyraGame_LyraSpawnedCharacterPartsChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LyraGame_LyraSpawnedCharacterPartsChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLyraSpawnedCharacterPartsChanged_DelegateWrapper(const FMulticastScriptDelegate& LyraSpawnedCharacterPartsChanged, ULyraPawnComponent_CharacterParts* ComponentWithChangedParts)
{
	struct _Script_LyraGame_eventLyraSpawnedCharacterPartsChanged_Parms
	{
		ULyraPawnComponent_CharacterParts* ComponentWithChangedParts;
	};
	_Script_LyraGame_eventLyraSpawnedCharacterPartsChanged_Parms Parms;
	Parms.ComponentWithChangedParts=ComponentWithChangedParts;
	LyraSpawnedCharacterPartsChanged.ProcessMulticastDelegate<UObject>(&Parms);
}

static_assert(std::is_polymorphic<FLyraAppliedCharacterPartEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FLyraAppliedCharacterPartEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraAppliedCharacterPartEntry;
class UScriptStruct* FLyraAppliedCharacterPartEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraAppliedCharacterPartEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraAppliedCharacterPartEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraAppliedCharacterPartEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LyraAppliedCharacterPartEntry.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraAppliedCharacterPartEntry>()
{
	return FLyraAppliedCharacterPartEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Part_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Part;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartHandle_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpawnedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A single applied character part\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraPawnComponent_CharacterParts.h" },
		{ "ToolTip", "A single applied character part" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraAppliedCharacterPartEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::NewProp_Part_MetaData[] = {
		{ "Comment", "// The character part being represented\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraPawnComponent_CharacterParts.h" },
		{ "ToolTip", "The character part being represented" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::NewProp_Part = { "Part", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAppliedCharacterPartEntry, Part), Z_Construct_UScriptStruct_FLyraCharacterPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::NewProp_Part_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::NewProp_Part_MetaData)) }; // 3613829318
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::NewProp_PartHandle_MetaData[] = {
		{ "Comment", "// Handle index we returned to the user (server only)\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraPawnComponent_CharacterParts.h" },
		{ "ToolTip", "Handle index we returned to the user (server only)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::NewProp_PartHandle = { "PartHandle", nullptr, (EPropertyFlags)0x0040000080000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAppliedCharacterPartEntry, PartHandle), METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::NewProp_PartHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::NewProp_PartHandle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::NewProp_SpawnedComponent_MetaData[] = {
		{ "Comment", "// The spawned actor instance (client only)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cosmetics/LyraPawnComponent_CharacterParts.h" },
		{ "ToolTip", "The spawned actor instance (client only)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::NewProp_SpawnedComponent = { "SpawnedComponent", nullptr, (EPropertyFlags)0x0044000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraAppliedCharacterPartEntry, SpawnedComponent), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::NewProp_SpawnedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::NewProp_SpawnedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::NewProp_Part,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::NewProp_PartHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::NewProp_SpawnedComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"LyraAppliedCharacterPartEntry",
		sizeof(FLyraAppliedCharacterPartEntry),
		alignof(FLyraAppliedCharacterPartEntry),
		Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraAppliedCharacterPartEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraAppliedCharacterPartEntry.InnerSingleton, Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraAppliedCharacterPartEntry.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLyraCharacterPartList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FLyraCharacterPartList cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraCharacterPartList;
class UScriptStruct* FLyraCharacterPartList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraCharacterPartList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraCharacterPartList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraCharacterPartList, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraCharacterPartList"));
	}
	return Z_Registration_Info_UScriptStruct_LyraCharacterPartList.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraCharacterPartList>()
{
	return FLyraCharacterPartList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FLyraCharacterPartList);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FLyraCharacterPartList);
#endif
	struct Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Replicated list of applied character parts\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraPawnComponent_CharacterParts.h" },
		{ "ToolTip", "Replicated list of applied character parts" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraCharacterPartList>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry, METADATA_PARAMS(nullptr, 0) }; // 1465235260
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::NewProp_Entries_MetaData[] = {
		{ "Comment", "// Replicated list of equipment entries\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraPawnComponent_CharacterParts.h" },
		{ "ToolTip", "Replicated list of equipment entries" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraCharacterPartList, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::NewProp_Entries_MetaData)) }; // 1465235260
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::NewProp_OwnerComponent_MetaData[] = {
		{ "Comment", "// The component that contains this list\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cosmetics/LyraPawnComponent_CharacterParts.h" },
		{ "ToolTip", "The component that contains this list" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0044000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLyraCharacterPartList, OwnerComponent), Z_Construct_UClass_ULyraPawnComponent_CharacterParts_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::NewProp_OwnerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::NewProp_OwnerComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::NewProp_OwnerComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"LyraCharacterPartList",
		sizeof(FLyraCharacterPartList),
		alignof(FLyraCharacterPartList),
		Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterPartList()
	{
		if (!Z_Registration_Info_UScriptStruct_LyraCharacterPartList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraCharacterPartList.InnerSingleton, Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LyraCharacterPartList.InnerSingleton;
	}
	DEFINE_FUNCTION(ULyraPawnComponent_CharacterParts::execGetCombinedTags)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_RequiredPrefix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetCombinedTags(Z_Param_RequiredPrefix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraPawnComponent_CharacterParts::execGetCharacterPartActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetCharacterPartActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraPawnComponent_CharacterParts::execRemoveAllCharacterParts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllCharacterParts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraPawnComponent_CharacterParts::execRemoveCharacterPart)
	{
		P_GET_STRUCT(FLyraCharacterPartHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCharacterPart(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULyraPawnComponent_CharacterParts::execAddCharacterPart)
	{
		P_GET_STRUCT_REF(FLyraCharacterPart,Z_Param_Out_NewPart);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLyraCharacterPartHandle*)Z_Param__Result=P_THIS->AddCharacterPart(Z_Param_Out_NewPart);
		P_NATIVE_END;
	}
	void ULyraPawnComponent_CharacterParts::StaticRegisterNativesULyraPawnComponent_CharacterParts()
	{
		UClass* Class = ULyraPawnComponent_CharacterParts::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCharacterPart", &ULyraPawnComponent_CharacterParts::execAddCharacterPart },
			{ "GetCharacterPartActors", &ULyraPawnComponent_CharacterParts::execGetCharacterPartActors },
			{ "GetCombinedTags", &ULyraPawnComponent_CharacterParts::execGetCombinedTags },
			{ "RemoveAllCharacterParts", &ULyraPawnComponent_CharacterParts::execRemoveAllCharacterParts },
			{ "RemoveCharacterPart", &ULyraPawnComponent_CharacterParts::execRemoveCharacterPart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_AddCharacterPart_Statics
	{
		struct LyraPawnComponent_CharacterParts_eventAddCharacterPart_Parms
		{
			FLyraCharacterPart NewPart;
			FLyraCharacterPartHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPart;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_AddCharacterPart_Statics::NewProp_NewPart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_AddCharacterPart_Statics::NewProp_NewPart = { "NewPart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPawnComponent_CharacterParts_eventAddCharacterPart_Parms, NewPart), Z_Construct_UScriptStruct_FLyraCharacterPart, METADATA_PARAMS(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_AddCharacterPart_Statics::NewProp_NewPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_AddCharacterPart_Statics::NewProp_NewPart_MetaData)) }; // 3613829318
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_AddCharacterPart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPawnComponent_CharacterParts_eventAddCharacterPart_Parms, ReturnValue), Z_Construct_UScriptStruct_FLyraCharacterPartHandle, METADATA_PARAMS(nullptr, 0) }; // 2856288301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_AddCharacterPart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_AddCharacterPart_Statics::NewProp_NewPart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_AddCharacterPart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_AddCharacterPart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cosmetics" },
		{ "Comment", "// Adds a character part to the actor that owns this customization component, should be called on the authority only\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraPawnComponent_CharacterParts.h" },
		{ "ToolTip", "Adds a character part to the actor that owns this customization component, should be called on the authority only" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_AddCharacterPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPawnComponent_CharacterParts, nullptr, "AddCharacterPart", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_AddCharacterPart_Statics::LyraPawnComponent_CharacterParts_eventAddCharacterPart_Parms), Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_AddCharacterPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_AddCharacterPart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_AddCharacterPart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_AddCharacterPart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_AddCharacterPart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_AddCharacterPart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCharacterPartActors_Statics
	{
		struct LyraPawnComponent_CharacterParts_eventGetCharacterPartActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCharacterPartActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCharacterPartActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPawnComponent_CharacterParts_eventGetCharacterPartActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCharacterPartActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCharacterPartActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCharacterPartActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCharacterPartActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cosmetics" },
		{ "Comment", "// Gets the list of all spawned character parts from this component\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraPawnComponent_CharacterParts.h" },
		{ "ToolTip", "Gets the list of all spawned character parts from this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCharacterPartActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPawnComponent_CharacterParts, nullptr, "GetCharacterPartActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCharacterPartActors_Statics::LyraPawnComponent_CharacterParts_eventGetCharacterPartActors_Parms), Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCharacterPartActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCharacterPartActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCharacterPartActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCharacterPartActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCharacterPartActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCharacterPartActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCombinedTags_Statics
	{
		struct LyraPawnComponent_CharacterParts_eventGetCombinedTags_Parms
		{
			FGameplayTag RequiredPrefix;
			FGameplayTagContainer ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredPrefix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCombinedTags_Statics::NewProp_RequiredPrefix = { "RequiredPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPawnComponent_CharacterParts_eventGetCombinedTags_Parms, RequiredPrefix), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCombinedTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPawnComponent_CharacterParts_eventGetCombinedTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCombinedTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCombinedTags_Statics::NewProp_RequiredPrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCombinedTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCombinedTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cosmetics" },
		{ "Comment", "// Returns the set of combined gameplay tags from attached character parts, optionally filtered to only tags that start with the specified root\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraPawnComponent_CharacterParts.h" },
		{ "ToolTip", "Returns the set of combined gameplay tags from attached character parts, optionally filtered to only tags that start with the specified root" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCombinedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPawnComponent_CharacterParts, nullptr, "GetCombinedTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCombinedTags_Statics::LyraPawnComponent_CharacterParts_eventGetCombinedTags_Parms), Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCombinedTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCombinedTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCombinedTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCombinedTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCombinedTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCombinedTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveAllCharacterParts_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveAllCharacterParts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cosmetics" },
		{ "Comment", "// Removes all added character parts, should be called on the authority only\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraPawnComponent_CharacterParts.h" },
		{ "ToolTip", "Removes all added character parts, should be called on the authority only" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveAllCharacterParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPawnComponent_CharacterParts, nullptr, "RemoveAllCharacterParts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveAllCharacterParts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveAllCharacterParts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveAllCharacterParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveAllCharacterParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveCharacterPart_Statics
	{
		struct LyraPawnComponent_CharacterParts_eventRemoveCharacterPart_Parms
		{
			FLyraCharacterPartHandle Handle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveCharacterPart_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LyraPawnComponent_CharacterParts_eventRemoveCharacterPart_Parms, Handle), Z_Construct_UScriptStruct_FLyraCharacterPartHandle, METADATA_PARAMS(nullptr, 0) }; // 2856288301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveCharacterPart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveCharacterPart_Statics::NewProp_Handle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveCharacterPart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cosmetics" },
		{ "Comment", "// Removes a previously added character part from the actor that owns this customization component, should be called on the authority only\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraPawnComponent_CharacterParts.h" },
		{ "ToolTip", "Removes a previously added character part from the actor that owns this customization component, should be called on the authority only" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveCharacterPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPawnComponent_CharacterParts, nullptr, "RemoveCharacterPart", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveCharacterPart_Statics::LyraPawnComponent_CharacterParts_eventRemoveCharacterPart_Parms), Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveCharacterPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveCharacterPart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveCharacterPart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveCharacterPart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveCharacterPart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveCharacterPart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraPawnComponent_CharacterParts);
	UClass* Z_Construct_UClass_ULyraPawnComponent_CharacterParts_NoRegister()
	{
		return ULyraPawnComponent_CharacterParts::StaticClass();
	}
	struct Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCharacterPartsChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterPartsChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPartList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterPartList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BodyMeshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_AddCharacterPart, "AddCharacterPart" }, // 1869281195
		{ &Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCharacterPartActors, "GetCharacterPartActors" }, // 3091410635
		{ &Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_GetCombinedTags, "GetCombinedTags" }, // 858825933
		{ &Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveAllCharacterParts, "RemoveAllCharacterParts" }, // 4077822726
		{ &Z_Construct_UFunction_ULyraPawnComponent_CharacterParts_RemoveCharacterPart, "RemoveCharacterPart" }, // 1862290396
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "// A component that handles spawning cosmetic actors attached to the owner pawn on all clients\n" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Cosmetics/LyraPawnComponent_CharacterParts.h" },
		{ "ModuleRelativePath", "Cosmetics/LyraPawnComponent_CharacterParts.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A component that handles spawning cosmetic actors attached to the owner pawn on all clients" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::NewProp_OnCharacterPartsChanged_MetaData[] = {
		{ "Category", "Cosmetics" },
		{ "Comment", "// Delegate that will be called when the list of spawned character parts has changed\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraPawnComponent_CharacterParts.h" },
		{ "ToolTip", "Delegate that will be called when the list of spawned character parts has changed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::NewProp_OnCharacterPartsChanged = { "OnCharacterPartsChanged", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPawnComponent_CharacterParts, OnCharacterPartsChanged), Z_Construct_UDelegateFunction_LyraGame_LyraSpawnedCharacterPartsChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::NewProp_OnCharacterPartsChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::NewProp_OnCharacterPartsChanged_MetaData)) }; // 153985013
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::NewProp_CharacterPartList_MetaData[] = {
		{ "Comment", "// List of character parts\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraPawnComponent_CharacterParts.h" },
		{ "ToolTip", "List of character parts" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::NewProp_CharacterPartList = { "CharacterPartList", nullptr, (EPropertyFlags)0x0040008000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPawnComponent_CharacterParts, CharacterPartList), Z_Construct_UScriptStruct_FLyraCharacterPartList, METADATA_PARAMS(Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::NewProp_CharacterPartList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::NewProp_CharacterPartList_MetaData)) }; // 1865089417
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::NewProp_BodyMeshes_MetaData[] = {
		{ "Category", "Cosmetics" },
		{ "Comment", "// Rules for how to pick a body style mesh for animation to play on, based on character part cosmetics tags\n" },
		{ "ModuleRelativePath", "Cosmetics/LyraPawnComponent_CharacterParts.h" },
		{ "ToolTip", "Rules for how to pick a body style mesh for animation to play on, based on character part cosmetics tags" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::NewProp_BodyMeshes = { "BodyMeshes", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULyraPawnComponent_CharacterParts, BodyMeshes), Z_Construct_UScriptStruct_FLyraAnimBodyStyleSelectionSet, METADATA_PARAMS(Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::NewProp_BodyMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::NewProp_BodyMeshes_MetaData)) }; // 2707423500
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::NewProp_OnCharacterPartsChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::NewProp_CharacterPartList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::NewProp_BodyMeshes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraPawnComponent_CharacterParts>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::ClassParams = {
		&ULyraPawnComponent_CharacterParts::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraPawnComponent_CharacterParts()
	{
		if (!Z_Registration_Info_UClass_ULyraPawnComponent_CharacterParts.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraPawnComponent_CharacterParts.OuterSingleton, Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraPawnComponent_CharacterParts.OuterSingleton;
	}
	template<> LYRAGAME_API UClass* StaticClass<ULyraPawnComponent_CharacterParts>()
	{
		return ULyraPawnComponent_CharacterParts::StaticClass();
	}

	void ULyraPawnComponent_CharacterParts::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CharacterPartList(TEXT("CharacterPartList"));

		const bool bIsValid = true
			&& Name_CharacterPartList == ClassReps[(int32)ENetFields_Private::CharacterPartList].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULyraPawnComponent_CharacterParts"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraPawnComponent_CharacterParts);
	ULyraPawnComponent_CharacterParts::~ULyraPawnComponent_CharacterParts() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h_Statics::ScriptStructInfo[] = {
		{ FLyraAppliedCharacterPartEntry::StaticStruct, Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics::NewStructOps, TEXT("LyraAppliedCharacterPartEntry"), &Z_Registration_Info_UScriptStruct_LyraAppliedCharacterPartEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraAppliedCharacterPartEntry), 1465235260U) },
		{ FLyraCharacterPartList::StaticStruct, Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics::NewStructOps, TEXT("LyraCharacterPartList"), &Z_Registration_Info_UScriptStruct_LyraCharacterPartList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraCharacterPartList), 1865089417U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraPawnComponent_CharacterParts, ULyraPawnComponent_CharacterParts::StaticClass, TEXT("ULyraPawnComponent_CharacterParts"), &Z_Registration_Info_UClass_ULyraPawnComponent_CharacterParts, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraPawnComponent_CharacterParts), 1545520589U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h_2168415766(TEXT("/Script/LyraGame"),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
