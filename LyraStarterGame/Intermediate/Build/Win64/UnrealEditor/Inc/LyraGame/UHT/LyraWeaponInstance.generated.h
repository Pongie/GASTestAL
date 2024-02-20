// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/LyraWeaponInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimInstance;
struct FGameplayTagContainer;
struct FPlatformUserId;
#ifdef LYRAGAME_LyraWeaponInstance_generated_h
#error "LyraWeaponInstance.generated.h already included, missing '#pragma once' in LyraWeaponInstance.h"
#endif
#define LYRAGAME_LyraWeaponInstance_generated_h

#define FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDeathStarted); \
	DECLARE_FUNCTION(execGetOwningUserId); \
	DECLARE_FUNCTION(execPickBestAnimLayer); \
	DECLARE_FUNCTION(execGetTimeSinceLastInteractedWith); \
	DECLARE_FUNCTION(execUpdateFiringTime);


#define FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDeathStarted); \
	DECLARE_FUNCTION(execGetOwningUserId); \
	DECLARE_FUNCTION(execPickBestAnimLayer); \
	DECLARE_FUNCTION(execGetTimeSinceLastInteractedWith); \
	DECLARE_FUNCTION(execUpdateFiringTime);


#define FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraWeaponInstance(); \
	friend struct Z_Construct_UClass_ULyraWeaponInstance_Statics; \
public: \
	DECLARE_CLASS(ULyraWeaponInstance, ULyraEquipmentInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraWeaponInstance)


#define FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_INCLASS \
private: \
	static void StaticRegisterNativesULyraWeaponInstance(); \
	friend struct Z_Construct_UClass_ULyraWeaponInstance_Statics; \
public: \
	DECLARE_CLASS(ULyraWeaponInstance, ULyraEquipmentInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraWeaponInstance)


#define FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraWeaponInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraWeaponInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraWeaponInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraWeaponInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraWeaponInstance(ULyraWeaponInstance&&); \
	NO_API ULyraWeaponInstance(const ULyraWeaponInstance&); \
public: \
	NO_API virtual ~ULyraWeaponInstance();


#define FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraWeaponInstance(ULyraWeaponInstance&&); \
	NO_API ULyraWeaponInstance(const ULyraWeaponInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraWeaponInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraWeaponInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraWeaponInstance) \
	NO_API virtual ~ULyraWeaponInstance();


#define FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_22_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_INCLASS \
	FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraWeaponInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
