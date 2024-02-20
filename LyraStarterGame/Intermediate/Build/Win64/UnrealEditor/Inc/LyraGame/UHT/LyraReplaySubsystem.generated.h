// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replays/LyraReplaySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraReplayListEntry;
struct FDateTime;
struct FTimespan;
#ifdef LYRAGAME_LyraReplaySubsystem_generated_h
#error "LyraReplaySubsystem.generated.h already included, missing '#pragma once' in LyraReplaySubsystem.h"
#endif
#define LYRAGAME_LyraReplaySubsystem_generated_h

#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIsLive); \
	DECLARE_FUNCTION(execGetNumViewers); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetTimestamp); \
	DECLARE_FUNCTION(execGetFriendlyName);


#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIsLive); \
	DECLARE_FUNCTION(execGetNumViewers); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetTimestamp); \
	DECLARE_FUNCTION(execGetFriendlyName);


#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraReplayListEntry(); \
	friend struct Z_Construct_UClass_ULyraReplayListEntry_Statics; \
public: \
	DECLARE_CLASS(ULyraReplayListEntry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraReplayListEntry)


#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_INCLASS \
private: \
	static void StaticRegisterNativesULyraReplayListEntry(); \
	friend struct Z_Construct_UClass_ULyraReplayListEntry_Statics; \
public: \
	DECLARE_CLASS(ULyraReplayListEntry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraReplayListEntry)


#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraReplayListEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraReplayListEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraReplayListEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraReplayListEntry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraReplayListEntry(ULyraReplayListEntry&&); \
	NO_API ULyraReplayListEntry(const ULyraReplayListEntry&); \
public: \
	NO_API virtual ~ULyraReplayListEntry();


#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraReplayListEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraReplayListEntry(ULyraReplayListEntry&&); \
	NO_API ULyraReplayListEntry(const ULyraReplayListEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraReplayListEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraReplayListEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraReplayListEntry) \
	NO_API virtual ~ULyraReplayListEntry();


#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_14_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_INCLASS \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraReplayListEntry>();

#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_RPC_WRAPPERS
#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraReplayList(); \
	friend struct Z_Construct_UClass_ULyraReplayList_Statics; \
public: \
	DECLARE_CLASS(ULyraReplayList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraReplayList)


#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_INCLASS \
private: \
	static void StaticRegisterNativesULyraReplayList(); \
	friend struct Z_Construct_UClass_ULyraReplayList_Statics; \
public: \
	DECLARE_CLASS(ULyraReplayList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraReplayList)


#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraReplayList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraReplayList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraReplayList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraReplayList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraReplayList(ULyraReplayList&&); \
	NO_API ULyraReplayList(const ULyraReplayList&); \
public: \
	NO_API virtual ~ULyraReplayList();


#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraReplayList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraReplayList(ULyraReplayList&&); \
	NO_API ULyraReplayList(const ULyraReplayList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraReplayList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraReplayList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraReplayList) \
	NO_API virtual ~ULyraReplayList();


#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_44_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_INCLASS \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraReplayList>();

#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetReplayCurrentTime); \
	DECLARE_FUNCTION(execGetReplayLengthInSeconds); \
	DECLARE_FUNCTION(execSeekInActiveReplay); \
	DECLARE_FUNCTION(execPlayReplay);


#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetReplayCurrentTime); \
	DECLARE_FUNCTION(execGetReplayLengthInSeconds); \
	DECLARE_FUNCTION(execSeekInActiveReplay); \
	DECLARE_FUNCTION(execPlayReplay);


#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraReplaySubsystem(); \
	friend struct Z_Construct_UClass_ULyraReplaySubsystem_Statics; \
public: \
	DECLARE_CLASS(ULyraReplaySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraReplaySubsystem)


#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_INCLASS \
private: \
	static void StaticRegisterNativesULyraReplaySubsystem(); \
	friend struct Z_Construct_UClass_ULyraReplaySubsystem_Statics; \
public: \
	DECLARE_CLASS(ULyraReplaySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraReplaySubsystem)


#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraReplaySubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraReplaySubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraReplaySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraReplaySubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraReplaySubsystem(ULyraReplaySubsystem&&); \
	NO_API ULyraReplaySubsystem(const ULyraReplaySubsystem&); \
public: \
	NO_API virtual ~ULyraReplaySubsystem();


#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraReplaySubsystem(ULyraReplaySubsystem&&); \
	NO_API ULyraReplaySubsystem(const ULyraReplaySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraReplaySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraReplaySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraReplaySubsystem) \
	NO_API virtual ~ULyraReplaySubsystem();


#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_54_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_INCLASS \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraReplaySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
