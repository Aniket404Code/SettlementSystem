// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/BuildingManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBuildingType : uint8;
#ifdef SETTLEMENTSYSTEM_BuildingManagerComponent_generated_h
#error "BuildingManagerComponent.generated.h already included, missing '#pragma once' in BuildingManagerComponent.h"
#endif
#define SETTLEMENTSYSTEM_BuildingManagerComponent_generated_h

#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_BuildingManagerComponent_h_17_DELEGATE \
SETTLEMENTSYSTEM_API void FOnBuildingConstructed_DelegateWrapper(const FMulticastScriptDelegate& OnBuildingConstructed, EBuildingType BuildingType);


#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_BuildingManagerComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuildingManagerComponent(); \
	friend struct Z_Construct_UClass_UBuildingManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UBuildingManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SettlementSystem"), NO_API) \
	DECLARE_SERIALIZER(UBuildingManagerComponent)


#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_BuildingManagerComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuildingManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBuildingManagerComponent(UBuildingManagerComponent&&); \
	UBuildingManagerComponent(const UBuildingManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuildingManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildingManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuildingManagerComponent) \
	NO_API virtual ~UBuildingManagerComponent();


#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_BuildingManagerComponent_h_20_PROLOG
#define FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_BuildingManagerComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_BuildingManagerComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_BuildingManagerComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SETTLEMENTSYSTEM_API UClass* StaticClass<class UBuildingManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_BuildingManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
