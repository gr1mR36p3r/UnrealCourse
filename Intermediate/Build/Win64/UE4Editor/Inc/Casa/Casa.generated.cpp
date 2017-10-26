// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Casa.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Casa() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();

	CASA_API class UClass* Z_Construct_UClass_UcmpPositionReporter_NoRegister();
	CASA_API class UClass* Z_Construct_UClass_UcmpPositionReporter();
	CASA_API class UPackage* Z_Construct_UPackage__Script_Casa();
	void UcmpPositionReporter::StaticRegisterNativesUcmpPositionReporter()
	{
	}
	UClass* Z_Construct_UClass_UcmpPositionReporter_NoRegister()
	{
		return UcmpPositionReporter::StaticClass();
	}
	UClass* Z_Construct_UClass_UcmpPositionReporter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_Casa();
			OuterClass = UcmpPositionReporter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UcmpPositionReporter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("cmpPositionReporter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("cmpPositionReporter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UcmpPositionReporter, 77054385);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UcmpPositionReporter(Z_Construct_UClass_UcmpPositionReporter, &UcmpPositionReporter::StaticClass, TEXT("/Script/Casa"), TEXT("UcmpPositionReporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UcmpPositionReporter);
	UPackage* Z_Construct_UPackage__Script_Casa()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Casa")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x9092EDA5;
			Guid.B = 0x2140462D;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
