// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SettlementSystem/Components/SettlementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettlementComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_USettlementComponent();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_USettlementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SettlementSystem();
// End Cross Module References

// Begin Class USettlementComponent
void USettlementComponent::StaticRegisterNativesUSettlementComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettlementComponent);
UClass* Z_Construct_UClass_USettlementComponent_NoRegister()
{
	return USettlementComponent::StaticClass();
}
struct Z_Construct_UClass_USettlementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/SettlementComponent.h" },
		{ "ModuleRelativePath", "Components/SettlementComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettlementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USettlementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SettlementSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettlementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USettlementComponent_Statics::ClassParams = {
	&USettlementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettlementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USettlementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USettlementComponent()
{
	if (!Z_Registration_Info_UClass_USettlementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettlementComponent.OuterSingleton, Z_Construct_UClass_USettlementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USettlementComponent.OuterSingleton;
}
template<> SETTLEMENTSYSTEM_API UClass* StaticClass<USettlementComponent>()
{
	return USettlementComponent::StaticClass();
}
USettlementComponent::USettlementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USettlementComponent);
USettlementComponent::~USettlementComponent() {}
// End Class USettlementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_SettlementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USettlementComponent, USettlementComponent::StaticClass, TEXT("USettlementComponent"), &Z_Registration_Info_UClass_USettlementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettlementComponent), 3810283594U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_SettlementComponent_h_3676591911(TEXT("/Script/SettlementSystem"),
	Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_SettlementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_SettlementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
