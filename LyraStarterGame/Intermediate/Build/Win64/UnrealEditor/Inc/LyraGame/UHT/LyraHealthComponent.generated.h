// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/LyraHealthComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULyraAbilitySystemComponent;
class ULyraHealthComponent;
enum class ELyraDeathState : uint8;
#ifdef LYRAGAME_LyraHealthComponent_generated_h
#error "LyraHealthComponent.generated.h already included, missing '#pragma once' in LyraHealthComponent.h"
#endif
#define LYRAGAME_LyraHealthComponent_generated_h

#define FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_19_DELEGATE \
LYRAGAME_API void FLyraHealth_DeathEvent_DelegateWrapper(const FMulticastScriptDelegate& LyraHealth_DeathEvent, AActor* OwningActor);


#define FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_20_DELEGATE \
LYRAGAME_API void FLyraHealth_AttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& LyraHealth_AttributeChanged, ULyraHealthComponent* HealthComponent, float OldValue, float NewValue, AActor* Instigator);


#define FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_DeathState); \
	DECLARE_FUNCTION(execIsDeadOrDying); \
	DECLARE_FUNCTION(execGetDeathState); \
	DECLARE_FUNCTION(execGetHealthNormalized); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execUninitializeFromAbilitySystem); \
	DECLARE_FUNCTION(execInitializeWithAbilitySystem); \
	DECLARE_FUNCTION(execFindHealthComponent);


#define FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_DeathState); \
	DECLARE_FUNCTION(execIsDeadOrDying); \
	DECLARE_FUNCTION(execGetDeathState); \
	DECLARE_FUNCTION(execGetHealthNormalized); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execUninitializeFromAbilitySystem); \
	DECLARE_FUNCTION(execInitializeWithAbilitySystem); \
	DECLARE_FUNCTION(execFindHealthComponent);


#define FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraHealthComponent(); \
	friend struct Z_Construct_UClass_ULyraHealthComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraHealthComponent, UGameFrameworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraHealthComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DeathState=NETFIELD_REP_START, \
		NETFIELD_REP_END=DeathState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_INCLASS \
private: \
	static void StaticRegisterNativesULyraHealthComponent(); \
	friend struct Z_Construct_UClass_ULyraHealthComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraHealthComponent, UGameFrameworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraHealthComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DeathState=NETFIELD_REP_START, \
		NETFIELD_REP_END=DeathState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraHealthComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraHealthComponent(ULyraHealthComponent&&); \
	NO_API ULyraHealthComponent(const ULyraHealthComponent&); \
public: \
	NO_API virtual ~ULyraHealthComponent();


#define FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraHealthComponent(ULyraHealthComponent&&); \
	NO_API ULyraHealthComponent(const ULyraHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraHealthComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraHealthComponent) \
	NO_API virtual ~ULyraHealthComponent();


#define FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_42_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_INCLASS \
	FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Source_LyraGame_Character_LyraHealthComponent_h


#define FOREACH_ENUM_ELYRADEATHSTATE(op) \
	op(ELyraDeathState::NotDead) \
	op(ELyraDeathState::DeathStarted) \
	op(ELyraDeathState::DeathFinished) 

enum class ELyraDeathState : uint8;
template<> struct TIsUEnumClass<ELyraDeathState> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<ELyraDeathState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
