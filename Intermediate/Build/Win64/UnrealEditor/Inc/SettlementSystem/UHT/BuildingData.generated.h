// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Buildings/BuildingData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SETTLEMENTSYSTEM_BuildingData_generated_h
#error "BuildingData.generated.h already included, missing '#pragma once' in BuildingData.h"
#endif
#define SETTLEMENTSYSTEM_BuildingData_generated_h

#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Buildings_BuildingData_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuildingData(); \
	friend struct Z_Construct_UClass_UBuildingData_Statics; \
public: \
	DECLARE_CLASS(UBuildingData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SettlementSystem"), NO_API) \
	DECLARE_SERIALIZER(UBuildingData)


#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Buildings_BuildingData_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuildingData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBuildingData(UBuildingData&&); \
	UBuildingData(const UBuildingData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuildingData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildingData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuildingData) \
	NO_API virtual ~UBuildingData();


#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Buildings_BuildingData_h_13_PROLOG
#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Buildings_BuildingData_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Assignment_SettlementSystem_Source_SettlementSystem_Buildings_BuildingData_h_16_INCLASS_NO_PURE_DECLS \
	FID_Assignment_SettlementSystem_Source_SettlementSystem_Buildings_BuildingData_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SETTLEMENTSYSTEM_API UClass* StaticClass<class UBuildingData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Assignment_SettlementSystem_Source_SettlementSystem_Buildings_BuildingData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
