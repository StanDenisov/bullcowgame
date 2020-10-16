// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"


void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Hello Stasicus!"));
    PrintLine(TEXT("Press enter to clear screeen...."));
    SetupGame();
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    PrintLine(TEXT("lifes %i"), this->_hp);
    this->_hiddenWord = TEXT("cake");
    this->_IsPlayerWin(Input);   
}

void UBullCowCartridge::SetupGame() {
    this->_hp = 5;
}


void UBullCowCartridge::_IsPlayerLoss() {
    if (this->_hp == 0) {
        PrintLine("You Loss 0hp");
    }
    else PrintLine("try again");
}

void UBullCowCartridge::_IsPlayerWin(const FString& word) {
    if (this->_hiddenWord == word) {
            PrintLine(TEXT("ok you win))"));
    }
    else {
        this->_hp--;
        this->_IsPlayerLoss();
    }
}
