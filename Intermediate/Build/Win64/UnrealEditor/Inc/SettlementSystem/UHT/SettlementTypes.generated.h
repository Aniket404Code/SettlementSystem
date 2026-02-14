// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/SettlementTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SETTLEMENTSYSTEM_SettlementTypes_generated_h
#error "SettlementTypes.generated.h already included, missing '#pragma once' in SettlementTypes.h"
#endif
#define SETTLEMENTSYSTEM_SettlementTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Assignment_SettlementSystem_Source_SettlementSystem_Types_SettlementTypes_h


#define FOREACH_ENUM_ESETTLEMENTTYPE(op) \
	op(ESettlementType::Major) \
	op(ESettlementType::Minor) 

enum class ESettlementType : uint8;
template<> struct TIsUEnumClass<ESettlementType> { enum { Value = true }; };
template<> SETTLEMENTSYSTEM_API UEnum* StaticEnum<ESettlementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
