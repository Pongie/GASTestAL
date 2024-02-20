// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Teams/LyraTeamCheats.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraTeamCheats_generated_h
#error "LyraTeamCheats.generated.h already included, missing '#pragma once' in LyraTeamCheats.h"
#endif
#define LYRAGAME_LyraTeamCheats_generated_h

#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execListTeams); \
	DECLARE_FUNCTION(execSetTeam); \
	DECLARE_FUNCTION(execCycleTeam);


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execListTeams); \
	DECLARE_FUNCTION(execSetTeam); \
	DECLARE_FUNCTION(execCycleTeam);


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraTeamCheats(); \
	friend struct Z_Construct_UClass_ULyraTeamCheats_Statics; \
public: \
	DECLARE_CLASS(ULyraTeamCheats, UCheatManagerExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraTeamCheats)


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_INCLASS \
private: \
	static void StaticRegisterNativesULyraTeamCheats(); \
	friend struct Z_Construct_UClass_ULyraTeamCheats_Statics; \
public: \
	DECLARE_CLASS(ULyraTeamCheats, UCheatManagerExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraTeamCheats)


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraTeamCheats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraTeamCheats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraTeamCheats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraTeamCheats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraTeamCheats(ULyraTeamCheats&&); \
	NO_API ULyraTeamCheats(const ULyraTeamCheats&); \
public: \
	NO_API virtual ~ULyraTeamCheats();


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraTeamCheats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraTeamCheats(ULyraTeamCheats&&); \
	NO_API ULyraTeamCheats(const ULyraTeamCheats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraTeamCheats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraTeamCheats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraTeamCheats) \
	NO_API virtual ~ULyraTeamCheats();


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_13_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_INCLASS \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraTeamCheats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
