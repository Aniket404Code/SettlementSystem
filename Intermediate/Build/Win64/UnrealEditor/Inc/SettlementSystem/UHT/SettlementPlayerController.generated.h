// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/SettlementPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SETTLEMENTSYSTEM_SettlementPlayerController_generated_h
#error "SettlementPlayerController.generated.h already included, missing '#pragma once' in SettlementPlayerController.h"
#endif
#define SETTLEMENTSYSTEM_SettlementPlayerController_generated_h

#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Player_SettlementPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASettlementPlayerController(); \
	friend struct Z_Construct_UClass_ASettlementPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASettlementPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SettlementSystem"), NO_API) \
	DECLARE_SERIALIZER(ASettlementPlayerController)


#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Player_SettlementPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASettlementPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASettlementPlayerController(ASettlementPlayerController&&); \
	ASettlementPlayerController(const ASettlementPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASettlementPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASettlementPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASettlementPlayerController) \
	NO_API virtual ~ASettlementPlayerController();


#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Player_SettlementPlayerController_h_12_PROLOG
#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Player_SettlementPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Assignment_SettlementSystem_Source_SettlementSystem_Player_SettlementPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Assignment_SettlementSystem_Source_SettlementSystem_Player_SettlementPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SETTLEMENTSYSTEM_API UClass* StaticClass<class ASettlementPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Assignment_SettlementSystem_Source_SettlementSystem_Player_SettlementPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
