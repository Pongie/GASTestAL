// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/LyraPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALyraPlayerController;
class ULyraAbilitySystemComponent;
struct FGameplayTag;
struct FGenericTeamId;
struct FLyraVerbMessage;
#ifdef LYRAGAME_LyraPlayerState_generated_h
#error "LyraPlayerState.generated.h already included, missing '#pragma once' in LyraPlayerState.h"
#endif
#define LYRAGAME_LyraPlayerState_generated_h

#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_RPC_WRAPPERS \
	virtual void ClientBroadcastMessage_Implementation(const FLyraVerbMessage Message); \
 \
	DECLARE_FUNCTION(execOnRep_MySquadID); \
	DECLARE_FUNCTION(execOnRep_MyTeamID); \
	DECLARE_FUNCTION(execOnRep_PawnData); \
	DECLARE_FUNCTION(execClientBroadcastMessage); \
	DECLARE_FUNCTION(execHasStatTag); \
	DECLARE_FUNCTION(execGetStatTagStackCount); \
	DECLARE_FUNCTION(execRemoveStatTagStack); \
	DECLARE_FUNCTION(execAddStatTagStack); \
	DECLARE_FUNCTION(execGetTeamId); \
	DECLARE_FUNCTION(execGetSquadId); \
	DECLARE_FUNCTION(execGetLyraAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetLyraPlayerController);


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientBroadcastMessage_Implementation(const FLyraVerbMessage Message); \
 \
	DECLARE_FUNCTION(execOnRep_MySquadID); \
	DECLARE_FUNCTION(execOnRep_MyTeamID); \
	DECLARE_FUNCTION(execOnRep_PawnData); \
	DECLARE_FUNCTION(execClientBroadcastMessage); \
	DECLARE_FUNCTION(execHasStatTag); \
	DECLARE_FUNCTION(execGetStatTagStackCount); \
	DECLARE_FUNCTION(execRemoveStatTagStack); \
	DECLARE_FUNCTION(execAddStatTagStack); \
	DECLARE_FUNCTION(execGetTeamId); \
	DECLARE_FUNCTION(execGetSquadId); \
	DECLARE_FUNCTION(execGetLyraAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetLyraPlayerController);


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_CALLBACK_WRAPPERS
#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraPlayerState(); \
	friend struct Z_Construct_UClass_ALyraPlayerState_Statics; \
public: \
	DECLARE_CLASS(ALyraPlayerState, AModularPlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraPlayerState) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<ALyraPlayerState*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PawnData=NETFIELD_REP_START, \
		MyPlayerConnectionType, \
		MyTeamID, \
		MySquadID, \
		StatTags, \
		NETFIELD_REP_END=StatTags	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_INCLASS \
private: \
	static void StaticRegisterNativesALyraPlayerState(); \
	friend struct Z_Construct_UClass_ALyraPlayerState_Statics; \
public: \
	DECLARE_CLASS(ALyraPlayerState, AModularPlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraPlayerState) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<ALyraPlayerState*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PawnData=NETFIELD_REP_START, \
		MyPlayerConnectionType, \
		MyTeamID, \
		MySquadID, \
		StatTags, \
		NETFIELD_REP_END=StatTags	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALyraPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraPlayerState(ALyraPlayerState&&); \
	NO_API ALyraPlayerState(const ALyraPlayerState&); \
public: \
	NO_API virtual ~ALyraPlayerState();


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALyraPlayerState(ALyraPlayerState&&); \
	NO_API ALyraPlayerState(const ALyraPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraPlayerState) \
	NO_API virtual ~ALyraPlayerState();


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_48_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_CALLBACK_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_INCLASS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_CALLBACK_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ALyraPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Source_LyraGame_Player_LyraPlayerState_h


#define FOREACH_ENUM_ELYRAPLAYERCONNECTIONTYPE(op) \
	op(ELyraPlayerConnectionType::Player) \
	op(ELyraPlayerConnectionType::LiveSpectator) \
	op(ELyraPlayerConnectionType::ReplaySpectator) \
	op(ELyraPlayerConnectionType::InactivePlayer) 

enum class ELyraPlayerConnectionType : uint8;
template<> struct TIsUEnumClass<ELyraPlayerConnectionType> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<ELyraPlayerConnectionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
