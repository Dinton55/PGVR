// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "InteractablePrototype.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractablePrototype() {}
// Cross Module References
	VRPROJ_API UClass* Z_Construct_UClass_AInteractablePrototype_NoRegister();
	VRPROJ_API UClass* Z_Construct_UClass_AInteractablePrototype();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VRProj();
	VRPROJ_API UFunction* Z_Construct_UFunction_AInteractablePrototype_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AInteractablePrototype::StaticRegisterNativesAInteractablePrototype()
	{
		UClass* Class = AInteractablePrototype::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", (Native)&AInteractablePrototype::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AInteractablePrototype_OnOverlapBegin()
	{
		struct InteractablePrototype_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(InteractablePrototype_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_SweepResult_MetaData, ARRAY_COUNT(NewProp_SweepResult_MetaData)) };
			auto NewProp_bFromSweep_SetBit = [](void* Obj){ ((InteractablePrototype_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InteractablePrototype_eventOnOverlapBegin_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFromSweep_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InteractablePrototype_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(InteractablePrototype_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InteractablePrototype_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(InteractablePrototype_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OverlappedComp_MetaData, ARRAY_COUNT(NewProp_OverlappedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SweepResult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFromSweep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherBodyIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlappedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "InteractablePrototype.h" },
				{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Motion Controllers\")\n       class UMotionControllerComponent* m_RightHand;" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractablePrototype, "OnOverlapBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(InteractablePrototype_eventOnOverlapBegin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInteractablePrototype_NoRegister()
	{
		return AInteractablePrototype::StaticClass();
	}
	UClass* Z_Construct_UClass_AInteractablePrototype()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_VRProj,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AInteractablePrototype_OnOverlapBegin, "OnOverlapBegin" }, // 3306001621
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "InteractablePrototype.h" },
				{ "ModuleRelativePath", "InteractablePrototype.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_IsActive_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "InteractablePrototype.h" },
			};
#endif
			auto NewProp_m_IsActive_SetBit = [](void* Obj){ ((AInteractablePrototype*)Obj)->m_IsActive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_IsActive = { UE4CodeGen_Private::EPropertyClass::Bool, "m_IsActive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AInteractablePrototype), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_m_IsActive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_m_IsActive_MetaData, ARRAY_COUNT(NewProp_m_IsActive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BoxColliderComp_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "InteractablePrototype.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_BoxColliderComp = { UE4CodeGen_Private::EPropertyClass::Object, "m_BoxColliderComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AInteractablePrototype, m_BoxColliderComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_m_BoxColliderComp_MetaData, ARRAY_COUNT(NewProp_m_BoxColliderComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_LightComponent_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "InteractablePrototype.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_LightComponent = { UE4CodeGen_Private::EPropertyClass::Object, "m_LightComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AInteractablePrototype, m_LightComponent), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(NewProp_m_LightComponent_MetaData, ARRAY_COUNT(NewProp_m_LightComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_StaticMeshComp_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "InteractablePrototype.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_StaticMeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "m_StaticMeshComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AInteractablePrototype, m_StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_m_StaticMeshComp_MetaData, ARRAY_COUNT(NewProp_m_StaticMeshComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_IsActive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_BoxColliderComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_LightComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_StaticMeshComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AInteractablePrototype>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AInteractablePrototype::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractablePrototype, 2318770100);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractablePrototype(Z_Construct_UClass_AInteractablePrototype, &AInteractablePrototype::StaticClass, TEXT("/Script/VRProj"), TEXT("AInteractablePrototype"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractablePrototype);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
