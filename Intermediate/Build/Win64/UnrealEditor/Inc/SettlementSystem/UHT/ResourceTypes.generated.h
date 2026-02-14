// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/ResourceTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SETTLEMENTSYSTEM_ResourceTypes_generated_h
#error "ResourceTypes.generated.h already included, missing '#pragma once' in ResourceTypes.h"
#endif
#define SETTLEMENTSYSTEM_ResourceTypes_generated_h

#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Types_ResourceTypes_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResourceAmount_Statics; \
	SETTLEMENTSYSTEM_API static class UScriptStruct* StaticStruct();


template<> SETTLEMENTSYSTEM_API UScriptStruct* StaticStruct<struct FResourceAmount>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Assignment_SettlementSystem_Source_SettlementSystem_Types_ResourceTypes_h


#define FOREACH_ENUM_ERESOURCETYPE(op) \
	op(EResourceType::Wood) \
	op(EResourceType::Stone) \
	op(EResourceType::Gold) \
	op(EResourceType::Food) \
	op(EResourceType::Weaponry) 

enum class EResourceType : uint8;
template<> struct TIsUEnumClass<EResourceType> { enum { Value = true }; };
template<> SETTLEMENTSYSTEM_API UEnum* StaticEnum<EResourceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
