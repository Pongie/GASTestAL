// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Teams/LyraTeamInfoBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraTeamInfoBase_generated_h
#error "LyraTeamInfoBase.generated.h already included, missing '#pragma once' in LyraTeamInfoBase.h"
#endif
#define LYRAGAME_LyraTeamInfoBase_generated_h

#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_TeamId);


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_TeamId);


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraTeamInfoBase(); \
	friend struct Z_Construct_UClass_ALyraTeamInfoBase_Statics; \
public: \
	DECLARE_CLASS(ALyraTeamInfoBase, AInfo, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraTeamInfoBase) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamTags=NETFIELD_REP_START, \
		TeamId, \
		NETFIELD_REP_END=TeamId	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_INCLASS \
private: \
	static void StaticRegisterNativesALyraTeamInfoBase(); \
	friend struct Z_Construct_UClass_ALyraTeamInfoBase_Statics; \
public: \
	DECLARE_CLASS(ALyraTeamInfoBase, AInfo, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraTeamInfoBase) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamTags=NETFIELD_REP_START, \
		TeamId, \
		NETFIELD_REP_END=TeamId	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALyraTeamInfoBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraTeamInfoBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraTeamInfoBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraTeamInfoBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraTeamInfoBase(ALyraTeamInfoBase&&); \
	NO_API ALyraTeamInfoBase(const ALyraTeamInfoBase&); \
public: \
	NO_API virtual ~ALyraTeamInfoBase();


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraTeamInfoBase(ALyraTeamInfoBase&&); \
	NO_API ALyraTeamInfoBase(const ALyraTeamInfoBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraTeamInfoBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraTeamInfoBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraTeamInfoBase) \
	NO_API virtual ~ALyraTeamInfoBase();


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_17_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_INCLASS \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ALyraTeamInfoBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
