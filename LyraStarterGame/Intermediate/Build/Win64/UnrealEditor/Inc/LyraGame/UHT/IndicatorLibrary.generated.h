// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/IndicatorSystem/IndicatorLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class ULyraIndicatorManagerComponent;
#ifdef LYRAGAME_IndicatorLibrary_generated_h
#error "IndicatorLibrary.generated.h already included, missing '#pragma once' in IndicatorLibrary.h"
#endif
#define LYRAGAME_IndicatorLibrary_generated_h

#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIndicatorManagerComponent);


#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIndicatorManagerComponent);


#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIndicatorLibrary(); \
	friend struct Z_Construct_UClass_UIndicatorLibrary_Statics; \
public: \
	DECLARE_CLASS(UIndicatorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(UIndicatorLibrary)


#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUIndicatorLibrary(); \
	friend struct Z_Construct_UClass_UIndicatorLibrary_Statics; \
public: \
	DECLARE_CLASS(UIndicatorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(UIndicatorLibrary)


#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIndicatorLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIndicatorLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIndicatorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIndicatorLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIndicatorLibrary(UIndicatorLibrary&&); \
	NO_API UIndicatorLibrary(const UIndicatorLibrary&); \
public: \
	NO_API virtual ~UIndicatorLibrary();


#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIndicatorLibrary(UIndicatorLibrary&&); \
	NO_API UIndicatorLibrary(const UIndicatorLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIndicatorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIndicatorLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIndicatorLibrary) \
	NO_API virtual ~UIndicatorLibrary();


#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_14_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_INCLASS \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class UIndicatorLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
