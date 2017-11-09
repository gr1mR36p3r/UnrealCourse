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
	ENGINE_API class UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();

	CASA_API class UClass* Z_Construct_UClass_UcmpPositionReporter_NoRegister();
	CASA_API class UClass* Z_Construct_UClass_UcmpPositionReporter();
	CASA_API class UClass* Z_Construct_UClass_UOpenDoor_NoRegister();
	CASA_API class UClass* Z_Construct_UClass_UOpenDoor();
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
	void UOpenDoor::StaticRegisterNativesUOpenDoor()
	{
	}
	UClass* Z_Construct_UClass_UOpenDoor_NoRegister()
	{
		return UOpenDoor::StaticClass();
	}
	UClass* Z_Construct_UClass_UOpenDoor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_Casa();
			OuterClass = UOpenDoor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_PressurePlate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PressurePlate"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PressurePlate, UOpenDoor), 0x0040000000000001, Z_Construct_UClass_ATriggerVolume_NoRegister());
				UProperty* NewProp_ClosedAngle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ClosedAngle"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ClosedAngle, UOpenDoor), 0x0040000000000001);
				UProperty* NewProp_OpenAngle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OpenAngle"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(OpenAngle, UOpenDoor), 0x0040000000020001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UOpenDoor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(NewProp_PressurePlate, TEXT("Category"), TEXT("OpenDoor"));
				MetaData->SetValue(NewProp_PressurePlate, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(NewProp_ClosedAngle, TEXT("Category"), TEXT("OpenDoor"));
				MetaData->SetValue(NewProp_ClosedAngle, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(NewProp_OpenAngle, TEXT("Category"), TEXT("OpenDoor"));
				MetaData->SetValue(NewProp_OpenAngle, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenDoor, 3400838984);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenDoor(Z_Construct_UClass_UOpenDoor, &UOpenDoor::StaticClass, TEXT("/Script/Casa"), TEXT("UOpenDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenDoor);
	UPackage* Z_Construct_UPackage__Script_Casa()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Casa")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x52C9D0E5;
			Guid.B = 0x5A421FC9;
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
