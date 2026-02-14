// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/SettlementGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SETTLEMENTSYSTEM_SettlementGameState_generated_h
#error "SettlementGameState.generated.h already included, missing '#pragma once' in SettlementGameState.h"
#endif
#define SETTLEMENTSYSTEM_SettlementGameState_generated_h

#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Game_SettlementGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASettlementGameState(); \
	friend struct Z_Construct_UClass_ASettlementGameState_Statics; \
public: \
	DECLARE_CLASS(ASettlementGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SettlementSystem"), NO_API) \
	DECLARE_SERIALIZER(ASettlementGameState)


#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Game_SettlementGameState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASettlementGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASettlementGameState(ASettlementGameState&&); \
	ASettlementGameState(const ASettlementGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASettlementGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASettlementGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASettlementGameState) \
	NO_API virtual ~ASettlementGameState();


#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Game_SettlementGameState_h_12_PROLOG
#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Game_SettlementGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Assignment_SettlementSystem_Source_SettlementSystem_Game_SettlementGameState_h_15_INCLASS_NO_PURE_DECLS \
	FID_Assignment_SettlementSystem_Source_SettlementSystem_Game_SettlementGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SETTLEMENTSYSTEM_API UClass* StaticClass<class ASettlementGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Assignment_SettlementSystem_Source_SettlementSystem_Game_SettlementGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
