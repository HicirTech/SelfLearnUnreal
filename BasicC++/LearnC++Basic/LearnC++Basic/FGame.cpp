#include "stdafx.h"
#include <iostream>
#include "FGame.h"
#include <random>;

using FText = std::string;
using int32 = int;
FGame::FGame()
{
	this->answer = "answer";
	this->MyMaxTry = 5;
	this->isWin = false;
	this->currenyTry = 1;
}

FGame::FGame(FText word,int32 maxTry)
{
	this->answer = word;
	this->MyMaxTry = maxTry;
	this->isWin = false;
	this->currenyTry = 1;
}

void FGame::playGame()
{
	do
	{
		this->Game();
		this->Reset();
	} while (this->AskToPlayAgain());
}

void FGame::Reset()
{
	this->currenyTry = 1;
	this->isWin = false;
}
void FGame::Game()
{
	printWelcome();
	std::cout << "Max turn is " << this->GetMaxTry() <<
		std::endl;

	while (this->GetCurrentTry() <= this->GetMaxTry())
	{
		std::cout << "Your are currently at turn "
			<< this->GetCurrentTry() << std::endl;

		FText userInput;
		userInput = getGuest();
		//this->Chcker(userInput);
		std::cout << "You are ";
		if (checkIsMatch(userInput))
		{
			std::cout << "right " << std::endl
				<< "you win the game" << std::endl;
			this->isWin = true;
			break;
		}
		else
		{
			std::cout << "wrong " << std::endl;
		}
		this->currenyTry++;
	}
}

bcCount FGame::Chcker(FText text)
{
	bcCount counter;
	for (int32 i = 0; i != text.length()&&i!=this->answer.length(); i++)
	{
		if (text.at(i) == this->answer.at(i))
		{
			counter.bulls++;
			counter.cows++;
		}
	}
	return counter;
}

FText FGame::getGuest() 
{
	FText userInput;
	std::cout << "your input is : ";
	std::getline(std::cin, userInput);
	return userInput;
}
bool FGame::checkIsMatch(FText input)
{
	return this->answer.compare(input)==0;
}
bool FGame::AskToPlayAgain() const
{
	std::cout << "Play again? [y/n]";
	FText again;
	std::getline(std::cin, again);
	return again.compare("y")==0;
}

void FGame::printWelcome() 
{
	std::cout << "Welcome tp guest word " << std::endl;
	std::cout << "Word length is " << this->answer.length() <<
		" hint : ";
	FText copyOfCode = this->answer;
	std::random_shuffle(copyOfCode.begin(), copyOfCode.end());
	std::cout << copyOfCode << std::endl;
}


bool FGame::IsWon() const
{
	return this->isWin;
}


int32 FGame::GetMaxTry() const
{
	return this->MyMaxTry;
}

int32 FGame::GetCurrentTry()const
{
	return this->currenyTry;
}
