// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SettlementSystem/Components/ProductionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProductionComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_UProductionComponent();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_UProductionComponent_NoRegister();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_UResourceComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SettlementSystem();
// End Cross Module References

// Begin Class UProductionComponent
void UProductionComponent::StaticRegisterNativesUProductionComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProductionComponent);
UClass* Z_Construct_UClass_UProductionComponent_NoRegister()
{
	return UProductionComponent::StaticClass();
}
struct Z_Construct_UClass_UProductionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/ProductionComponent.h" },
		{ "ModuleRelativePath", "Components/ProductionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourceComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/ProductionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResourceComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProductionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProductionComponent_Statics::NewProp_ResourceComponent = { "ResourceComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProductionComponent, ResourceComponent), Z_Construct_UClass_UResourceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourceComponent_MetaData), NewProp_ResourceComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProductionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProductionComponent_Statics::NewProp_ResourceComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProductionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UProductionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SettlementSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProductionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProductionComponent_Statics::ClassParams = {
	&UProductionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UProductionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UProductionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProductionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UProductionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProductionComponent()
{
	if (!Z_Registration_Info_UClass_UProductionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProductionComponent.OuterSingleton, Z_Construct_UClass_UProductionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProductionComponent.OuterSingleton;
}
template<> SETTLEMENTSYSTEM_API UClass* StaticClass<UProductionComponent>()
{
	return UProductionComponent::StaticClass();
}
UProductionComponent::UProductionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProductionComponent);
UProductionComponent::~UProductionComponent() {}
// End Class UProductionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_ProductionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProductionComponent, UProductionComponent::StaticClass, TEXT("UProductionComponent"), &Z_Registration_Info_UClass_UProductionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProductionComponent), 2850223631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_ProductionComponent_h_439704632(TEXT("/Script/SettlementSystem"),
	Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_ProductionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_ProductionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
