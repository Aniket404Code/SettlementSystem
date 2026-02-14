// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Buildings/BuildingTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SETTLEMENTSYSTEM_BuildingTypes_generated_h
#error "BuildingTypes.generated.h already included, missing '#pragma once' in BuildingTypes.h"
#endif
#define SETTLEMENTSYSTEM_BuildingTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Assignment_SettlementSystem_Source_SettlementSystem_Buildings_BuildingTypes_h


#define FOREACH_ENUM_EBUILDINGTYPE(op) \
	op(EBuildingType::Blacksmith_I) \
	op(EBuildingType::Blacksmith_II) \
	op(EBuildingType::Farmhouse) 

enum class EBuildingType : uint8;
template<> struct TIsUEnumClass<EBuildingType> { enum { Value = true }; };
template<> SETTLEMENTSYSTEM_API UEnum* StaticEnum<EBuildingType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
