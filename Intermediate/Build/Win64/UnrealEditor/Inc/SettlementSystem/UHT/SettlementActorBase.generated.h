// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settlement/SettlementActorBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBuildingType : uint8;
enum class EResourceType : uint8;
#ifdef SETTLEMENTSYSTEM_SettlementActorBase_generated_h
#error "SettlementActorBase.generated.h already included, missing '#pragma once' in SettlementActorBase.h"
#endif
#define SETTLEMENTSYSTEM_SettlementActorBase_generated_h

#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_SettlementActorBase_h_16_DELEGATE \
SETTLEMENTSYSTEM_API void FOnBuildingConstructedUI_DelegateWrapper(const FMulticastScriptDelegate& OnBuildingConstructedUI, EBuildingType BuildingType);


#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_SettlementActorBase_h_22_DELEGATE \
SETTLEMENTSYSTEM_API void FOnResourceChangedUI_DelegateWrapper(const FMulticastScriptDelegate& OnResourceChangedUI, EResourceType ResourceType, int32 NewAmount);


#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_SettlementActorBase_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASettlementActorBase(); \
	friend struct Z_Construct_UClass_ASettlementActorBase_Statics; \
public: \
	DECLARE_CLASS(ASettlementActorBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SettlementSystem"), NO_API) \
	DECLARE_SERIALIZER(ASettlementActorBase)


#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_SettlementActorBase_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASettlementActorBase(ASettlementActorBase&&); \
	ASettlementActorBase(const ASettlementActorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASettlementActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASettlementActorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASettlementActorBase) \
	NO_API virtual ~ASettlementActorBase();


#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_SettlementActorBase_h_30_PROLOG
#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_SettlementActorBase_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_SettlementActorBase_h_33_INCLASS_NO_PURE_DECLS \
	FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_SettlementActorBase_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SETTLEMENTSYSTEM_API UClass* StaticClass<class ASettlementActorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_SettlementActorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
