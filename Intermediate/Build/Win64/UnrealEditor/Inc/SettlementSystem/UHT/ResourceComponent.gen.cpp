// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SettlementSystem/Components/ResourceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResourceComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_ASettlementActorBase_NoRegister();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_UResourceComponent();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_UResourceComponent_NoRegister();
SETTLEMENTSYSTEM_API UEnum* Z_Construct_UEnum_SettlementSystem_EResourceType();
UPackage* Z_Construct_UPackage__Script_SettlementSystem();
// End Cross Module References

// Begin Class UResourceComponent
void UResourceComponent::StaticRegisterNativesUResourceComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResourceComponent);
UClass* Z_Construct_UClass_UResourceComponent_NoRegister()
{
	return UResourceComponent::StaticClass();
}
struct Z_Construct_UClass_UResourceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/ResourceComponent.h" },
		{ "ModuleRelativePath", "Components/ResourceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resources_MetaData[] = {
		{ "ModuleRelativePath", "Components/ResourceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettlementOwner_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to settlement owner\n" },
#endif
		{ "ModuleRelativePath", "Components/ResourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to settlement owner" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Resources_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Resources_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Resources_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Resources;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettlementOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResourceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UResourceComponent_Statics::NewProp_Resources_ValueProp = { "Resources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UResourceComponent_Statics::NewProp_Resources_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UResourceComponent_Statics::NewProp_Resources_Key_KeyProp = { "Resources_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SettlementSystem_EResourceType, METADATA_PARAMS(0, nullptr) }; // 659145580
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UResourceComponent_Statics::NewProp_Resources = { "Resources", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResourceComponent, Resources), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resources_MetaData), NewProp_Resources_MetaData) }; // 659145580
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UResourceComponent_Statics::NewProp_SettlementOwner = { "SettlementOwner", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResourceComponent, SettlementOwner), Z_Construct_UClass_ASettlementActorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettlementOwner_MetaData), NewProp_SettlementOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResourceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceComponent_Statics::NewProp_Resources_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceComponent_Statics::NewProp_Resources_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceComponent_Statics::NewProp_Resources_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceComponent_Statics::NewProp_Resources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceComponent_Statics::NewProp_SettlementOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResourceComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UResourceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SettlementSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResourceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UResourceComponent_Statics::ClassParams = {
	&UResourceComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UResourceComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UResourceComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UResourceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UResourceComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UResourceComponent()
{
	if (!Z_Registration_Info_UClass_UResourceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResourceComponent.OuterSingleton, Z_Construct_UClass_UResourceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UResourceComponent.OuterSingleton;
}
template<> SETTLEMENTSYSTEM_API UClass* StaticClass<UResourceComponent>()
{
	return UResourceComponent::StaticClass();
}
UResourceComponent::UResourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UResourceComponent);
UResourceComponent::~UResourceComponent() {}
// End Class UResourceComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_ResourceComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UResourceComponent, UResourceComponent::StaticClass, TEXT("UResourceComponent"), &Z_Registration_Info_UClass_UResourceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResourceComponent), 544711098U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_ResourceComponent_h_2070529042(TEXT("/Script/SettlementSystem"),
	Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_ResourceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Components_ResourceComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
