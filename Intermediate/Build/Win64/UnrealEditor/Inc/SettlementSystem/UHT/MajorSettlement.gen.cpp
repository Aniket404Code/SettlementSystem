// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SettlementSystem/Settlement/MajorSettlement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMajorSettlement() {}

// Begin Cross Module References
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_AMajorSettlement();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_AMajorSettlement_NoRegister();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_ASettlementActorBase();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_UBuildingManagerComponent_NoRegister();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_UProductionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SettlementSystem();
// End Cross Module References

// Begin Class AMajorSettlement
void AMajorSettlement::StaticRegisterNativesAMajorSettlement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMajorSettlement);
UClass* Z_Construct_UClass_AMajorSettlement_NoRegister()
{
	return AMajorSettlement::StaticClass();
}
struct Z_Construct_UClass_AMajorSettlement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Settlement/MajorSettlement.h" },
		{ "ModuleRelativePath", "Settlement/MajorSettlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingManager_MetaData[] = {
		{ "Category", "MajorSettlement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Settlement/MajorSettlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Production_MetaData[] = {
		{ "Category", "MajorSettlement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Settlement/MajorSettlement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Production;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMajorSettlement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMajorSettlement_Statics::NewProp_BuildingManager = { "BuildingManager", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMajorSettlement, BuildingManager), Z_Construct_UClass_UBuildingManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingManager_MetaData), NewProp_BuildingManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMajorSettlement_Statics::NewProp_Production = { "Production", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMajorSettlement, Production), Z_Construct_UClass_UProductionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Production_MetaData), NewProp_Production_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMajorSettlement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMajorSettlement_Statics::NewProp_BuildingManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMajorSettlement_Statics::NewProp_Production,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMajorSettlement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMajorSettlement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASettlementActorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SettlementSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMajorSettlement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMajorSettlement_Statics::ClassParams = {
	&AMajorSettlement::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMajorSettlement_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMajorSettlement_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMajorSettlement_Statics::Class_MetaDataParams), Z_Construct_UClass_AMajorSettlement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMajorSettlement()
{
	if (!Z_Registration_Info_UClass_AMajorSettlement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMajorSettlement.OuterSingleton, Z_Construct_UClass_AMajorSettlement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMajorSettlement.OuterSingleton;
}
template<> SETTLEMENTSYSTEM_API UClass* StaticClass<AMajorSettlement>()
{
	return AMajorSettlement::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMajorSettlement);
AMajorSettlement::~AMajorSettlement() {}
// End Class AMajorSettlement

// Begin Registration
struct Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_MajorSettlement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMajorSettlement, AMajorSettlement::StaticClass, TEXT("AMajorSettlement"), &Z_Registration_Info_UClass_AMajorSettlement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMajorSettlement), 1050272088U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_MajorSettlement_h_465461274(TEXT("/Script/SettlementSystem"),
	Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_MajorSettlement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Settlement_MajorSettlement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
