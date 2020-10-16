// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Console/Cartridge.h"
#include "BullCowCartridge.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BULLCOWGAME_API UBullCowCartridge : public UCartridge
{
	GENERATED_BODY()

	public:
	virtual void BeginPlay() override;
	virtual void OnInput(const FString& Input) override;
	void SetupGame();
	// Your declarations go below!
	private:
	FString _hiddenWord;
	const FString _hiddenWords[4]{"hello","cakce", "test", "make"};
	int _hp;
	void _IsPlayerLoss();
	void _IsPlayerWin(const FString& word);
	void _ChoseHiddenWord();	
};
