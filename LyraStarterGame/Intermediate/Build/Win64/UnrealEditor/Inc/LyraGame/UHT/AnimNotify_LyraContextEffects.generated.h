// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Feedback/ContextEffects/AnimNotify_LyraContextEffects.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FLyraContextEffectAnimNotifyAudioSettings;
struct FLyraContextEffectAnimNotifyTraceSettings;
struct FLyraContextEffectAnimNotifyVFXSettings;
#ifdef LYRAGAME_AnimNotify_LyraContextEffects_generated_h
#error "AnimNotify_LyraContextEffects.generated.h already included, missing '#pragma once' in AnimNotify_LyraContextEffects.h"
#endif
#define LYRAGAME_AnimNotify_LyraContextEffects_generated_h

#define FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyVFXSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraContextEffectAnimNotifyVFXSettings>();

#define FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyAudioSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraContextEffectAnimNotifyAudioSettings>();

#define FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyTraceSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraContextEffectAnimNotifyTraceSettings>();

#define FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraContextEffectAnimNotifyPreviewSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraContextEffectAnimNotifyPreviewSettings>();

#define FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_RPC_WRAPPERS
#define FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetParameters);


#define FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetParameters);


#else
#define FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_EDITOR_ONLY_RPC_WRAPPERS
#define FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNotify_LyraContextEffects(); \
	friend struct Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics; \
public: \
	DECLARE_CLASS(UAnimNotify_LyraContextEffects, UAnimNotify, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotify_LyraContextEffects) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_INCLASS \
private: \
	static void StaticRegisterNativesUAnimNotify_LyraContextEffects(); \
	friend struct Z_Construct_UClass_UAnimNotify_LyraContextEffects_Statics; \
public: \
	DECLARE_CLASS(UAnimNotify_LyraContextEffects, UAnimNotify, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotify_LyraContextEffects) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNotify_LyraContextEffects(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotify_LyraContextEffects) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotify_LyraContextEffects); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotify_LyraContextEffects); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotify_LyraContextEffects(UAnimNotify_LyraContextEffects&&); \
	NO_API UAnimNotify_LyraContextEffects(const UAnimNotify_LyraContextEffects&); \
public: \
	NO_API virtual ~UAnimNotify_LyraContextEffects();


#define FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotify_LyraContextEffects(UAnimNotify_LyraContextEffects&&); \
	NO_API UAnimNotify_LyraContextEffects(const UAnimNotify_LyraContextEffects&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotify_LyraContextEffects); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotify_LyraContextEffects); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimNotify_LyraContextEffects) \
	NO_API virtual ~UAnimNotify_LyraContextEffects();


#define FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_93_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_EDITOR_ONLY_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_INCLASS \
	FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class UAnimNotify_LyraContextEffects>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_AnimNotify_LyraContextEffects_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
