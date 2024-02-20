// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Teams/LyraTeamAgentInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef LYRAGAME_LyraTeamAgentInterface_generated_h
#error "LyraTeamAgentInterface.generated.h already included, missing '#pragma once' in LyraTeamAgentInterface.h"
#endif
#define LYRAGAME_LyraTeamAgentInterface_generated_h

#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_13_DELEGATE \
LYRAGAME_API void FOnLyraTeamIndexChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLyraTeamIndexChangedDelegate, UObject* ObjectChangingTeam, int32 OldTeamID, int32 NewTeamID);


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_SPARSE_DATA
#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_RPC_WRAPPERS
#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_ACCESSORS
#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraTeamAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraTeamAgentInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraTeamAgentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraTeamAgentInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraTeamAgentInterface(ULyraTeamAgentInterface&&); \
	NO_API ULyraTeamAgentInterface(const ULyraTeamAgentInterface&); \
public: \
	NO_API virtual ~ULyraTeamAgentInterface();


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraTeamAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraTeamAgentInterface(ULyraTeamAgentInterface&&); \
	NO_API ULyraTeamAgentInterface(const ULyraTeamAgentInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraTeamAgentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraTeamAgentInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraTeamAgentInterface) \
	NO_API virtual ~ULyraTeamAgentInterface();


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULyraTeamAgentInterface(); \
	friend struct Z_Construct_UClass_ULyraTeamAgentInterface_Statics; \
public: \
	DECLARE_CLASS(ULyraTeamAgentInterface, UGenericTeamAgentInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraTeamAgentInterface)


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_GENERATED_UINTERFACE_BODY() \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_GENERATED_UINTERFACE_BODY() \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILyraTeamAgentInterface() {} \
public: \
	typedef ULyraTeamAgentInterface UClassType; \
	typedef ILyraTeamAgentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_INCLASS_IINTERFACE \
protected: \
	virtual ~ILyraTeamAgentInterface() {} \
public: \
	typedef ULyraTeamAgentInterface UClassType; \
	typedef ILyraTeamAgentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_26_PROLOG
#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_RPC_WRAPPERS \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_SPARSE_DATA \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_ACCESSORS \
	FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h_29_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraTeamAgentInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Source_LyraGame_Teams_LyraTeamAgentInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
