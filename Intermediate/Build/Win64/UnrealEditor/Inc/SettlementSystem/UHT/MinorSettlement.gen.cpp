// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SettlementSystem/Settlement/MinorSettlement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinorSettlement() {}

// Begin Cross Module References
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_AMinorSettlement();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_AMinorSettlement_NoRegister();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_ASettlementActorBase();
UPackage* Z_Construct_UPackage__Script_SettlementSystem();
// End Cross Module References

// Begin Class AMinorSettlement
void AMinorSettlement::StaticRegisterNativesAMinorSettlement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMinorSettlement);
UClass* Z_Construct_UClass_AMinorSettlement_NoRegister()
{
	return AMinorSettlement::StaticClass();
}
struct Z_Construct_UClass_AMinorSettlement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Settlement/MinorSettlement.h" },
		{ "ModuleRelativePath", "Settlement/MinorSettlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductionIntervalDays_MetaData[] = {
		{ "Category", "MinorSettlement" },
		{ "ModuleRelativePath", "Settlement/MinorSettlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoldPerCycle_MetaData[] = {
		{ "Category", "MinorSettlement" },
		{ "ModuleRelativePath", "Settlement/MinorSettlement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProductionIntervalDays;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GoldPerCycle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinorSettlement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMinorSettlement_Statics::NewProp_ProductionIntervalDays = { "ProductionIntervalDays", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinorSettlement, ProductionIntervalDays), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductionIntervalDays_MetaData), NewProp_ProductionIntervalDays_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMinorSettlement_Statics::NewProp_GoldPerCycle = { "GoldPerCycle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinorSettlement, GoldPerCycle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoldPerCycle_MetaData), NewProp_GoldPerCycle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinorSettlement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinorSettlement_Statics::NewProp_ProductionIntervalDays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinorSettlement_Statics::NewProp_GoldPerCycle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinorSettlement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMinorSettlement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASettlementActorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SettlementSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinorSettlement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinorSettlement_Statics::ClassParams = {
	&AMinorSettlement::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMinorSettlement_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMinorSettlement_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinorSettlement_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinorSettlement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMinorSettlement()
{
	if (!Z_Registration_Info_UClass_AMinorSettlement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinorSettlement.OuterSingleton, Z_Construct_UClass_AMinorSettlement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMinorSettlement.OuterSingleton;
}
template<> SETTLEMENTSYSTEM_API UClass* StaticClass<AMinorSettlement>()
{
	return AMinorSettlement::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMinorSettlement);
AMinorSettlement::~AMinorSettlement() {}
// End Class AMinorSettlement

// Begin Registration
struct Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_MinorSettlement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinorSettlement, AMinorSettlement::StaticClass, TEXT("AMinorSettlement"), &Z_Registration_Info_UClass_AMinorSettlement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinorSettlement), 985953626U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_MinorSettlement_h_2935686146(TEXT("/Script/SettlementSystem"),
	Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_MinorSettlement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_MinorSettlement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
