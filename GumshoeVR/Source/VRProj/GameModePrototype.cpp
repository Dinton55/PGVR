// Fill out your copyright notice in the Description page of Project Settings.

#include "GameModePrototype.h"
#include "VRCharacterPrototype.h"

AGameModePrototype::AGameModePrototype(const FObjectInitializer & ObjectInitializer)
	: Super(ObjectInitializer)
{
	DefaultPawnClass = AVRCharacterPrototype::StaticClass();
}
