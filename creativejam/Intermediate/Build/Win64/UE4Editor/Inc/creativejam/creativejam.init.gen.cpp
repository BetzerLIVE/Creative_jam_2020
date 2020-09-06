// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecreativejam_init() {}
	CREATIVEJAM_API UFunction* Z_Construct_UDelegateFunction_creativejam_OnBeginFocus__DelegateSignature();
	CREATIVEJAM_API UFunction* Z_Construct_UDelegateFunction_creativejam_OnEndFocus__DelegateSignature();
	CREATIVEJAM_API UFunction* Z_Construct_UDelegateFunction_creativejam_OnPunch__DelegateSignature();
	CREATIVEJAM_API UFunction* Z_Construct_UDelegateFunction_creativejam_OnKick__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_creativejam()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_creativejam_OnBeginFocus__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_creativejam_OnEndFocus__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_creativejam_OnPunch__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_creativejam_OnKick__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/creativejam",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6DF1F814,
				0x859B43E4,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
