// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Performance/LyraPerformanceStatSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELyraDisplayablePerformanceStat : uint8;
#ifdef LYRAGAME_LyraPerformanceStatSubsystem_generated_h
#error "LyraPerformanceStatSubsystem.generated.h already included, missing '#pragma once' in LyraPerformanceStatSubsystem.h"
#endif
#define LYRAGAME_LyraPerformanceStatSubsystem_generated_h

#define FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCachedStat);


#define FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCachedStat);


#define FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraPerformanceStatSubsystem(); \
	friend struct Z_Construct_UClass_ULyraPerformanceStatSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULyraPerformanceStatSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraPerformanceStatSubsystem)


#define FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_INCLASS \
private: \
	static void StaticRegisterNativesULyraPerformanceStatSubsystem(); \
	friend struct Z_Construct_UClass_ULyraPerformanceStatSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULyraPerformanceStatSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraPerformanceStatSubsystem)


#define FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraPerformanceStatSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraPerformanceStatSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraPerformanceStatSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraPerformanceStatSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraPerformanceStatSubsystem(ULyraPerformanceStatSubsystem&&); \
	NO_API ULyraPerformanceStatSubsystem(const ULyraPerformanceStatSubsystem&); \
public: \
	NO_API virtual ~ULyraPerformanceStatSubsystem();


#define FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraPerformanceStatSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraPerformanceStatSubsystem(ULyraPerformanceStatSubsystem&&); \
	NO_API ULyraPerformanceStatSubsystem(const ULyraPerformanceStatSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraPerformanceStatSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraPerformanceStatSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraPerformanceStatSubsystem) \
	NO_API virtual ~ULyraPerformanceStatSubsystem();


#define FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_53_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_INCLASS \
	FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraPerformanceStatSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
