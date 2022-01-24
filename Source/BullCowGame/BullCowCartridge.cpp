// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Welcome to Bulls & Cows!"));
    PrintLine(TEXT("Type something and then press enter:"));
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    FString HiddenWord = TEXT("cat");
    ClearScreen();
    if(Input == HiddenWord){
        PrintLine(TEXT("You Win!"));
    }else{
        PrintLine(TEXT("You Lose Sucker!"));
    }
}