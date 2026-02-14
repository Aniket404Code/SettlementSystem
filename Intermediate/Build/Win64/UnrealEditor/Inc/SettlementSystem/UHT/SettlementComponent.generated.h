// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SettlementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SETTLEMENTSYSTEM_SettlementComponent_generated_h
#error "SettlementComponent.generated.h already included, missing '#pragma once' in SettlementComponent.h"
#endif
#define SETTLEMENTSYSTEM_SettlementComponent_generated_h

#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_SettlementComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSettlementComponent(); \
	friend struct Z_Construct_UClass_USettlementComponent_Statics; \
public: \
	DECLARE_CLASS(USettlementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SettlementSystem"), NO_API) \
	DECLARE_SERIALIZER(USettlementComponent)


#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_SettlementComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettlementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USettlementComponent(USettlementComponent&&); \
	USettlementComponent(const USettlementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettlementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettlementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettlementComponent) \
	NO_API virtual ~USettlementComponent();


#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_SettlementComponent_h_11_PROLOG
#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_SettlementComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_SettlementComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_SettlementComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SETTLEMENTSYSTEM_API UClass* StaticClass<class USettlementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_SettlementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
