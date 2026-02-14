// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ResourceComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SETTLEMENTSYSTEM_ResourceComponent_generated_h
#error "ResourceComponent.generated.h already included, missing '#pragma once' in ResourceComponent.h"
#endif
#define SETTLEMENTSYSTEM_ResourceComponent_generated_h

#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_ResourceComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResourceComponent(); \
	friend struct Z_Construct_UClass_UResourceComponent_Statics; \
public: \
	DECLARE_CLASS(UResourceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SettlementSystem"), NO_API) \
	DECLARE_SERIALIZER(UResourceComponent)


#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_ResourceComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResourceComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UResourceComponent(UResourceComponent&&); \
	UResourceComponent(const UResourceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResourceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResourceComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResourceComponent) \
	NO_API virtual ~UResourceComponent();


#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_ResourceComponent_h_16_PROLOG
#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_ResourceComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_ResourceComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_ResourceComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SETTLEMENTSYSTEM_API UClass* StaticClass<class UResourceComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_ResourceComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
