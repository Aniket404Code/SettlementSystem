// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settlement/MinorSettlement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SETTLEMENTSYSTEM_MinorSettlement_generated_h
#error "MinorSettlement.generated.h already included, missing '#pragma once' in MinorSettlement.h"
#endif
#define SETTLEMENTSYSTEM_MinorSettlement_generated_h

#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_MinorSettlement_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinorSettlement(); \
	friend struct Z_Construct_UClass_AMinorSettlement_Statics; \
public: \
	DECLARE_CLASS(AMinorSettlement, ASettlementActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SettlementSystem"), NO_API) \
	DECLARE_SERIALIZER(AMinorSettlement)


#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_MinorSettlement_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMinorSettlement(AMinorSettlement&&); \
	AMinorSettlement(const AMinorSettlement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinorSettlement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinorSettlement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMinorSettlement) \
	NO_API virtual ~AMinorSettlement();


#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_MinorSettlement_h_15_PROLOG
#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_MinorSettlement_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_MinorSettlement_h_18_INCLASS_NO_PURE_DECLS \
	FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_MinorSettlement_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SETTLEMENTSYSTEM_API UClass* StaticClass<class AMinorSettlement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_MinorSettlement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
