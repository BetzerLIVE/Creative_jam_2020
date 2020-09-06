// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "creativejam/DestructibleWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestructibleWidget() {}
// Cross Module References
	CREATIVEJAM_API UClass* Z_Construct_UClass_UDestructibleWidget_NoRegister();
	CREATIVEJAM_API UClass* Z_Construct_UClass_UDestructibleWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_creativejam();
	CREATIVEJAM_API UClass* Z_Construct_UClass_UDestructibleComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDestructibleWidget::execUpdateDestructibleWidget)
	{
		P_GET_OBJECT(UDestructibleComponent,Z_Param_p_DestructibleComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDestructibleWidget(Z_Param_p_DestructibleComponent);
		P_NATIVE_END;
	}
	static FName NAME_UDestructibleWidget_OnUpdateDestructibleWidget = FName(TEXT("OnUpdateDestructibleWidget"));
	void UDestructibleWidget::OnUpdateDestructibleWidget()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDestructibleWidget_OnUpdateDestructibleWidget),NULL);
	}
	void UDestructibleWidget::StaticRegisterNativesUDestructibleWidget()
	{
		UClass* Class = UDestructibleWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateDestructibleWidget", &UDestructibleWidget::execUpdateDestructibleWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDestructibleWidget_OnUpdateDestructibleWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDestructibleWidget_OnUpdateDestructibleWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DestructibleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDestructibleWidget_OnUpdateDestructibleWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDestructibleWidget, nullptr, "OnUpdateDestructibleWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDestructibleWidget_OnUpdateDestructibleWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestructibleWidget_OnUpdateDestructibleWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDestructibleWidget_OnUpdateDestructibleWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDestructibleWidget_OnUpdateDestructibleWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDestructibleWidget_UpdateDestructibleWidget_Statics
	{
		struct DestructibleWidget_eventUpdateDestructibleWidget_Parms
		{
			UDestructibleComponent* p_DestructibleComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_DestructibleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p_DestructibleComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDestructibleWidget_UpdateDestructibleWidget_Statics::NewProp_p_DestructibleComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDestructibleWidget_UpdateDestructibleWidget_Statics::NewProp_p_DestructibleComponent = { "p_DestructibleComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DestructibleWidget_eventUpdateDestructibleWidget_Parms, p_DestructibleComponent), Z_Construct_UClass_UDestructibleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDestructibleWidget_UpdateDestructibleWidget_Statics::NewProp_p_DestructibleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestructibleWidget_UpdateDestructibleWidget_Statics::NewProp_p_DestructibleComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDestructibleWidget_UpdateDestructibleWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestructibleWidget_UpdateDestructibleWidget_Statics::NewProp_p_DestructibleComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDestructibleWidget_UpdateDestructibleWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destructible" },
		{ "ModuleRelativePath", "DestructibleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDestructibleWidget_UpdateDestructibleWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDestructibleWidget, nullptr, "UpdateDestructibleWidget", nullptr, nullptr, sizeof(DestructibleWidget_eventUpdateDestructibleWidget_Parms), Z_Construct_UFunction_UDestructibleWidget_UpdateDestructibleWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestructibleWidget_UpdateDestructibleWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDestructibleWidget_UpdateDestructibleWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestructibleWidget_UpdateDestructibleWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDestructibleWidget_UpdateDestructibleWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDestructibleWidget_UpdateDestructibleWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDestructibleWidget_NoRegister()
	{
		return UDestructibleWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDestructibleWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningDestrucctibleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningDestrucctibleComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDestructibleWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_creativejam,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDestructibleWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDestructibleWidget_OnUpdateDestructibleWidget, "OnUpdateDestructibleWidget" }, // 1243348750
		{ &Z_Construct_UFunction_UDestructibleWidget_UpdateDestructibleWidget, "UpdateDestructibleWidget" }, // 2960069795
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DestructibleWidget.h" },
		{ "ModuleRelativePath", "DestructibleWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleWidget_Statics::NewProp_OwningDestrucctibleComponent_MetaData[] = {
		{ "Category", "Destructible" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "DestructibleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDestructibleWidget_Statics::NewProp_OwningDestrucctibleComponent = { "OwningDestrucctibleComponent", nullptr, (EPropertyFlags)0x001100000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDestructibleWidget, OwningDestrucctibleComponent), Z_Construct_UClass_UDestructibleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDestructibleWidget_Statics::NewProp_OwningDestrucctibleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleWidget_Statics::NewProp_OwningDestrucctibleComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDestructibleWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleWidget_Statics::NewProp_OwningDestrucctibleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDestructibleWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDestructibleWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDestructibleWidget_Statics::ClassParams = {
		&UDestructibleWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDestructibleWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDestructibleWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDestructibleWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDestructibleWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDestructibleWidget, 2134676749);
	template<> CREATIVEJAM_API UClass* StaticClass<UDestructibleWidget>()
	{
		return UDestructibleWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDestructibleWidget(Z_Construct_UClass_UDestructibleWidget, &UDestructibleWidget::StaticClass, TEXT("/Script/creativejam"), TEXT("UDestructibleWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDestructibleWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
