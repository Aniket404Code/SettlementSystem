// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SettlementSystem/Player/SettlementPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettlementPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_ASettlementPlayerController();
SETTLEMENTSYSTEM_API UClass* Z_Construct_UClass_ASettlementPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SettlementSystem();
// End Cross Module References

// Begin Class ASettlementPlayerController
void ASettlementPlayerController::StaticRegisterNativesASettlementPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASettlementPlayerController);
UClass* Z_Construct_UClass_ASettlementPlayerController_NoRegister()
{
	return ASettlementPlayerController::StaticClass();
}
struct Z_Construct_UClass_ASettlementPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/SettlementPlayerController.h" },
		{ "ModuleRelativePath", "Player/SettlementPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASettlementPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASettlementPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SettlementSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASettlementPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASettlementPlayerController_Statics::ClassParams = {
	&ASettlementPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASettlementPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASettlementPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASettlementPlayerController()
{
	if (!Z_Registration_Info_UClass_ASettlementPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASettlementPlayerController.OuterSingleton, Z_Construct_UClass_ASettlementPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASettlementPlayerController.OuterSingleton;
}
template<> SETTLEMENTSYSTEM_API UClass* StaticClass<ASettlementPlayerController>()
{
	return ASettlementPlayerController::StaticClass();
}
ASettlementPlayerController::ASettlementPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASettlementPlayerController);
ASettlementPlayerController::~ASettlementPlayerController() {}
// End Class ASettlementPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Player_SettlementPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASettlementPlayerController, ASettlementPlayerController::StaticClass, TEXT("ASettlementPlayerController"), &Z_Registration_Info_UClass_ASettlementPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASettlementPlayerController), 680889232U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Player_SettlementPlayerController_h_2006004082(TEXT("/Script/SettlementSystem"),
	Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Player_SettlementPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment_SettlementSystem_Source_SettlementSystem_Player_SettlementPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
