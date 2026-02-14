// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettlementSystem_init() {}
	SETTLEMENTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature();
	SETTLEMENTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature();
	SETTLEMENTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SettlementSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SettlementSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_SettlementSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SettlementSystem_OnBuildingConstructedUI__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SettlementSystem_OnResourceChangedUI__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SettlementSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCBFE2A04,
				0x6FD5028D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SettlementSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SettlementSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SettlementSystem(Z_Construct_UPackage__Script_SettlementSystem, TEXT("/Script/SettlementSystem"), Z_Registration_Info_UPackage__Script_SettlementSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCBFE2A04, 0x6FD5028D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
